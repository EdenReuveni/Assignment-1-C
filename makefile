all: mymathd mymaths mains maind 

mymathd:libmyMath.so
mymaths:libmyMath.a

mains: main.o mymaths
	gcc -Wall -g -o mains main.o libmyMath.a

maind: main.c mymathd
	gcc -Wall -g -o maind main.o ./libmyMath.so
	

libmyMath.a: power.o basicMath.o
	ar rcs -o libmyMath.a power.o basicMath.o  

libmyMath.so: power.o basicMath.o
	gcc -shared power.o basicMath.o -o libmyMath.so

power.o:power.c myMath.h
	gcc -Wall -g -c  power.c
basicMath.o:basicMath.c myMath.h
	gcc -Wall -g -c basicMath.c
main.o:myMath.h main.c
	gcc -Wall -g -c main.c

clean:
	rm -f *.o *.a *.so mains maind



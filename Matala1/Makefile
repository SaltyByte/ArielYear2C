# -*- MakeFile -*-

<<<<<<< HEAD
OBJECTS = Power.o basicMath.o
=======
OBJECTS = power.o basicMath.o
>>>>>>> fbba13d (second commit, power changes)
CC = gcc
AR = ar
CFLAGS = -Wall


mymaths: libmyMath.a
mymathd: libmyMath.so
all: mains maind mymathd mymaths


mains: main.o libmyMath.a
	$(CC) $(CFLAGS) -o mains main.o libmyMath.a
	
maind: main.o libmyMath.so
	$(CC) $(CFLAGS) -o maind main.o ./libmyMath.so

main.o: main.c myMath.h
	$(CC) $(CFLAGS) -c main.c

<<<<<<< HEAD
Power.o: Power.c myMath.h
	$(CC) $(CFLAGS) -c Power.c
=======
power.o: power.c myMath.h
	$(CC) $(CFLAGS) -c power.c
>>>>>>> fbba13d (second commit, power changes)

basicMath.o: basicMath.c myMath.h
	$(CC) $(CFLAGS) -c basicMath.c

libmyMath.a: $(OBJECTS)
	$(AR) -rcs libmyMath.a $(OBJECTS)

libmyMath.so: $(OBJECTS)
	$(CC) -fPIC -shared -o libmyMath.so $(OBJECTS)

.PHONY: clean all

clean:
<<<<<<< HEAD
	rm -f *.o *.a *.so mains maind
=======
	rm -f *.o *.a *.so mains maind
>>>>>>> fbba13d (second commit, power changes)

# -*- MakeFile -*-

OBJECTS = power.o basicMath.o
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

power.o: power.c myMath.h
	$(CC) $(CFLAGS) -c power.c

basicMath.o: basicMath.c myMath.h
	$(CC) $(CFLAGS) -c basicMath.c

libmyMath.a: $(OBJECTS)
	$(AR) -rcs libmyMath.a $(OBJECTS)

libmyMath.so: $(OBJECTS)
	$(CC) -fPIC -shared -o libmyMath.so $(OBJECTS)

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maind

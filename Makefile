CC=gcc
AR=ar
OBJECTS_MAIN = main.o
OBJECTS_LIB = basicMath.o power.o
FLAGS= -Wall -g

all: libmyMath.a libmyMath.so mains maind
mains: $(OBJECTS_MAIN) libmyMath.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libmyMath.a
maind: $(OBJECTS_MAIN) libmyMath.so
	$(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) ./libmyMath.so
mymaths: libmyMath.a
mymathd: libmyMath.so
libmyMath.a: $(OBJECTS_LIB)
	$(AR) -rcs -o libmyMath.a $(OBJECTS_LIB)
libmyMath.so: $(OBJECTS_LIB)
	$(CC) -shared -o libmyMath.so $(OBJECTS_LIB)
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c
main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c
.PHONY: clean all
clean:
	rm -f *.o *.a *.so mains maind
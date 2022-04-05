CFLAGS = -pthread
LFLAGS = -lrt -lX11 -lGLU -lGL -lm #-lXrandr

all: sjue.o amilin.o bship

amilin.o: amilin.cpp
	g++ -c amilin.cpp -Wall
	
sjue.o: sjue.cpp
	g++ -c sjue.cpp -Wall

sledwell.o : sledwell.cpp
	g++ -c sledwell.cpp -Wall
	
bship: bship.o log.o
	g++ bship.o log.o sjue.o libggfonts.a $(LFLAGS) -o bship

bship.o: bship.cpp
	g++ -c bship.cpp

log.o: log.cpp
	g++ -c log.cpp

clean:
	rm -f bship
	rm -f *.o

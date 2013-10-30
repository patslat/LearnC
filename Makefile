CFLAGS=-Wall -g

all:
	make hello_world
	make ex3
	make ex4
	make ex5

clean:
	rm -f hello_world
	rm -f ex3
	rm -f ex4
	rm -f ex5

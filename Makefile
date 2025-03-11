all: clean build

clean: 
	rm -f bin/app

build:
	gcc main.c -o bin/app

run:
	bin/app
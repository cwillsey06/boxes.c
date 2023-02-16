all: build
CC = cc

build:
	${CC} boxes.c -o boxes


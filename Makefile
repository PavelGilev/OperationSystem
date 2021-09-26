#Makefile
newfile:
	gcc -c main.c;gcc main.o -o result;
	rm -f main.o;


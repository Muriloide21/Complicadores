
all: bison flex gcc
	@echo "Done."

bison: parser.y
	bison -Wall -v --defines=parser.h  -o parser.c parser.y 

flex: scanner.l
	flex scanner.l

gcc: scanner.c parser.c
	gcc -Wall scanner.c parser.c -ly -DYYDEBUG=1

clean:
	@rm -f *.o *.output scanner.c parser.h parser.c a.out

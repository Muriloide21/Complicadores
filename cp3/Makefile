
all: bison flex gcc
	@echo "Done."

bison: parser.y
	bison -v parser.y

flex: scanner.l
	flex scanner.l

gcc: scanner.c parser.c tables.c types.c ast.c
	gcc -g -Wall scanner.c parser.c tables.c types.c ast.c

clean:
	@rm -f *.o *.output scanner.c parser.h parser.c a.out

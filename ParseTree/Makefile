MiniJ2c:	main.o MiniJ_tree.o MiniJ_parse.o MiniJ_lex.o
	gcc -o MiniJ2c.out main.o MiniJ_tree.o MiniJ_parse.o MiniJ_lex.o

MiniJ_parse.h:	MiniJ_parse.y MiniJ_tree.h
	bison -d -o MiniJ_parse.c MiniJ_parse.y

MiniJ_parse.c:	MiniJ_parse.y MiniJ_tree.h
	bison -d -o MiniJ_parse.c MiniJ_parse.y

MiniJ_parse.o:	MiniJ_parse.c MiniJ_lex.h MiniJ_parse.h MiniJ_tree.h
	gcc -c -o MiniJ_parse.o MiniJ_parse.c

MiniJ_lex.c:	MiniJ_lex.l
	flex -oMiniJ_lex.c MiniJ_lex.l

MiniJ_lex.o:	MiniJ_lex.c MiniJ_lex.h MiniJ_parse.h
	gcc -c -o MiniJ_lex.o MiniJ_lex.c

main.o:	main.c MiniJ_lex.h MiniJ_parse.h MiniJ_tree.h
	gcc -c -o main.o main.c

MiniJ_tree.o:	MiniJ_tree.c MiniJ_lex.h MiniJ_parse.h MiniJ_tree.h
	gcc -c -o MiniJ_tree.o MiniJ_tree.c

clear:
	rm MiniJ2c main.o MiniJ_tree.o MiniJ_parse.o MiniJ_lex.o MiniJ_parse.c MiniJ_parse.h MiniJ_lex.c test1.c test1


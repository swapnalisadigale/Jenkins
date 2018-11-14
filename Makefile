all: exec1 exec2

exec1: hello.c
	gcc hello.c -o exec1
	
exec2: code1.c
	gcc code1.c -o exec2

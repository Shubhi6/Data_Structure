

OBJ:= $(patsubst %.c, %.o,$(wildcard *.c))
//CFLAGS:=-g -Wall
SList.out :$(OBJ)
	gcc -o $@ $^
clean:
	rm *.o *.out

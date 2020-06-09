OBJ:= $(patsubst %.c, %.o,$(wildcard *.c))
DList.out :$(OBJ)
	gcc -o $@ $^
clean:
	rm *.o *.out

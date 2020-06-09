OBJ:= $(patsubst %.c, %.o,$(wildcard *.c))
SList.out :$(OBJ)
	gcc -o $@ $^
clean:
	rm *.o *.out

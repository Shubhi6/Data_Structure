OBJ:= $(patsubst %.c, %.o,$(wildcard *.c))
DList1.out :$(OBJ)
	gcc -o $@ $^
clean:
	rm *.o *.out

all: 3_rmk.o 3_rmk_func.o 3_rmk_func_proizv.o 3_rmk_len.o
	gcc 3_rmk.o 3_rmk_func.o 3_rmk_func_proizv.o 3_rmk_len.o -o 3_rmk && del *.o

3_rmk.o: 3_rmk.c
	gcc -c 3_rmk.c

3_rmk_func.o: 3_rmk_func.c
	gcc -c 3_rmk_func.c

3_rmk_func_proizv.o: 3_rmk_func_proizv.c
	gcc -c 3_rmk_func_proizv.c

3_rmk_len.o: 3_rmk_len.c
	gcc -c 3_rmk_len.c
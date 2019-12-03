(gdb) break find_add.c:8
Breakpoint 1 at 0x69f: file find_add.c, line 8.

(gdb) break find_add.c:17
Breakpoint 2 at 0x6e7: file find_add.c, line 17.

(gdb) run
Starting program: /mnt/c/Users/seals/Documents/2019_学習/security/C_code/find_add

Breakpoint 1, add (a=1) at find_add.c:8
8           return b;
(gdb)
(gdb) run
Breakpoint 1, add (a=1) at find_add.c:8
8           return b;
(gdb) print &my_global_var 
$1 = (int *) 0x8201010 <my_global_var> //グローバル変数




(gdb) print &b
$2 = (int *) 0x7ffffffedf7c //スタック領域
(gdb) continue
Continuing.

Breakpoint 2, main () at find_add.c:17
17          printf("ptr[0] = %d,ptr[1] = %d, ptr[2] = %d\n",ptr[0],ptr[1],ptr[2]);
(gdb) print ptr
$3 = (int *) 0x8402260

(gdb) print &ptr[0]
$4 = (int *) 0x8402260

(gdb) print &ptr[1]
$5 = (int *) 0x8402264

(gdb) print &ptr[2]gn
$6 = (int *) 0x8402268
(gdb)

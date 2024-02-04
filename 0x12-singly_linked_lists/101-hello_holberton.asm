#include <stdio.h>

int main(void)
{
int a = 10, b = 20, c;

asm {
mov ax, a
mov bx, b
add ax, bx
mov c, ax
}
printf("c=%d\n", c);
return (0);
}

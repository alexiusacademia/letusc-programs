#include <stdio.h>

int i = 1;

int fun1();
int fun2();

int main(int argc, char const *argv[])
{
    printf("%d\n", i);
    fun1();
    fun2();

    return 0;
}

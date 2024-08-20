#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    printf("%d\n",153);
    printf("%d\n",0153);
    printf("%d\n",0x153);

    unsigned int num1 = 100;
    unsigned int num2 = -100;
    printf("%u\n",num1);
    printf("%u\n",num2);
    // printf("%d\n",num2);  //这样会在打印时当成有符号类型,所以打印正确

    return 0;
}

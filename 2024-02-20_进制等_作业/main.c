#define __CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "string.h"

// 交换两个整数变量,并且不使用第三个变量

// int main()
// {
//     int a = 5;
//     int b = -13;
//     printf("交换前\n");
//     printf("a的值是:%d\n",a);
//     printf("b的值是:%d\n",b);

//     a = a ^ b;
//     b = a ^ b;
//     a = a ^ b;

    
//     printf("a的值是:%d\n",a);
//     printf("b的值是:%d\n",b);



//     return 0;
// }


//统计二进制中1的个数

int count(unsigned int num)
{
    int sum = 0;
    while(num)
    {
        if(num % 2)
        {sum++;}

        num /= 2;

    }

    return sum;
}

int main()
{
    int a = 0;
    scanf("请输入要算的数字:%d",&a);
    int sum = count(a);
    printf("%d中有%d个1",a,sum);
    return 0;
}





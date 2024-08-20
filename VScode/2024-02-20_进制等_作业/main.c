#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "string.h"

// 交换两个整数变量,并且不使用第三个变量

 //int main()
 //{
 //    int a = 5;
 //    int b = -13;
 //    printf("交换前\n");
 //    printf("a的值是:%d\n",a);
 //    printf("b的值是:%d\n",b);

 //    a = a ^ b;
 //    b = a ^ b;
 //    a = a ^ b;

 //    printf("a的值是:%d\n",a);
 //    printf("b的值是:%d\n",b);

 //    return 0;
 //}





//有疑问
//统计二进制中1的个数

// int count(unsigned int num)
// {
//     int sum = 0;
//     while (num)
//     {
//         if (num % 2 == 1)
//         {sum++;}
//         num /= 2;
//     }
//     return sum;
// }

// int main()
// {
//     int a = 0;
//     scanf("请输入要算的数字:%d", &a);
//     int sum = count(a);
//     printf("%d中有%d个1", a, sum);
//     return 0;
// }

//统计二进制中1的个数:方法2[注:此方法涉及到位移操作符的运算性质]
//但是效率之类的不好

//自己写的错误代码
// int main()
// {
//     int a = 0;
//     int count = 0;
//     scanf("%d",&a);
//     for(int i = 0;i < 32;i++)
//     {
//         if(a&1)
//         {count++;}
//         a >> 1;
//     }
//     printf("%d\n",count);
//     return 0;
// }

//正确代码
// int main()
// {
//     int a = 0;
//     int count = 0;
//     scanf("%d",&a);
//     for(int i = 0;i < 32;i++)
//     {
//         if((a>>i)&1)
//         {count++;}
//     }
//     printf("%d\n",count);
//     return 0;
// }




//统计二进制中1的个数:方法3(谷歌面试题🐂)

// int main()
// {
//     int n = 0;
//     int count = 0;
//     scanf("%d",&n);
//     while(n)
//     {
//         n = n & (n - 1);//巧妙之处在于每次运算后n的二进制都会少个1,最终变成0
//         count++;
//     }
//     printf("%d\n",count);
//     return 0;
// }


//打印整数二进制的奇数位序列和偶数位序列
// int main()
// {
//     int n = 0;
//     scanf("%d",&n);
//     int odd[16] = {0};
//     int even[16] = {0};
//     int now = 0;
//     int count = 0;
//     for(int i = 31;i >= 0;i--)
//     {
//         now = (n>>i)&1;
//         if(i%2)
//         {
//             count = count = (31 - i) / 2;//就改了这行
//             odd[count] = now;
//         }
//         else{
//             count = -i/2.0 + 31.0/2.0;
//             even[count] = now;
//         }
//     }
//     printf("该二进制中所有的奇数位序列为:");
//     for(int i = 0;i < 16;i++)
//     {printf("%d",odd[i]);}
//     printf("\n");
//     printf("该二进制中所有的偶数位序列为:");
//     for(int i = 0;i < 16;i++)
//     {printf("%d",even[i]);}
//     printf("\n");
//     return 0;
// }

// 问AI
// int main()
// {
//     int n = 0;
//     printf("请输入一个整数: ");
//     if (scanf("%d", &n) != 1) {
//         printf("输入无效，请输入一个整数。\n");
//         return 1;
//     }

//     int odd[16] = {0};
//     int even[16] = {0};
//     int now = 0;
//     int count = 0;

//     // 遍历整数的每一位
//     for (int i = 31; i >= 0; i--)
//     {
//         now = (n >> i) & 1; // 获取当前位的值
//         if (i % 2) // 奇数位
//         {
//             count = (31 - i) / 2;
//             odd[count] = now;
//         }
//         else // 偶数位
//         {
//             count = (30 - i) / 2;
//             even[count] = now;
//         }
//     }

//     // 打印奇数位序列
//     printf("该二进制中所有的奇数位序列为: ");
//     for (int i = 0; i < 16; i++)
//     {
//         printf("%d", odd[i]);
//     }
//     printf("\n");

//     // 打印偶数位序列
//     printf("该二进制中所有的偶数位序列为: ");
//     for (int i = 0; i < 16; i++)
//     {
//         printf("%d", even[i]);
//     }
//     printf("\n");

//     return 0;
// }

//求两个数二进制中不同位的个数
// #include <stdio.h>

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) { // 注意 while 处理多个 case
        
        int c = a ^ b;
        int count = 0;
        while (c)
        {
            c = c & (c - 1);
            count++;
        }
        
        
        // 64 位输出请用 printf("%lld") to 
        printf("%d\n", count);
    }
    return 0;
}



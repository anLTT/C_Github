#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "string.h"

// ����������������,���Ҳ�ʹ�õ���������

 //int main()
 //{
 //    int a = 5;
 //    int b = -13;
 //    printf("����ǰ\n");
 //    printf("a��ֵ��:%d\n",a);
 //    printf("b��ֵ��:%d\n",b);

 //    a = a ^ b;
 //    b = a ^ b;
 //    a = a ^ b;

 //    printf("a��ֵ��:%d\n",a);
 //    printf("b��ֵ��:%d\n",b);

 //    return 0;
 //}





//������
//ͳ�ƶ�������1�ĸ���

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
//     scanf("������Ҫ�������:%d", &a);
//     int sum = count(a);
//     printf("%d����%d��1", a, sum);
//     return 0;
// }

//ͳ�ƶ�������1�ĸ���:����2[ע:�˷����漰��λ�Ʋ���������������]
//����Ч��֮��Ĳ���

//�Լ�д�Ĵ������
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

//��ȷ����
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




//ͳ�ƶ�������1�ĸ���:����3(�ȸ�������??)

// int main()
// {
//     int n = 0;
//     int count = 0;
//     scanf("%d",&n);
//     while(n)
//     {
//         n = n & (n - 1);//����֮������ÿ�������n�Ķ����ƶ����ٸ�1,���ձ��0
//         count++;
//     }
//     printf("%d\n",count);
//     return 0;
// }


//��ӡ���������Ƶ�����λ���к�ż��λ����
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
//             count = count = (31 - i) / 2;//�͸�������
//             odd[count] = now;
//         }
//         else{
//             count = -i/2.0 + 31.0/2.0;
//             even[count] = now;
//         }
//     }
//     printf("�ö����������е�����λ����Ϊ:");
//     for(int i = 0;i < 16;i++)
//     {printf("%d",odd[i]);}
//     printf("\n");
//     printf("�ö����������е�ż��λ����Ϊ:");
//     for(int i = 0;i < 16;i++)
//     {printf("%d",even[i]);}
//     printf("\n");
//     return 0;
// }

// ��AI
// int main()
// {
//     int n = 0;
//     printf("������һ������: ");
//     if (scanf("%d", &n) != 1) {
//         printf("������Ч��������һ��������\n");
//         return 1;
//     }

//     int odd[16] = {0};
//     int even[16] = {0};
//     int now = 0;
//     int count = 0;

//     // ����������ÿһλ
//     for (int i = 31; i >= 0; i--)
//     {
//         now = (n >> i) & 1; // ��ȡ��ǰλ��ֵ
//         if (i % 2) // ����λ
//         {
//             count = (31 - i) / 2;
//             odd[count] = now;
//         }
//         else // ż��λ
//         {
//             count = (30 - i) / 2;
//             even[count] = now;
//         }
//     }

//     // ��ӡ����λ����
//     printf("�ö����������е�����λ����Ϊ: ");
//     for (int i = 0; i < 16; i++)
//     {
//         printf("%d", odd[i]);
//     }
//     printf("\n");

//     // ��ӡż��λ����
//     printf("�ö����������е�ż��λ����Ϊ: ");
//     for (int i = 0; i < 16; i++)
//     {
//         printf("%d", even[i]);
//     }
//     printf("\n");

//     return 0;
// }

//���������������в�ͬλ�ĸ���
// #include <stdio.h>

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) { // ע�� while ������ case

        int c = a ^ b;
        int count = 0;
        while (c)
        {
            c = c & (c - 1);
            count++;
        }


        // 64 λ������� printf("%lld") to 
        printf("%d\n", count);
    }
    return 0;
}



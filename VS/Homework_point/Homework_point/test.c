#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "string.h"

//����1
int main()
{
    int arr[] = { 1,2,3,4,5,1,2,3,4 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int num = 0;
    int count = 0;
    for (int i = 0; i < sz; i++)
    {
        num = arr[i];
        for (int j = i + 1; j < sz; j++)
        {
            if (num ^ arr[j] == 1)
            {
                count++;
            }
        }
        if (count != sz - i - 1)
        {
            break;
        }
    }


    printf("����%dֻ����һ��", num);

    return 0;



	return 0;
}









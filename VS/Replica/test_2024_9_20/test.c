//第16讲--字符函数和字符串函数

/*顾名思义,就对字符和字符串进行操作的函数*/

// //先自己写小写字母转大写字母
// #include <stdio.h>

// int main()
// {
//     char arr[] = "I Am A Student";

//     int s = 0;
//     // char* s = arr;
    
//     while (arr[s] != "\0")
//     {
//         if(arr[s] >= 'a'&& arr[s]<= 'z')
//         {
//             arr[s] -= 32;
//         }
//         s++;
//     }
//     // while(*s != '\0')
//     // {
//     //     if(*s >= 'a'&& *s<= 'z')
//     //     {
//     //         *s -= 32;
//     //     }
//     //     s++;
//     // }

//     printf("%s",arr);

//     return 0;
// }


// //字符分类函数总概   ----------------->用于判断
// #include <ctype.h>
// //要接收返回值
//             //如果参数符合以下条件则返回真
// iscntrl();//任何控制字符
// isspace();//空格字符: 空格'',换页'\f',换行'\n',
// isdigit();//十进制数字'0'~'9'字符
// isxdigit();//十六进制数字,包括所有十进制数字字符,小写字母a~f,大写字母A~F
// islower();//小写字母a~z
// isupper();//大写字母A~Z
// isalpha();//字母a~z或a~z
// isalnum();//字母或数字,a~z,A~Z,0~9
// ispunct();//标点符号,任何不属于数字或者字母的图形字符(可打印)
// isgraph();//任何图形字符
// isprint();//任何可打印字符,包括图形字符和空白字符



// //字符转换函数总概     ------------------->用于改写
// #include <ctype.h>

// int tolower(int c);//将参数传进去的大写字母转小写    所以只能一个个转换?
// int toupper(int c);//将参数传进去的小写字母转大写

// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
//     printf("%c\n",toupper('a'));
//     printf("%c\n",tolower('B'));
//     printf("%c\n",toupper('B'));
//     return 0;
// }




// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
//     char arr[] = "I Am A Student";

//     int i = 0;

//     while(arr[i] != '\0')
//     {
//         if(islower(arr[i]))
//         {
//             arr[i] = toupper(arr[i]);
//         }
//         i++;
//     }

//     printf("%s",arr);

//     return 0;
// }


// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
//     char arr[] = "I Am a Student!";

//     int i = 0;

//     while(arr[i] != '\0')
//     {
//         if(isupper(arr[i]))
//         {
//             arr[i] = tolower(arr[i]);
//         }
//         i++;
//     }

//     printf("%s\n",arr);

//     return 0;
// }

//strlen的使用和模拟实现






// //strcpy的使用和模拟实现
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char arr1[] = "hello world";
//     char arr2[8] = {0};

//     strcpy(arr2,arr1);

//     printf("%s\n",arr2);


//     return 0;
// }

#include <stdio.h>

int main()
{
    int a = 0;
    int b = 1;
    if(a == 1)
        if(b == 1)
            printf("hehe\n");
    else
        printf("haha111111\n");

    return 0;
}





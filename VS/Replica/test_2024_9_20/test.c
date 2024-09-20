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


//字符分类函数总概
#include <ctype.h>
//要接收返回值
            //如果参数符合以下条件则返回真
iscntrl();//任何控制字符
isspace();//空格字符: 空格'',换页'\f',换行'\n',





















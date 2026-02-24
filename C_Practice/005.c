/*
有一头母牛，它每年年初生一头小母牛。每头小母牛从第四个年头开始，每年年初也生一头小母牛。
请编程实现在第n年的时候，共有多少头母牛？
输入数据由多个测试实例组成，每个测试实例占一行，包括一个整数n(0<n<55)，n的含义如题目中描述。
n=0表示输入数据的结束，不做处理。
*/

//从问题可以发现规律：f(n) = f(n-1) + f(n-3)
#include <stdio.h>

int func(int year);

int main(void)
{
    int year;
    int sum;
    while(1)
    {
        printf("请输入你想测试的年数：");
        scanf("%d",&year);
        if(year == 0)
        {
            break;
        }
        sum = func(year);
        printf("在第%d年的时候，一共有%d头母牛\n",year,sum);
    }
}

int func(int year)
{
    int sum;
    if(year == 0)
    {
        return 0;
    }
    if(year > 0 && year <= 4)
    {
        return year;
    }
    sum = func(year - 1) + func(year - 3);
    return sum;
}
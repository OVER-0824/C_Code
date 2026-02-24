//输入两个整数a和b，计算a+b的和
#include <stdio.h>

int main(void)
{
    int a,b;
    int sum;
    printf("请输入两个整数：");
    scanf("%d %d",&a,&b);
    sum = a + b;
    printf("你所输入的两个整数和为：%d",sum);

    return 0;
}
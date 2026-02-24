//编写一个程序，输入a、b、c三个值，输出其中最大值
#include <stdio.h>

int main(void)
{
    int a,b,c;
    printf("请输入a，b，c的值：");
    scanf("%d %d %d",&a,&b,&c);
    int max = a;
    if(max > b)
    {
        if(max > c)
        {
            printf("%d",max);
        }
        else if(max < c)
        {
            max = c;
            printf("%d",max);
        }
    }
    else if(max < b)
    {
        if(b > c)
        {
            max = b;
            printf("%d",max);
        }
        else if(b < c)
        {
            max = c;
            printf("%d",max);
        }
    }
    return 0;
}
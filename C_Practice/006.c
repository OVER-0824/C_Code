//输入一个华氏温度，要求输出摄氏温度。公式为 c=5(F-32)/9，取位2小数
#include <stdio.h>

int main(void)
{
    double F;   //华氏温度
    double C;   //摄氏温度
    printf("请输入一个华氏温度：");
    scanf("%lf",&F);
    C = 5 * (F - 32) / 9;
    printf("%.2lf",C);
    
    return 0;
}
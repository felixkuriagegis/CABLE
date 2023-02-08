#include <stdio.h>
int main(void)
{
    float a,b,c,root1,root2;
    printf("%f enter the value of a\n");
    scanf("%f",&a);

    printf("%f enter the value of b\n");
    scanf("%f",&b);

    printf("%f enter the value of c\n");
    scanf("%f",&c);

    root1=-b+sqrt(b*b-4*a*c)/2*a;
    root2=-b-sqrt(b*b-4*a*c)/2*a;

    printf("%f value of root1",root1);
    printf("%f value of root2",root2);
    return 0;
}

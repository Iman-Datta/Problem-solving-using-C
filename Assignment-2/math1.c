#include<stdio.h>
#include<math.h>

int main() {
    double s,a,b,c,d,e;
    printf("Enter the value of three side of a triangle: \n");
    scanf("%lf %lf %lf",&a,&b,&c);
    s = (a+b+c)/2;
    printf("%lf \n", s);
    e = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle is: %lf",e);
}
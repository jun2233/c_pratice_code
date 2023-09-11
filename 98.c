/*************************************************************************
	> File Name: 98.c
	> Author: 
	> Mail: 
	> Created Time: Mon 17 Apr 2023 09:06:17 AM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    double r, h;
    scanf("%lf%lf", &r, &h);
    printf("%0.2lf\n", r * r * 3.14);
    printf("%0.2lf\n", 3.14 * r * h * r);
}

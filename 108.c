/*************************************************************************
	> File Name: 108.c
	> Author: 
	> Mail: 
	> Created Time: Mon 17 Apr 2023 04:53:09 PM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    char a;
    double m, n;
    scanf("%c", &a);
    scanf("%lf%lf", &m, &n);
    if(a == 't')printf("%0.2lf\n", m * n / 2);
    else if(a == 'r')printf("%0.2lf\n", m * n);
}

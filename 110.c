/*************************************************************************
	> File Name: 110.c
	> Author: 
	> Mail: 
	> Created Time: Mon 17 Apr 2023 06:10:02 PM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    double x, a;
    scanf("%lf", &x);
    if(x > 15){
        a = (x - 15) * 9 + 15 * 6;
        printf("%0.2lf\n", a );
    }else {
        a = x * 6;
        printf("%0.2lf\n", a);
    }
}

/*************************************************************************
	> File Name: 99.c
	> Author: 
	> Mail: 
	> Created Time: Mon 17 Apr 2023 09:16:27 AM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    double a, v, v1, a1;
    scanf("%lf%lf", &v, &a);
    if ( 0 < a < 100 && 0 < v <100){
        v1 = v * v;
        a1 = a * 2;
        printf("%0.2lf\n",v1 / a1);
    }
}

/*************************************************************************
	> File Name: 111.c
	> Author: 
	> Mail: 
	> Created Time: Tue 18 Apr 2023 10:01:53 AM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    float n;
    scanf("%f", &n);
    if(n <= 3)printf("14\n");
    else printf("%g\n", 14 + (n - 3) * 2.3);
}

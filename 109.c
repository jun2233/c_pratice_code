/*************************************************************************
	> File Name: 109.c
	> Author: 
	> Mail: 
	> Created Time: Mon 17 Apr 2023 05:58:02 PM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    while(n){
        if(n % 2 == 0){
            printf("YES\n");
            break;
        }else{
            n /= 10;
            if(n == 0){
                printf("NO\n");
            }
        }
    }
}

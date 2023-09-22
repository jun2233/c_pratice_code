/*************************************************************************
	> File Name: 117.c
	> Author: 
	> Mail: 
	> Created Time: Fri 21 Apr 2023 03:04:01 PM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    if(a < 999 && a > 99){
        int b, c;
        b = a / 100;
        c = a % 10;
        if(b == c)printf("YES\n");
        else printf("NO\n");
    }else if(a < 9999 & a > 999){
        int b, c, d, e;
        b = a / 1000;
        c = a % 10;
        d = (a - b * 1000) / 100;
        e = (a - b * 1000 - d *100) / 10;
        if(b == c && d == e)printf("YES\n");
        else printf("NO\n");
    }else if(a < 99 && a > 9){
        int b, c;
        b = a / 10;
        c = a % 10;
        if(b == c)printf("YES\n");
        else printf("NO\n");
    }
    else printf("YES\n");
    return 0;
}

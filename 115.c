/*************************************************************************
	> File Name: 115.c
	> Author: 
	> Mail: 
	> Created Time: Mon 17 Apr 2023 01:52:30 PM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    int x, y;
    scanf("%d%d", &x, &y);
    if(x == y){
        printf("100\n");
    } else{
        int x1, x2, y1, y2;
        x1 = x / 10;
        x2 = x % 10;
        y1 = y / 10;
        y2 = y % 10;
        if(x1 == y2 && x2 == y1){
            printf("20\n");
        } else if(x1 == y2 || x2 == y1 || x1 == y1 || y2 == x2){
            printf("2\n");
        } else if(x1 != y1 && x1 != y2 && x2 != y1 && x2 != y2){
            printf("0\n");
        } 
    }
}

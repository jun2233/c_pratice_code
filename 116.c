/*************************************************************************
	> File Name: 116.c
	> Author: 
	> Mail: 
	> Created Time: Tue 18 Apr 2023 09:18:34 AM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    int a[3] = {0};
    for(int i = 0;i < 3;i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0;i < 2;i++){
        if(a[i] > a[i + 1]){
            a[i] = a[i] + a[i + 1];
            a[i + 1] = a[i] - a[i + 1];
            a[i] = a[i] - a[i + 1];
        }
    }
    if(a[0] + a[1] > a[2]){
       if(a[0] * a[0] + a[1] * a[1] > a[2] * a[2])printf("acute triangle\n");
       else if(a[0] * a[0] + a[1] * a[1] == a[2] * a[2])printf("right triangle\n");
       else if(a[0] * a[0] + a[1] * a[1] < a[2] * a[2])printf("obtuse triangle\n");
    }else printf("illegal triangle\n");
}

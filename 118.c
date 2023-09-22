/*************************************************************************
	> File Name: 118.c
	> Author: 
	> Mail: 
	> Created Time: Fri 21 Apr 2023 11:03:14 AM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    int n, year;
    scanf("%d", &year);
    n = year % 12;
    switch(n){
        case 1:{
            printf("rooster\n");
            break;
        }
        case 2:{
            printf("dog\n");
            break;
        }
        case 3:{
            printf("pig\n");
            break;
        }
        case 4:{
            printf("rat\n");
            break;
        }
        case 5:{
            printf("ox\n");
            break;
        }
        case 6:{
            printf("tiger\n");
            break;
        }
        case 7:{
            printf("rabbit\n");
            break;
        }
        case 8:{
            printf("dragon\n");
            break;
        }
        case 9:{
            printf("snake\n");
            break;
        }
        case 10:{
            printf("horse\n");
            break;
        }
        case 11:{
            printf("sheep\n");
            break;
        }
        case 0:{
            printf("monkey\n");
            break;
        }
    }
}

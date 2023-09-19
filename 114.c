/*************************************************************************
	> File Name: 114.c
	> Author: 
	> Mail: 
	> Created Time: Fri 21 Apr 2023 02:51:32 PM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    char x;
    scanf("%c", &x);
    switch(x){
        case 'h':{
            printf("He\n");
            break;
        }
        case 'l':{
            printf("Li\n");
            break;
        }
        case 'c':{
            printf("Cao\n");
            break;
        }
        case 'd':{
            printf("Duan\n");
            break;
        }
        case 'w':{
            printf("Wang\n");
            break;
        }
        default :{
            printf("Not Here\n");
            break;
        }
    }
}

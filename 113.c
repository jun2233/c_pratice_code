/*************************************************************************
	> File Name: 113.c
	> Author: 
	> Mail: 
	> Created Time: Tue 18 Apr 2023 10:24:21 AM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    char a, b;
    scanf("%c %c", &a, &b);
    if((a == 'O' || a == 'Y' || a == 'H') && (b == 'O' || b == 'Y' || b == 'H')){
        if(a == 'O'){
            if(b == 'O')printf("TIE\n");
            else if(b == 'Y')printf("MING\n");
            else if(b == 'H')printf("LI\n");
        }
        else if(a == 'Y'){
            if(b == 'Y')printf("TIE\n");
            else if(b == 'H')printf("MING\n");
            else if(b == 'O')printf("LI\n");
        }
        else if(a == 'H'){
            if(b == 'H')printf("TIE\n");
            else if(b == 'O')printf("MING\n");
            else if(b == 'Y')printf("LI\n");
        }
    }
    printf("%c%c\n", a, b);
}

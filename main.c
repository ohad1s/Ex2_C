#include <stdio.h>
#include "my_mat.h"

//--------------------------------
// Created by Ohad Shirazi on 22/11/2021.
//--------------------------------

int main() {
    int b;
    int c;
    char ch;
    int i;
    int j;
    int k;
    int m;
    scanf("%c", &ch);
    while(ch!='D') {
        switch (ch) {
            case 'A':
                funcA();
                break;

            case 'B':
                scanf("%d%d", &i, &j);
                b = funcB(i, j);
                if (b==0){
                    printf("False\n");
                }
                else{
                    printf("True\n");
                }
                break;

            case 'C':
                scanf("%d%d", &k, &m);
                c= funcC(k, m);
                if (c==0){
                    printf("-1\n");
                }
                else{
                    printf("%d\n",c);
                }
                break;
        }
        scanf("%c", &ch);
    }
    return 0;
}


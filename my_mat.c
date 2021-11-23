#include <stdio.h>
#include "my_mat.h"
int mat[10][10];
int mat2[10][10];
//-------------------------------------
// Created by Ohad Shirazi on 21/11/2021.
//-------------------------------------

void funcA(){
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            scanf( "%d", &mat[i][j]);
        }
    }
    for (int i=0; i<10; i++) {
        for (int j = 0; j <10; j++) {
            mat2[i][j]=mat[i][j];
        }
    }

}

int funcB(int i, int j){
    int a=funcC(i,j);
    if (a!=0){
        return(a);
    }
    else{
        return(0);
    }
}

int funcC( int t, int s){
    for (int k=0; k<10; k++){
        for (int i=0; i<10; i++){
            for (int j=0; j<10; j++){
                if (mat2[i][k]!=0 && mat2[k][j]!=0){
                    if (mat2[i][j]==0 || mat2[i][k]+mat2[k][j]<mat2[i][j]) {
                        mat2[i][j] = mat2[i][k] + mat2[k][j];
                    }

                }
            }
        }
    }
    for (int w=0; w<10; w++){
        mat2[w][w]=0;
    }
    if (mat2[t][s]==0){
        return 0;
    }

    else{
        return mat2[t][s];
    }
}




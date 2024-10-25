//- C Program to Find the Determinant of a Matrix
#include<stdio.h>
int main(){
    int A[3][3];int count=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            count++;
            printf("enter value %d:",count);
            scanf("%d",&A[i][j]);
        }
    }
    printf("your matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    int det =A[0][0]*(A[1][1]*A[2][2]-A[1][2]*A[2][1])-A[0][1]*(A[1][0]*A[2][2]-A[1][2]*A[2][0])+A[0][2]*(A[1][0]*A[2][1]-A[1][1]*A[2][0]);
    printf("determinant= %d",det);
}
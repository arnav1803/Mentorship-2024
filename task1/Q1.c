#include<stdio.h>
int fact(int num){
    if(num==0)
    return 1;
    else 
    return num*fact(num-1);
}
int main(){
    printf("enter a number:");int num;
    scanf("%d",&num);
    int fac=fact(num);
    printf("factorial %d is %d,",num,fac);
}
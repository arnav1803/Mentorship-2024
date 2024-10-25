//- C Program to Check Whether a String is Palindrome or Not
#include<stdio.h>
#include<string.h>
int main(){
    printf("enter a string:");
    char str[150];scanf("%s",str);
    int flag=1;int size=strlen(str);
    for(int i=0;i<size/2;i++){
        if((int)str[i]!=(int)str[size-i-1])
        {flag=0;}
    }
    if(flag==0){
        printf("not a Palindrome");}
        else printf("%s is a Palindrome",str);
}
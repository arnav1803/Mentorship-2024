//C Program to Print the First Letter of Each Word
#include <stdio.h>
void fun(char str[]){
    int i=0;
    if(str[i]!=' '&&str[i]!='\0'){
        printf("%c",str[i]);}
    while(str[i]!='\0'){
        if(str[i]==' '&&str[i+1]!=' '&&str[i+1]!='\0'){
            printf("%c",str[i+1]);}
        i++;}}
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    fun(str);
    return 0;}
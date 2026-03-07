#include <stdio.h>
#include <ctype.h>

int main(){
    char infix[]="a+b", postfix[10];
    int k=0;
    for(int i=0;infix[i];i++){
        if(isalnum(infix[i])) postfix[k++]=infix[i];
        else postfix[k++]=infix[i];
    }
    postfix[k]='\0';
    printf("%s",postfix);
}

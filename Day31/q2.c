#include <stdio.h>
#include <string.h>

int main(){
    char s[]="()[]{}", stack[10];
    int top=-1;

    for(int i=0;i<strlen(s);i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
            stack[++top]=s[i];
        else{
            if(top==-1){ printf("Invalid"); return 0; }
            top--;
        }
    }
    printf(top==-1?"Valid":"Invalid");
}

#include <stdio.h>

int main(){
    char s[]="swiss";
    int freq[256]={0};

    for(int i=0;s[i];i++)
        freq[s[i]]++;

    for(int i=0;s[i];i++)
        if(freq[s[i]]>1){
            printf("%c",s[i]);
            break;
        }
}

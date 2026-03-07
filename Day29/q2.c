#include <stdio.h>

int main(){
    int a=342,b=465,carry=0,sum;

    while(a || b || carry){
        sum = (a%10)+(b%10)+carry;
        printf("%d ",sum%10);
        carry = sum/10;
        a/=10; b/=10;
    }
}

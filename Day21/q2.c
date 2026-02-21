#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5};
    int slow = 0, fast = 0;

    while(fast < 5 && fast+1 < 5) {
        slow++;
        fast += 2;
    }

    printf("%d", arr[slow]);
}

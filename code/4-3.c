#include <stdio.h>
#include <stdbool.h>

int main() {
    int a;
    bool boolean = true;
    scanf("%d", &a);

    if (a < 2) boolean = false;

    for(int i = 2; i <= a - 1; i++) {
        if(a % i == 0){
            boolean = false;
            break;
        }
    }

    if(boolean == true) {
        printf("true");
    } else {
        printf("false");
    }
}

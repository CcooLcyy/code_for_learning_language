#include <stdio.h>

int getgcd(int a, int b);

int getgcd(int a, int b) {
    int r = a % b;
    while(r != 0) {
        a = b;
        b = r;
        r = a % b;
    }

    return b;
}

int main() {
    int a, b;
    while(1) {
        scanf("%d%d", &a, &b);
        if(a > 0 && b > 0) {
            printf("%d", getgcd(a, b));
            return 0;
        }
    }
}
#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {

    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    
    scanf("%d", &N);
    
    if (is_prime(N)) {
        printf("PRIMA");
    } else {
        printf("BUKAN");
    }
    
    return 0;
}

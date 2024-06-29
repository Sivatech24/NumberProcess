#include <stdio.h>

void processNumber(int num) {
    if (num == 1) {
        printf("%d\n", num);
        return;
    }
    
    printf("%d -> ", num);

    if (num % 2 != 0) {
        processNumber(num * 3 + 1);
    } else {
        processNumber(num / 2);
    }
}

int main() {
    int num;
    
    printf("Enter a number between 1 and 9: ");
    scanf("%d", &num);
    
    if (num < 1 || num > 9) {
        printf("Invalid input. Please enter a number between 1 and 9.\n");
        return 1;
    }

    processNumber(num);

    return 0;
}

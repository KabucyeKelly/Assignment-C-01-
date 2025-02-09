#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    num += 10;
    printf("The result after adding 10 is: %d\n", num);

    return 0;
}

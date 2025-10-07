#include <stdio.h>
#include <string.h>
int main() {
    char a[54], b[44];
    printf("Enter first string: ");
    gets(a);
    printf("Enter second string: ");
    gets(b);

    strcat(a, b);
    strcpy(b, a);                /
    b[strlen(b) - strlen(a) + strlen(b)] = '\0';
    strcpy(b, a);

    printf("After swap:\nFirst: %s\nSecond: %s", a, b);
}

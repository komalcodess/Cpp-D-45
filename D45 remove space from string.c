#include <stdio.h>
int main() {
    char str[160];
    int i, j = 0;
    printf("Enter a string: ");
    gets(str);
    for(i=0; str[i] != '\0';i++) {
        if(str[i] != ' ')
            str[j++] = str[i];
    }
    str[j] = '\0';
    printf("String without spaces: %s", str);
}

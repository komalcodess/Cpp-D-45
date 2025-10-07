#include <stdio.h>
#include <string.h>
int main() {
    char str[280], word[87], largest[52] = "";
    int i = 0, j = 0;
    printf("Enter a sentence: ");
    gets(str);

    while(1) {
        if(str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if(strlen(word) > strlen(largest))
                strcpy(largest, word);
            j = 0;
            if(str[i] == '\0')
                break;
        }
        i++;
    }

    printf("Largest word: %s", largest);
}

// Write a function reverse(s) that reverses the character string s
// Use it to write a program that reverses its input a line at a time

#include <stdio.h>

char *reverse(char *s) {
    int i, cnt;
    char s1[999];

    for (i = 0; s[i] != '\0'; i++) {
        s1[i] = s[i];
    }
    cnt = i;

    char *ret = (char *) malloc((cnt+1) * sizeof(char));
    if (ret == NULL) {
        printf("Error! memory not allocated.");
        return ret;
    }

    ret[cnt] = '\0';
    for (i = 0; s1[i] != '\0'; i++) {
        ret[cnt-i-1] = s1[i];
    }

    return ret;
}

int main() {
    int c, i;
    char s[999];

    i = 0;
    while ((c = getchar()) != EOF) {
        if (c != '\n') {
            s[i] = c;
            i++;
        }
        else {
            s[i] = '\0';
            i = 0;
            printf("%s\n\n", reverse(s));
        }
    }

    return 0;
}

// Exercise 1-8
// Write a program to count blanks, tabs and new lines

#include <stdio.h>

int main() {
    // current character, number of blanks, number of tabs, number of lines
    int c, nb, nt, nl;
    nb = nt = nl = 0;

    while ((c = getchar()) != EOF) {
        switch (c) {
            case ' ':
                nb++;
                break;
            case '\t':
                nt++;
                break;
            case '\n':
                nl++;
                break;
            default:
                ;
        }
    }

    printf("%d blanks\n", nb);
    printf("%d tabs\n", nt);
    printf("%d new lines\n", nl);

    return 0;
}
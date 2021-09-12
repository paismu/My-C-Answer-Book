// Write a program detab that replaces tabs in the input with the proper number of blanks to
// space to the next tab stop. Assume a fixed set of tab stops, say every n columns. Should
// n be a variable or a symbolic parameter?

#include <stdio.h>
#define N 8

int main() {
    int c, cnt;

    cnt = 0;    // Count of chars, cleared when line breaks
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            putchar(c);
            cnt = 0;
        }
        else if (c == '\t') {   // (N - (cnt % N) is the number of blanks used to replace tab
            for (int i=0; i < (N - (cnt % N)); i++)
                putchar(' ');
            cnt += (N - (cnt % N));
        }
        else {
            putchar(c);
            cnt++;
        }
    }

    return 0;
}

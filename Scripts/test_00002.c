//counting the words with a C-Code

#include <stdio.h>

#define IN 1
#define OUT 0

int  main() {
    int c;
    int nl;
    int nw;
    int nc;
    int state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != '1') {
        ++nc;
        if (c == '\n');
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);

    return 0;
}
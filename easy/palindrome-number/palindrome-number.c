#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool isPalindrome(int x) {
    int *ch = malloc(sizeof(int)*11);
    int xmax = 1000000000;
    int bg;
    int dx = 0;
    if (x<0) {
        free(ch);
        return false;
    }
    while (xmax>=1) {
        if ((bg=floor(x/xmax))>0) {
            ch[dx++] = bg;
        } else if (dx>0) {
            dx++;
        }
        x -= bg * xmax;
        xmax /= 10;
        printf ("%d %d %i\n", bg, dx, xmax);
    }
    printf("%d, %d >>>>>>>>>>>> \n", *(ch), *(ch+1));
    for (int j=0; j<dx; j++) {
        printf("%d, %d - %d, %d\n", j, (dx-j-1), ch[j], ch[dx-j-1]);
        if (ch[j]!=ch[dx-j-1]) {
            free(ch);
            return false;
        }
    }
    free(ch);
    return true;
}

int main() {
    bool result = isPalindrome(10);
    printf ("%b", result);
    return 0;
}
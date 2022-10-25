//recep ecem
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long double ackermann(int n, int m);
int main(int argc, char const *argv[]) {
    long double ack;
    int argv1 = atoi(argv[1]);
    int argv2 = atoi(argv[2]);

    if(argc != 3){
        printf("\nusage: %s [1-4] [0-4]",argv[0]);
        return 0;
    }

    if((argv1 > 4) || (argv2 > 4)){
        printf("\n first, calculate -> ");
        printf("ack(%d,ack(%d,%d))", (argv1-1), argv1, (argv2-1));
        return 1;
    }
    else{
        ack = ackermann(argv1, argv2);
        printf("\n%0.Lf", ack);
        return 1;
    }
}

long double ackermann(int n, int m) {
    long double tmp = 2;

    switch (n) {
        case 1:
            return m + 2;
        case 2:
            return 2 * m + 3;
        case 3:
            return powl(2, (m + 3)) - 3;
        case 4:
            for (int i = 0; i < m; ++i) {
                tmp = powl(tmp, m);
            }
            return powl(tmp, 16) - 3;
        default:
            printf("\nAn unknown problem occured.");
    }
}

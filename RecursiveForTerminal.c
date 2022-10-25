//recep ecem
#include <stdio.h>
#include <stdlib.h>

int ackermann(int n, int m);
int main(int argc, char const *argv[]) {
    if(argc != 3){
        printf("\nusage: %s [n] [m]",argv[0]);
        return 0;
    }

    printf("\n%d", ackermann(atoi(argv[1]),atoi(argv[2])));
}

int ackermann(int n, int m){
    //rules
    if((n == 0)&&(m != 0)){
        return m + 1;
    }
    if((n != 0)&&(m == 0)){
        return ackermann(n-1, 1);
    }
    if((n != 0)&&(m != 0)){
        return ackermann(n-1, ackermann(n, m-1));
    }
}

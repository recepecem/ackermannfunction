//recep ecem
#include <stdio.h>

int ackermann(int n, int m);
int main() {
    printf("\n%d", ackermann(3,3));
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

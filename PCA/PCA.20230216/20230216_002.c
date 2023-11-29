#include <stdio.h>
int main() {

    int i, j, n;
    int k = 1;
    int A[5] = {1, 2, 4, 9};
    int B[6] = {2, 4, 7, 8, 9};
    int C[n];

    C[0] = 0;

    for (i = 0; i < A[0]; i++) {
        for (j = 0; j < B[0]; j++) {
            if (A[i] == B[j]) {
                C[k] = A[i];
                k++;
            }
        }
    }
    C[0] = k + 1;
    for (i = 0; i < C[0]; i++) {
        if (i == 0) {
            printf("tamanho do conjunto: %d\n", C[i]);
        } else {
            printf("elemento %d: %d\n", i, C[i]);
        }
        
    }
    return 0;
}

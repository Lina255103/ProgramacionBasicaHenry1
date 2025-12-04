#include <stdio.h>

int main() {
    int N = 3;
    int M = 3;
    int m[3][3] = {
        {3, 6, 1},
        {2, 0, 7},
        {1, 2, 9}
    };
    int sr[3] = {0};
    int sc[3] = {0};
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            sr[i] += m[i][j];
            sc[j] += m[i][j];
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("%d\t", m[i][j]);
        }
        printf("=  %d\n", sr[i]);
    }

    printf("\n");

    for (j = 0; j < M; j++) {
        printf("%d\t", sc[j]);
    }
    printf("\n");

    return 0;
}
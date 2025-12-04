#include <stdio.h>

int main() {
    int N = 3;
    int m[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int i, j;
    int snp = 0;
    int cnp = 0;
    float mnp;
    int sni = 0;
    int cni = 0;
    float mni;
    int spp = 0;
    int cpp = 0;
    float mpp;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (m[i][j] % 2 == 0) {
                snp = snp + m[i][j];
                cnp++;
            } else {
                sni = sni + m[i][j];
                cni++;
            }

            if ((i + j) % 2 == 0) {
                spp = spp + m[i][j];
                cpp++;
            }
        }
    }

    mnp = (cnp > 0) ? (float)snp / cnp : 0.0;
    mni = (cni > 0) ? (float)sni / cni : 0.0;
    mpp = (cpp > 0) ? (float)spp / cpp : 0.0;

    printf("Suma Pares (Num): %d, Media: %.2f\n", snp, mnp);
    printf("Suma Impares (Num): %d, Media: %.2f\n", sni, mni);
    printf("Suma Pos. Pares: %d, Media: %.2f\n", spp, mpp);

    return 0;
}

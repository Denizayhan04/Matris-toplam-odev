/*

 Veli Deniz Ayhan 23181616013
 Berkay Köklü 23181616014
 Yusuf Tüfekçi 23181617009

  */


#include <stdio.h>

int satir;
int sutun;

void matrisTopla(int a[satir][sutun], int b[satir][sutun], int total[satir][sutun]) {
    for (int i = 0; i < satir; ++i) {
        for (int j = 0; j < sutun; ++j) {
            total[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main() {
    printf("Matrislerin boyutunu giriniz (satır ve sütun yan yana): ");
    scanf("%d %d", &satir, &sutun);

    int matris1[satir][sutun];
    int matris2[satir][sutun];
    int matrisToplam[satir][sutun];

    printf("1. matrisi giriniz:\n");
    for (int i = 0; i < satir; ++i) {
        for (int j = 0; j < sutun; ++j) {
            scanf("%d", &matris1[i][j]);
        }
    }

    printf("2. matrisi giriniz:\n");
    for (int i = 0; i < satir; ++i) {
        for (int j = 0; j < sutun; ++j) {
            scanf("%d", &matris2[i][j]);
        }
    }

    printf("\nMatrisleriniz toplandı:\n");
    matrisTopla(matris1, matris2, matrisToplam);

    for (int i = 0; i < satir; ++i) {
        for (int j = 0; j < sutun; ++j) {
            printf("%d\t", matrisToplam[i][j]);
        }
        printf("\n");
    }

    return 0;
}

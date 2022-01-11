#include<stdio.h>
#include<math.h>

int main() {

        int rika[20] = { 65,80,67,35,58,60,72,75,68,92,36,50,25,85,46,42,78,62,84,70 };
        int eigo[20] = { 44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84 };

        int i,j;

        int rsum = 0;
        int esum = 0;

        double rheikin;
        double eheikin;

        float rhensa;
        float ehensa;

        double rbunsan = 0.0;
        double ebunsan = 0.0;

        double rbunsan2;
        double ebunsan2;

        double rhensati[20];
        double ehensati[20];

        for (i = 0; i < 20; i++) {
                rsum += rika[i];
                esum += eigo[i];
        }

        rheikin = (double)rsum / 20;
        eheikin = (double)esum / 20;



        for (i = 0; i < 20; i++) {
                rbunsan += (rika[i] - rheikin) * (rika[i] - rheikin);
                ebunsan += (eigo[i] - eheikin) * (eigo[i] - eheikin);
        }

        rbunsan2 = rbunsan / 20;
        ebunsan2 = ebunsan / 20;

        rhensa = sqrt(rbunsan2);
        ehensa = sqrt(ebunsan2);

        printf("heikin　rika：%f eigo：%f\n", rheikin, eheikin);
        printf("hensa　rika：%f eigo：%f\n", rhensa, ehensa);
        printf("sum　rika：%d eigo：%d\n", rsum, esum);

        for (i = 0; i < 20; i++) {
                rhensati[i] = (rika[i] - rheikin) / rhensa * 10 + 50;
                ehensati[i] = (eigo[i] - eheikin) / ehensa * 10 + 50;
        }

        for (i = 0; i < 20; i++) {
                printf("hensati %d: rika：%f eigo：%f\n", i, rhensati[i], ehensati[i]);
        }

        int tmp;

        for (i = 0; i < 20; i++) {
                for (j = i; j < 20; j++) {
                        if (rika[i] > rika[j]) {
                                tmp = rika[i];
                                rika[i] = rika[j];
                                rika[j] = tmp;
                        }
                }
        }
        for (i = 0; i < 20; i++) {
                for (j = i; j < 20; j++) {
                        if (eigo[i] > eigo[j]) {
                                tmp = eigo[i];
                                eigo[i] = eigo[j];
                                eigo[j] = tmp;
                        }
                }
        }

        for (i = 0; i < 20; i++) {
                printf("%d ", rika[i]);
        }
        printf("\n");
        for (i = 0; i < 20; i++) {
                printf("%d ", eigo[i]);
        }

        return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main() {
	printf("Da se sustavi programa za obrabotka na dva masiva A[N,N] i B[N,N], kudeto dannite sa celi chisla v intervala\n [-1000;1000].\n");
	printf("-Da se obrazuva ednomeren masiv C[N], elementite na koito da se obrazuvat kato suma ot suotvetnite elementi po glavnite diagonali na masivite A i B\n");
	printf("-Poluchenia masiv da se sortira po golemina;\n");
	printf("Avtor:Ivailo Mitev \n");
	const int  MAX_N = 10;
	int a[MAX_N][MAX_N], b[MAX_N][MAX_N], c[MAX_N];
	int n, i, j;
	printf("Vavedete goleminata na masivite A i B(do %d elementa): ", MAX_N);
	scanf("%d", &n);
	while (n > MAX_N) {
		printf("Maksimalniqt razmer e 10 elementa\n");
		printf("Vuvedete otnovo: ");
		scanf("%d", &n);
	}

	printf("Vavdete elementite na masiv A: ");
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
	}


	printf("Vavedete elementite na masiv B: ");
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			scanf("%d", &b[i][j]);
	}


	// Formirane na masiv C
	for (i = 0; i < n; i++) {
		c[i] = a[i][i] + b[i][i];
	}

	// Sortirane na masiv C
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (c[i] > c[j]) {
				int temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}
		}
	}
	//Otpechatvane na vhodni danni
	printf("Izvezhdane na elementite na masiv A: \n");
	for (i = 0;i < n;i++) {
		for (j = 0;j < n;j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	printf("Izvezhdane na elementite na masiv B: \n");
	for (i = 0;i < n;i++) {
		for (j = 0;j < n;j++)
			printf("%d ", b[i][j]);
		printf("\n");
	}
	printf("Izvezhdane na elementite ot masiv C : \n");
	for (i = 0;i < n;i++) {
		printf("%d ", c[i]);
		printf("\n");
	}
	system("pause");
	return 0;}

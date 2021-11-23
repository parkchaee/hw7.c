#include <math.h>
#include <stdio.h>
float calcul(float dat[]);
int main() {
	int i;
	float dat[5];
	printf("Enter 5 real numbers:");
	for (i = 0; i < 5; i++)
		scanf_s("%f", &dat[i]);
	printf("\nStandard Deviation=%.3f", calcul(dat));

	return 0;
}
float calcul(float dat[]) {
	float sum = 0.0, mean=0.0, Sum2 = 0.0;
	int i;
	for (i = 0;i < 5; i++) {
		sum += dat[i];
	}
	mean = sum / 5;
	for(i=0;i<5; i++)
		Sum2 += (double)pow(dat[i] - mean, 2);
	return (double)sqrt(Sum2 / 5);
}
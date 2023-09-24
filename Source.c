#include <stdio.h>


double t(double x) {
	int fact_chisl, fact_znam, k;
	double chislitel, znamenatel, step_chisl, step_znam, znachenie;
	fact_chisl = 1;
	fact_znam = 1;
	chislitel = 0;
	znamenatel = 0;
	step_chisl = 1;
	step_znam = 1;
	for (k = 0; k <= 10; k++) {
		if (k == 0) {
			step_chisl *= x;
		}
		else {
			step_znam = step_chisl * x;
			step_chisl = step_znam * x;
			fact_chisl *= 2 * k + 1;
			fact_znam *= 2 * k;
		}
		chislitel += step_chisl / fact_chisl;
		znamenatel += step_znam / fact_znam;
	}
	znachenie = chislitel / znamenatel;
	return znachenie;
}


int main() {
	double y, otvet;
	scanf("%lf", &y);
	otvet = (7 * t(0.25) + 2 * t(1 + y)) / (6 - t(y * y - 1));
	printf ("%lf\n", otvet);
}
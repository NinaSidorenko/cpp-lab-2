#include <iostream>

using namespace std;

double t(double x) {
	int fact_chisl = 1;
	int fact_znam = 1;
	double chislitel = 0;
	double znamenatel = 0;
	double step_chisl = 1;
	double step_znam = 1;
	for (int k = 0; k <= 10; k++) {
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
	double znachenie = chislitel / znamenatel;
	return znachenie;
}


int main() {
	double y;
	cin >> y;
	double otvet = (7 * t(0.25) + 2 * t(1 + y)) / (6 - t(y * y - 1));
	cout << otvet;
}
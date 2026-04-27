#include <iostream>
#include <cmath>

int main {
	double cp, b, rp;

	std::cout << "enter cost per product (cp): ";
	std::cin  >> cp;
	
	std::coun << "enter base cost (b): ";
	std::cin >> b;
	
	std::coun << "enter revenue per product (rp): ";
	std::cin >> rp;

	double N = b / (rp - cp);

	int devicesneed = std::ceil(N)

	std::cout << "Minimum number of devices to break even: ";
		  << devicesneeded << std::end1;

	return 0;
}

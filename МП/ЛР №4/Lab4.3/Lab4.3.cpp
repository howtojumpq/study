﻿#include <iostream>
#include "LCSR.h"
#include "LCSD.h"
int main()
{
	setlocale(LC_ALL, "rus");
	clock_t t1 = 0, t2 = 0, t3 = 0, t4 = 0;

	//char X[] = "HRWCYUJHRWCYUJHRWC", Y[] = "WLPCAUWLPCAUWLPCAU";
	//char X[] = "HRWCYUJHRWCYUJHR", Y[] = "WLPCAUWLPCAUWLPC";
	//char X[] = "HRWCYUJHRWCYUJ", Y[] = "WLPCAUWLPCAUWL";
	//char X[] = "HRWCYUJHRWCY", Y[] = "WLPCAUWLPCAU";
	//char X[] = "HRWCYUJHRW", Y[] = "WLPCAUWLPC";
	char X[] = "HRWCYUJH", Y[] = "WLPCAUWL";
	std::cout << std::endl << "-- вычисление длины LCS для X и Y(рекурсия)";
	std::cout << std::endl << "-- последовательность X: " << X;
	std::cout << std::endl << "-- последовательность Y: " << Y;
	t1 = clock();
	int s = lcs(
		sizeof(X) - 1,  // длина   последовательности  X   
		"ALDC",       // последовательность X
		sizeof(Y) - 1,  // длина   последовательности  Y
		"LADCM"       // последовательность Y
	);
	t2 = clock();
	std::cout << std::endl << "-- длина LCS: " << s;
	std::cout << std::endl << "-- Время вычислений: " << (t2 - t1) << std::endl;

	char z[1500] = "";
	//char	x[] = "HRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJ",
	//		y[] = "WLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAU";

	//char	x[] = "HRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJ",
	//		y[] = "WLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAU";

	//char	x[] = "HRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJ",
	//		y[] = "WLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAU";

	//char	x[] = "HRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRW",
	//		y[] = "WLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAU";

	//char	x[] = "HRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJH",
	//		y[] = "WLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAU";

	char	x[] = "HRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJHRWCYUJ",
			y[] = "WLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAUWLPCAU";

	t3 = clock();
	int l = lcsd(x, y, z);
	t4 = clock();
	std::cout << std::endl
		<< "-- наибольшая общая подпоследовательость - LCS(динамическое"
		<< "программирование)" << std::endl;
	std::cout << std::endl << "последовательость X: " << x;
	std::cout << std::endl << "последовательость Y: " << y;
	std::cout << std::endl << "                LCS: " << z;
	std::cout << std::endl << "          длина LCS: " << l;
	std::cout << std::endl << "-- Время вычислений: " << (t4 - t3);
	std::cout << std::endl;


	system("pause");
	return 0;
}

#include <iostream>
#include <math.h>
using namespace std;

void task1()
{
	// точность вычисления
	float eps = 0.001;


	// первое уровнение коэфиценты (у - переменная уровнения, х - номер самого уровнения)
	float y1x1 = 20.9, y2x1 = 1.2, y3x1 = 2.1, y4x1 = 0.9;

	// второе уровнение коэфиценты
	float y1x2 = 1.2, y2x2 = 21.2, y3x2 = 1.5, y4x2 = 2.5;

	// третье уровнение коэфиценты
	float y1x3 = 2.1, y2x3 = 1.5, y3x3 = 19.8, y4x3 = 1.3;

	// четвертое уровнение коэфиценты
	float y1x4 = 0.9, y2x4 = 2.5, y3x4 = 1.3, y4x4 = 32.1;


	// свободные члены
	float z1 = 21.7, z2 = 27.46, z3 = 28.76, z4 = 49.72;


	// нормы мартиц (с1 - 1, с2 - 2, с3 - 3, с4 -4)
	float c1, c2, c3, c4, c;


	// построчные нормы матриц (с1 - 1, с2 - 2, с3 - 3, с4 -4)
	c1 = (y2x1 + y3x1 + y4x1) / y1x1;
	c2 = (y1x2 + y3x2 + y4x2) / y2x2;
	c3 = (y2x3 + y1x3 + y4x3) / y3x3;
	c4 = (y2x4 + y3x4 + y1x4) / y4x4;


	// норма матрицы
	c = max(max(fabs(c1), fabs(c2)), max(fabs(c3), fabs(c4)));


	if (c < 1 && c > 0)
	{
		// нулевое приближение n
		float x0x1, x0x2, x0x3, x0x4;

		// нулевое приближение n+1
		float x1x1, x1x2, x1x3, x1x4;

		// x(n)
		x0x1 = z1 / y1x1;
		x0x2 = z2 / y2x2;
		x0x3 = z3 / y3x3;
		x0x4 = z4 / y4x4;

		// условие остановки
		float ost = c / (1 - c);

		// условие остановки для каждого примера
		float ostan1, ostan2, ostan3, ostan4;

		do {
			
			x1x1 = (z1 - (y2x1 * x0x2 + y3x1 * x0x3 + y4x1 * x0x4)) / y1x1;
			x1x2 = (z2 - (y1x2 * x0x1 + y3x2 * x0x3 + y4x2 * x0x4)) / y2x2;
			x1x3 = (z3 - (y1x3 * x0x1 + y2x3 * x0x2 + y4x3 * x0x4)) / y3x3;
			x1x4 = (z4 - (y1x4 * x0x1 + y2x4 * x0x2 + y3x4 * x0x3)) / y4x4;

			ostan1 = ost * fabs(x1x1 - x0x1);
			ostan2 = ost * fabs(x1x2 - x0x2);
			ostan3 = ost * fabs(x1x3 - x0x3);
			ostan4 = ost * fabs(x1x4 - x0x4);

			x0x1 = x1x1;
			x0x2 = x1x2;
			x0x3 = x1x3;
			x0x4 = x1x4;

		} while (ostan1 > eps && ostan2 > eps && ostan3 > eps && ostan4 > eps);

		cout << "Ответ: \n" << "x(n): " << x1x1 << " " << x1x2 << " " << x1x3 << " " << x1x4 << "\nОценка: " << ostan1 << " " << ostan2 << " " << ostan3 << " " << ostan4 ;
	}

	else
		cout << "Не сходится";
}

void task2()
{
	// точность вычисления
	float eps = 0.001;


	// первое уровнение коэфиценты (у - переменная уровнения, х - номер самого уровнения)
	float y1x1 = 20.9, y2x1 = 1.2, y3x1 = 2.1, y4x1 = 0.9;

	// второе уровнение коэфиценты
	float y1x2 = 1.2, y2x2 = 21.2, y3x2 = 1.5, y4x2 = 2.5;

	// третье уровнение коэфиценты
	float y1x3 = 2.1, y2x3 = 1.5, y3x3 = 19.8, y4x3 = 1.3;

	// четвертое уровнение коэфиценты
	float y1x4 = 0.9, y2x4 = 2.5, y3x4 = 1.3, y4x4 = 32.1;


	// свободные члены
	float z1 = 21.7, z2 = 27.46, z3 = 28.76, z4 = 49.72;


	// нормы мартиц (с1 - 1, с2 - 2, с3 - 3, с4 -4)
	float c1, c2, c3, c4, c;


	// построчные нормы матриц (с1 - 1, с2 - 2, с3 - 3, с4 -4)
	c1 = (y2x1 + y3x1 + y4x1) / y1x1;
	c2 = (y1x2 + y3x2 + y4x2) / y2x2;
	c3 = (y2x3 + y1x3 + y4x3) / y3x3;
	c4 = (y2x4 + y3x4 + y1x4) / y4x4;


	// норма матрицы
	c = max(max(fabs(c1), fabs(c2)), max(fabs(c3), fabs(c4)));


	if (c < 1 && c > 0)
	{
		// нулевое приближение n
		float x0x1, x0x2, x0x3, x0x4;

		// нулевое приближение n+1
		float x1x1, x1x2, x1x3, x1x4;

		// x(n)
		x0x1 = z1 / y1x1;
		x0x2 = 0;
		x0x3 = 0;
		x0x4 = 0;

		// условие остановки
		//float ost = c / (1 - c);

		// условие остановки для каждого примера
		double ostan1, ostan2, ostan3, ostan4;

		bool yr = false;

		int count = 0;

		do {

			x1x1 = (z1 - (y2x1 * x0x2 + y3x1 * x0x3 + y4x1 * x0x4)) / y1x1;
			x1x2 = (z2 - (y1x2 * x1x1 + y3x2 * x0x3 + y4x2 * x0x4)) / y2x2;
			x1x3 = (z3 - (y1x3 * x1x1 + y2x3 * x1x2 + y4x3 * x0x4)) / y3x3;
			x1x4 = (z4 - (y1x4 * x1x1 + y2x4 * x1x2 + y3x4 * x1x3)) / y4x4;

			ostan1 = fabs(c / (1 - c)) * fabs(x1x1 - x0x1);
			ostan2 = fabs(c / (1 - c)) * fabs(x1x2 - x0x2);
			ostan3 = fabs(c / (1 - c)) * fabs(x1x3 - x0x3);
			ostan4 = fabs(c / (1 - c)) * fabs(x1x4 - x0x4);

			x0x1 = x1x1;
			x0x2 = x1x2;
			x0x3 = x1x3;
			x0x4 = x1x4;
			
			

			if (ostan1 < eps and ostan2 < eps and ostan3 < eps and ostan4 < eps)
				yr = true;
			else 
				yr = false;

			count++;
		} while (yr==false);

		cout << "Ответ: \n" << "x(n): " << x1x1 << " " << x1x2 << " " << x1x3 << " " << x1x4 << "\nОценка: " << ostan1 << " " << ostan2 << " " << ostan3 << " " << ostan4 << "\n iter" << count;
	}

	else
		cout << "Не сходится";

}

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	// метод простых интераций
	//task1();

	//метод зейделя
	task2();

	return 0;
}
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

/*
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
*/

class method_simple_iterations
{
private:

	float** systems = new float* [count_equation];

	// Количество уровнений
	int count_equation;

	// Колисчество элементов в уровнениях
	int count_element;

	// Точность вычисления
	float eps = 0;

	//Начало работы
	void getting_started()
	{
		do {
			cout << "Задайте количество уровнений: ";
			cin >> count_equation;
		} while (count_equation <= 0);

		do {
			cout << "Задайте количество переменных в уровнении: ";
			cin >> count_element;
		} while (count_element <= 0);

		do {
			cout << "Задайте точность вычисления: ";
			cin >> eps;
		} while (eps <= -1);

	}

	/*vector<vector<float>> array(count_equation, vector<float>(count_element));
	vector<vector<float>> systems(count_equation);
	systems.push_back(vector<float>());*/

	// Заполнение уравнений системы
	void filling_system()
	{
		for (int i = 0; i < count_equation; i++)
		{
			for (int j = 0; j < count_element; j++)
			{
				cout << "Задайте " << (j + 1) << " переменную " << (i + 1) << " урaвнения: ";
				cin >> systems[i][j];
			}
		}
	}
	
	// Свободные члены
	float* z = new float [count_equation];

	// Построчные нормы матрицы
	float* norma_martitz = new float[count_equation];

	// Норма матрицы
	float c = 0;

	// Нулевое приближение n
	float* x0 = new float[count_equation];

	// Нулевое приближение n+1
	float* x1 = new float[count_equation];

	// Условие остановки для каждого примера
	float* ostan = new float[count_equation];

	// Нормы матриц
	void norma_martitzs()
	{
		// Построчные нормы матрицы
		for (int i = 0; i < count_equation; i++)
		{
			for (int n = 0; n < count_equation; n++)
				for (int m = 0; m < count_element; m++)
				{
					if (i != m)
						norma_martitz[i] += systems[n][m];
				}
			
			norma_martitz[i] = norma_martitz[i] / systems[i][i];
		}

		float max = -100000000000000.00;

		for (int i = 0; i < count_equation; i++)
		{
			if (abs(norma_martitz[i]) > max)
			{
				max = norma_martitz[i];
			}
		}

		// Норма матрицы
		c = max;
	}

	// Условие остановки
	void stop_condition()
	{
		for (int i = 0; i < count_equation; i++)
		{
			ostan[i] = c / (1 - c) * fabs(x0[i] - x1[i]);
		}
	}

	// нулевое приближение n
	void zero_approximation()
	{
		// x(n)
		for (int i = 0; i < count_equation; i++)
		{
			x0[i] = z[i] / systems[i][i];
		}
	}

	void clear()
	{
		// удаление массивов  
		
		delete [] z;
		delete [] x0;
		delete [] x1;
		delete [] norma_martitz;
		delete [] ostan;
	}
	

public:
	
	/*method_simple_iterations(int p_count_equation, int p_count_element)
	{
		count_equation = p_count_equation;
		count_element = p_count_element;

		float** systems = new float*[count_equation];
		for (int i = 0; i < count_element; i++)
			systems[i] = new float[count_element];
	}*/

	void calculation()
	{

		//Начало работы
		getting_started();
		// Заполнение уравнений системы
		filling_system();
		// Нормы матриц
		norma_martitzs();

		if (c < 1 && c > 0)
		{
			// нулевое приближение n
			zero_approximation();

			bool ostanovka;

			do {		
				for (int i = 0; i < count_equation; i++)
				{
					for (int n = 0; n < count_equation; n++)
						for (int m = 0; m < count_element; m++)
						{
							if (i != m)
								x1[i] += (systems[n][m] * x0[n]);
						}

					x1[i] = z[i] - x1[i];
				}

				// Условие остановки
				stop_condition();

				for (int i = 0; i < count_equation; i++)
				{
					x0[i] = x1[i];

					if (ostan[i] < eps)
						ostanovka = true;
				}

			} while (ostanovka == false);

			cout << "Ответ: ";

			for (int i = 0; i < count_equation; i++)
			{
				cout << "x(n):" << x0[i] << "Оценка:" << ostan[i];
			}
		}

		else
			cout << "Система не сходится";

		clear();
	}
	
	/*~method_simple_iterations()
	{
		// удаление массивов  
		for (int i = 0; i < count_equation; i++)
		{
			delete[] systems[i];
		}

		delete[] systems;
	}*/
};


int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	// метод простых интераций
	//task1();

	//метод зейделя
	//task2();

	method_simple_iterations task1/*(4, 4)*/;
	task1.calculation();

	cin.get();
	cin.get();
	cin.get();
	return 0;
}
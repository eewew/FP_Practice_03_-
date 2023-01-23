#include <iostream>
using namespace std;
int main()
{   
	cout << "\tTask 1\n";
	//Користувач вводить з клавіатури час у секундах, що минув з початку дня.Вивести на екран поточний час у годинах, хвилинах і секундах.Порахувати, скільки годин, хвилин і секунд залишилося до півночі.
	int s;
	cout << "Please enter the time in seconds: "; cin >> s;
	double d, h, m, sec;
	d = double(s) / 86400;
	h = (d - int(d)) * 24;
	m = (h - int(h)) * 60;
	sec = (m - int(m)) * 60;
	cout << "Current time is: " << int(h) << " hours, " << int(m) << " minutes, " << int(sec) << " seconds";


	cout << "\n\n\tTask 2\n";
	//Користувач вводить з клавіатури діаметр окружності.Порахувати площу і периметр окружності.
	double D, r, S, P;
	double const pi = 3.14;
	cout << "Enter diametr kola: ";
	cin >> D;
	r = D / 2;
	S = pi * r * r;
	P = 2 * pi * r;
	cout << "Ploshcha kola = " << S <<" cm*cm\n";
	cout << "Perimetr kola = " << P << " cm";


	cout << "\n\nTasks for independent work 2\n";


	cout << "\tTask 1\n";
	//Користувач вводить з клавіатури два числа.Порахувати їхню суму, добуток і середнє арифметичне.
	/*double a, b,sum,dobutok,avg;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	sum = a + b;
	dobutok = a * b;
	avg = (a + b) / 2;
	cout << a << " + " << b << " = " << sum << "\n";
	cout << a << " * " << b << " = " << dobutok << "\n";
	cout  << "Average of " << a <<" + " << b << " = " << avg << "\n"; */


	cout << "\n\n\tTask 2\n";
	//Користувач вводить з клавіатури три числа. Порахувати їхню суму, добуток і середнє арифметичне.
	double a, b, c, sum, dobutok, avg;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	cout << "Enter third number: ";
	cin >> c;
	sum = a + b + c;
	dobutok = a * b * c;
	avg = (a + b + c) / 3;
	cout << a << " + " << b << " + " << c << " = " << sum << "\n";
	cout << a << " * " << b << " * " << c << " = " << dobutok << "\n";
	cout << "Average of " << a << " + " << b << " + " << c << " = " << avg << "\n"; 


	cout << "\n\n\tTask 3\n";
	//Користувач вводить з клавіатури вартість одного ноутбука, їхню кількість і відсоток знижки.Порахувати загальну суму замовлення.
	double laptop_price, total_price, price_after_count;
	int count, discount;
	cout << "Enter price of one laptop: ";
	cin >> laptop_price;
	cout << "Enter how many laptops you need: ";
	cin >> count;
	cout << "Enter discount in percent: ";
	cin >> discount;
	price_after_count = laptop_price * count;
	total_price = price_after_count - (price_after_count / 100) * discount ;
	cout << "Total price is: " << total_price << " hrn.";


	cout << "\n\n\tTask 4\n";
	//Зарплата менеджера — 100$ + 5% від продажів. Користувач вводить з клавіатури загальну суму угод(sell) менеджера за місяць.Порахувати підсумкову зарплату менеджера.
	double const default_salary = 100;
	double deals, after_deals_salary;
	cout << "Enter total sum of manager's deals(USD): ";
	cin >> deals;
	after_deals_salary = default_salary + (deals / 100) * 5;
	cout << "Manager salary this month is: " << after_deals_salary << " USD";


	cout << "\n\n\tTask 5\n";
	//Користувач вводить з клавіатури розмір одного файлу в гігабайтах і швидкість інтернет-з’єднання в бітах на секунду.Порахувати, за скільки годин, хвилин і секунд завантажиться файл.
	int gb, bit;
	cout << "Enter the size of the file(Gb):";
	cin >> gb;
	cout << "Enter internet speed (Mbit/s):";
	cin >> bit;
	gb = gb * 1024 * 8;
	gb /= bit;
	int hours = gb / 3600;
	int min = gb / 60 - hours * 60;
	int secc = gb - min * 60 - hours * 3600;
	cout << "Your file will be downloaded in: " << hours << " hours " << min << " minutes " << secc << " seconds\n\n";
	return 0;
}

// git_pr2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double Pi = 4 * atan(1.);
	double alpha;
	
	cout << "alpha = ";

	cin >> alpha;

	double z1;
	/*double z2;*/

	z1 = 2 * pow(sin(3 * Pi - 2 * alpha), 2) * pow(cos(5 * Pi + 2 * alpha), 2);
	/*z2 = 0.25 - 0.25 * sin((5.0 / 2.0) * Pi - 8 * alpha);*/

	cout << "z1 = " << z1 << endl;
	/*cout << "z2 = " << z2 << endl;*/



	//просто внесені зміни за 3 завданням



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

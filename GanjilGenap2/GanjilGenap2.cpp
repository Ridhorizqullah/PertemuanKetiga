#include <iostream>
using namespace std;

int main()
{
	srand(time(0));


	int nBilA, nBilB;
	string status;

	nBilA = rand() % 11;
	nBilB = rand() % 11;

	if (nBilB == nBilA) {
		status = "bilangan sama";
	}
	else  if (nBilA > nBilB) {
		status = " Bilangan A lebih kecil dari bilangan B";
	}
	else
	{
		status = "Bilangan A lebih kecil dari Bilangan B";
	}

	cout << "Bilangan A = " << nBilA << endl;
	cout << "Bilangan A = " << nBilA << endl;
	cout << "Status Bilangan = " << status << endl;

	system("pause");
}
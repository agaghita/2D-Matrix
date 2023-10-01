#include <iostream>
#include "Matrix.h"
using namespace std;

int main()
{
	// Testing string data types:

	Matrix<string> Mat;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			Mat.AddValue(i, j, "A");
		}
	}

	Mat.AddValue(0, 0, "Aa");
	Mat.AddValue(1, 1, "Aaa");
	Mat.AddValue(2, 2, "Aaaa");
	Mat.AddValue(3, 3, "Aaaaa");
	Mat.AddValue(4, 4, "Aaaaaa");

	cout << "Print Matrix:" << endl;
	Mat.Print();

	cout << endl << "Print Raw 1:" << endl;
	Mat.PrintRow(1);

	cout << endl << "Check if 'a' belong to the Matrix:" << endl;
	if (Mat.BelongTo("a"))
		cout << "True" << endl;
	else
		cout << "False" << endl;

	cout << endl << "Check if 'A' belong to the Matrix:" << endl;
	if (Mat.BelongTo("A"))
		cout << "True" << endl;
	else
		cout << "False" << endl;

	cout << endl << "Max Value of the Matrix:" << endl;
	cout << Mat.MaxStringValue() << endl;


	// Testing int data types:

	//Matrix<int> Mat2;

	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = 0; j < 7; j++)
	//	{
	//		Mat2.AddValue(i, j, 0);
	//	}
	//}

	//Mat2.AddValue(0, 0, 1);
	//Mat2.AddValue(1, 1, 3);
	//Mat2.AddValue(2, 2, 5);
	//Mat2.AddValue(3, 3, 3);
	//Mat2.AddValue(4, 4, 1);

	//cout << "Print Matrix:" << endl;
	//Mat2.Print();

	//cout << endl << "Print Raw 1:" << endl;
	//Mat2.PrintRow(1);

	//cout << endl << "Check if 6 belong to the Matrix:" << endl;
	//if (Mat2.BelongTo(6))
	//	cout << "True" << endl;
	//else
	//	cout << "False" << endl;

	//cout << endl << "Check if '1' belong to the Matrix:" << endl;
	//if (Mat2.BelongTo(1))
	//	cout << "True" << endl;
	//else
	//	cout << "False" << endl;

	//cout << endl << "Max Value of the Matrix:" << endl;
	//cout << Mat2.MaxValue() << endl;

}


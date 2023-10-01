#pragma once
#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Matrix
{
private:
	T Mat[5][7];
public:
	void AddValue(int row, int col, T Value)
	{
		Mat[row][col] = Value;
	};
	bool BelongTo(T Value)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (Mat[i][j] == Value)
					return true;
			}
		}
		return false;
	};
	void PrintRow(int row)
	{
		row--;
		for (int i = 0; i < 7; i++)
		{
			cout << Mat[row][i] << ", ";
		}
		cout << endl;
	};
	void Print()
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				cout << Mat[i][j] << ", ";
			}
			cout << endl;
		}
	};
	T MaxValue()
	{
		T Max = Mat[0][0];
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (Mat[i][j] > Max)
					Max = Mat[i][j];
			}

		}
		return Max;
	};

	T MaxStringValue()
	{
		T longest = Mat[0][0];
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (Mat[i][j].length() > longest.length())
					longest = Mat[i][j];
			}
		}
		return longest;
	};
};
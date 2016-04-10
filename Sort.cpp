//Kshir Ramruthan (214502398)
//Tut 6

#include<iostream>
#include<string>

using namespace std;

template<typename T>
void sort(T arr[],const int len)
{
	for (int i = 0; i < (len - 1); i++)
	{
		for (int k = i + 1; k < len; k++)
		{
			if (arr[k]>arr[i])
			{
				T temp = arr[k];
				arr[k] = arr[i];
				arr[i] = temp;
			}//End if
		}//End inner for
	}//End outer for
}//End function

int main()
{
	const int len = 5;
	int arrI[len] = {4,0,5,3,8};
	float arrF[len] = {5.2,4.9,1.9,9.4,6.1};
	string arrS[len] = {"a","c","h","w","k"};

	sort(arrI, len);
	sort(arrF, len);
	sort(arrS, len);

	for (int j = 0; j < len;j++)
	{
		cout << arrI[j] << ";";
	}

	cout << endl;

	for (int j = 0; j < len; j++)
	{
		cout << arrF[j] << ";";
	}

	cout << endl;

	for (int j = 0; j < len; j++)
	{
		cout << arrS[j] << ";";
	}

	cout << endl;
	return 1;
}
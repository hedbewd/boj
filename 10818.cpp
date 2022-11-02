#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	int arr[1000000] = { 0 };
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}

	int max, min;
	max = arr[0];
	min = arr[0];
	for (int i = 0; i < num; i++) {
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	cout << min << " " << max;

	return 0;
}
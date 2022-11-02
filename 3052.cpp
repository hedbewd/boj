#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	int naturalNum[10] = { 0 };
	for (int i = 0; i < 10; i++)
		cin >> naturalNum[i];

	int remainderNum[10] = { 0 };
	for (int i = 0; i < 10; i++)
		remainderNum[i] = naturalNum[i] % 42;

	int remainderNumCopy[10] = { 0 };
	for (int i = 0; i < 10; i++)
		remainderNumCopy[i] = remainderNum[i];

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < i; j++) {
			if (remainderNum[i] == remainderNum[j])
				remainderNumCopy[i] = -1;
		}
	}

	int difRemainderNumCounter = 0;
	for (int i = 0; i < 10; i++) {
		if (remainderNumCopy[i] != -1)
			difRemainderNumCounter++;
	}

	cout << difRemainderNumCounter;

	return 0;
}
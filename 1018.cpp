#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

char bw[8][9] = {
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
};
char wb[8][9] = {
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	char** arr_original = new char* [N];
	for (int i = 0; i < N; i++) {
		arr_original[i] = new char[M];
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> arr_original[i][j];
		}
	}

	int count_bw = 0;
	int count_wb = 0;
	int min = 65;
	for (int i = 0; i <= N - 8; i++) {
		for (int j = 0; j <= M - 8; j++) {
			for (int k = i, m = 0; k < i + 8; k++, m++) {
				for (int l = j, n = 0; l < j + 8; l++, n++) {
					if (bw[m][n] != arr_original[k][l]) {
						count_bw++;
					}
					if (wb[m][n] != arr_original[k][l]) {
						count_wb++;
					}
				}
			}
			if (min > count_bw)
				min = count_bw;
			if (min > count_wb)
				min = count_wb;
			count_bw = 0;
			count_wb = 0;
		}
	}

	cout << min;

	for (int i = 0; i < N; i++) {
		delete[] arr_original[i];
	}
	delete[] arr_original;

	return 0;
}
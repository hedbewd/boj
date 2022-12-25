#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct {
	int x;
	int y;
}Position;

bool cmp(const Position& p1, const Position& p2)
{
	if (p1.y == p2.y)			//��ǥ x�� ���ٸ�
		return p1.x < p2.x;		//��ǥ y�������� �ø�����
	else
		return p1.y < p2.y;		//��ǥ x�������� �ø�����
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	Position* arr = new Position[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i].x >> arr[i].y;

	sort(arr, arr + n, cmp);

	for (int i = 0; i < n; i++)
		cout << arr[i].x << " " << arr[i].y << "\n";

	delete[] arr;
	return 0;
}
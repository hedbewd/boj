#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int num1, int num2);

int tree[100000];
int tree_distance[100000];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> tree[i];
	}

	sort(tree, tree + N);	// 가로수 위치 정렬

	// 각 가로수의 간격 계산
	for (int i = 0; i < N - 1; i++) {
		tree_distance[i] = tree[i + 1] - tree[i];
	}

	// 간격의 최대공약수
	int gcd_final = tree_distance[0];
	for (int i = 1; i < N - 1; i++) {
		gcd_final = gcd(gcd_final, tree_distance[i]);
	}

	int count = 0;
	for (int i = 0; i < N - 1; i++) {
		count += tree_distance[i] / gcd_final - 1;
	}

	cout << count << '\n';

	return 0;
}

int gcd(int num1, int num2)
{
	if (num2 == 0) return num1;
	return gcd(num2, num1 % num2);
}
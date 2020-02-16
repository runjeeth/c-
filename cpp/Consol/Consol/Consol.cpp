#include "pch.h"
#include <iostream>
#include<vector>
using namespace std;

vector<long long> factoral(100000000, 0);
long long factor(int N) {
	if (factoral[N] != 0) {
		return factoral[N];
	}
	factoral[N] = N * factor(N - 1);
	return factoral[N];
}
int main()
{
	int testCases;
	cout << "hi";
	cin >> testCases;
	while (testCases--) {
		int N;
		cin >> N;
		long long sum = N * (N + 1) / 2;
		long long product = factor(N);
		if (product % sum == 0) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

}
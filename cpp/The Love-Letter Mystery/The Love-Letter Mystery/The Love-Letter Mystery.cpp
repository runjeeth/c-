#include"pch.h"
#include<algorithm>
#include<vector>
#include<stack>
#include<string>
#include<iostream>
#include<cmath>
#include<map>
#include<utility>
#include<set>
#include<list>
#include <iterator> 
#include<deque>
#include<array>
#include<tuple>
#include<forward_list>
#include<queue>
using namespace std;
#define lli long long int
int main() {
	lli testcases;
	cin >> testcases;
	while (testcases--) {
		string given;
		cin >> given;
		lli count = 0;
		for (int i = 0; i < given.size()/2; i++) {
			if (given[i] == given[given.size() - i - 1]) {
				continue;
			}
			else {
				lli diff = max(given[i], given[given.size() - i - 1]) - min(given[i], given[given.size() - i - 1]);
				count += diff;
			}
		}
		cout << count<<endl;
	}
}
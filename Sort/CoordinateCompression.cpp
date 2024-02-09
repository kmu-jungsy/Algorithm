#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> v;
	vector<int> v1;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x; 
		v.push_back(x);
		v1.push_back(x);
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());

	for (int i = 0; i < v1.size(); i++) {
		cout << lower_bound(v.begin(), v.end(), v1[i]) - v.begin() << " ";
	}

	
} 
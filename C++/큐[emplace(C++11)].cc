#include <iostream>
#include <queue>
using namespace std;

int main(int avg, char** argv) {
	queue<pair<int, int> > q;
	int N1; cin >> N1;
	int N2; cin >> N2;
	q.emplace(N1, N2);
	cout << q.front().first << " " << q.front().second;
	cout << q.size() << q.empty();
	q.pop();
	cout << q.size() << q.empty();
}

#include <iostream>
#include <queue>
using namespace std;

int main(int avg, char** argv) {
	queue<int> q;
	int N1; cin >> N1;
	q.push(N1);
	int N2; cin >> N2;
	q.push(N2);
	cout << q.front() << q.back();
	cout << q.empty() << q.size();
	q.pop();
	cout << q.size() << q.front();
}

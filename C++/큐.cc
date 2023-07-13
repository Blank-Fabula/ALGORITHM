#include <iostream>
#include <queue>
using namespace std;

int main(int avg, char** argv) {
	queue<int> q1;
	int N1; cin >> N1;
	q1.push(N1);
	int N2; cin >> N2;
	q1.push(N2);
	cout << "front: " << q1.front() << "\n";
	cout << "back: " << q1.back() << "\n";
	cout << "empty?: " << q1.empty() << "\n";
	cout << "size: " << q1.size() << "\n";
	q1.pop();
	cout << "size: " << q1.size() << "\n";
	cout << "front: " << q1.front() << "\n";
	queue<int> q2;
	q2.push(N1), q2.push(N2);
	//N1이 N2보다 작으면 q1, 그렇지 않으면 q2;
	//q.size()값 비교 -> q.front()값 비교;
	if (q1 > q2) cout << "q1";
	else if (q2 > q1)cout << "q2";
	else cout << "same";
}

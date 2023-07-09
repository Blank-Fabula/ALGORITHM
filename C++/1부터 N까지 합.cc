//1부터 N까지 하나씩 더하는 방법;
int sum(int N) {
	int total = 0;
	for (int i = 1; i <= N; i++) {
		total += i;
	}
return total; }
//수학식을 이용하는 방법;
int sum(int N) {
	int total = 0;
	total = N * (1 + N) / 2;
return total; }

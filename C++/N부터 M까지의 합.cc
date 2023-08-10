//N부터 M까지 하나씩 더하는 방법;
int sum(int& N, int& M) { int total = 0;
	for (int i = N; i <= M; i++) { total += i; }
return total; }

//수학식을 이용하여 N부터 M까지 더하는 방법;
int sum(int& N, int& M) { int total = 0;
	total = (N + M) * (M - N + 1) / 2;
return total; }

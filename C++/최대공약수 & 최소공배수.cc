//최대공약수(Greatest Common Divisor);
int gcd(int A, int B) {
	if (B == 0) return A;
	return gcd(B, A % B);
}
//최소공배수(Least Common Multiple);
int lcm(int A, int B) {
	return A * B / gcd(A, B);
}

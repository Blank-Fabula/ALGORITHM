#include <iostream>
#include <ctime>
using namespace std;

int main(){
        clock_t start, stop;
	start = clock();
	//측정하는 코드;
        stop = clock();
	cout << (double)(stop - start) / CLOCKS_PER_SEC;
return 0; }

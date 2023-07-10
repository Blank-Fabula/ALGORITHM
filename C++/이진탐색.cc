//오름차순으로 정렬된 배열에서의 이진탐색;
int binary_search(int size, vector<int>& list, int target) {
	int low = 0, mid, high = size - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (list[mid] == target) return mid;
		if (target > list[mid]) low = mid + 1;
		else high = mid - 1;
	}
return -1; }

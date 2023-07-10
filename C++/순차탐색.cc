//순차탐색(sequential_search)
int seq_search(int size, vector<int>& list, int target) {
	for (int i = 0; i < size; i++) {
		if (list[i] == target) return i;
	}
return -1; }
//오름차순으로 정렬된 배열에서의 순차탐색(sequential_search_sorted)
int seq_search_srt(int size, vector<int>& list, int target) {
	for (int i = 0; i < size; i++) {
		if (list[i] == target) return i;
		if (list[i] > target) return -1;
	}
return -1; }

int seq_search(int size, vector<int>& list, int target) {
	for (int i = 0; i < size; i++) {
		if (list[i] == target) return i;
	}
return -1; }

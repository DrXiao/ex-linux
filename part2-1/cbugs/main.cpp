
struct body {
	int i;
	int N;
};

int recursive(int i, int N) {
	if (N < 0)
		return i;
	struct body body = {i, N};
	int x = i + N;
	return recursive(i + 1, N - 1);
}

int main(void) {
	
	recursive(0x7FFFFFFF, 0x7FFFFFFF);

	return 0;
}

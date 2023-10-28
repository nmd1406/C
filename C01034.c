#include <stdio.h>
#include <math.h>

int main() {
	int m, n;
    int count = 0;
	scanf("%d%d", &m, &n);
	int start = sqrt(m);
	start = (start * start == m) ? start : start + 1;
	int end = sqrt(n);
	int i;
    for(i = start; i <= end; i++) {
        ++count;
	}
    printf("%d\n", count);
	for(i = start; i <= end; i++) {
		printf("%d\n", i * i);
	}
	return 0;
}

#include <stdio.h>
int main() {
    int track[11];
    int n, count = 0;
    while (1) {
        while (scanf("%d", &n) != EOF) {
            count++;
            track[count - 1] = n;
        }
        for (int i = 0; i < count; i++) {
            printf("%d ", track[i]);
        }
        // brute force
        int res;
        for (int i = 0; i < count; i++) {
            res = track[i];
            for (int j = i + 1; j < count; j++) {
            }
        }

        count = 0;
    }
}
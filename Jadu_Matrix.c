#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];

    // Input
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Not square? -> NO
    if (n != m) {
        printf("NO");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            int is_primary = (i == j);
            int is_secondary = (j == n - 1 - i);

            // If primary or secondary diagonal → value must be 1
            if (is_primary || is_secondary) {
                if (a[i][j] != 1) {
                    printf("NO");
                    return 0;
                }
            }

            // Otherwise value must be 0
            else {
                if (a[i][j] != 0) {
                    printf("NO");
                    return 0;
                }
            }
        }
    }

    printf("YES");
    return 0;
}

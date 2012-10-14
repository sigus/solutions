#include <stdio.h>

int main() {
    int sum = (1 + 100)*100/2;
    int sq_sum = sum*sum;
    int sum_sq = 100*(100 + 1)*(2*100 + 1)/6;
    printf("%d\n", sq_sum - sum_sq);
    return 0;
}


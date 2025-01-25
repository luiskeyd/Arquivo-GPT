#include <stdio.h>
int main(){
    int m = 2, n = 3, p = 2;
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int B[3][2] = {{10, 11}, {20, 21}, {30, 31}};

    int C[2][2] = {};
    for(int i = 0; i < m; i++){
        for(int j = 0; j<p; j++){
            for(int k = 0; k < n; k++){
                C[i][j] += A[i][k]*B[k][j];
            }
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include <iostream>
using namespace std;

void Merge(int A[], int B[], int n, int m) {
    int i = 0;
    int j = 0;
    int k = 0;
    int C[n + m];

    while (i <= n - 1 && j <= m - 1) {
        if (A[i] > B[j]) {
            C[k++] = B[j++];
        } else {
            C[k++] = A[i++];
        }
    }

    while (i <= n - 1) {
        C[k++] = A[i++];
    }

    while (j <= m - 1) {
        C[k++] = B[j++];
    }


    for (int index = 0; index < n + m; index++) {
        cout << C[index] << " ";
    }
    cout << endl;
}

int main() {
    int n = 5;
    int A[] = {10, 20, 30, 40, 50};

    int m = 4;
    int B[] = {50, 60, 70, 80};

    Merge(A, B, n, m);

    return 0;
}


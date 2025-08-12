// Name: Advika Bhosle
// PRN: 24070123007
//Batch: EnTc A1

#include <iostream>
using namespace std;

int main() {
    int mat[10][10], n, sum = 0;

    cout << "Enter size of square matrix: ";
    cin >> n;

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
            if (i == j) {
                sum += mat[i][j];  
            }
        }
    }

    cout << "Sum of main diagonal: " << sum;

    return 0;
}

/*
OUTPUT
Enter size of square matrix: 3
Enter matrix elements:
1 1 1
2 2 2
3 3 3
Sum of main diagonal: 6

=== Code Execution Successful ===

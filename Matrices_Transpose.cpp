// Name: Advika Bhosle
// PRN: 24070123007
//Batch: EnTc A1

#include <iostream>
using namespace std;

int main() {
    int mat[10][10], trans[10][10], n;

    cout << "Enter size of square matrix: ";
    cin >> n;

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            trans[j][i] = mat[i][j]; 
        }
    }

    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
OUTPUT
Enter size of square matrix: 
2
Enter matrix elements:
1 0 
6 1
Transpose of the matrix:
1 6 
0 1 


=== Code Execution Successful ===

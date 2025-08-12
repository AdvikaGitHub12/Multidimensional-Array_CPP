// Name: Advika Bhosle
// PRN: 24070123007
//Batch: EnTc A1

#include <iostream>
using namespace std;

int main() {
    int mat[3][3];
    int i, j;

    cout << "Enter elements of 3x3 matrix:\n";
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cin >> mat[i][j];
        }
    }

    cout << "\nThe 3x3 matrix is:\n";
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
OUTPUT
Enter elements of 3x3 matrix:
2 4 6
3 6 9
4 8 0

The 3x3 matrix is:
2 4 6 
3 6 9 
4 8 0 


=== Code Execution Successful ===

// Name: Advika Bhosle
// PRN: 24070123007
//Batch: EnTc A1

#include <iostream>
using namespace std;

int main() {
    int r, c;
    int mat1[10][10], mat2[10][10], sum[10][10];
    int i, j;

    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    cout << "Enter elements of Matrix 1:\n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter elements of Matrix 2:\n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cin >> mat2[i][j];
        }
    }
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    cout << "\nSum of the two matrices:\n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
OUTPUT == 
Enter number of rows and columns: 3
3
Enter elements of Matrix 1:
1 0 0
2 0 0
3 0 0
Enter elements of Matrix 2:
0 0 1
0 0 2
0 0 3

Sum of the two matrices:
1 0 1 
2 0 2 
3 0 3 


=== Code Execution Successful ===

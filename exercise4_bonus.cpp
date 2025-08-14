#include <iostream>
using namespace std;

int mat[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

int mat2[3][2] = {
    {1, 2},
    {3, 4},
    {5, 6}
};

void multiplyMatrices(int mat1[][3], int mat2[][2], int result[][2], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int result[2][2];
    
    multiplyMatrices(mat, mat2, result, 2, 3, 2);
    
    cout << "Resultant matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
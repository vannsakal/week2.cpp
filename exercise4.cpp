#include <iostream>
using namespace std;

int mat[3][3] = {
{ 1, 2, 3 },
{ 4, 5, 6 },
{ 7, 8, 9 }
};

int sumRow(const int m[][3], int row){
    int sum=0;
    for(int i=0; i<3; i++){
        sum += m[row-1][i];
    }
    return sum;
};
int sumCol(const int m[][3], int col){
    int sum=0;
    for(int i=0; i<3; i++){
    sum += m[i][col-1];
    }
    return sum;
};


int main(){
    cout<<"Sum of Row 1: "<< sumRow(mat, 1)<<endl;
    cout<<"Sum of Row 2: "<< sumRow(mat, 2)<<endl;
    cout<<"Sum of Row 3: "<< sumRow(mat, 3)<<endl;
    cout<<"Sum of Col 1: "<< sumCol(mat, 1)<<endl;
    cout<<"Sum of Col 2: "<< sumCol(mat, 2)<<endl;
    cout<<"Sum of Col 3: "<< sumCol(mat, 3)<<endl;
}
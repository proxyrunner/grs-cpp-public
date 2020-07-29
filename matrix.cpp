#include <iostream>
using namespace std;

void printSpiral(int m, int n){
    int A[4][4] = {{1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}};

    int current_row = 0, current_column = 0;
    while (current_row < 4 && current_column < 4){
        for(int i = current_column; i < n; i++){
            cout << A[current_row][i] << " ";
        }
        current_row++;
        for(int i = current_row; i < m; ++i){
            cout << A[i][n - 1] << " ";
        }
        n--;
        if(current_row < m){
            for(int i = n - 1; i >= current_column; --i){
                cout << A[m - 1][i] << " ";
            }
            m--;
        }
        if(current_column < n){
            for(int i = m - 1; i >= current_row; --i){
                cout << A[i][current_column] << " ";
            }
            current_column++;
        }
    }
}

int main(){
    printSpiral(4,4);
    printSpiral(14,14);
}
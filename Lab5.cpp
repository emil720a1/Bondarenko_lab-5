
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin>>n;
    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = 0;
        }

    }
    for (int i = 0; i < n; i++) {
            matrix[i][i] = 1;
        }

cout<<"Одинична матриця розміром"<< " "<<n <<" на "<<n<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
    cout << endl;}



return 0;
}

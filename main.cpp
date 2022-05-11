#include <bits/stdc++.h>
using namespace std;
int n, m, p, y;
vector<vector<vector<int>>> matrix;
vector<int> v1;
void conversion(){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < p; k++) {
                v1[i * m * p + j * p + k] = matrix[i][j][k];
            }
        }
    }
}

void print(){
    for (int i = 0; i < y; ++i) {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}


int main() {
    cout << "Enter 3 integers to represent the size of the 3D matrix it MUST be greater than zero : "<<endl;
    cin >> n >> m >> p;
    while (n <= 0 || m <= 0 || p <= 0){
        cout<<"INVALID dimensions ...."<<endl<<"Enter Valid Inputs: ";
        cin >> n >> m >> p;
    }

    matrix.resize(n, vector<vector<int>>(m, vector<int>(p)));
    y = n * m * p;
    v1.resize(y);

    int num;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < p; k++) {
                cout << "Enter value of the given cell : " << i + 1 << " , " << j + 1 << " , " << k + 1 << endl;
                cin >> num;
                matrix[i][j][k] = num;
            }
        }
    }
    conversion();
    print();

    return 0;
}

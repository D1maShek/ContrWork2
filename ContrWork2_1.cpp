#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

const int strings = 11;
const int stolbi = 10;

double geomZnach(double matrix[][stolbi], int stolb) {
    double a = 1.0;

    for (int i = 0; i < strings - 1; i++) {
        a *= matrix[i][stolb];
    }

    return pow(a, 1.0 / (strings - 1));
}

int main() {
    setlocale(LC_ALL, "");
    double A[strings][stolbi];

    cout << "Введите элементы матрицы 11x10:" << endl;
    for (int i = 0; i < strings; i++) {
        for (int j = 0; j < stolbi; j++) {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }

    for (int j = 0; j < stolbi; j++) {
        A[strings - 1][j] = geomZnach(A, j);
    }

    cout << "Последняя строка :" << endl;
    for (int j = 0; j < stolbi; j++) {
        cout << A[strings - 1][j] << ", ";
    }
    cout << endl;

    return 0;
}
#include <iostream>
#include <clocale>
using namespace std;

int max(int numbers[], int n) {
    if (n == 1) {
        return numbers[0];
    }

    int maxOther = max(numbers, n - 1);

    if (numbers[n - 1] > maxOther) {
        return numbers[n - 1];
    }
    else {
        return maxOther;
    }
}

int main() {
    setlocale(LC_ALL, "");
    int n;

    cout << "Введите количество элементов: ";
    cin >> n;

    int* numbers = new int[n];

    cout << "Введите " << n << " чисел:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Элемент " << i + 1 << ": ";
        cin >> numbers[i];
    }

    int maximum = max(numbers, n);
    cout << "\nМаксимальное число: " << maximum << endl;
    delete[] numbers;

    return 0;
}
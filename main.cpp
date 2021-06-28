// №2.3
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

    int arr[10];
    //ввод данных/
    cout << "Заполните массив: "; 
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    //сортировка пузырьком
    for (int i = 0; i < 9; i++) { 
        for (int j = 0; j < 9 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    // вывод массива после сортировки
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";




	return 0;
}
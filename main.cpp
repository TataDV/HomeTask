/*1. Сделать заголовочный файл с некоторыми математическими функциями.
2. Сделать заголовочный файл с функциями по разделению массива на 2 части.
3. Сделать программу, которая показывала бы работу функций из ваших заголовочных файлов.
4*. Выложить результаты на GitHub.
*/
#include <iostream>
#include "mathematical_functions.h"
#include "splitting_array.h"

using namespace std;

void InputArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Enter " << i + 1 << " element : ";
        cin >> arr[i];
    }
}

void PrintArray(int arr[], int size)
{
    cout << "{ ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << "}" << endl;
}

int main() {
    const int SIZE = 10;
    int arr_1[SIZE];

    int arr_2[SIZE/2];
    int arr_3[SIZE/2];

    int arr_4[SIZE/2];
    int arr_5[SIZE/2];

    InputArray(arr_1, SIZE);
    PrintArray(arr_1, SIZE);

    int max = FindMax(arr_1, SIZE);
    cout << "max = " << max << endl;

    int min = FindMin(arr_1, SIZE);
    cout << "min = " << min << endl;

    int sum = SumArray(arr_1, SIZE);
    cout << "sum = " << sum << endl;

    int average = AverageArray(arr_1, SIZE);
    cout << "average = " << average << endl;

    int product = ProductArray(arr_1, SIZE);
    cout << "product = " << product << endl;


    SplitEvenArray(arr_1, SIZE, arr_2);
    SplitOddArray(arr_1, SIZE, arr_3);
    SplitHalfArray(arr_1,SIZE,arr_4, arr_5);

    cout << "Elements in even positions" << endl;
    PrintArray(arr_2, SIZE/2);

    cout << "Elements in odd positions" << endl;
    PrintArray(arr_3, SIZE/2);


    cout << "Dividing the original array in half" << endl;
    PrintArray(arr_4, SIZE/2);
    PrintArray(arr_5, SIZE/2);

    return 0;
}

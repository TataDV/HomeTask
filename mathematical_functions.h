# pragma once
#include <iostream>
using namespace std;

int FindMax(int arr[], int size) // Функция поиска максимального значения
{
    int max = arr[0];
    for (int i = 0; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int FindMin(int arr[], int size) // Функция поиска минимального значения
{
    int min = arr[0];
    for (int i = 0; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int SumArray (int arr[], int size) // Функция поиска суммы всех введенных элементов массива
{
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int AverageArray (int arr[], int size) // Функция поиска среднего значения из введенных элементов массива
{
    int sum = 0;
    int average = 0;

    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    average = sum / size;

    return average;
}

int ProductArray (int arr[], int size) // Функция поиска произведения всех введенных элементов массива
{
    int product = 1;
    for (int i = 0; i < size; ++i) {
        product *= arr[i];
    }
    return product;
}

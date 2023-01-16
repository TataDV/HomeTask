# pragma once
#include <iostream>
using namespace std;

void SplitEvenArray(int arrS[], int size, int arrD[]){ // Функция выделения из исходного массива элементов,
    // находящихся на четных позициях
    for (int i = 0, j = 0; i < size; i += 2, j++) {
        arrD[j] = arrS[i];
    }
}
void SplitOddArray(int arrS[], int size, int arrD[]) { // Функция выделения из исходного массива элементов,
    // находящихся на нечетных позициях
    for (int i = 1, j = 0; i < size; i += 2, j++) {
        arrD[j] = arrS[i];
    }
}

void SplitHalfArray(int arrS[], int size, int arrD[], int arrD_2[])//Функция деления массива пополам
{
    for (int i = 0; i < size/2; ++i) {
        arrD [i] = arrS[i];
    }
    for (int i = size/2, j = 0; i < size; i++, j++) {
        arrD_2 [j] = arrS[i];
    }
}

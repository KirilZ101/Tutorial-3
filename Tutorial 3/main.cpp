//
//  main.cpp
//  Tutorial 3
//
//  Created by Кирилл Заболотний on 11.02.2024.
//
#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, const char * argv[]) {
    srand(time(NULL));
    int result = 1 + rand() % 20;
    cout << result << endl;
    //Калькулятор чисел
    float num1, num2, res;
    cout << "Enter num1: ";
    cin >> num1;
    
    cout << "Enter num2: ";
    cin >> num2;
    
    //+,-,*,/
    char math;
    cout << "Enter math symbol: ";
    cin >> math;
    cout << "text";
    return 0;
}

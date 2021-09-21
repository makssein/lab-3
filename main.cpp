#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    int n, num, compos, number;
    int min = INT_MAX;
    compos = 1;
    cout << "Введите количество(>0) чисел, которое Вы хотите ввести" << endl;
    cin >> n;
    if (n > 0){
        for (int i = 0; i < n; i++){
            cin >> num;
            if(num>= -2 && num<= 20){
                compos*=num;
                if(num<min){
                    min = num;
                    number = i; // счет числа будет начинаться с 0, если нужно начал считать с 1, то можно написать number = i+1
                }
            }
        }
        cout << "Произведение:" << compos << "Минимальное число: " <<  min << "Номер числа в последовательности:" << number << endl;
    }
    else {
        cout << "Количество чисел не может быть меньше или равным 0, введите корректное N" << endl;
    }


    return 0;
}

#include<iostream>
using namespace std; 
void foo1() {
    cout << "введите n: ";
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++)  {
        for(int j = 0; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int fakt(int a) {
    if (a == 1) {
        return 1;
    }
    return fakt(a-1) * a;
}

void binom() {
    cout << "введите n: ";
    int n;
    cin >> n;
    long long pred_C = 1;
    for(int k = 1; k <= n; k++) {
        pred_C = pred_C*(n-k+1)/k;
        cout << "k = " << k << " ";
        cout << pred_C << endl;
    }
}

void sr_ar() {
    cout << "для выхода введите -1" << endl;
    int num;
    int sm = 0;
    int index = 0;
    while(num != -1) {
        cin >> num;
        if(num != -1) {
            sm += num;
            index += 1;
        }
    }
    cout << double(sm)/index << endl;
}


int main() 
{ 
    cout << "1 - Числовой треугольник" << endl;
    cout << "2 - Нахождение биномиальных коэффициентов" << endl;
    cout << "3 - Вычисление среднего арифметического введенных точек на прямой" << endl;
    cout << "для выхода укажите любое другое число" << endl;
    cout << "выбермте режим: " << endl;
    int number;
    cin >> number;
    switch (number)
    {
    case 1:
        foo1();
        break;
    case 2:
        binom();
        break;
    case 3:
        sr_ar();
        break;
    default:
        cout << "команда под номерам " << number << " не опр.";
    }
    return 0;
}


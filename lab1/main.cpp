#include <iostream>
#include <bitset>
using std::cout;
using std::cin;
using std::endl;

int main()
{
 cout<<"Фамилия:\tЛеонов\n"<<
             "Имя:\tАндрей\n"<<
             "Отчество:\tМаксимович\n"<<
             "Номер группы:\t231-3213\n";
             

cout << "int размер в байтах:\t" <<sizeof(int) <<endl;
 cout<< "max int:\t" << int(0b01111111111111111111111111111111) << endl;
 cout<<"min int:\t" << int(0b10000000000000000000000000000000) << endl;

cout << "long размер в байтах:\t" <<sizeof(long) <<endl;
 cout<< "max long:\t" << long(0b0111111111111111111111111111111111111111111111111111111111111111) << endl;
 cout<<"min long:\t" << long(0b1000000000000000000000000000000000000000000000000000000000000000) << endl;
            
cout << "char размер в байтах:\t" <<sizeof(char) <<endl;
 cout<< "max char:\t" << char(0b11111111) << endl;
 cout<<"min char:\t" << char(0b00000000) << endl;
 
cout << "short размер в байтах:\t" <<sizeof(short) <<endl;
 cout<< "max short:\t" << short(0b0111111111111111) << endl;
 cout<<"min short:\t" << short(0b1000000000000000) << endl;

cout << "long long размер в байтах:\t" <<sizeof(long long) <<endl;
 cout<< "max long long :\t" << (long long)(0b0111111111111111111111111111111111111111111111111111111111111111) << endl;
 cout<<"min long long:\t" << (long long)(0b1000000000000000000000000000000000000000000000000000000000000000) << endl;

cout << "double размер в байтах:\t" <<sizeof(double) <<endl;
 cout<< "max double :\t" << double(__DBL_MIN__) << endl;
 cout<<"min double:\t" << double(__DBL_MAX__) << endl;

cout << "float размер в байтах:\t" <<sizeof(float) <<endl;
 cout<< "max float :\t" << double(__FLT_MIN__) << endl;
 cout<<"min float:\t" << double(__FLT_MAX__) << endl;
 
int num;
cin >> num;
cout << "bin num:\t" << std::bitset<8*sizeof(int)>(num) << endl;
cout << "hex num:\t" << std::hex << num << std::dec << endl;
cout << "oct num:\t" << std::oct << num << std::dec << endl;

int a;
int b;
cout << "введите a:\t";
cin >> a;
cout << endl;
cout << "введите b\t";
cin >> b;
cout << endl;
cout << "х равен\t" << b/float(a) << endl;

int X = 50;
int Y= 101;

cout << "середина кр.:\t"<<float(X)+ (Y-X)/2.0 << endl;
}
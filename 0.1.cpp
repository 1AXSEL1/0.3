#include <iostream>

using namespace std;

int main(){
    int number;
 cout<<("Введіть трьох значне число");
cin >> number;
  
int first_digit = number / 100;          
 
int second_digit = (number / 10) % 10;   
 
int third_digit = number % 10;         

int sum = first_digit + second_digit + third_digit; 
 
cout << "Сума цифр числа " << number << " дорівнює: " << sum << endl;

    return 0;
}
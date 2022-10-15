#include <iostream>
using namespace std;

int val(char c) {
   if (c >= '0' && c <= '9')
      return (int)c - '0';
   else
      return (int)c - 'A' + 10;
}

int convert(string str, int base) {
   int len = str.length();
   int power = 1;
   int num = 0;
   int i;
   for (i = len - 1; i >= 0; i--) {
      if (val(str[i]) >= base) {
         printf("Invalid Number");
         return -1;
      }
      num += val(str[i]) * power;
      power = power * base;
   }
   return num;
}

int main(){
    cout << "Enter number and its base" << endl;
    string num;
    int base;
    cin >> num >> base;
    cout << convert(num, base) << endl;
}
#include <iostream>
#include <algorithm>
using namespace std;

char reVal(int num)
{
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}
 
string convert(string res, int base, int inputNum)
{
    int index = 0; 
    while (inputNum > 0) {
        res.push_back(reVal(inputNum % base));
        index++;
        inputNum /= base;
    }
    reverse(res.begin(), res.end());
 
    return res;
}

int main(){
    cout << "Enter decimal number and base to convert it to" << endl;
    int num, base;
    string res;
    cin >> num >> base;
    cout << convert(res, base, num) << endl;
}
#include <iostream>

using namespace std;

void print_binary(int n){
    if(n == 0) return;
    print_binary(n/2);
    cout << n % 2;
}

void print_octal(int n){
    if(n == 0) return;
    print_octal(n/8);
    cout << n % 8;
}

void print_hexadecimal(int n){
    if(n == 0) return;
    print_hexadecimal(n/16);
    int r = n % 16;
    switch(r){
        case 15: cout << "F"; break;
        case 14: cout << "E"; break;
        case 13: cout << "D"; break;
        case 12: cout << "C"; break;
        case 11: cout << "B"; break;
        case 10: cout << "A"; break;
        default: cout << r;
    }
	
}

int main(){
    int n;
    while(cin >> n){
        if(n == 0){
            cout << "0 = 0, 0, 0" << endl;
            continue;
        }
        cout << n << " = ";
        print_binary(n);
        cout << ", ";
        print_octal(n);
        cout << ", ";
        print_hexadecimal(n);
        cout << endl;
    }
}

#include <iostream>

using namespace std;

int main(){
    int e,c;
    int i = 0;
    cin >> e >> c;
    if (c > 99) return 0;
    while (e >= 500){
        i++;
        e -= 500;
    }
    cout << "Banknotes of 500 euros: " << i << endl;
    i = 0;
    while (e >= 200){
        i++;
        e -= 200;
    }
    cout << "Banknotes of 200 euros: " << i << endl;
    i = 0;
    while (e >= 100){
        i++;
        e -= 100;
    }
    cout << "Banknotes of 100 euros: " << i << endl;
    i = 0;
    while (e >= 50){
        i++;
        e -= 50;
    }
    cout << "Banknotes of 50 euros: " << i << endl;
    i = 0;
    while (e >= 20){
        i++;
        e -= 20;
    }
    cout << "Banknotes of 20 euros: " << i << endl;
    i = 0;
    while (e >= 10){
        i++;
        e -= 10;
    }
    cout << "Banknotes of 10 euros: " << i << endl;
    i = 0;
    while (e >= 5){
        i++;
        e -= 5;
    }
    cout << "Banknotes of 5 euros: " << i << endl;
    i = 0;
    while (e >= 2){
        i++;
        e -= 2;
    }
    cout << "Coins of 2 euros: " << i << endl;
    i = 0;
    while (e >= 1){
        i++;
        e -= 1;
    }
    cout << "Coins of 1 euro: " << i << endl;
    i = 0;
    while (c >= 50){
        i++;
        c -= 50;
    }
    cout << "Coins of 50 cents: " << i << endl;
    i = 0;
    while (c >= 20){
        i++;
        c -= 20;
    }
    cout << "Coins of 20 cents: " << i << endl;
    i = 0;
    while (c >= 10){
        i++;
        c -= 10;
    }
    cout << "Coins of 10 cents: " << i << endl;
    i = 0;
    while (c >= 5){
        i++;
        c -= 5;
    }
    cout << "Coins of 5 cents: " << i << endl;
    i = 0;
    while (c >= 2){
        i++;
        c -= 2;
    }
    cout << "Coins of 2 cents: " << i << endl;
    i = 0;
    while (c >= 1){
        i++;
        c -= 1;
    }
    cout << "Coins of 1 cent: " << i << endl;
}

#include <iostream>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        cout << n << " = ";
        int s = n > 999 ? 3 : n > 99 ? 2 : n > 9 ? 1 : 0;
        int r = 0;
        while(n != 0){
            r = r*10 + n%10;
            n /= 10;
        }
        while(r > 0){
            switch(s){
                case 3:
                    switch(r%10){
                        case 1: cout << "M"; break;
                        case 2: cout << "MM"; break;
                        case 3: cout << "MMM"; break;
                    }
                    break;
                case 2:
                    switch(r%10){
                        case 1: cout << "C"; break;
                        case 2: cout << "CC"; break;
                        case 3: cout << "CCC"; break;
                        case 4: cout << "CD"; break;
                        case 5: cout << "D"; break;
                        case 6: cout << "DC"; break;
                        case 7: cout << "DCC"; break;
                        case 8: cout << "DCCC"; break;
                        case 9: cout << "CM"; break;
                    }
                    break;
                case 1:
                    switch(r%10){
                        case 1: cout << "X"; break;
                        case 2: cout << "XX"; break;
                        case 3: cout << "XXX"; break;
                        case 4: cout << "XL"; break;
                        case 5: cout << "L"; break;
                        case 6: cout << "LX"; break;
                        case 7: cout << "LXX"; break;
                        case 8: cout << "LXXX"; break;
                        case 9: cout << "XC"; break;
                    }
                    break;
                case 0:
                    switch(r%10){
                        case 1: cout << "I"; break;
                        case 2: cout << "II"; break;
                        case 3: cout << "III"; break;
                        case 4: cout << "IV"; break;
                        case 5: cout << "V"; break;
                        case 6: cout << "VI"; break;
                        case 7: cout << "VII"; break;
                        case 8: cout << "VIII"; break;
                        case 9: cout << "IX"; break;
                    }
                    break;
            }

            r/=10;
            s--;
        }
        cout << endl;
    }
}


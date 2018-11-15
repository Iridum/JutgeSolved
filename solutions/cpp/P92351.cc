#include <iostream>

using namespace std;

int main(){
    int a,b,c,r;
    cin >> a >> b;
    if(b < 1) return 0;
    c = a / b;
    if(a > 0) r = a%b;
    if(a < 0) r = (a%b + b)%b;

    if(r > 0 && a < 0) c--;
    cout << c << " " << r << endl;
}

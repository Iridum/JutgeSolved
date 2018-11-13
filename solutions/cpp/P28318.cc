#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef vector< vector<int> > Matrix;


int main(){
    int h,w;
    Matrix matrix;

    cin >> h >> w;
    for(int i = 0; i < h; i++){
        matrix.push_back({});
        for(int j = 0; j < w; j++){
            int push;
            cin >> push;
            matrix[i].push_back(push);
        }
    }

    string command;

    while(cin >> command){
        if(command == "row"){
            int fila;
            cin >> fila;
            cout << command << " " << fila << ":";
            for(int i = 0; i < w; i++) cout << " " << matrix[fila-1][i];
        }else if(command == "column"){
            int columna;
            cin >> columna;
            cout << command << " " << columna << ":";
            for(int i = 0; i < h; i++) cout << " " << matrix[i][columna-1];
        }else if(command == "element"){
            int fila, columna;
            cin >> fila >> columna;
            cout << command << " " << fila << " " << columna << ":";
            cout << " " << matrix[fila-1][columna-1];
        }
        cout << endl;
    }
}

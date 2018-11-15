#include <vector>

using namespace std;

typedef vector< vector<int> > Matrix;

bool is_symmetric(const Matrix& m){
    bool is_symmetric = true;
    unsigned int lenght = m.size();
    for(unsigned int i = 0; i < lenght and is_symmetric; i++){
        for(unsigned int j = 0; j < lenght and is_symmetric; j++){
            if(m[i][j] != m[j][i]) is_symmetric = false;
        }
    }
    return is_symmetric;
}

int main(){}

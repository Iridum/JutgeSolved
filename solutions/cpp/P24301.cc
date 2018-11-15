#include <vector>

using namespace std;

vector<int> concatenation(const vector<int>& v1, const vector<int>& v2){
    vector<int> result;
    for(unsigned int i = 0; i < v1.size(); i++) result.push_back(v1[i]);
    for(unsigned int i = 0; i < v2.size(); i++) result.push_back(v2[i]);
    return result;
}

int main(){}

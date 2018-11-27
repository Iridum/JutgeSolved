using namespace std;

bool is_multiple_3(int n){
    int odd_count = 0;
    int even_count = 0;
    if(n < 0) n = -n;
    if(n == 0) return true;
    else if(n == 1) return false;
    while(n){
        if(n & 1) odd_count++;
        n = n >> 1;
        if(n & 1) even_count++;
        n = n >> 1;
    }
    return is_multiple_3(odd_count - even_count);
}


int main(){}

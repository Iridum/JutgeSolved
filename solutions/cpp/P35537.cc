bool is_increasing(int n){
    return n/10 == 0 ? true : (n%100-n%10)/10 <= n%10 and is_increasing(n/10);
}


int main(){}

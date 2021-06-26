#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 1000;
    int sum = 0;
    while(n--){
        if(n%3==0 || n%5 == 0)
            sum+=n;
    }
    cout << sum << endl;
    
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    double num;
    for (int i = 0; i < n; i++){
        cin >> num;
        int ans = 0;
        while (num >= 1){
            num /= 2.0;
            ans += 1;
        }
        cout << ans - 1 << endl;
    }

    return 0;
}
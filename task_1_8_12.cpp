#include <iostream>
using namespace std;

int main(){
    bool pb = false;
    char c = '\0';
    while (cin.get(c)) {
        if (c == ' ' and !pb){
            cout << c;
            pb = true;
            continue;
        }
        if (c != ' '){
            cout << c;
            pb = false;
        }
    }

    return 0;
}
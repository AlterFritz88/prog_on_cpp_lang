#include <iostream>

using namespace std;


void rotate(int a[], unsigned size, int shift){
    shift %= size;
    int temp;
    while (shift > 0){
        for (int i = 1; i < size; ++i){
            temp = a[i];
            a[i] = a[i-1];
            a[i-1] = temp;
            //swap(a[i-1], a[i]);
            }
        shift--;}
}


int main()
{
    int a[] = {1,2,3,4,5};
    rotate(a, 5, 2);
    for(auto i : a){
        cout << i << " ";
    }
    return 0;
}
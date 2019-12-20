#include <iostream>

using namespace std;


unsigned strlen(const char *str)
{
    int len = 0;
    while (*str++){
        len++;
    }
    return len;
}




int main()
{
    const char* str1 = "How do you do";
    cout << strlen(str1);
    return 0;
}
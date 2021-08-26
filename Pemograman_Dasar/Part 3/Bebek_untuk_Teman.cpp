#include <iostream>

using namespace std;

int main ()
{
    int a, b, bagi, mod;
    cin >> a;
    cin >> b;
    bagi = a/b;
    mod = a%b;

    cout << "masing-masing" <<" " << bagi << endl;
    cout << "bersisa"<< " " << mod;
    return 0;

}

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    double luas_segitiga, a, b;
    cin >>a;
    cin >>b;

    luas_segitiga = (a*b)/2;
    
    cout << fixed;
    cout << setprecision(2) << luas_segitiga<<endl;
    return 0; 

}

#include <iostream>

using namespace std;

int main()

{

    int tab[6];
    cout << "tablice" << endl;
    for(int i = 0; i < 6; i++)
    {
        cout << i << ' '<< endl;
        tab[i] = i+1;
        cout << tab[1] << ' ' ;
        cout << "tab["<< i << "]="<< tab[1] << endl;

    }
    return 0;
}

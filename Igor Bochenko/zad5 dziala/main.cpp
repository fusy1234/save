#include <iostream>

using namespace std;

int main()
{
   int w,k;
cout << "podaj iloœæ wierszy";
   cin >> w;
   cout << "podaj iloœæ kolumn";
   cin >>k;
    int tab[w][k];
int p=8;
    for(int i = 0;i<w;i++){
        for(int j = 0 ; j<k;j++){
            tab[i][j]=p;
            p+=3;
            cout << tab[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}

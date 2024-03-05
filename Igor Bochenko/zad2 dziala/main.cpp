#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream zapis;
    zapis.open("zapis.txt",ios::out);
    int w=7;
    int k=3;
   int tab[w][k];
   for(int i=0;i<w;i++){
    for(int j=0;j<k;j++){

    if(j==1){
        tab[i][j]=0;
        cout <<tab[i][j]<<" ";
        zapis << tab[i][j];
    }
    else{
        tab[i][j]=1;
        cout << tab[i][j]<<" ";
        zapis << tab[i][j];
    }




    }
    cout << endl;
    zapis << endl;
   }

    return 0;
}

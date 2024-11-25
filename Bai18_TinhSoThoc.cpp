// Bai18_TinhSoThoc.cpp : 

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    
    cout <<   " Tinh so thoc tren ban co vua \n "; 
    int soO;
    double tongthoc = 0;
    cout << " Nhap so o: "; cin >> soO;
   
   
    for (int i = 0; i < soO; i++)
    {
        cout << " O thu "<< i + 1 << " co " << pow(2 , i) << " thoc\n";
        tongthoc = tongthoc + pow(2, i);
    }
    cout << " tong so thoc la: " << tongthoc;
    return 0;
}



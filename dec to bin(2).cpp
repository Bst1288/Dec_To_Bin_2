#include <cmath>
#include <iostream>
using namespace std;
 
int decToBin(int Dec)
{
    int x,c,Bin = 0,exp = 0;
    
    while (Dec != 0) 
	{
        x = Dec % 2;
        c = pow(10, exp); 
        Bin = Bin + (x*c); 
        Dec = Dec/2; 
        exp++;
    }
    return Bin;
}
 
int main()
{
	int Num;
 	cout << "Decimal Number : ";
    cin>> Num;
    cout << "Binary : ";
    cout << decToBin(Num);
 
    return 0;
}

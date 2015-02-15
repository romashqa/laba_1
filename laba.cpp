#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
	int n;
	cout<<"Vvedi kol-vo chisel\n";
    cin>>n;
    unsigned char *a=new unsigned char[n];
	cout<<"Vvedi chisla\n";
    for (int i=0; i<n; i++)
      {
         cin>>a[i];
      }
    for (int i=0; i<n; i++)
      {
          for (int j=n-1; j>i; j--)
            {
               if (a[j]>a[j-1])
                {
                   swap (a[j], a[j-1]);
                }
            } 
      }
	cout<<"Rezultat:\n";
    for (int i=0; i<n; i++)
      {
          cout<<a[i]<<' ';
       }
	_getch();
} 
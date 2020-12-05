#include <iostream>
using namespace std;

int main()
{
  const int size = 6;
  int i , j;
  int stores[size];
  for (i = 0;i < size; i++)
  {
    cout << "Enter the sales for store " << (i + 1) << ": " << endl;
    cin >> stores[i];
  }
   cout << "SALES BAR CHART" << endl;
  cout << "(Each * = $100)" << endl;
    for (i = 0;i < size; i++)
    {
      cout << "Store " << (i + 1) << ": ";
      for (j = 0; j < stores[i]/100; j++)
      cout << "*";
      cout << endl;
    }
}
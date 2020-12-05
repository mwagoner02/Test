#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  const int size = 5;
  int grades[size];
  int i , b , grade , sum = 0 , average = 0 , counter = 0 , final;
  for (i = 0; i < size;i++)
  {
  cout << "Enter grade for student number " << (i + 1) << ": " << endl;
  cin >> grades[i];
  sum+= grades[i];
  grades[i]+= (70 - average);
  counter++;
  average = sum/counter;
  }
  cout << "New Grades: " << endl;
  for (i = 0; i < size;i++)
  {
  cout << fixed << setprecision(1);
  cout << "Grade " << (i + 1) << " : " << grades[i] << endl;
  }
  cout << "The former average is " << average << endl;
}
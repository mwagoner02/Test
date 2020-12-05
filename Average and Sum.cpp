#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main()
{
  ifstream inFile;
	inFile.open("numbers.txt");  //open file
  if(!inFile)	//check that data.txt opened successfully
	{
        cout<<"File not found!\n";
        exit(EXIT_FAILURE);
  }
  const int size = 15;
  int numbers[size];
  int count , inputFile , i , sum , average;
  while (count < size && inputFile >> numbers[count])
 count++;
 for (i = 0;i < size;i++)
 {
 sum+=numbers[i];
 }
 average = sum/count;
 cout << "The sum of all the numbers is " << sum << " and the average is" << average << endl;
 return 0;
}
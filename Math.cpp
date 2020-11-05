#include <iostream>
#include <cstdlib>
using namespace std;
int main ()
{
  int choice , answer , x , y , imput; //Defining Variables
  const int min = 1; //Setting constant values for random number generator
  const int max = 20; //Setting constant values for random number generator
  cout << "Quick Math Problem" << endl << "------------------------------------" << endl <<"1. Math Problem" << endl << "2. Subtraction Problem" << endl << "3. Multiplication Problem" << endl << "4. Quit Program" << endl << "Enter your choice (1 - 4)" << endl;
  cin >> choice; // Assining variable for type of problem chosen
  {
    if (choice >= 5) // Imput validation
    cout << "You did not enter a correct imput" << endl;
  }
  
  if (choice == 1) //Math Choice
  {
  x = (rand() % (max - min + 1)) + min; //Setting random values
  y = (rand() % (max - min + 1)) + min; //Setting random values
  cout <<"   " << x << endl << " + " << y << endl << "-----" << endl; //Displaying interface to user
  cin >> imput; //Getting users answer
  answer = x + y;
  if (imput == answer) //User correct answer message
  cout << "Congrats, you got the answer right";
  else //User incorrect answer message
  cout << "Sorry the answer is " << answer;
  }
  if (choice == 2) //Subtraction choice
  {
  x = (rand() % (max - min + 1)) + min; //Setting random values
  y = (rand() % (max - min + 1)) + min; //Setting random values
  cout <<"   " << x << endl << " - " << y << endl << "-----" << endl; //Displaying interface to user
  cin >> imput; //Getting users answer
  answer = x - y;
  if (imput == answer) //User correct answer message
  cout << "Congrats, you got the answer right";
  else //User incorrect answer message
  cout << "Sorry the answer is " << answer;
  }
  if (choice == 3) //Multiplication Choice
  {
  x = (rand() % (max - min + 1)) + min; //Setting random values
  y = (rand() % (max - min + 1)) + min; //Setting random values
  cout <<"   " << x << endl << " * " << y << endl << "-----" << endl; //Displaying interface to user
  cin >> imput; //Getting users answer
  answer = x * y;
  if (imput == answer) //User correct answer message
  cout << "Congrats, you got the answer right";
  else //User incorrect answer message
  cout << "Sorry the answer is " << answer;
  }
  if (choice == 4) //Program termination choice
  {
	  cout << "Thank you for using Quick Math" << endl;
  return 0;
  }
}
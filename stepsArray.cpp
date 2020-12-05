//**********************************************************
//Name: Matt Wagoner
//Class: COSC 1435 Fall-20
//Instructor: Marwa Hassan
//Assignment 9 Problem 1
//Date:11/22/2020
//Program description: This program calculates the average amount of steps taken per month reading the steps per day off a file. The displays the average of steps per month, displays the total monthly average. Then calculates the highest and lowest month average and displays it. And finally, it will determine how many months the average steps were over 6450.
//**********************************************************
#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
void findAverage(const int [] , int []);
void displayAverage(const string [] , int []);
int monthlyAverage(int []);
void highestAverage(int [] , const string []);
void lowestAverage(int [] , const string []);
int referenceP(int []);

int main()
{
const string months[12] = {"January", "February", "March", "April", "May",
 "June", "July", "August", "September",
 "October", "November", "December"};
const int days[12] = {31,28,31,30,31, 30, 31, 31, 30, 31, 30, 31};
int average[12];
findAverage(days , average);
displayAverage(months , average);
cout << "The monthly average of steps is " << monthlyAverage(average) << endl << endl;
lowestAverage(average , months);
cout << endl; 
highestAverage(average , months);
cout << endl;
cout << "The amount of months with a step average of over 6450 is " << referenceP(average);
return 0;
}
//*************************************************
// findAverage function
// This function finds the average of steps for each month
//
// Return Value
// ------------
// N/A
//
// Parameters
// ------------
// const int day[]                array of days in each month
// int av[]                       array of monthly averages
//*************************************************
void findAverage(const int day[] ,int av[])
{
  int j , i = 0;
  float num , sum = 0 , count;
 ifstream inFile;
	inFile.open("steps.dat");  //open file
  if(!inFile)	//check that steps.dat opened successfully
	{
        cout<<"File not found!\n";//Displays if file doesn't open
        exit(EXIT_FAILURE);
  } 
   while (inFile >> num)
  {
  sum = sum + num; //Finding Sum
  count++; //Incrementing counter to find average
  if (count == day[i]) //Takes break when values hit month
    {
      sum = sum/count; //Finds average
      av[i] = sum; //Assigns average for first month to  first subscript
      i++; //Increases subscript to next month
      count = 0; //Resets counter
    }
  }
}
//*************************************************
// displayAverage function
// This function displays the average of steps for each month
//
// Return Value
// ------------
// N/A
//
// Parameters
// ------------
// const string mon[]               array of the months
// int av[]                         array of monthly averages
//*************************************************
void displayAverage(const string mon[] , int av[])
{
  int i;
  for (i=0;i<12;i++)
    cout << mon[i] <<":           " << av[i] << endl;
}
//*************************************************
//monthlyAverage function
// This function finds the average of all the months and returns it to main
//
// Return Value
// ------------
// total                            Average of all the months
//
// Parameters
// ------------
// int av[]                         array of monthly averages
//*************************************************
int monthlyAverage(int av[])
{
  int i , sum = 0 , count = 0 , total = 0;
  for (i=0;i<12;i++)
  {
    sum+= av[i];
    count++;
  }
  total = sum/count;
  return total;
}
//*************************************************
//highestAverage function
// This function finds the month with highest steps and displays it and which month of it
//
// Return Value
// ------------
// N/A
//
// Parameters
// ------------
// int av[]                         array of monthly averages
// const string mon[]             string array of month names
//*************************************************
void highestAverage(int av[] , const string mon[])
{
int i = 0 , temp = av[i] , highsub = 0;
for (i=0;i<12;i++)
  {
    if (av[i] > temp)
    {temp = av[i];
    highsub = i;}
  }
cout << "The month with the highest average is " << mon[highsub] << " with an average of " << av[highsub] << endl;
}
//*************************************************
//lowestAverage function
// This function finds the month with the lowest steps and displays it and which month it is
// Return Value
// ------------
// N/A
//
// Parameters
// ------------
// int av[]                         array of monthly averages
// const string mon[]             string array of month names
//*************************************************
void lowestAverage(int av[] , const string mon[])
{
int i = 0 , temp = av[i] , lowsub = 0;
for (i=0;i<12;i++)
{
  if (av[i] < temp)
  {
    if (av[i]<temp)
    {temp = av[i];
    lowsub = i;}
  }
}
cout << "The month with the lowest average is " << mon[lowsub] << " with an average of " << av[lowsub] << endl;
}
//*************************************************
//referenceP function
// This function finds the months with a step average of over 6450 and returns it to main
//
// Return Value
// ------------
// int                  Months with step average of over 6450
//
// Parameters
// ------------
// int av[]                         array of monthly averages
//*************************************************
 int referenceP(int av[])
{
  int counter = 0 , total = 0 , i;
  for (i=0;i<12;i++)
  {
    if (av[i]>=6450)
    {
      counter++;
    }
  }
  return counter;
}
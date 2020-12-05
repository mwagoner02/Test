//**********************************************************
//Name: Matt Wagoner
//Class: COSC 1435 Fall-20
//Instructor: Marwa Hassan
//Assignment 8 Problem 1
//Date: 11/14/2020
//Program description: This program takes the number of rooms, cost of cleaner, sqaure feet of every room and calculates the amount of cleaner needed, cost of labor and total cost
//**********************************************************
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int getNumberOfRooms();
double getCleanerPrice();
int getCarpetSquareFeet(int &rooms);
int numberOfGallons(int &feet);
int laborCost(int &feet);
void displayCost(double &gallons , double &price , int &cost);
int main()
{
  int rooms , feet , cost , totalCost;
  double price , gallons;
rooms = getNumberOfRooms();
price = getCleanerPrice();
feet = getCarpetSquareFeet(rooms);
gallons = numberOfGallons(feet);
cost = laborCost(feet);
displayCost (gallons , price , cost);
}
//*************************************************
// getNumberOfRooms function
// This function gets the imput from the user about the number of rooms and validates
//
// Return Value
// ------------
// int             number of rooms
//
// Parameters
// ------------
// N/A
//*************************************************
      int getNumberOfRooms()
      {
        int numrooms;
        cout << "Please enter the number of rooms: " << endl;
        cin >> numrooms;
        while (numrooms < 1)
        {
          cout << "INVALID VALUE!  Enter number of rooms greater than or equal to 1: " << endl;
          cin >> numrooms;
        }
        return numrooms;
      } 
//*************************************************
// getCleanerPrice function
// This function gets the imput from the user about the price of cleaner and validates
//
// Return Value
// ------------
// double            price of the cleaner
//
// Parameters
// ------------
// N/A
//*************************************************
double getCleanerPrice()
{
  double numprice;
  cout << "Please enter the price of cleaner per gallon: " << endl;
  cin >> numprice;
  while (numprice < 7)
  {
    cout << "Invalid! Enter price greater than $7.00: " << endl;
    cin >> numprice;
  }
  return numprice;
}
//*************************************************
// getCarpetSquareFeet function
// This function gets the imput from the user about the square footage of each room using an array, validates and adds all the square footage together
//
// Return Value
// ------------
// int             sum of squarefootage
//
// Parameters
// ------------
// int rooms           Number of rooms
//*************************************************
      int getCarpetSquareFeet(int &rooms)
      {
        int count , sum=0 , size = rooms;
        int sqFT[size];
        for (count = 0;count<size;count++)
        {
        cout << "Please enter the square footage for room " << (count + 1) << endl;
        cin >> sqFT[count];
        while (sqFT[count] < 1)
        {
          cout << "Invalid! Enter carpet area greater than 1:" << endl;
          cin >> sqFT[count];
        }
        sum+=sqFT[count];
        }
        return sum;
      }
//*************************************************
// numberOfGallons function
// This function gets the imput from the user about the number of gallons and validates
//
// Return Value
// ------------
// int             number of gallons
//
// Parameters
// ------------
// int feet            Total Square Footage
//*************************************************
int numberOfGallons (int &feet)
{
//One Gallon per 100 Square feet
int numgallons;
numgallons =feet/100;
return numgallons;
}
//*************************************************
// laborCost function
// This function calculates the labor cost
//
// Return Value
// ------------
// int             labor cost
//
// Parameters
// ------------
// int feet            Total Square Footage
//*************************************************
      int laborCost(int &feet)
      {
        //$0.65 per SquareFoot
        int cost;
        cost = feet * 0.65;
        return cost;
      }
//*************************************************
// displayCost function
// This function calculates the price of the cleaner and the estimate for the enitre cost combined and displays them
//
// Return Value
// ------------
// N/A
//
// Parameters
// ------------
// int gallons            Number of gallons
// double price           Cleaner price per gallons
// int cost               Cost of labor
//*************************************************
void displayCost(double &gallons , double &price , int &cost)
{
double subtotal , cleanPrice;
cleanPrice = gallons * price;
subtotal = cleanPrice + cost;
cout << "---- ESTIMATED CHARGES ----" << endl;
cout << "Gallons of cleaner: " << ceil(gallons) << endl;
cout << "Cleaner Cost: $" << cleanPrice << endl;
cout << "Labor Cost: $" << cost << endl;
cout << "----------------------------" << endl;
cout << "Estimated Cost: $" << subtotal;
}
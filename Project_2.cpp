// Project_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 

#include <iomanip> //includes manipulators (that take parameters, strings are left justified, numbers are right justified)

#include <string>

#include <fstream> //fstream header

using namespace std;



int main()
{
    
    /*Immanuel Braxton
      2/25/2024
      Explain  CODE
      This program will calculate and show the mark up, original price and tax rates of inputted items.
    */
    

    double OrigPrice; //Initialize original price as Origprice
    double Salestax; //Initialize double Salestax
    double Percent_markup; //Initialize double Percent_markup
    double Final_cost;
    double Itemtax;
    double Total_cost;
    

    cout << "Enter in Original price of item: ";  // to check amount 
    cin >> OrigPrice;
    cout << "Enter percent markup : ";  // to check amount 
    cin >> Percent_markup;
    cout << "Enter Sales tax : ";  // to check amount 
    cin >> Salestax;


    double MarkupPrice = OrigPrice * Percent_markup;
    Final_cost = OrigPrice + MarkupPrice;

    
    Itemtax = Final_cost * Salestax;
    Total_cost = Final_cost + Itemtax;


    cout << "Original price of item: " << fixed << showpoint << setprecision(2) << setw(6) << OrigPrice << endl;  // to check amount 
    cout << "Percent mark up is: " << fixed << showpoint << setprecision(2) << setw(10) << Percent_markup << endl; // to check amount 
    cout << "Stores sell price is: " << fixed << showpoint << setprecision(2) << setw(10) << MarkupPrice << endl; // to check amount 
    cout << "Amount of sales tax: " << fixed << showpoint << setprecision(2) << setw(10) << Salestax << endl;  // to check amount 
    cout << "Your total price is: " << fixed << showpoint << setprecision(2) << setw(10) << Total_cost << endl; //selling price +sales tax
    
    
    return  0;
  
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

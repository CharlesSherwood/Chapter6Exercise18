/*FileName:Chapter6Exercise18.cpp
ProgrammerName:Charles Sherwood
Date:4/2025
Requirements:This program should estimate
How much a paint job for a user inputed number 
of rooms is based on the companys old jobs.
*/


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//The Constant Numbers for the project.
const double COVERAGE_PER_GALLON = 110.0;
const double LABOR_HOURS_PER_GALLON = 8.0;
const double LABOR_COST_PER_HOUR = 25.0;

//Prototypes
void Welcome();
int GetRooms();
double GetPrice();
double GetWall(int rooms);
void Calculate(int rooms, double price, double totalWall);
bool repeat();
void Display(int gallons, double laborHours, double paintCost, double laborCost, double totalCost, double totalWall);


int main()
{
    Welcome();
    int rooms;
    double price, totalWall;

    do
    {
        rooms = GetRooms();
        price = GetPrice();
        totalWall = GetWall(rooms);
        Calculate(rooms, price, totalWall);
    } while (repeat());
}

//Displays A Welcome Meassage
void Welcome()
{
    cout << "----------------------------------------\n";
    cout << "!! Welcome To The Paint Job Estimator !!\n";
    cout << "----------------------------------------\n";
}


//Gets The Number Of Rooms
int GetRooms()
{
    int rooms;
    cout << "How many rooms does this project have?: ";
    cin >> rooms;

    while (rooms < 1)
    {
        cout << "Please enter a valid number of rooms (1 or more): ";
        cin >> rooms;
    }

    return rooms;
}


//Gets The Price Of The Paint 
double GetPrice()
{
    double price;
    cout << "What is the price of the paint per gallon?: $";
    cin >> price;

    while (price < 10.0)
    {
        cout << "Please enter a valid price (at least $10.00): $";
        cin >> price;
    }

    return price;
}


//Gets The Square Footage Of The Walls In Each Room
double GetWall(int rooms)
{
    double squareFeet, total = 0;

    for (int i = 1; i <= rooms; i++)
    {
        cout << "Enter square footage for room #" << i << ": ";
        cin >> squareFeet;

        while (squareFeet < 0)
        {
            cout << "Please enter a valid (non-negative) square footage: ";
            cin >> squareFeet;
        }

        total += squareFeet;
    }

    return total;
}

//Calculates Everything
void Calculate(int rooms, double price, double totalWall)
{
    int gallons = ceil(totalWall / COVERAGE_PER_GALLON);
    double laborHours = gallons * LABOR_HOURS_PER_GALLON;
    double paintCost = gallons * price;
    double laborCost = laborHours * LABOR_COST_PER_HOUR;
    double totalCost = paintCost + laborCost;

    
    Display(gallons, laborHours, paintCost, laborCost, totalCost, totalWall);
}

//Display module that would display the end results when called upon
void Display(int gallons, double laborHours, double paintCost, double laborCost, double totalCost, double totalWall)
{
    cout << fixed << setprecision(2);
    cout << "\n----- Paint Job Estimate -----\n";
    cout << "Total square feet: " << totalWall << " sq ft\n";
    cout << "Gallons of paint required: " << gallons << endl;
    cout << "Hours of labor required: " << laborHours << endl;
    cout << "Cost of the paint: $" << paintCost << endl;
    cout << "Labor charges: $" << laborCost << endl;
    cout << "Total cost of the paint job: $" << totalCost << endl;
    cout << "-------------------------------\n";
}



//Ask The User If They Want To Repeat
bool repeat()
{
    char again;
    cout << "Would you like to estimate another job? (Y/N): ";
    cin >> again;
    return again == 'Y' || again == 'y';
}

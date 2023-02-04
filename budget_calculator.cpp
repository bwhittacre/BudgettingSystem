#include <iostream>
using namespace std;
 
double income()
{
    //This section of the code asks how much money the user has in their possesion
    //in order to get an idea of how much they could have for their budget. It stores
    //all the individual amounts as variables, and saves the result as a variable too.
    double studentLoan, grants, parents, job, savings, other,totalIncome;
 
    cout << "Total Income" << endl;
 
    cout << "How much are your student loans?: " << endl;
    cin >> studentLoan;
 
    cout << "How much will you receive in grants or other loan related sources later?: " << endl;
    cin >> grants;
 
    cout << "How much do you get from your parents?: " << endl;
    cin >> parents;
 
    cout << "How much do you make from working?: " << endl;
    cin >> job;
 
    cout << "How much are you going to withdraw from your savings?: " << endl;
    cin >> savings;
 
    cout << "Are there any other sources of money you have?: " << endl;
    cin >> other;
 
    totalIncome = studentLoan+grants+parents+job+savings+other;
 
    return totalIncome;
}
 
double essentialCosts()
{
    //This section takes in the costs of each section of the user's life, and adds them together
    //into a variable that is used to calculate the final budget.
    double totalPayments, rent, travel, insurance, carBills, utilityBills, cellPhone, streaming, food;
 
    cout << "Essential Costs" << endl;
 
    cout << "How much is your rent (divided weekly if you can)?: " << endl;
    cin >> rent;
 
    cout << "Do you spend any money on travel (air fair, not car payments)?: " << endl;
    cin >> travel;
 
    cout << "What are your insurance costs, if any?: " << endl;
    cin >> insurance;
 
    cout << "What are your total car payments for gas, repairs, or otherwise?: " << endl;
    cin >> carBills;
 
    cout << "What, if any, do you spend on utility bills?: " << endl;
    cin >> utilityBills;
 
    cout << "How much do you spend on your cell phone each week?: " << endl;
    cin >> cellPhone;
 
    cout << "How much do you spend on streaming services (divided into weekly cost)?: " << endl;
    cin >> streaming;
 
    cout << "How much do you spend on food per week?: " << endl;
    cin >> food;
 
    totalPayments = rent + travel +  food +
    utilityBills + cellPhone + streaming + insurance
    + carBills;
 
    return totalPayments;
 
}
 
double otherCosts()
{
    //This is a collection of other costs that are not considered "essential". They too
    //go into a variable that is used to calculate total costs.
    double totalOtherCosts, classStuff, otherStuff, funStuff;
    cout << "Other Costs" << endl;
 
    cout << "How much do you spend on materials for your classes (divided into cost per week)?: " << endl;
    cin >> classStuff;

    cout << "How much do you spend on fun stuff each week?: " << endl;
    cin >> funStuff;
 
    cout << "Are there any other random costs that you spend each week?: " << endl;
    cin >> otherStuff;
 
    totalOtherCosts = funStuff + classStuff + otherStuff;
 
    return totalOtherCosts;
}
 
int main()
{
    //This section contains the main variables used in the program.
    int runAgain;
    double theTotalIncome=0, theTotalEssentialCosts, theTotalOtherCosts, budget1, budget2, totalEachWeek, time;
    cout << "It's Budget Calculating Time my Dudes!" << endl;
    cout << "If during any of the questions you do not earn anything or pay anything, enter 0" << endl;
 
    do
    {
        //This section of the code runs the main loop of the program, allowing all the math to be called, and 
        //used to calculate the total budget.
        cout << "Please enter the period of time you are budgeting for in number of weeks." << endl;
        cout << "This could be a year's worth of time in weeks, or a semester at school, or any other amount of time you wish to calculate: " << endl;
 
        cin >> time;
 
        theTotalIncome = income();
 
        cout << "Your income for the year is $" << theTotalIncome << endl;
 
        totalEachWeek = theTotalIncome/time;
 
        cout << "You have $"  << totalEachWeek << " to spend" << endl;
 
        theTotalEssentialCosts = essentialCosts();

        budget1 = totalEachWeek-theTotalEssentialCosts;
 
        cout << "You have spent $" << theTotalEssentialCosts << endl;
        cout << "The amount left after the essentials $"  << budget1 << endl;
 
        theTotalOtherCosts = otherCosts();
 
        budget2 = budget1 - theTotalOtherCosts;
 
        cout << "You have spent $" << theTotalOtherCosts << " for other costs" << endl;
        cout << "You have $" << budget2 << " at the end of the week" << endl;
 
        cout << "Need anything else?: " << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        cin >> runAgain;
    }
 
    while (runAgain ==1);
 
    return 0;
}
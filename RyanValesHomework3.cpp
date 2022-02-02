/*
Written by : Ryan Vales
Student ID : S00339723
Written on : 6/30/21
Assignment : RyanValesHomework3.cpp 
*/

#include <algorithm>
#include <numeric>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void getTotal(vector<double>& quarters) {
    double total_iter = accumulate(quarters.begin(), quarters.end(), 0);
    
    cout << "Total:\t\t\t" << setprecision(2) << fixed << total_iter << endl;
}

void getAverage(vector<double>& quarters) {
    double sum_iter = accumulate(quarters.begin(), quarters.end(), 0);
    double average_iter = sum_iter / quarters.size();
    
    cout << "Average Quarter:\t" << setprecision(2) << fixed << average_iter << endl;  
}

void getLowest(vector<double>& quarters) {
    auto lowest_iter = min_element(quarters.begin(), quarters.end());
    
    cout << "Lowest Quarter:\t\t" << setprecision(2) << fixed << *lowest_iter << endl;
}

void getHighest(vector<double>& quarters) {
    auto highest_iter = max_element(quarters.begin(), quarters.end());
    
    cout << "Highest Quarter:\t" << setprecision(2) << fixed << *highest_iter << endl;
}

int main() {

    vector<double> quarters;

    double quarterOne, quarterTwo, quarterThree, quarterFour;

    cout << "The Quarterly Sales program\n\n";

    cout << "Enter sales for Q1: ";
    cin >> quarterOne;
    quarters.push_back(quarterOne);

    cout << "Enter sales for Q2: ";
    cin >> quarterTwo;
    quarters.push_back(quarterTwo);

    cout << "Enter sales for Q3: ";
    cin >> quarterThree;
    quarters.push_back(quarterThree);

    cout << "Enter sales for Q4: ";
    cin >> quarterFour;
    quarters.push_back(quarterFour);

    cout << "\n";

    for (int i = 0; i < quarters.size(); i++) {
        cout << "Element " << i + 1 << " of vector quarters contains the value: " << quarters[i] << endl;
    }

    cout << "\n";

    getTotal(quarters);
    getAverage(quarters);
    getLowest(quarters);
    getHighest(quarters);

    return 0;
}
/*
 * Author: Shaun Xie
 * Date: 2/22/2023
 * Description: Program to calculate wages for a bicycle salesman
*/
#include <iostream>
#include <iomanip>

using namespace std;


const double RATE_PER_HOUR = 5.50;
const double COMMISSION_A = .1;
const double COMMISSION_B = .15;

int main() {

    cout << "Enter the weekly sales amount > ";
    double weekly_sales;
    cin >> weekly_sales;

    double plan_a = (RATE_PER_HOUR * 40) + (COMMISSION_A * weekly_sales);
    double plan_b = (COMMISSION_B * weekly_sales);
    string final_plan;

    if (plan_a > plan_b) {
        final_plan = "Plan 1 is better";
    } 
    else if(plan_a < plan_b) {
        final_plan = "Plan 2 is better";
    }

    cout << "Amount of sales: "<< endl;
    cout << "Plan 1 Pays: " << "$" << fixed << setprecision(2) << plan_a << endl;
    cout << "Plan 2 Pays: " << "$" << fixed << setprecision(2) << plan_b << endl;
    cout << final_plan << endl;

}
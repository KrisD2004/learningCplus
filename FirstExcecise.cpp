#include <iostream>

using namespace std;
//first exercise. We have a store that made 95000 and now part of your tax return you have to pay state and county tax at different rates
int main() {
    double sales = 95000;
    cout << "Sales: $" << sales <<endl;

    const double stateTaxRate = .04;
    double stateTax = sales * stateTaxRate;
    cout << "State Tax: $ " << stateTax << endl;

    const double CountyTaxRate = .02;
    double CountyTax = sales * CountyTaxRate;
    cout << "County Tax: $ " << CountyTax << endl;

    double totalTax = stateTax +  CountyTax;
    cout << "Total Tax: $ " << totalTax;


    return 0;
}
#include <iostream>

using namespace std;

int main()
{
        float weight, height, metriconf, metriconf1, step1;
        cout << "Enter your weight (in pounds): ";
        cin >> weight;
        cout << "Enter your height (in inches): ";
        cin >> height;
        metriconf =  weight*.45;
        metriconf1 = height*.025;
        step1 = metriconf1*metriconf1;
        cout << "Your bmi is: " << metriconf/step1 << endl;
        if(metriconf/step1 >= 29.9){
                cout << "you're over weight lose weight fatty" << endl;
        }
        else if(metriconf/step1 <= 18.5){
                cout << "Youre below average weight at least you're not a fatty" << endl;
        }
        else{
                 cout << "Youre average weight not fat nor thin" << endl;
        }
        return 0;
}

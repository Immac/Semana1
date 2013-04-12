#include <iostream>
#include <string>
#include "Robot.h"

using namespace std;

int main()
{
    string name;
    int power_level;
    string model;
    string food;

    cout << "Robot name? ";
    cin >> name;
    cout << "Robot power_level? ";
    cin >> power_level;
    cout << "Robot model? ";
    cin >> model;
    cout << "Robot favourite food? ";
    cin >> food;

    cout << endl << "---Creating robot---" << endl;
    Robot robot(name,power_level,model,food);
    cout << "---Robot created---" << endl;

    cout << endl << "Robot name:" << robot.getName() << endl;
    cout << "Robot power level:" << robot.getPowerLevel() << endl;
    cout << "Robot model:" << robot.getModel() << endl;
    cout << "Robot favourite food:" << robot.getFavouriteFood() << endl;

    return 0;
}

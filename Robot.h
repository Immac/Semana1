#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>
#include <string>

using namespace std;

class Robot
{
private:
    string name;
    int power_level;
    string model;
    string favourite_food;
public:
    Robot(string name,int power_level,string model, string favourite_food);
    string getName();
    int getPowerLevel();
    string getModel();
    virtual ~Robot();
    string getFavouriteFood();
};

#endif // ROBOT_H

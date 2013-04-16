#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class Robot
{
private:
    string name;
    int power_level;
    string model;
    string favourite_food;
    double facing;
    double pos_x,pos_y;

public:
    Robot(string name,int power_level,string model, string favourite_food);
    string getName();
    string getModel();
    string getFavouriteFood();

    int getPowerLevel();
    double getFacing();
    double getPosX();
    double getPosY();

    void setPosX(double pos_x);
    void setPosY(double pos_y);
    void setFacing(double degree);
    void doMovement(int steps);
    void doMovement(int steps, double degree);

    virtual ~Robot();

};

#endif // ROBOT_H

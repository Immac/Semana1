#include "Robot.h"

Robot::Robot(string name,int power_level,string model, string favourite_food)
{
    this->name=name;
    this->power_level=power_level;
    this->model=model;
    this->favourite_food = favourite_food;
}

string Robot::getName()
{
    return name;
}

int Robot::getPowerLevel()
{
    return power_level;
}
string Robot::getFavouriteFood(){
return this->favourite_food;
}

string Robot::getModel()
{
    return model;
}

Robot::~Robot()
{
    //dtor
}

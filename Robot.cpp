#include "Robot.h"

Robot::Robot(string name,int power_level,string model, string favourite_food)
{
    this->name=name;
    this->power_level=power_level;
    this->model=model;
    this->favourite_food = favourite_food;
    this->setFacing(0);
    this->setPosX(0);
    this->setPosY(0);
}

string  Robot::getName(){
    return name;
}
string  Robot::getFavouriteFood(){
return this->favourite_food;
}
string  Robot::getModel(){
    return model;
}
int     Robot::getPowerLevel(){
    return power_level;
}
double  Robot::getPosX(){
return this->pos_x;
}
double  Robot::getPosY(){
return this->pos_y;
}
double  Robot::getFacing(){
return this->facing;
}

void Robot::setFacing(double degree){
    double PI  =3.141592653589793238462;
    this->facing = degree*PI/180;
}
void Robot::doMovement(int steps){

double x = this->getPosX();
double y = this->getPosY();
double facing = this->getFacing();



 x += cos(facing)*(double)steps;
 y += sin(facing)*(double)steps;

setPosX(x);
setPosY(y);
}

void Robot::setPosX(double pos_x){
this->pos_x = pos_x;
}
void Robot::setPosY(double pos_y){
this->pos_y = pos_y;
}
void Robot::printPosition(){
cout << "Robot's current X position: " << this->getPosX() << endl;
cout << "Robot's current Y position: " << this->getPosY();
}

Robot::~Robot()
{
    //dtor
}

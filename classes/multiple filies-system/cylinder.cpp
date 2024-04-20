#include "cylinder.h"

      Cylinder::Cylinder(double r, double h){
        radius =r;
        height =h;
      }
      //getter 

      double Cylinder::get_radius(){
        return radius;
      }
      double Cylinder::get_height (){

        return height ;
      }
      
      double Cylinder::volume(){
        return pi*radius*radius*height;
      }



#include "const.h"
class Cylinder {
   //constructor
    public :
      Cylinder()=default;

      Cylinder(double r , double h);
      //getter 

      double get_radius();
      double get_height ();
      
      double volume();

// setters 

   void set_radius(double radius){
      radius = radius ;
   }
   void set_height ( double height){
    height =height;
   }




// member variables 
      private:
       double radius{};
       double height{};
       
};



//definations 


// Cylinder::Cylinder(double r, double h){
//         radius =r;
//         height =h;
//       }
//       //getter 

//       double Cylinder::get_radius(){
//         return radius;
//       }
//       double Cylinder::get_height (){

//         return height ;
//       }
      
//       double Cylinder::volume(){
//         return pi*radius*radius*height;
//       }
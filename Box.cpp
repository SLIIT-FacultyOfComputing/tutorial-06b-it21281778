#include "Box.h"

// Implement setters and getters

       int Box::getHeight(){
         return height;
       }

      int Box::getLength(){
         return length;
       }

     int Box::getWidth(){
         return width;
       }
 
void Box::setValues(int le, int wi, int he){
  length = le;
  width = wi;
  height = he;
}

       

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return length*width*height;
}

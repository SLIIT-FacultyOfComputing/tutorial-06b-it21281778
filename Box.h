class Box {

 private:
       int length;
       int width;
       int height;
   
 public:
       // write prototypes of setters for length, width and height
      int getHeight();
     int getLength();
    int getWidth();
       // write prototypes of getters for length, width and height
     void setValues(int le, int wi, int he);
       
 
       int calcVolume();
};

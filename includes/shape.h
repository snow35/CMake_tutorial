#ifndef SHAPE_H
#define SHAPE_H

class Rectangle 
{
 public:
  Rectangle(int width, int height);

  int GetSize() const;

 private:
  int width_, height_;
};

#endif
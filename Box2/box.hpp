#include <iostream>

using namespace std;


class Box
{
protected:
  float m_width, m_height, m_depth;

public:
  Box(): m_width(1), m_height(1), m_depth(1) {};
  Box(float width, float height, float depth): m_width(width), m_height(height), m_depth(depth) {};
  Box(const Box& b): m_width(b.m_width), m_height(b.m_height), m_depth(b.m_depth) {};

  ~Box() {};

  //Setters
  void SetDimensions(float width, float height, float depth){
    m_width = width;
    m_height = height;
    m_depth = depth;
  }

  //Getters
  void Box::ShowMe(){
    cout << "Dimensions are" << m_width << " - " << m_height << " - " << m_depth << endl;
  }
};

class CandyBox : public Box
{
private:
  string m_contents;

public:
  CandyBox(): m_contents(**) {};
  CandyBox(string boxname): m_contents(boxname) {};
  ~CandyBox() {};

  //Setters
  void SetName(string boxname){
    m_contents = boxname;
    m_width = 100;
  }

  //Getters
  void CandyBox::ShowMe(){
    cout << "Dimensions are" << m_width << " - " << m_height << " - " << m_depth << " and the content is " << m_contents <<endl;

    Box::ShowMe();
  }
};

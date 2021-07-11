#include <iostream>

using namespace std;

class Box
{
private:
    float m_w, m_h, m_d;

public:
    //constructors and destructors
    Box() : m_w(0), m_h(0), m_d(0) {};
    Box(float w, float h, float d) : m_w(w), m_h(h), m_d(d) {};
    ~Box() {};
    
    //setters 
    void SetValue(float w=1, float h=1, float d=1);
    
    //getters
    void GetValue(float &w, float &h, float &d);
    float GetVolume() const { return m_w*m_h*m_d; };
    
    //opperators
    bool operator> (const Box& b);
    Box operator+ (const Box& b);
    Box operator* (float a); //this method uses a constant float point 
    Box operator* (const Box& b);
};



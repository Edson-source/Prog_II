#include "box.hpp"

void Box::SetValue(float w, float h, float d)
{
     m_w = w;
     m_h = h;
     m_d = d;
}

void Box::GetValue(float &w, float &h, float &d)
{
    w = m_w;
    h = m_h;
    d = m_d;
}

bool Box::operator> (const Box& b)
{
    if(this->GetVolume() > b.GetVolume())
    {
        return true;
    }
    else
    {
        return false;
    }
}

Box Box::operator+ (const Box& b)
{
    Box tmp;
    tmp.m_w = this->m_w + b.m_w;
    tmp.m_h = this->m_h + b.m_h;
    tmp.m_d = this->m_d + b.m_d;

    return tmp;
}

Box Box::operator* (float a)
{
    Box tmp;
    tmp.m_w = this->m_w * a;
    tmp.m_h = this->m_h * a;
    tmp.m_d = this->m_d * a;

    return tmp;
}

Box Box::operator* (const Box& b)
{
    Box tmp;
    tmp.m_w = this->m_w * b.m_w;
    tmp.m_h = this->m_h * b.m_h;
    tmp.m_d = this->m_d * b.m_d;
    return tmp;
}

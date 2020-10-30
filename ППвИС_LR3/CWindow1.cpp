#include "CWindow1.h"

std::istream& operator>>(std::istream& in, CWindow1& point)
{
    in >> point.pinCode;   
    return in;
}

std::ostream& operator<<(std::ostream& out, const CWindow1& point)
{
    out << "Input your pin" << endl;;
    return out;
}

void CWindow1::show() {
    
   
    

}

//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------

// Put the assignment code here

class Quaternion {

 public: 
 
 double a,b,c,d;

  quaternoon(double p,double q,double r,double s){
    a=p;
    b=q;
    c=r;
    d=s;

  }
  bool operatpor ==(const quaternion p){
    if ((p->a==this-a)&&(p->b==this->b)&&(p->c==this->c)&&
    (p->d==this->d))
    return true;

else 
    bool operatpor ==(const quaternion p){
    if ((p->a==this-a)&&(p->b==this->b)&&(p->c==this->c)&&
    (p->d==this->d))
    return false;
  
  }
  quaternion operator+(const quaternion)
  {
    quaternion r;
    r.a=p.a+this->a;
    r.b=p.b+this->b;
    r.c=p.c+this->c;
    r.d=p.d+this->d;

    return r;
  }
  quaternion operator -(const quaternion p){
    quaternion r;

    r.a=p-a-this->a;
    r.b=p-b-this->b;
    r.c=p.c-this->c;
    r.d=p.d-this->d

    return r;
  }
    quaternion operator*(double s){
      quaternion p;
  
    p.a=s*this->a;
    p.b=s*this->b;
    p.c=s.c*this->c;
    p.d=s.d*this->d;

    return p;
    }

  }


};

//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "q1" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        REQUIRE( q == p );
    }
    SECTION( "q2" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q + p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{0.0, 0.0, 0.0, 0.0};
        REQUIRE( (q - p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q * 2.0) == r );
    }
}
//------------------------------

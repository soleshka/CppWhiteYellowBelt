////============================================================================
//// Name        : CourseraWhiteBeltCpp.cpp
//// Author      :
//// Version     :
//// Copyright   : Your copyright notice
//// Description : //Rational numbers class with 2 Rational numbers operators overloading , with unit testing. Adding exception
////for devision by 0
//
//
//
//#include <iostream>
//#include <sstream>
//#include <set>
//#include <vector>
//#include <map>
//#include <exception>
//using namespace std;
//
//
//class Rational {
//	public:
//	  Rational(){
//		  p = 0;
//		  q = 1;
//	  }
//	  //q is always > 0   p can be negative
//	  Rational(int numerator, int denominator){
//
//		  if (denominator == 0){
//			  throw invalid_argument("invalid_argument");
//		  }
//		  int gcd = myabs(gcd_val(numerator,denominator));
//		  //1. check how is positive who is negativ
//		  if ( (numerator >= 0 && denominator >= 0)  || (numerator < 0 && denominator < 0)){
//			  p = myabs(numerator)/gcd;
//			  q = myabs(denominator)/gcd;
//		  }else{//one is less 0
//			  p = -1*myabs(numerator)/gcd;
//			  q = myabs(denominator)/gcd;
//		  }
//	  }
//
//	  int Numerator() const{
//		  return p;
//	  };
//	  int Denominator() const{
//		  return q;
//	  }
//	private:
//
//	  int p; // integer
//	  int q; // rasional
//	  int gcd_val(int a, int b) {
//	     if (b == 0)
//	        return a;
//	     return gcd_val(b, a % b);
//	  }
//	  int myabs(int a) {
//	     if (a > 0)
//	        return a;
//	     else
//	    	 return -1*a;
//	  }
//	  //int mmd;
//	};
//
////redirection to a stream overloading
//ostream& operator<<(ostream& stream, const Rational& r){
//	stream << r.Numerator() << '/' << r.Denominator();
//	return stream;
//}
//istream& operator>>(istream& stream, Rational& r){
//	string snum,sdenum;
//	//if stream is empty we should not chnge r
//	int num = r.Numerator(),denum = r.Denominator() ;
//	string line;
//
//
//	stream >> line;
//	auto dev_pos = line.find("/");
//	if (line != ""){ //empty stream
//		snum = line.substr(0,dev_pos);
//		sdenum = line.substr(dev_pos+1);
//
//		istringstream  iss(snum);
//		istringstream  iss1(sdenum);
//		iss >> num ;
//		iss1>> denum;
//	}
//	Rational temp(num,denum);
//	r = temp;
//	return stream;
//}
//
////comparison equasion overloading
//bool operator==(const Rational& r1,const Rational& r2){
//	if (r1.Numerator() == r2.Numerator() && r1.Denominator()== r2.Denominator() ) return true;
//	return false;
//}
////summary of 2 Rational
//Rational operator+(const Rational& r1,const Rational& r2){
//
//	Rational temp_r(r1.Numerator()*r2.Denominator() + r2.Numerator()*r1.Denominator() , r1.Denominator()*r2.Denominator());
//	return temp_r;
//
//}
////deduction of 2 Rational
//Rational operator-(const Rational& r1,const Rational& r2){
//
//	Rational temp_r(r1.Numerator()*r2.Denominator() - r2.Numerator()*r1.Denominator() , r1.Denominator()*r2.Denominator());
//	return temp_r;
//
//}
////multiplication of 2 Rational
//Rational operator*(const Rational& r1,const Rational& r2){
//
//	Rational temp_r(r1.Numerator()*r2.Numerator() , r1.Denominator()*r2.Denominator());
//	return temp_r;
//
//}
//
////division of 2 Rational
//Rational operator/(const Rational& r1,const Rational& r2){
//
//	if (r2.Numerator() == 0){
//		throw domain_error("domain_error");
//	}
//	Rational temp_r(r1.Numerator()*r2.Denominator() , r1.Denominator()*r2.Numerator());
//	return temp_r;
//
//}
////smaller/bigger comparison
//bool operator<(const Rational& r1,const Rational& r2){
//	double n1,n2;
//	n1 = static_cast<double>(r1.Numerator())/static_cast<double>(r1.Denominator());
//	n2 = static_cast<double>(r2.Numerator())/static_cast<double>(r2.Denominator());
//	return (n1 < n2);
//
//}
//
//int main() {
//    try {
//        Rational r(1, 0);
//        cout << "Doesn't throw in case of zero denominator" << endl;
//        return 1;
//    } catch (invalid_argument&) {
//    }
//
//    try {
//        auto x = Rational(1, 2) / Rational(0, 1);
//        cout << "Doesn't throw in case of division by zero" << endl;
//        return 2;
//    } catch (domain_error) {
//    }
//
//    cout << "OK" << endl;
//    return 0;
//}
//

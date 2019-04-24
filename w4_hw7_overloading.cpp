////============================================================================
//// Name        : CourseraWhiteBeltCpp.cpp
//// Author      :
//// Version     :
//// Copyright   : Your copyright notice
//// Description : //Rational numbers class with 2 Rational numbers operators overloading , with unit testing
//
////bad request
//
//#include <iostream>
//#include <sstream>
//#include <set>
//#include <vector>
//#include <map>
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
////int main () {
////	Rational r1(0,1);
////	cout << r1 << endl;
////	Rational r2(-14,36);
////	cout << r2 << endl;
////	Rational r3(16,-48);
////	cout << r3 << endl;
////	Rational r4(-7,-11);
////	cout << r4 << endl;
////
////	cout << (r1<r2) << endl;
////	cout << (r1<r3) << endl;
////	cout << (r2<r3) << endl;
////	cout << (r1<r4) << endl;
////  return 0;
////}
//
////int main() {
////    {
////        const Rational r(3, 10);
////        if (r.Numerator() != 3 || r.Denominator() != 10) {
////            cout << "Rational(3, 10) != 3/10" << endl;
////            return 1;
////        }
////    }
////
////    {
////        const Rational r(8, 12);
////        if (r.Numerator() != 2 || r.Denominator() != 3) {
////            cout << "Rational(8, 12) != 2/3" << endl;
////            return 2;
////        }
////    }
////
////    {
////        const Rational r(-4, 6);
////        if (r.Numerator() != -2 || r.Denominator() != 3) {
////            cout << "Rational(-4, 6) != -2/3" << endl;
////            return 3;
////        }
////    }
////
////    {
////        const Rational r(4, -6);
////        if (r.Numerator() != -2 || r.Denominator() != 3) {
////            cout << "Rational(4, -6) != -2/3" << endl;
////            return 3;
////        }
////    }
////
////    {
////        const Rational r(0, 15);
////        if (r.Numerator() != 0 || r.Denominator() != 1) {
////            cout << "Rational(0, 15) != 0/1" << endl;
////            return 4;
////        }
////    }
////
////    {
////        const Rational defaultConstructed;
////        if (defaultConstructed.Numerator() != 0 || defaultConstructed.Denominator() != 1) {
////            cout << "Rational() != 0/1" << endl;
////            return 5;
////        }
////    }
////
////    cout << "OK" << endl;
////    return 0;
////}
//
//int main() {
//    {
//        Rational r1(4, 6);
//        Rational r2(2, 3);
//        bool equal = r1 == r2;
//        if (!equal) {
//            cout << "4/6 != 2/3" << endl;
//            return 1;
//        }
//    }
//
//    {
//        Rational a(2, 3);
//        Rational b(-2, 3);
//        Rational c = a + b;
//        bool equal = c == Rational(0, 1);
//        if (!equal) {
//            cout << "2/3 + 4/3 != 2" << endl;
//            return 2;
//        }
//    }
//
//    {
//        Rational a(5, 7);
//        Rational b(2, 9);
//        Rational c = a - b;
//        bool equal = c == Rational(31, 63);
//        if (!equal) {
//            cout << "5/7 - 2/9 != 31/63" << endl;
//            return 3;
//        }
//    }
//
//    cout << "OK" << endl;
//    return 0;
//}
//
////int main() {
////    {
////        Rational a(2, 3);
////        Rational b(4, 3);
////        Rational c = a * b;
////        bool equal = c == Rational(8, 9);
////        if (!equal) {
////            cout << "2/3 * 4/3 != 8/9" << endl;
////            return 1;
////        }
////    }
////
////    {
////        Rational a(5, 4);
////        Rational b(15, 8);
////        Rational c = a / b;
////        bool equal = c == Rational(2, 3);
////        if (!equal) {
////            cout << "5/4 / 15/8 != 2/3" << endl;
////            return 2;
////        }
////    }
////
////    cout << "OK" << endl;
////    return 0;
////}
//
////int main() {
////    {
////        ostringstream output;
////        output << Rational(-6, 8);
////        if (output.str() != "-3/4") {
////            cout << "Rational(-6, 8) should be written as \"-3/4\"" << endl;
////            return 1;
////        }
////    }
////
////    {
////        istringstream input("5/7");
////        Rational r;
////        input >> r;
////        bool equal = r == Rational(5, 7);
////        if (!equal) {
////            cout << "5/7 is incorrectly read as " << r << endl;
////            return 2;
////        }
////    }
////
////    {
////        istringstream input("5/7 10/8");
////        Rational r1, r2;
////        input >> r1 >> r2;
////        bool correct = r1 == Rational(5, 7) && r2 == Rational(5, 4);
////        if (!correct) {
////            cout << "Multiple values are read incorrectly: " << r1 << " " << r2 << endl;
////            return 3;
////        }
////
////        input >> r1;
////        input >> r2;
////        correct = r1 == Rational(5, 7) && r2 == Rational(5, 4);
////        if (!correct) {
////            cout << "Read from empty stream shouldn't change arguments: " << r1 << " " << r2 << endl;
////            return 4;
////        }
////    }
////
////    cout << "OK" << endl;
////    return 0;
////}
//
//
////int main() {
////    {
////        const set<Rational> rs = {{1, 2}, {1, 25}, {3, 4}, {3, 4}, {1, 2}};
////        if (rs.size() != 3) {
////            cout << "Wrong amount of items in the set" << endl;
////            return 1;
////        }
////
////        vector<Rational> v;
////        for (auto x : rs) {
////            v.push_back(x);
////        }
////        if (v != vector<Rational>{{1, 25}, {1, 2}, {3, 4}}) {
////            cout << "Rationals comparison works incorrectly" << endl;
////            return 2;
////        }
////    }
////
////    {
////        map<Rational, int> count;
////        ++count[{1, 2}];
////        ++count[{1, 2}];
////
////        ++count[{2, 3}];
////
////        if (count.size() != 2) {
////            cout << "Wrong amount of items in the map" << endl;
////            return 3;
////        }
////    }
////
////    cout << "OK" << endl;
////    return 0;
////}



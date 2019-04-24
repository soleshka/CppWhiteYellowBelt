//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//	double a,b,c,x1,x2,del;
//	cin >> a >> b >> c;
//	del = b*b-4*a*c;
//
//
//	if (del >= 0 ) {
//		if (del > 0){//del > 0
//			if (a == 0){
//				x1 = -1*c/b;
//				cout << x1;
//			}else{
//				x1 = (-b + sqrt(del))/(2*a);
//				x2 = (-b - sqrt(del))/(2*a);
//				cout << x1 << " " << x2;
//			}
//		}else{//del == 0
//			if (b == 0 && c == 0){
//				x1 = 0;
//				cout << x1;
//			}else if(b == 0 && a == 0){
//				//nothing here
//			}else {
//				x1 =  -b/(2*a);
//				cout << x1;
//			}
//		}
//	}else{
//		//no roots, del < 0
//	}
//	return 0;
//}

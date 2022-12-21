#include <iostream>
#include <cmath>
using namespace std;

float funzione (float y) {
    y=pow (y , 2)*cos(y)+1 ;
    return y ;
}

float bisezione (float a , float b) {
    int i = 1;
    float x = 0 ,z=0 ;
    float err = 0;
    do {
        cout << "inserire estremi" << endl;
        cin >> a >> b;
    } while ((funzione(a) * funzione(b)) >= 0);
    while (i>0) {
        x=(a+b)/2 ;
        if (funzione(x)==0){
            cout << x << endl;
            cout << funzione(x) << endl;
        }
        else  {
            z=funzione(a)*funzione(b) ;
        }
        while (i>0) {
            if (z < 0) {
                b = x;
            } else {
                a = x;
            }
            err=abs(((b-6)/2));
            if (err>=(1/pow(M_E , -6))){
                break;
            }
            else
            {
                cout << trucf(x) << endl;
                cout <<truncf( funzione(x)) << endl;
                i-- ;
            }
        }
    }
}

int main() {
   float a , b ;
    bisezione (a , b) ;
   return 0;
}

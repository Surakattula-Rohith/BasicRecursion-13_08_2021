// Name : SURAKATTULA ROHITH
// Schloar No : 191114289
// Branch : ECE

# include <iostream>
using namespace std ;

int factorial(int a){
    if(a == 1){
        return 1 ;
    }
    return a*factorial(a-1) ;
}

int main(){

    cout << "Enter the number : " << endl ;

    int a ;

    cin >> a ;
    cout << factorial(a) <<endl ;
    return 0 ;

}
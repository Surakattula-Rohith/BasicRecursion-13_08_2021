# include <iostream>
using namespace std ;

int Pairing(int n){
    if(n==0 || n==1){
        return 0 ;
    }
    if(n==2){
        return 1 ;
    }

    return Pairing(n-2)+(n-1)*Pairing(n-1) ; 
}

int main(){

    cout << Pairing(3) << endl ;

    return 0 ;
}
//Name : SURAKATTULA ROHITH
// Schloar No : 191114289
// Fibonacci Series

# include <iostream> 
using namespace std ;

int fibonaci(int n){

    if(n==1){
        return 1 ;
    }
    if(n == 0 ){
        return 0 ;
    }
    
   return fibonaci(n-1)+fibonaci(n-2) ;
}

int main(){

    int a ;
    cout << "Enter the number :" <<endl ;
    cin >> a ;
    for(int i = 1 ; i <= a ; i++){
     cout << fibonaci(i) << " "  ;
    }
    return 0 ;
}

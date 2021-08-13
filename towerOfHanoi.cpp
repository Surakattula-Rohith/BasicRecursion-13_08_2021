
// NAME : Surakattula Rohith
// Schloar : 191114289
// TOWER OF HANOI 

#include <iostream>
using namespace std ;
 
 // Tower of Hanoi recursive Code

 void towerOfHanoi(int n , char src, char dest , char helper ){
            if (n == 0 ){
                return ;
            }
        // c++ ;
        towerOfHanoi(n-1 , src , helper  , dest) ;
        cout << "Move from " << src << " to " << dest << endl ;
        towerOfHanoi(n-1 , helper , dest , src) ;
        }

// Main Function of program
int main(){

    cout << "Enter the number of towers : "  << endl ;
    int n = 0 ;
    // cin  >> n ;

    towerOfHanoi(3 , 'A' , 'C','B');
    
    return 0 ;
}

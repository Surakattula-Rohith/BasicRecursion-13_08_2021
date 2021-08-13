# include <iostream>
using namespace std ;

int Sum(int n){

    if(n == 0){
        return 0 ;
    }
    int prev = Sum(n-1) ;
    return n+prev ;
}
int main(){

    int a ;

    cout << "Print the sum of n numbers" << endl ;

    cin  >> a ;

    cout << Sum(a) <<endl  ;

    return 0 ;

}
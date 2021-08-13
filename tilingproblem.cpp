# include <iostream>
using namespace std ;

// This is the Tiling Ways and not the total number of tiles requires//
int tilingWays(int n){
    if(n == 2){
        return 2 ;
    }
    if( n == 1 ){
        return 1 ;
    }

    if(n == 0){
        return 0 ;
    }
    return tilingWays(n-1)+ tilingWays(n-2) ;

}

int main(){

    cout << tilingWays(10) << endl ;

    return 0 ;
}
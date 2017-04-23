#include <iostream>
#include "cTimer.h"

using namespace std ;

int main(){
	cTimer ti ; 
	for(int i = 0 ; i < 10000 ; i++){
		ti++ ; 
		ti.Show() ;
	}
	return 0;
}
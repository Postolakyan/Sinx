#include "sinxcosxh.hpp"
// calculating the factorial of number
int factorialc(int n){
	double p=1;
	for(int i=1;i<=n;i++){
	p=p*i;
	
	}
	
	return p;
}

int  cosx(int x){
	while(x>180 || x<0){
		if (x>180){
			x-=180;
		}else{
			x+=180;
		}
}//turns the angle into radians
int result =0;
x=(x*M_PI)/180;
for( int j=0;j<10;j++){
	int h= 2*j;
	result+=(pow(-1,j)*pow(x,h))/(factorialc(h));//WE use the Teylor's formula for Cos(x)
}
		return result;
}



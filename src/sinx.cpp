#include"sinxcosxh.hpp"
// calculating the factorial of number 
   	int factorial(int n) {

        	int p=1;
           	for (int i =1; i<=n;i++) {
   
            		p=p*i;
  		}
                  return p;
	}
  
 		int sinx (int x) {

			while(x>90 ||x<-90){
				if(x>90){
					x-=180;}
						else{
						x+=180;}
			}	//Turns the angle into radians	
  	 		int patasxan=0;
          		x = (x*M_PI)/180;
         		for (int j=0;j<=10;j++){
                  		int h =2*j+1;
          			patasxan+= (pow(-1,j)*pow(x,h)) / factorial(h); //use the formula of Taylor for Sin(x)
  			}
   
                 return patasxan;
 
 		}	 
  
  
 

                                                                                                                                       

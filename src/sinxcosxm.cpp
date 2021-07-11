#include"sinxcosxh.hpp"
// Insert the angle and choose the type sin or cos
int main() {
	int d = 0;
	string type = "";
	cout<<"Please enter degree:"; cin >> d;
		cout<< "Please enter operator name (sin or cos)";cin>>type;
	if(type == "sin"){
  		cout<< sinx(d)<<endl;
	}	else{
			cout<< cosx(d)<<endl;
		}
		return 0;
}

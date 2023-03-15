#include <iostream> 
#include <math.h> 
#include <iostream> 

using namespace std; 

int main(){
	float x,ans;
	
	cin >> x;
	
	if (x > 1.5){
		ans = 2.5 * pow(x,3) + 6 * pow(x,2) - 30;
	}
	
	if (x <= 1.5 && x > 0){ 
		ans = x + 1;
	}
	
	else{
		ans = x;
	}
	
	cout << ans; 
	
	return 0;
}

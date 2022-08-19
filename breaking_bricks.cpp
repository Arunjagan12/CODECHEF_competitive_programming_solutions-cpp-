#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,S,w1,w2,w3;
    cin>>T;
while(T>0){
       cin>>S>>w1>>w2>>w3;
       
       if((w1==w2)&&(w2==w3)&&(w1==w3)){
           if(w1*3<=S)
               cout<<1<<endl;
           else if((S>=(w1*2))&&(S<(w1*3)))
               cout<<2<<endl;
            else
            cout<<3<<endl;
           
           
           
       }
       else{
       if((w1+w2+w3)<=S)
       cout<<1<<endl;
       else if(w1+w2<=S||w2+w3<=S){
           cout<<2<<endl;
       }
       else{
       cout<<3<<endl;
       }
       }
       T--;
}
    

	return 0;
}

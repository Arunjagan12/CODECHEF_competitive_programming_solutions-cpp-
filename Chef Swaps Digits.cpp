#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int a,b,sum;
	    cin>>a>>b;
	    int a1=a/10;
	    int a2=a%10;
	    int b1=b/10;
	    int b2=b%10;
	    sum=a+b;
	    if(a1!=0 && b1!=0){
	        int x=(a1*10+b1)+(a2*10+b2);
	        int y=(a1*10+b2)+(b1*10+a2);
	        int z=(b2*10+a2)+(b1*10+a1);
	        if(x>sum){
	            sum=x;
	            
	        }
	        if(y>sum){
	            sum=y;
	            
	        }
	        if(z>sum){
	            sum=z;
	        }
	        cout<<sum<<"\n";
	    }
	    
	    else if(a1!=0 && b1==0){
	        int x=(a1*10+b2)+a2;
	        int y=(b2*10+a2)+a1;
	        if(x>sum)
	        sum=x;
	        if(y>sum)
	        sum=y;
	        cout<<sum<<"\n";
	    }
	    
	    else if(a1==0 && b1!=0){
	        int x=(a2*10+b2)+b1;
	        int y=(b1*10+a2)+b2;
	        if(x>sum)
	        sum=x;
	        if(y>sum)
	        sum=y;
	        cout<<sum<<"\n";
	    }
	    else{
	        cout<<sum<<"\n";
	    }
	}
	return 0;
}

#include <iostream>
using namespace std;
void path();
int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	    int r,c;
	    cin>>r>>c;
	    if(r==1&&c==1){
	        cout<<17<<endl;
	        path();
	    }
	    else if(r==c){
	    cout<<18<<endl;
	    cout<<r<<" "<<c<<endl;
	    path();
	    }
	    
	    else{
	        cout<<19<<endl;
	        cout<<r<<" "<<c<<endl;
	        int f=(r+c)/2;
	        cout<<f<<" "<<f<<endl;
	        path();
	    }
	    
	    
	T--;      
	}
	
	return 0;
}
void path(){
    cout<<"1"<<" "<<"1"<<endl;
    cout<<"8"<<" "<<"8"<<endl;
    cout<<"7"<<" "<<"7"<<endl;
    cout<<"6"<<" "<<"8"<<endl;
    cout<<"1"<<" "<<"3"<<endl;
    cout<<"3"<<" "<<"1"<<endl;
    cout<<"8"<<" "<<"6"<<endl;
    cout<<"7"<<" "<<"5"<<endl;
    cout<<"8"<<" "<<"4"<<endl;
    cout<<"5"<<" "<<"1"<<endl;
    cout<<"1"<<" "<<"5"<<endl;
    cout<<"4"<<" "<<"8"<<endl;
    cout<<"3"<<" "<<"7"<<endl;
    cout<<"2"<<" "<<"8"<<endl;
    cout<<"1"<<" "<<"7"<<endl;
    cout<<"7"<<" "<<"1"<<endl;
    cout<<"8"<<" "<<"2"<<endl;
    
  
       
}



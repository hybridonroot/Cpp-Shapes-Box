/*author : hybridoitc*/
#include<iostream>
using namespace std;
int main(){
int c, r;


	for(r=1; r<=7; r++)
	{
    for(c=1; c<=7; c++) 
      if(c==1 || c==7 || r==1 || r==7 || c==7-r+1 || c==r)
	cout<<" *";
	else 
	cout<<"  ";
	cout<<endl;
	}
	return 0;	
}

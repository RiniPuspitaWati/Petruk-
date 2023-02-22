#include <iostream>
using namespace std;

int main()
{
	int r;
	cin>>r;
	
	for(int p=1 ; p<=r ; p++)
	{
			if(p%5==0)
		{
			continue;
		}
		else if(p==31)
		{
			cout<<"NOT FOUND";
			break;
		}
		
		cout<<p<<endl;
	}
	
	
	return 0;

}


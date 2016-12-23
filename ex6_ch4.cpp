/* 
 * Solution for exercise 6: Convert 7 to seven and seven to 7
 */


#include <iostream>
#include <vector>
using namespace std;




int main()
{
	
	vector <string> NumName ={"zero","one","two","three","four","five","six","seven","eight","nine"};
	int UserNum=0;
	while (true)
	{
	cout<<"please enter a digit"<<"\n";
	cin>>UserNum;
	int i =0;
	
	for (int i=0; i<NumName.size(); i++)
	{	if (i==UserNum)
			cout << UserNum<<"="<<NumName[UserNum]<<"\n";
	}//for
	
	
	string UserNumName;
	cout<<"Please enter a spelled out number."<<"\n";
	cin>>UserNumName;
	
	
	for (int i=0; i<NumName.size(); i++)
	{
		if (NumName[i]==UserNumName)
		{
		 cout <<UserNumName<<"="<<i<<"\n";
	     
	    }//if
	}//for

	}
	
	
	
} // main
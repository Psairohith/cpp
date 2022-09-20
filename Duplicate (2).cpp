using namespace std;
#include<iostream>
main()
{
	int age;
	cout<<"enter age ";
	cin>>age; 
	if(age>0 && int(age))
	{
		if(age>=18)
		{
			cout<<"eligible for voting";
	    }
	    else
	    {
	    	cout<<"not eligible for voting";
	    }
    }
    else
    {
    	cout<<"not valid";
	}
}
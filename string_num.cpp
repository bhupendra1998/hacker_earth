#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
using namespace std;


int main()
{
	char s[100];
	cout<<"enter the string in the array"<<endl;
	for (int i = 0; i < 10; ++i)
	{
		/* code */
		cin>>s[i];
	}
	for (int i = 0; i < 10; ++i)
	{
		/* code */
		if (s[i]>=97&&s[i]<=123)
		{
			/* code */
			cout<<"."<<endl;
		}
		else
			cout<<s[i]<<endl;
	}

	return 0;
}
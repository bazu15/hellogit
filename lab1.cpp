#include <vector>
#include<iostream>
#include <string>
using namespace std;

main()
{
vector<int> v1={10,20,30,40,50};
v1.pop_back();
v1.push_back(100);

	for (int i=0; i <v1.size() ; i++)
	{
	cout<<v1[i]<<"";
	}

	string name = "Tahan";
	name += " Towler";
	cout<<name<<endl;
}

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string v("this is a string");
	vector<string> v2 = { "this", "is", "a","vetor", "string" };


	auto b = v.begin(), e = v.end();
	auto b2 = v2.begin();
	 
	if (v.begin() != v.end())
		*b = toupper(*b);

	(*b2).empty();
	cout << *b << ' '<<endl;
}
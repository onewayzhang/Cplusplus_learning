#include<iostream>
#include<string>
using namespace std;

int main()
{
/*	int a = 5;
	string s1 = "我们在这里,";
	string s2(10, 'v');
//	cout << a << '\n'<<s1<<'\n'<<s2<<endl;

	string s3 = "world\n";      //包含换行符
	cout << s1 + s3 << endl;
	cout << s2 + ", " +s1<< endl;
*/



/*
	string str = "some, string!";
	for (auto c : str)
		cout << c << endl;

	string::size_type punc_cnt = 0; //或 decltype(str.size())
	for (auto c : str)
		if (ispunct(c))
			++punc_cnt;

	cout << "the number of punct is " << punc_cnt << endl;


	for (auto &c : str) // str中的字符全部改为大写
		c = toupper(c);

	cout << str <<'\n'<<str[0]<< endl;

*/



	// 下面将str中的第一个单词改为小写，即遇到空白时停止执行
/*	string str("HELLO ");
	for (string::size_type index = 0; index != str.size() &&
		!isspace(str[index]); ++index)
		str[index] = tolower(str[index]);  //str[index]为对应字符的引用

	cout << str<< endl;
*/


/*
	const string hex = "0123456789ABCDEF";
	cout << "enter a series of numbers between 0 and 15 "
		 "separated by spaces. Hit Enter when finished: "
		<< endl;
	string result;
	string::size_type n;

	while (cin >> n)           //比如输入的是12 5 8，想得到输出为C58
		if (n < hex.size())
			result += hex[n];  //巧妙地利用了第12个数就是c
		
	cout << result << endl;  
*/

	string s3 = "this is a job";
	for (auto &c : s3)      //因为要改变c中的字符，所以用引用
		if(!isspace(c))    //c绑定的字符为空白时为假
		  c = 'X';

	cout << s3 << endl;

	//gfagdgfdfgfdsgdfsgdf
}

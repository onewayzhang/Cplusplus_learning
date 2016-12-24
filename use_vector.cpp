#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	/*	vector<int> v1 = {1,4,56,7},v2(20);
		vector<int> v3;
		for (int i = 0; i != 100; ++i)
			v3.push_back(i);

		cout << v3[56]<< endl;

	*/

	string word;
	vector<string> txt;
	int num;
	vector<int> zs;

//	while (cin >> num) {
//		zs.push_back(num);
//	}
//	cout << zs.size()<< endl;

//	while (cin >> word) {                //当输入为string类型时，注意换行后再用ctrl+z
//		txt.push_back(word);
//	}
//	cout << txt[txt.size()-1] << endl;



/*
	vector<int> v1{ 1,2,3,4,5 };
	for (auto &i : v1)
		i *= i;                       //依次改变v1中的元素
	for (auto i : v1)					//改变后的v1中的元素的输出		
		cout << i << ' ';
	cout<< endl;

	vector<int> v2{ 56,78,9 }, v3{ 23,46,7 }, v4{45,67};
	vector<vector<int>> vv1{ v1,v2 };  //vv为向量的组合，可看作一行一行的向量
	vector<vector<int>> vv2{ v3,v4 };
	cout << vv1[0][4] << endl;

	vector<vector<vector<int>>> vvv{vv1,vv2};  //进一步组合，构成三维矩阵
	cout << vvv[0][1][2] << endl;
*/



	//下面依次输入成绩，分数在0-100之间，要求按0-9,10-19,20-29……，100划分
/*	vector<unsigned> grade(11,0);
	unsigned score;

	while (cin >> score) {
		if (score <= 100)
			++grade[score / 10];
	}
	cout << grade[0] << '\n' << grade[5] << endl;

*/



	//
/*	vector<string> s1;
	string word1;
	while (cin >> word1)
		s1.push_back(word1);


	for (auto &i1 : s1) {             //实践表明：这里i1定义不定义成引用类型都可以
		for (auto &i2 : i1) {
			i2 = toupper(i2);
		}
		cout << i1 << endl;
	}
*/


	string ss("this is good");
	for (auto &ii : ss)	        //说明：使用&即引用类型总是没有错的
		cout << ii << endl;


}
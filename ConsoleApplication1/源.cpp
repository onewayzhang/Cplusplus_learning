#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	//text必须是有序的
	//beg和end表示搜索的范围
	vector<int> text = {20,40,60,80};
	int sought;

	//for (int i = 1; i != 100; ++i) //设置text为1到99
		//text.push_back(i);


	cin >> sought;

	auto beg = text.begin(), end = text.end();
	auto mid = beg + (end-beg) / 2;
	//cout << *mid << endl;

	while (mid!=end &&*mid != sought) {
		if (*mid > sought)
		{
			end = mid;     //重新确立了end点并保留到下一轮中
		}
		else
		{
			beg = mid+1;         //重新确立了begin点并保留到下一轮中
		}						

		mid = beg + (end - beg) / 2;
	}
	cout << *mid << endl;


}

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	//text�����������
	//beg��end��ʾ�����ķ�Χ
	vector<int> text = {20,40,60,80};
	int sought;

	//for (int i = 1; i != 100; ++i) //����textΪ1��99
		//text.push_back(i);


	cin >> sought;

	auto beg = text.begin(), end = text.end();
	auto mid = beg + (end-beg) / 2;
	//cout << *mid << endl;

	while (mid!=end &&*mid != sought) {
		if (*mid > sought)
		{
			end = mid;     //����ȷ����end�㲢��������һ����
		}
		else
		{
			beg = mid+1;         //����ȷ����begin�㲢��������һ����
		}						

		mid = beg + (end - beg) / 2;
	}
	cout << *mid << endl;


}

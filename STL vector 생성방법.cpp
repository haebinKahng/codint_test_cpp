#include <iostream>
#include <vector> 
using namespace std;
int main()
{
//	vector<int> a;   // �ʱ⺤�� 0����  	
//	a.push_back(6);         // ��ü�ּ�, ����  ctrl+/ 
//	a.push_back(8);
//	a.push_back(11);
//	
//	cout << a.size() << endl; //3
//	cout << a[1] << endl;     //8

//    vector<int> c[3];   //c��� ���� ��ü 3�� ���� 
//	c[0].push_back(1);
//	c[0].push_back(3);
//	c[0].push_back(5);
//	c[1].push_back(2);
//	c[1].push_back(4);
//	c[1].push_back(6);
//	c[2].push_back(7);
//	cout << c[1][1] << endl;
//	cout << c[2][0] << endl; 

    vector<pair<int, int> > graph[3];	// g��� ���� 3�� ����  
	graph[1].push_back({3, 5});
	graph[1].push_back({4, 7});
	graph[1].push_back({5, 9});
	graph[2].push_back(make_pair(7, 7));
	cout << graph[1][2].first << " " << graph[1][2].second << endl;
	
	
	
	
}

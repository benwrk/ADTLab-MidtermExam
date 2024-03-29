#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
	int misses = 0;
	int n;
	cin >> n;
	int m;
	cin >> m;
	set<int> pages;
	set<int>::iterator pagesItr;
	for (int i = 0; i < m; i++)
	{
		int x;
		cin >> x;
		if (!(find(pages.begin(), pages.end(), x) != pages.end()))
		{
			misses++;
			/*cout << "MISS" << endl;*/
			pages.insert(x);
			if (pages.size() > n)
			{
				/*cout << "THROW" << pages.front() << endl;*/
				pages.erase(*pages.begin());
			}
		}
	}
	cout << misses << endl;
	return 0;
}

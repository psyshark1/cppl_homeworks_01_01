#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::vector<int> v {4, 7, 9, 14, 12};

	std::for_each(v.begin(), v.end(), [](int& elem)
		{
			std::cout << elem << ' ';
		});
	std::cout << '\n';
	std::for_each(v.begin(), v.end(), [](int& elem)
		{
			if (!(elem % 2)) { elem = elem << 1; }
		});

	std::for_each(v.begin(), v.end(), [](int& elem)
		{
			std::cout << elem << ' ';
		});
	std::system("pause");
	return 0;
}

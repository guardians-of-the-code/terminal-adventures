#include <iostream>
#include <string>
const int height=20;
const int width=100;
using namespace std;
class terminal {
public:
	void draw()
	{
		for (int x = 0; x < height; x++)
		{
			for (int y = 0; y < width; y++)
			{
				if (x == 0 || x == height - 1)
				{
					cout << "#";
				}
				else
				{
					if (y == 0 || y == width - 1)
					{
						cout << "#";
					}
					else
					{
						cout << " ";
					}
				}

			}
			cout << endl;
		}
	}

};

int main() 
{
	terminal map1;
	cout << "Hello world" << endl;
	map1.draw();

}

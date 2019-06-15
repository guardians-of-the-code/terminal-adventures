#include <iostream>
#include <string>
const int height=20;
const int width=100;
using namespace std;
class terminal {// declared class
public:
	void draw()// function for class
	{
		for (int x = 0; x < height; x++)// Says whioh row it is
		{
			for (int y = 0; y < width; y++)// says which element of the row it is
			{
				if (x == 0 || x == height - 1)// iterates through the whole row if it is at 0(top) or height-1(bottom)
				{
					cout << "#";
				}
				else
				{
					if (y == 0 || y == width - 1)// Acts as a border for middle of screen.Adding #only if at first element 0 or  at end element width-1
					{
						cout << "#";
					}
					else// If neither of above is true, it fills it in with whitespace, giving user a box.
					{
						cout << " ";
					}
				}

			}
			cout << endl;// ends line after row is complete and starts next row.
		}
	}

};

int main() 
{
	terminal map1; // declare class variable
	cout << "Hello world" << endl;
	map1.draw();// calling variable function

}

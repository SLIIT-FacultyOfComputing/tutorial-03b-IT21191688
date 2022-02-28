#include<iostream>
using namespace std;
int volume(int height, int width, int length);
struct Box
{
	int height;
	int width;
	int length;
};
int main()
{
	int totalVolume;
	struct Box box1;
	struct Box box2;

	cout << "Enter the Box 1 Height :";
	cin >> box1.height;
	cout << "Enter the Box 1 Width :";
	cin >> box1.width;
	cout << "Enter the Box 1 Length :";
	cin >> box1.length;

	cout << "Enter the Box 2 Height :";
	cin >> box2.height;
	cout << "Enter the Box 2 Width :";
	cin >> box2.width;
	cout << "Enter the Box 2 Length :";
	cin >> box2.length;

	totalVolume = volume(box1.height, box1.width, box1.length) +
		volume(box2.height, box2.width, box2.length);


	cout << "Volume of Box is " << totalVolume << endl;
}
int volume(int height, int width, int length)
{
	int volume;

	volume = height * width * length;

	return volume;
}

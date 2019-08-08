#include<iostream>
using namespace std;
class Distance
{
private:
	int feet;
	float inches;
public:
	Distance() : feet(0), inches(0.0)
	{}
	
	Distance(int ft, float in): feet(ft), inches(in)
	{}
	~Distance( )
	{
		cout << "Destructor !!!!" << endl;
	}
	void getdist()
	{
		cout << "Please! Enter number pounds: "; cin >> feet;
		cout << "Please! Enter number inches: "; cin >> inches;
	}
	void showdist()
	{
		cout << feet << "'-" << inches << '"' << endl;
	}
	Distance add_dist(Distance);
};
Distance Distance::add_dist(Distance d2)
{
	Distance temp;
	temp.inches = inches + d2.inches;
	if (temp.inches >= 12.0)
	{
		temp.inches -= 12.0;
		temp.feet = 1;
	}
	temp.feet += feet + d2.feet;
	return temp;
}

int main()
{
	Distance d1, d3;
	Distance d2 = { 11, 6.25 };
	d1.getdist();
	d3 = d1.add_dist(d2);
	cout << "d1= "; d1.showdist();
	cout << "d2= "; d2.showdist();
	cout << "d3= "; d3.showdist();
	system("pause");
	return 0;

}
#include <iostream>
#include <fstream>

using namespace std;

class Collatz
{
	private:
		ofstream myfile;
	public:
		Collatz()
		{
			myfile.open("Collatz Conjecture.txt");
		}
		int n;
		int Conjecture_function(int);
};

int Collatz:: Conjecture_function(int n)
{

	if (n == 1)
	{
		myfile<<n;
		return 0;
	}
	else if (n %  2  == 0)
	{
		
		myfile<<n;
		myfile<<"--->";
		n = n/2;
		Conjecture_function(n);
	}
	else
	{
		myfile<<n;
		myfile<<"--->";
		n = 3*n+1;
		
		Conjecture_function(n);
	}
	return 0;
}
//============================================================================
// Name        : TripleStep.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//ex) going to 3 steps.
int tripleStep(int step )
{
	if( step < 0)
		return 0;
	else if(step == 0)
	{
		return 1;
	}
	else
	{
		return tripleStep( step - 1) + tripleStep( step - 2) + tripleStep( step - 3);
	}

}

int main()
{
	cout << tripleStep(3) << endl;

	return 0;
}

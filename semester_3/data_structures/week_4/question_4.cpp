#include <iostream>
using namespace std;

void Tower(int disks,int start,int dest,int aux)
{
    if(disks==1)
        cout<<"Moved from "<< start << " to " << dest << endl;
    else 
    {
    	Tower(disks-1,start,aux,dest);
    	Tower(disks-1,aux,start,dest);
	}
}

int main()
{
    cout << "Enter the number of disks, the starting pole tower number, the destination tower number and the auxilarry tower number" << endl;
    int disks, Tow1, Tow2, Tow3;
    cin >> disks >> Tow1 >> Tow2 >> Tow3;
    
    Tower(disks, Tow1, Tow2, Tow3);
}


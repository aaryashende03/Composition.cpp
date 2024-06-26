//Program: This given program is based on compostion( similar like inheritance). In this program an object of another class has been created in the program

#include<iostream>
using namespace std;
class Hello //Class Hello
{
	public : int x; // characteristics(4 bytes)
	
	
	void fun()
	{
		cout<<"Inside fun<<\n";
	}
	
};

class Demo //Class Demo
{
   public:
          int ino;   //characteristics (4bytes)
          Hello hobj;   //Total memory will be allocated as (8 bytes). Object of another class i.e; Hello class has been created
		  
   void gun()
   {
	   cout<<"Inside fun<<\n";
   }
   
};

int main()
{
	cout<<"Inside main<<\n";
	Demo dobj;
	dobj.hobj.fun();//compostion call (Call is given to the fun function which is in hello class)
    
	return 0;
}
	   
  		  
	       
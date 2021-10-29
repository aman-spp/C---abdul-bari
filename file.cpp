# include<iostream>
# include<fstream>
using namespace std;
     
/*program for writing a file

*/
int main()
{
	ofstream ofs("my.text", ios::app); //in place of app we can also write trunc
	// ofs<<"john"<<endl;
	// ofs<<25<<endl;
	// ofs<<"cs"<<endl;
    for(int i=0;i<100;i++)
    ofs<<"Hello this is a file which is created by C++ program, using VS Code "<<endl;
	ofs.close();
}
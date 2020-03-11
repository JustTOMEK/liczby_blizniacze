#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int czypierwsza(int a)
{
if(a<2)
return false;

for(int i=2;i*i<=a;i++)
if(a%i==0)
return false;
return true;
}

int main ()
{
ifstream in;
in.open("liczby.txt");

ofstream out;
out.open ("blizniacze.txt");

vector <int> alamo;

int xd;

while(in>>xd)
{
    alamo.push_back(xd);
}

for (int i=0;i<alamo.size();i++)
{
    if(alamo[i]+2==alamo[i+1])
    {
        out<<alamo[i]<<" "<<"-"<<" "<<alamo[i+1]<<endl;
    }
}



return 0;
}

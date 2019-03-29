
#include <fstream>
#include <iostream>
using namespace std;

ifstream fin("input.dat");

char c[100];
int v[100];
int i=0;

int read_data()
{
    char j;
    int k;
    while(!fin.eof())
    {
        fin>>j;
        if(j!=' ')
        {
            int ct=0;
            for(k=1;k<=i;k++)
                if(j==c[k])
                {
                    ct=1;
                    break;
                }
            if(ct==0)
            {
                i++;
                c[i]=j;
                v[i]++;
            }
            if(ct==1)
            {
                v[k]++;
            }
        }
    }
}
int heap_maker()
{

}


int main()
{
    read_data();
    cout<<"Exista "<<i<<" cifre";
}

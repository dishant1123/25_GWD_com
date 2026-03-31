/*
file  handling  : txt 

1. read mode : exiting file  only  
2. write mode : new file  create + write + exiting file  open ==> overwrite. 
3. append mode :new file  create + write + exiting file  open ==> last add. 

fstream 
write  mode  file  open  : ofstream 
read  mode  file  open  : ifstream
*/

// ex :1  write mode : new file  

/*
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("diya.txt");

    fout<<"my name is  diya.\n"; 
    fout<<"live  in bhavnagar.\n"; 
    fout<<"study  in royal.\n"; 
    fout<<"dream to meet  virat kohli.\n";

    fout.close();
    return 0; 

}
*/ 
// ex : 2 write  mode  :  exiting file  . 

/*
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("diya.txt");

    fout<<"favorite  food  is pizza.\n";
    fout<<"study  in somlalit.\n"; 
    fout<<"dream to meet  narendra modi.\n";

    fout.close();
    return 0; 

}

*/ 

// ex :3  read mode : exiting file  only

/*
c file  : 
while ('\0')  or  sizeof(gets(s,sizeof(s)))
*/
/*
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("diya.txt");
    string line; 

    while(getline(fin,line))
    {
        cout<<line<<endl;
    }
    return 0; 
}

*/  
// ex :4 append  mode  : 
/*
#include <iostream>
#include <fstream>
using namespace std;
int  main()
{
    ofstream fout("jashu.txt",ios::app);
    fout<<"my name is  jashu.\n";
    fout<<"live  in dhanera.\n";
    fout<<"study  in royal.\n";
    fout<<"dream to meet  MS Dhoni.\n";

    fout.close();
    return 0; 
}
*/ 

// ex :5 append  mode  :  exiting  file  
#include <iostream>
#include <fstream>
using namespace std;
int  main()
{
    ofstream fout("jashu.txt",ios::app);
    fout<<"favorite  food  is pizza.\n";
    fout<<"study  in AU.\n";
    fout<<"dream to meet  narendra modi.\n";
    
    fout.close();
    return 0; 
}


// task  :1 
/*
take  string  as input  and separate  vowel and  consonant in separate file  that is vowel.txt  and consonant.txt. 

*/

/*
 *Creates  matrix-like screen using C++ threads.
 *Reference - http://www.quora.com/What-is-the-best-C++-code-that-you-have-ever-written/answer/Sumit-Sahrawat-1?srid=p2CT&share=1

 *Use "Green on Black" as terminal setting
*/

#include<iostream>
#include<vector>
#include<sys/ioctl.h>
#include<chrono>  //time library
#include<string>
#include<thread>
#include<cstdlib>
using namespace std;

int width = 158;        //width of terminal window
int flipsPerLine = 10;  //No. of columns changed per line
int msSleep = 15;       //Delay between lines in milisecond (Speed of transitions)

int main()
{
    srand(time_t(NULL));
    // bool switches[width]={true};
    vector<bool>switches(width,true);
    const string randchars="1234567890/*-+.,./;[]\\=_~`!@#$%^&*()";
    const auto glen = randchars.size();
    struct winsize w;
    ioctl(0, TIOCGWINSZ, &w);

    while(true)
    {
        for(int i=0;i!=w.ws_col;i++)
        {
            if(switches[i])
                cout<<randchars[rand()%glen];
            else
                cout<<' ';
        }
    
      cout<<endl;
        for(int i = 0; i != flipsPerLine; ++i)
        {
            int x = rand() % w.ws_col;
            switches[x] = !switches[x]; //toggle switch;
            std::this_thread::sleep_for(std::chrono::milliseconds(msSleep));
        }
    }
}

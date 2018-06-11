#include "ParamReader.h"
#include <iostream>
#include <string>
using namespace std;
int main(int argc,char** argv)
{
	ParamReader DetectParams;
    Params<float> p(DetectParams.open("test.txt").numbers());
    Params<string> p2(DetectParams.open("test.txt").strings());
    cout<<p.get("param1",0)<<endl;
    cout<<p2.get("param2","aaa")<<endl;
    cout<<p2.get("param3","world")<<endl;
	return 0;
}


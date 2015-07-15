//another way to do it
#include <iostream>
#include <string>
#include <initializer_list>
using namespace std;


int allsum(initializer_list<int> inls){

int res;
for(auto beg=inls.begin();beg!=inls.end();++beg)
     res += *beg;


return res;



}




int main() {

auto inls{1,2,3,4,5};

auto ret = allsum(inls);
cout << " Teliko : "<<ret<<endl;


   return 0;
}

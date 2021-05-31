#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main()
{
    unordered_map <string,int> ourmap;
    //Insert element...................................

    //first method
    pair<string,int> p("abc",142);
    ourmap.insert(p);


    //second method..........
    ourmap["asd"]=175;


    //FInd or access.....................................
    cout<<ourmap["abc"]<<endl;//first method


    cout<<ourmap.at("asd")<<endl;//second method
    
    //cout<<ourmap.at("ghi")<<endl;//produces error key not found
    
    cout<<"size : "<<ourmap.size()<<endl;
    cout<<ourmap["ghi"]<<endl;//produces default value 0(garbage value)
    cout<<"size : "<<ourmap.size()<<endl;
     //check presence
     if(ourmap.count("ghi")>0)
     {
        cout<<"ghi is present"<<endl; 

     }

    //erase
     ourmap.erase("ghi");
         cout<<"size : "<<ourmap.size()<<endl;

     if(ourmap.count("ghi")>0)
     {
        cout<<"ghi is present"<<endl; 

     }

}
#include <iostream>
#include <iterator>
#include <map>
#include <string>
using namespace std;

int main(){
    map<string, int> instances;
    instances.insert(pair<string, int>("IV",4));
    instances.insert(pair<string, int>("IX",9));
    instances.insert(pair<string, int>("XL",40));
    instances.insert(pair<string, int>("XC",90));
    instances.insert(pair<string, int>("CD",400));
    instances.insert(pair<string, int>("CM",900));
    
    map<char, int> symbols;
    symbols.insert(pair<char, int>('I',1));
    symbols.insert(pair<char, int>('V',5));
    symbols.insert(pair<char, int>('X',10));
    symbols.insert(pair<char, int>('L',50));
    symbols.insert(pair<char, int>('C',100));
    symbols.insert(pair<char, int>('D',500));
    symbols.insert(pair<char, int>('M',1000));
    
    map <string, int>::iterator itr1;
    map <char, int>::iterator itr2;
    int count = 0;
    string x;
    cin >> x;
    int flag;
    for(int i=0;i<x.size();i++){
        flag=0;
        for (itr1=instances.begin();itr1!=instances.end();++itr1){
            if (x.compare(i,2,itr1->first)==0)
            {
                count = count +itr1->second;
                i++;
                flag = 1;
                // cout << itr1->second << " " <<i<<" "<<count<<endl;
            }
        }
        if (flag==0){
            for (itr2=symbols.begin();itr2!=symbols.end();++itr2){
                if(itr2->first==x[i]){
                    count = count + itr2->second;
                    // cout << itr2->second << " " <<i<<" "<<count<<endl;
                }
            }
        }
    }
    std::cout << count << std::endl;

}
#include <iostream>
#include <iterator>
#include <map>
#include <string>
using namespace std;

int main(){
    map<char, int> symbols;
    symbols.insert(pair<char, int>('I',1));
    symbols.insert(pair<char, int>('V',5));
    symbols.insert(pair<char, int>('X',10));
    symbols.insert(pair<char, int>('L',50));
    symbols.insert(pair<char, int>('C',100));
    symbols.insert(pair<char, int>('D',500));
    symbols.insert(pair<char, int>('M',1000));
    
    map <char, int>::iterator itr;
    int count = 0;
    string x;
    cin >> x;
    for(int i=0;i<x.size();i++){
        if(symbols[x[i]]>=symbols[x[i+1]]){
            count = count + symbols[x[i]];
        }
        else{
            count = count + symbols[x[i+1]] - symbols[x[i]];
            i++;
        }
    }
    std::cout << count << std::endl;

}
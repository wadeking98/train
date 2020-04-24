#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;


struct dom{
    int x;
    int y;
};

vector<string> split_str(string str, string delim){
    size_t pos = 0;
    vector<string> ret;
    string tok;
    while((pos = str.find(delim))!= string::npos){
        tok = str.substr(0,pos);
        ret.insert(ret.end(),tok);
        str.erase(0, pos+delim.length());
    }
    ret.insert(ret.end(),str);
    return ret;
}

int main(){
    string inp;
    bool board[12][12];
    cout<< "enter domino tile numbers seperated by spaces\n"
    <<"enter the origin domino: \n";

    getline(cin, inp);

    while(inp.compare("q")){
        vector<string> clean = split_str(inp," ");
        if(clean.size()<2){
            throw "improper domino size";
        }
        getline(cin, inp);
    }
    
}
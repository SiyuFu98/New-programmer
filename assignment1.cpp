//combio
#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream file("rna.txt");
    string rna;
    while(file >> rna){
        //cout << rna;
    }
    //cout<<endl;
    for(int i=0; i<rna.length();i++){
        if(rna[i]=='a')
            rna[i]='u';
        else if(rna[i]=='u')
            rna[i]='a';
        else if(rna[i]=='g')
            rna[i]='c';
        else if(rna[i]=='c')
            rna[i]='g';
    }
    cout << rna;
    for(int i=0; i<rna.length();i+=3){
        if(rna[i]=='u'&& rna[i+1]=='u'&& rna[i+2]=='u')
            cout<<'F';
        if(rna[i]=='u'&& rna[i+1]=='u'&& rna[i+2]=='c')
            cout<<'F';

        if(rna[i]=='u'&& rna[i+1]=='u'&& rna[i+2]=='a')
            cout<<'L';
        if(rna[i]=='u'&& rna[i+1]=='u'&& rna[i+2]=='g')
            cout<<'L';

        if(rna[i]=='u'&& rna[i+1]=='c'&& rna[i+2]=='u')
            cout<<'S';
        if(rna[i]=='u'&& rna[i+1]=='c'&& rna[i+2]=='c')
            cout<<'S';
        if(rna[i]=='u'&& rna[i+1]=='c'&& rna[i+2]=='a')
            cout<<'S';
        if(rna[i]=='u'&& rna[i+1]=='c'&& rna[i+2]=='g')
            cout<<'S';

        if(rna[i]=='u'&& rna[i+1]=='a'&& rna[i+2]=='u')
            cout<<'Y';
        if(rna[i]=='u'&& rna[i+1]=='a'&& rna[i+2]=='c')
            cout<<'Y';

        if(rna[i]=='u'&& rna[i+1]=='g'&& rna[i+2]=='u')
            cout<<'C';
        if(rna[i]=='u'&& rna[i+1]=='g'&& rna[i+2]=='c')
            cout<<'C';

        if(rna[i]=='u'&& rna[i+1]=='g'&& rna[i+2]=='g')
            cout<<'W';

        if(rna[i]=='c'&& rna[i+1]=='u'&& rna[i+2]=='u')
            cout<<'L';
        if(rna[i]=='c'&& rna[i+1]=='u'&& rna[i+2]=='c')
            cout<<'L';
        if(rna[i]=='c'&& rna[i+1]=='u'&& rna[i+2]=='a')
            cout<<'L';
        if(rna[i]=='c'&& rna[i+1]=='u'&& rna[i+2]=='g')
            cout<<'L';

        if(rna[i]=='c'&& rna[i+1]=='c'&& rna[i+2]=='u')
            cout<<'P';
        if(rna[i]=='c'&& rna[i+1]=='c'&& rna[i+2]=='c')
            cout<<'P';
        if(rna[i]=='c'&& rna[i+1]=='c'&& rna[i+2]=='a')
            cout<<'P';
        if(rna[i]=='c'&& rna[i+1]=='c'&& rna[i+2]=='g')
            cout<<'P';

        if(rna[i]=='c'&& rna[i+1]=='a'&& rna[i+2]=='u')
            cout<<'H';
        if(rna[i]=='c'&& rna[i+1]=='a'&& rna[i+2]=='c')
            cout<<'H';

        if(rna[i]=='c'&& rna[i+1]=='a'&& rna[i+2]=='a')
            cout<<'Q';
        if(rna[i]=='c'&& rna[i+1]=='a'&& rna[i+2]=='g')
            cout<<'Q';

        if(rna[i]=='a'&& rna[i+1]=='u'&& rna[i+2]=='u')
            cout<<'I';
        if(rna[i]=='a'&& rna[i+1]=='u'&& rna[i+2]=='c')
            cout<<'I';
        if(rna[i]=='a'&& rna[i+1]=='u'&& rna[i+2]=='a')
            cout<<'I';

        if(rna[i]=='a'&& rna[i+1]=='u'&& rna[i+2]=='g')
            cout<<'M';

        if(rna[i]=='a'&& rna[i+1]=='c'&& rna[i+2]=='u')
            cout<<'T';
        if(rna[i]=='a'&& rna[i+1]=='c'&& rna[i+2]=='c')
            cout<<'T';
        if(rna[i]=='a'&& rna[i+1]=='c'&& rna[i+2]=='a')
            cout<<'T';
        if(rna[i]=='a'&& rna[i+1]=='c'&& rna[i+2]=='g')
            cout<<'T';

        if(rna[i]=='a'&& rna[i+1]=='a'&& rna[i+2]=='u')
            cout<<'N';
        if(rna[i]=='a'&& rna[i+1]=='a'&& rna[i+2]=='c')
            cout<<'N';

        if(rna[i]=='a'&& rna[i+1]=='a'&& rna[i+2]=='g')
            cout<<'K';
        if(rna[i]=='a'&& rna[i+1]=='a'&& rna[i+2]=='a')
            cout<<'K';

        if(rna[i]=='a'&& rna[i+1]=='g'&& rna[i+2]=='c')
            cout<<'S';
        if(rna[i]=='a'&& rna[i+1]=='g'&& rna[i+2]=='u')
            cout<<'S';

        if(rna[i]=='a'&& rna[i+1]=='g'&& rna[i+2]=='g')
            cout<<'R';
        if(rna[i]=='a'&& rna[i+1]=='g'&& rna[i+2]=='a')
            cout<<'R';

        if(rna[i]=='g'&& rna[i+1]=='u'&& rna[i+2]=='u')
            cout<<'V';
        if(rna[i]=='g'&& rna[i+1]=='u'&& rna[i+2]=='c')
            cout<<'V';
        if(rna[i]=='g'&& rna[i+1]=='u'&& rna[i+2]=='a')
            cout<<'V';
        if(rna[i]=='g'&& rna[i+1]=='u'&& rna[i+2]=='g')
            cout<<'V';

        if(rna[i]=='g'&& rna[i+1]=='c'&& rna[i+2]=='u')
            cout<<'A';
        if(rna[i]=='g'&& rna[i+1]=='c'&& rna[i+2]=='c')
            cout<<'A';
        if(rna[i]=='g'&& rna[i+1]=='c'&& rna[i+2]=='a')
            cout<<'A';
        if(rna[i]=='g'&& rna[i+1]=='c'&& rna[i+2]=='g')
            cout<<'A';

        if(rna[i]=='g'&& rna[i+1]=='a'&& rna[i+2]=='u')
            cout<<'D';
        if(rna[i]=='g'&& rna[i+1]=='a'&& rna[i+2]=='c')
            cout<<'D';

        if(rna[i]=='g'&& rna[i+1]=='a'&& rna[i+2]=='a')
            cout<<'E';
        if(rna[i]=='g'&& rna[i+1]=='a'&& rna[i+2]=='g')
            cout<<'E';

        if(rna[i]=='g'&& rna[i+1]=='g'&& rna[i+2]=='u')
            cout<<'G';
        if(rna[i]=='g'&& rna[i+1]=='g'&& rna[i+2]=='c')
            cout<<'G';
        if(rna[i]=='g'&& rna[i+1]=='g'&& rna[i+2]=='a')
            cout<<'G';
        if(rna[i]=='g'&& rna[i+1]=='g'&& rna[i+2]=='g')
            cout<<'G';

        if(rna[i]=='u'&& rna[i+1]=='a'&& rna[i+2]=='a')
            break;

        if(rna[i]=='u'&& rna[i+1]=='a'&& rna[i+2]=='g')
            break;

        if(rna[i]=='u'&& rna[i+1]=='g'&& rna[i+2]=='a')
            break;

    }
    return 0;
}

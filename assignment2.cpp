#include <bits/stdc++.h>
using namespace std;
int main(){
    string aSquence="ATCGGGAATT",bSquence="TTTAGCCTTT",cSquence="ACCGTAATTC",dSquence="TTACGCCTAC",eSquence="CGGGTTAAAC";
    double table[5][5]={0};
    double tabletemp[5][5]={0};
    int tablesize=5;
    for(int i=0; i<aSquence.length(); i++){
        if(aSquence[i]!=bSquence[i]){
            table[0][1]++;
            table[1][0]++;
        }
        if(aSquence[i]!=cSquence[i]){
            table[0][2]++;
            table[2][0]++;
        }
        if(aSquence[i]!=dSquence[i]){
            table[0][3]++;
            table[3][0]++;
        }
        if(aSquence[i]!=eSquence[i]){
            table[0][4]++;
            table[4][0]++;
        }
        if(bSquence[i]!=cSquence[i]){
            table[1][2]++;
            table[2][1]++;
        }
        if(bSquence[i]!=dSquence[i]){
            table[1][3]++;
            table[3][1]++;
        }
        if(bSquence[i]!=eSquence[i]){
            table[1][4]++;
            table[4][1]++;
        }
        if(cSquence[i]!=dSquence[i]){
            table[2][3]++;
            table[3][2]++;
        }
        if(cSquence[i]!=eSquence[i]){
            table[2][4]++;
            table[4][2]++;
        }
        if(dSquence[i]!=eSquence[i]){
            table[3][4]++;
            table[4][3]++;
        }
    }
    for(int i=0;i<tablesize;i++){
        for(int j=0; j<tablesize;j++){
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }
   while(tablesize>2){
        for(int i=0;i<tablesize;i++){
            for(int j=0; j<tablesize;j++){
                tabletemp[i][j]=table[i][j];
            }
        }
        int min=1000000;
        int rowposition,columnposition;
        for(int i=0;i<tablesize;i++){
            for(int j=0; j<tablesize;j++){
                if(min>table[i][j] && table[i][j]!=0){
                    min=table[i][j];
                    rowposition=i;
                    columnposition=j;
                }
            }
        }
        // cout<<min;
        // cout<<rowposition;
        // cout<<columnposition;
        tablesize--;
        for(int i=0;i<tablesize;i++){
            for(int j=0; j<tablesize;j++){
                if(j==columnposition )
                    tabletemp[i][j]=table[i][j+1];
                if(i==columnposition )
                    tabletemp[i][j]=table[i+1][j];
                if(rowposition==j){
                    tabletemp[i][j]=(table[i][rowposition]+table[i][columnposition])/2.0;
                }
                if(rowposition==i){
                    tabletemp[i][j]=(table[j][rowposition]+table[j][columnposition])/2.0;
                }
                if(rowposition==j && i==columnposition)
                    tabletemp[i][j]=(table[i+1][rowposition]+table[i+1][columnposition])/2.0;
                if(rowposition==i && j==columnposition)
                    tabletemp[i][j]=(table[j+1][rowposition]+table[j+1][columnposition])/2.0;
                if(i==j)
                    tabletemp[i][j]=0;
            }
        }
        for(int i=0;i<tablesize;i++){
            for(int j=0; j<tablesize;j++){
                cout<<tabletemp[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}

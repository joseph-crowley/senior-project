#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "string"
#include "vector"
#include "math.h"
#include "unistd.h"

using namespace std;

int main(){

chdir("/scratch1/alice/fit/10kEvents");

TFile *f = new TFile("o2sim.root");
TTree *t = (TTree)f->Get("o2sim");
Int_t N = (Int_t)t->GetEntries();
vector<string> fileName(N);

for(int i=0;i<N;i++){
	t1->SetBranchAddress("MCname",&fileName[i]);
	t1->GetEntry(i);

}

for(int i=0;t<N;i++){
	if(fileName[i].substr(0,1)=="MC"){
		fileName.erase(fileName.begin()+i);
	}
}


return 0;
}

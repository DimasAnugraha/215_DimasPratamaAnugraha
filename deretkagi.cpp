#include <iostream>
#include <cmath>
using namespace std;

class hitung {
public:
    int proses();
    void input();

private:
    int n;
    float jumlah, total,rumus;
};

void hitung::input(){
    cin>>n;
    cout<<endl;
}

int hitung::proses(){
    jumlah = 0;
    total = 0;
    rumus -= 1;
    
    for(int j = 1; j<=n; j++){
        rumus = rumus*(-1);
        total=rumus/j;
        jumlah += total;
        if(j==1){
            cout<<"("<<total<<")";
        }
        else if(j>1){
            cout<<"+("<<total<<")";
        }else
            cout<<"-("<<abs(total)<<")";
    }
        cout<<endl<<endl<<"penjumlahan deret adalah: "<<jumlah<<endl;
        return jumlah;
}

int main(){
    hitung deret;
    cout<<"tentukan nilai n: "; 
	deret.input();
    deret.proses();
}

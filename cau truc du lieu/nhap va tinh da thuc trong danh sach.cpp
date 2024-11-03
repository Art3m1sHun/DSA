/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/
#include <bits/stdc++.h>
using namespace std;


struct DONTHUC{
	int somu;
	double heso;
	
	DONTHUC(double _heso = 0,int _somu=0){
		heso = _heso;
		somu  = _somu;
	}
	
	DONTHUC& operator = (const DONTHUC &rhs){
		if (this == &rhs) return *this;
		this->heso = rhs.heso;
		this->somu = rhs.somu;
		return *this;
	}
};


struct Node{
	DONTHUC* data;
	Node* next;
	
	Node(DONTHUC* _data = nullptr){
		this->data = _data;
		this->next = nullptr;
	}
	
};

struct DATHUC{
	Node* head;
	Node* tail;
	DATHUC(){
		this->head = nullptr;
		this->tail = nullptr;
	}
};


//###INSERT CODE HERE -
double TinhDaThuc(const DATHUC& A, double x) {
    double tong = 0;
    for (Node* p = A.head; p != nullptr; p = p->next) {
        tong += p->data->heso * pow(x, p->data->somu);
    }
    return tong;
}

void Nhap(DATHUC &B, double heso, int somu) {
    DONTHUC* tmpData = new DONTHUC(heso, somu); 
    Node* tmp = new Node(tmpData);

    if (B.head == nullptr) {
        B.head = tmp;
        B.tail = tmp;
    } else {
        B.tail->next = tmp;
        B.tail = tmp;
    }
}

void Xuat(const DATHUC& C) {
    Node* p = C.head;
    bool first_term = true; 
    while (p != nullptr) {
        if (p->data->heso != 0) { 
            if (!first_term) {
                cout << (p->data->heso > 0 ? "+" : "-");
                if(abs(p->data->heso) == 1){
                    if(p->data->somu == 0){
                        cout << abs(p->data->heso);
                    }
                }else{
                    cout << abs(p->data->heso);
                }
            } else {
                if(abs(p->data->heso) == 1){
                    if(p->data->somu == 0){
                        cout << abs(p->data->heso);
                    }
                }else{
                    cout << p->data->heso;
                }
                first_term = false;
            }
            if (p->data->somu > 0) {
                cout << "x";
                if (p->data->somu > 1) cout << "^" << p->data->somu;
            }
        }
        p = p->next;
    }
    if(first_term){
        cout << 0;
    }
    cout << endl;
}
//###END CODE HERE -

int main() {
	while(1){
    DATHUC B;
    int N;
    
    cin >> N;
    for (int test = 0; test < N; test++){
		double heso; int somu;
		cin >> heso >> somu;
		Nhap(B,heso,somu);
    }
    
    cout << "Da thuc vua nhap la: "; Xuat(B);
    double x; cin >> x;
    cout << "\nVoi x=" << x << ", gia tri da thuc la: "
         << setprecision(2) << fixed << TinhDaThuc(B, x);

}
    return 0;
}

#include<iostream>
using namespace std;

void Meal(string meal, string meal_c){
    if( meal == "Buoi sang"){
        if(meal_c == "khong"){
            cout << "Nhin doi\n" ;
        }else cout << "Nen an mon nuoc, banh mi hoac banh bao\n"; 
    }else if (meal == "Buoi trua" && meal_c == "co"){
        cout << "Nen an com no\n";
    }else if (meal =="Buoi toi" && meal_c == "co"){
        cout << "Nen an vua phai, de tieu hoa\n";
    }else {
        cout << "Nen an nhe va trang mieng bang trai cay\n";
    }
    return;
}
int main(){
    int c;
    string meal, meal_c;
    cout << "Chon bua an ma ban muon to tu van:\n";
    cout << "1. Buoi sang, 2. Buoi trua , 3. Buoi chieu\n";
    cout << "Nhap lua chon (1-3)\n";
    cin >> c;
    if (c == 1){
        meal = "Buoi sang";
        cout << "Ban co doi lam khong?(co,khong)\n";
        cin >> meal_c;
    }else if (c == 2){
        meal = "Buoi trua";
        cout << "Ban co doi lam khong?(co,khong)\n";
        cin >> meal_c;
    }else if(c == 3){
        meal = "Buoi toi";
        cout << "Ban co doi lam khong?(co,khong)\n";
        cin >> meal_c;
    }else {
        cout << "Ban chua chon, hay lua chon!!!!";
        return 0;
    }

    Meal (meal, meal_c);
    cout<<"<Da xu ly xong, chuc ban an ngon mieng>\n";
    return 0;
}
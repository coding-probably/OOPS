#include <bits/stdc++.h>
using namespace std;

class SecretBox {
private:
    int secretCode = 80;

    // granting friendship class
    friend class KeyHolder;
};

class KeyHolder {
public:
    void revealSecret(SecretBox& box){
        //Allowed because KeyHolder is friend
        cout << "Secret code : " << box.secretCode << endl;
    }
};


int main() {
    SecretBox myBox;
    KeyHolder myKey;
    
    myKey.revealSecret(myBox);
    return 0;
}

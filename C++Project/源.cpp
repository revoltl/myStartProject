#include <iostream>
#include <string>

using namespace std;

//������
class ChainArray {
public:
    int Num;
    string Str;
    ChainArray* next;

    //���캯��
    ChainArray(int num = 0, const string& str = "") {
        Num = num;
        Str = str;
        next = nullptr;
    }
};

int main() {
    int length = 6;


    //ͷ�ڵ�
    ChainArray* head = new ChainArray(0, "head");
    ChainArray* current = head;


    // �����ڵ�
    for (int i = 1; i <= length; ++i) {
        current->next = new ChainArray(i, "Node" + to_string(i));
        current = current->next;
    }


    //���
    current = head;
    while (current != nullptr) {
        cout << "[" << current->Num << ", " << current->Str << "] -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;


    //�ͷ��ڴ�
    current = head;
    while (current != nullptr) {
        ChainArray* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}

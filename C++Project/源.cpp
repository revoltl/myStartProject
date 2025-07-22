#include <iostream>
#include <string>

using namespace std;

//链表类
class ChainArray {
public:
    int Num;
    string Str;
    ChainArray* next;

    //构造函数
    ChainArray(int num = 0, const string& str = "") {
        Num = num;
        Str = str;
        next = nullptr;
    }
};

int main() {
    int length = 6;


    //头节点
    ChainArray* head = new ChainArray(0, "head");
    ChainArray* current = head;


    // 创建节点
    for (int i = 1; i <= length; ++i) {
        current->next = new ChainArray(i, "Node" + to_string(i));
        current = current->next;
    }


    //输出
    current = head;
    while (current != nullptr) {
        cout << "[" << current->Num << ", " << current->Str << "] -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;


    //释放内存
    current = head;
    while (current != nullptr) {
        ChainArray* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}

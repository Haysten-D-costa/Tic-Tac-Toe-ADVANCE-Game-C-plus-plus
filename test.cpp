#include <iostream>
using namespace std;

int getXCoordinates(int index) {
    return (4 * index + (2 + 4 /*5? */ * int(index/3)));
}
int getYCoordinates(int index) {
    return (2 * (index + 1) + (2 * int(index/3)));
}
void gotoXY(int x, int y) {
    printf("%c[%d;%df", 0x1B, y, x);
}
int main() {
    system("clear");
    cout << "�����������Ŀ � �����������Ŀ � �����������Ŀ" << endl;
    cout << "�   �   �   � � �   �   �   � � �   �   �   �" << endl;
    cout << "�����������Ĵ � �����������Ĵ � �����������Ĵ" << endl;
    cout << "�   �   �   � � �   �   �   � � �   �   �   �" << endl;
    cout << "�����������Ĵ � �����������Ĵ � �����������Ĵ" << endl;
    cout << "�   �   �   � � �   �   �   � � �   �   �   �" << endl;
    cout << "������������� � ������������� � �������������" << endl;
    cout << "���������������������������������������������" << endl;
    cout << "�����������Ŀ � �����������Ŀ � �����������Ŀ" << endl;
    cout << "�   �   �   � � �   �   �   � � �   �   �   �" << endl;
    cout << "�����������Ĵ � �����������Ĵ � �����������Ĵ" << endl;
    cout << "�   �   �   � � �   �   �   � � �   �   �   �" << endl;
    cout << "�����������Ĵ � �����������Ĵ � �����������Ĵ" << endl;
    cout << "�   �   �   � � �   �   �   � � �   �   �   �" << endl;
    cout << "������������� � ������������� � �������������" << endl;
    cout << "���������������������������������������������" << endl;
    cout << "�����������Ŀ � �����������Ŀ � �����������Ŀ" << endl;
    cout << "�   �   �   � � �   �   �   � � �   �   �   �" << endl;
    cout << "�����������Ĵ � �����������Ĵ � �����������Ĵ" << endl;
    cout << "�   �   �   � � �   �   �   � � �   �   �   �" << endl;
    cout << "�����������Ĵ � �����������Ĵ � �����������Ĵ" << endl;
    cout << "�   �   �   � � �   �   �   � � �   �   �   �" << endl;
    cout << "������������� � ������������� � �������������" << endl;
    // cout << getXCoordinates(8);
    // cout << getYCoordinates(8);
    gotoXY(getXCoordinates(4), getYCoordinates(3));
    std::cout << "X";
    return 0;
}
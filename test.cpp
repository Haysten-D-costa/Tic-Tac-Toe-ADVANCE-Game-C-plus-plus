#include <iostream>

int getXCoordinates(int index) {
    return 4 * index + (2 + 4 * int(index / 3)) + 1;
}
int getYCoordinates(int index) {
    return (2 * (index + 1) + (2 * int(index / 3)));
}
void gotoXY(int x, int y) {
    printf("%c[%d;%df", 0x1B, y, x);
}
int main() {
    int n;
    system("cls");
    std::cout << "�����������Ŀ � �����������Ŀ � �����������Ŀ" << std::endl;
    std::cout << "�   �   �   � � �   �   �   � � �   �   �   �" << std::endl;
    std::cout << "�����������Ĵ � �����������Ĵ � �����������Ĵ" << std::endl;
    std::cout << "�   �   �   � � �   �   �   � � �   �   �   �" << std::endl;
    std::cout << "�����������Ĵ � �����������Ĵ � �����������Ĵ" << std::endl;
    std::cout << "�   �   �   � � �   �   �   � � �   �   �   �" << std::endl;
    std::cout << "������������� � ������������� � �������������" << std::endl;
    std::cout << "���������������������������������������������" << std::endl;
    std::cout << "�����������Ŀ � �����������Ŀ � �����������Ŀ" << std::endl;
    std::cout << "�   �   �   � � �   �   �   � � �   �   �   �" << std::endl;
    std::cout << "�����������Ĵ � �����������Ĵ � �����������Ĵ" << std::endl;
    std::cout << "�   �   �   � � �   �   �   � � �   �   �   �" << std::endl;
    std::cout << "�����������Ĵ � �����������Ĵ � �����������Ĵ" << std::endl;
    std::cout << "�   �   �   � � �   �   �   � � �   �   �   �" << std::endl;
    std::cout << "������������� � ������������� � �������������" << std::endl;
    std::cout << "���������������������������������������������" << std::endl;
    std::cout << "�����������Ŀ � �����������Ŀ � �����������Ŀ" << std::endl;
    std::cout << "�   �   �   � � �   �   �   � � �   �   �   �" << std::endl;
    std::cout << "�����������Ĵ � �����������Ĵ � �����������Ĵ" << std::endl;
    std::cout << "�   �   �   � � �   �   �   � � �   �   �   �" << std::endl;
    std::cout << "�����������Ĵ � �����������Ĵ � �����������Ĵ" << std::endl;
    std::cout << "�   �   �   � � �   �   �   � � �   �   �   �" << std::endl;
    std::cout << "������������� � ������������� � �������������" << std::endl;
    gotoXY(getXCoordinates(3), getYCoordinates(6));
    std::cout << "X";
    std::cin >> n; // to prevent code from terminating
    return 0;
}
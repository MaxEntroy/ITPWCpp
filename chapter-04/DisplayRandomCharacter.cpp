#include <iostream>
#include <ctime>
#include <cstdlib>
int main()
{
	char starting_character;
	char ending_character;

	std::cout << "Enter a starting character: ";
	std::cin >> starting_character;
	std::cout << "Enter a ending character: ";
	std::cin >> ending_character;

	// generate a random character between starting character and ending character
	srand(static_cast<unsigned int>(time(0)));
	
	/* 
	int diff = static_cast<int>( ending_character ) - static_cast<int>( starting_character ) + 1;
	char random_character = static_cast<char>( starting_character + rand() % diff );
	 ���յ�����˵�Ҿ�������ôдӦ�������׼�ģ����Ǹɴ಻����ʽת�� ȫ����ʽת�� 
		Ŀǰ���������д��Ӧ���ǣ���֮ǰ�����⿴������֮ǰ�ı仯��������ʽת�������һ���ı任��������ʽת��
		�Ҳ���ô����������Ϊ���������������
	*/

	char random_character = static_cast<char>( starting_character + rand() % ( ending_character - starting_character + 1 ) );
	std::cout << "The random character between " << starting_character << " and " << ending_character << " is " 
		<<random_character << std::endl; 

	return 0;
}
/*� ���������� ���� �� �������� ��� ���������, �������:
��������� ����� � ���������� ����������;
������� �� �����, ������� ���������� �������: <����� ����������> documents found.
��������� ��������, �� ����� �document� ������ ����� �� ������������� ����� � ��������, 
1 documents found. �������������� ���. ���� �� ���� ��� 0, ����� ��������� ������� No documents found, 
���� 1 � One document found. �� ���� ��������� ������� ��������� ������ �������� <����� ����������> documents found.*/


#include <iostream>
#include <string>

using namespace std;

int main()
{
	int document_count;
	cin >> document_count;

	if (document_count == 0)
	{
		cout << "No documents found"s << endl;
	}

	if (document_count == 1)
	{
		cout << "One document found"s << endl;
	}

	if (document_count > 1)
	{
		string message = to_string(document_count) + " documents found"s;
		cout << message << endl;
	}
	else if (document_count < 1)
	{
		string message2 = to_string(document_count) + " documents found "s;
		cout << message2 << endl;
	}


}
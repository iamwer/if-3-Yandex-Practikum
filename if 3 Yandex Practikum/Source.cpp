/*¬ предыдущей теме вы написали код программы, котора€:
считывает число Ч количество документов;
выводит на экран, сколько документов найдено: <число документов> documents found.
ѕрограмма работает, но слово УdocumentФ всегда пишет во множественном числе Ч например, 
1 documents found. ќтредактируйте код. ≈сли на вход дан 0, пусть программа выводит No documents found, 
если 1 Ч One document found. ¬о всех остальных случа€х программа должна выводить <число документов> documents found.*/


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
#include <iostream>

using namespace std;

int length(char str[])
{
	int count = 0;
	
	for(int i = 0; str[i] != '\0'; i++)
	 count++;
	 
	return count;
}

void concat(char str1[], char str2[])
{
	char str3[200];
	int i, j;
	
	for (i = 0; str1[i] != '\0'; i++)
	{
		str3[i] = str1[i];
	}
	for (j = 0; str2[j] != '\0'; i++)
	{
		str3[i] = str2[j++];
	}
	str3[i] = '\0';
	
	cout << "The concatenated string is: " << str3;
}

bool compare(char str1[], char str2[])
{
	int flag = 0;
	for (int i = 0; str1[i] != '\0'; i++)
	{
		if (str1[i] != str2[i])
			flag = 1;
	}
	if (flag == 0)
		return true;
	else if (flag == 1)
		return false;
}

void insertSubStr(char str1[], char str2[], int pos)
{
	char str3[200];
	int i, j;
	
	for (i = 0; i != pos; i++)
	{
		str3[i] = str1[i];
	}
	for (j = 0; str2[j] != '\0'; i++)
	{
		str3[i] = str2[j++];
	}
	int mainPos = i;
	for (i = pos; str1[i] != '\0'; i++)
	{
		str3[mainPos++] = str1[i];
	}
	
	str3[mainPos] = '\0';
	
	cout << "The concatenated string is: " << str3;
}

void deleteSubStr(char str1[], char str2[])
{
	char str3[200], temp[100];
	int i, j, k, len, l;
	bool test;
	len = length(str2);
	for (i = 0, j = 0; str1[i] != '\0'; i++)
	{
		if (str1[i] == str2[0])
		{
			for (k = i, l = 0; k < (len + i); k++)
			{
				temp[l++] = str1[k];
			}
			temp[l] = '\0';
			test = compare(str2, temp);
			if (test == true)
				i = i + len - 1;
		}
		else 
		{
			str3[j] = str1[i];
			j++;
		}	
	}	
	str3[j] = '\0';
	cout << "The final string is: " << str3;
}

int main()
{
	int flag = -1, len, pos;
	char str1[100], str2[100];
	bool comp;
 	while (flag != 0)
	{
		cout << endl << "Enter the function to perform" << endl;
		cout << "1 - Find string length" << endl;
		cout << "2 - Concatanate two strings" << endl;
		cout << "3 - Compare two strings" << endl;
		cout << "4 - Inserting a substring" << endl;
		cout << "5 - Deleting a substring" << endl;
		cout << "Enter 0 to exit" << endl;
		cin >> flag;
		
		switch (flag)
		{
			case 1:
				cout << "Enter the string" << endl;
				cin >> str1;
				len = length(str1);
				cout << "The the length of the string is: " << len;
				break;
			case 2:
				cout << "Enter the first string" << endl;
				cin >> str1;
				cout << "Enter the second string" << endl;
				cin >> str2;
				concat(str1, str2);
			case 3:
				cout << "Enter the first string" << endl;
				cin >> str1;
				cout << "Enter the second string" << endl;
				cin >> str2;
				comp = compare(str1, str2);
				if (comp == true)
					cout << "The Strings are the same" << endl;
				else 
					cout << "The Strings are not the same" << endl;
			case 4:
				cout << "Enter the first string" << endl;
				cin >> str1;
				cout << "Enter the second string" << endl;
				cin >> str2;
				cout << "Enter the position to insert the string into" << endl;
				cin >> pos;
				insertSubStr(str1, str2, pos);
			case 5: 
				cout << "Enter the first string" << endl;
				cin >> str1;
				cout << "Enter the sub string to delete" << endl;
				cin >> str2; 
				deleteSubStr(str1, str2);
		}
	}
	
	return 0;
}

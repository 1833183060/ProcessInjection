#include <iostream>
#include "Loader.h"
using namespace std;
/*
�ڷ���ʽ����ע���У������Ѿ�ʵ����һ�ζ�DLL�Ľ����������ڴ��д��ڴ�Ƭ��RWX����
��GitHub�ϵ���ΪMemory Mouldle��Ŀ�У�������һ�ֿ��Խ��ڴ���������Ϊ����������
��Ϊ���Ƶķ����������Ŀ���Ƕ����ַ�����ѧϰ��

*/
int main()
{
	do
	{
		//��������������DLL������Ҫʵ�ֵĹ��ܾ��Ǵ��ڴ����DLL�����ˣ����������ǽ���DLL
		char *dllFile = "F:\\ReflectiveDLLInjection\\x64\\Debug\\reflective_dll.dll";
		HANDLE hFile = CreateFileA(dllFile, GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
		if (hFile == INVALID_HANDLE_VALUE)
		{
			cout << "File Path is Wrong!" << endl;
			break;
		}
		else
		{
			cout << "Get File Success!" << endl;
		}
		DWORD dwLength = GetFileSize(hFile, NULL);
		if(dwLength == INVALID_FILE_SIZE ||)
	}
}
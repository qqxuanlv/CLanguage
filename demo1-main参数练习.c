#include <stdio.h>


int main(int argc, char** argv) {


	/**
		Ĭ�ϲ���1 ��argv[0], ���� ��ǰ��������Ϊ ������� + �������� 
		
		ex
			in: a.exe abc bcd 
		
			out:
				 �������� �� 3
				�ó�������a
				��һ��������abc
				�ڶ���������bcd 
				
	*/ 
	
   	printf("����������%d \n" ,argc);
   	
	printf("�ó�������%s \n",argv[0]);
	
	printf("��һ��������%s \n",argv[1]);
	
	printf("�ڶ������� %s \n",argv[2]); 
	
	system("pause");
	
	return 0;
	
	
}

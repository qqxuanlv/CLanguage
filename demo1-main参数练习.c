#include <stdio.h>


int main(int argc, char** argv) {


	/**
		默认参数1 是argv[0], 所以 当前参数个数为 输入个数 + 程序名称 
		
		ex
			in: a.exe abc bcd 
		
			out:
				 参数个数 ： 3
				该程序名：a
				第一个参数：abc
				第二个参数：bcd 
				
	*/ 
	
   	printf("参数个数：%d \n" ,argc);
   	
	printf("该程序名：%s \n",argv[0]);
	
	printf("第一个参数：%s \n",argv[1]);
	
	printf("第二个参数 %s \n",argv[2]); 
	
	system("pause");
	
	return 0;
	
	
}

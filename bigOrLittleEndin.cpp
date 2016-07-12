#include <iostream>     
//所谓大端就是指高位值在内存中放低位地址，所谓小端是指低位值在内存中放低位地址。(在低位地址的角度看,如果低位地址存放的是高位值,那么则是大端;如果低位地址存放的是低位值,那么则是小端.)
    
union     
{    
    int number;    
    char s;    
}unionTest;    
    
bool IsBigEndin()    
{    
    unionTest.number = 0x01000002;    
    return (unionTest.s == 0x01);    
}    
    
int main()    
{    
	// 方法1:使用一个union
    if (IsBigEndin())      
        std::cout << "big-endian" << std::endl;    
    else     
        std::cout << "little-endian" << std::endl;       
	
	// 方法2:使用指针
    int x = 1;  
	if(*(char *)&x == 1)  
		std::cout << "little-endian\n";
	else 
		std::cout << "big-endian\n";   

	return 0;
}





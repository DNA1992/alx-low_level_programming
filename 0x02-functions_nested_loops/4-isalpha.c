#include"main.h"
/**
* _isalpha - Return 1 checks alphabetic character whether upper or lower case
* @c: compared values
* Return: 0 always
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
int main(void)

{
    int r;

 r = _isalpha('H');
 _putchar(r + '0');
 r = _isalpha('o');
 _putchar(r + '0');
 r = _isalpha(108);

 _putchar(r + '0'); 
 r = _isalpha(';');
 _putchar(r + '0');
 _putchar('\n');
return (0);

}

#include "unistd.h"
#include "string.h"

int main(void)
{
	write(1, "it_work", strlen("it_work"));
	return (1);
}
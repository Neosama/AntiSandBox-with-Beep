
#include <Windows.h>

// Sleep fonction with Beep
bool timing_Beep()
{
	// Delays 301 sec (5min | 301000 ms)
	// If return is TRUE = OK delays respected | FALSE = Delays bypass

	int wh_compter = 0;
	int wh_total = 3010;

	while(wh_compter < wh_total)
	{
		Beep(2, 100); // 2hertz, 100ms
		wh_compter++;
	}

	if(wh_compter > wh_total - 1)
		return true;

	return false;
}

int main()
{
	if(timing_Beep())
		printf("\nOK Delays respected");
	else
		printf("\nDelay bypass !");
	
	return 0;
}

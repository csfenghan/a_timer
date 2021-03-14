#include "unix_api.h"
#include "heap.h"

struct heap hp;
int start_time;
int curr_time;
void init_timer()
{
	h_init(&hp,0);	
}

void create_timer(int t)
{
	if(h_empty(&hp)){
		start_time=0;
	}

	return;
}

void update_timer()
{
	h_pop(&hp);
	if(h_empty(&hp))
		start_time=0;

}

void sigalrm_handler(int sig)
{

}

int main()
{

}

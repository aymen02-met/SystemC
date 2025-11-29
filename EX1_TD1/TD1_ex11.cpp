#include "td1_ex11.h"


int sc_main(int argc, char* argv[])
{
	sc_clock clock("clock", 15, SC_NS);// le premier front commence à 0 seconde le deuxiéme front commence au 2 ns ect..
	Ex1 my_Ex1("my_Ex1");
	my_Ex1.clk(clock);

	sc_start();
	return 0;
}

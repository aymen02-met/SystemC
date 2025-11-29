
#include "compteur.h"
int sc_main(int argc, char* argv[])
{
	//créer une instance de votre module counter
	counter my_counter("my_counter");

	//créer une horloge avec une période de 30 ms
	sc_clock clk("clk, 10, SC_NS");

	//connecter l'horloge au port clk1 du module my_counter
	my_counter.clk1(clk);

	//démarrer la simulation pour 200 ns
	sc_start(200, SC_NS);
	return 0;


}
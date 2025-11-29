#include "test.h"
#include "BasculeD.h"

int sc_main(int argc, char* argv[])
{
	//instanciation
	DFF DFF1("DFF1");
	test test1("test1");

	//définition d'une horloge
	sc_clock clock("clock", 15, SC_NS);

	sc_signal<sc_logic> D_sig, Q_sig;

	//port map (biinding)
	DFF1.D(D_sig);
	test1.tD(D_sig);

	DFF1.Q(Q_sig);
	test1.tQ(Q_sig);

	DFF1.H(clock);

	//appel du simulateur temps
	sc_start(900, SC_NS);//arrét du simulateur temp à 900 ns
	return 0;
}
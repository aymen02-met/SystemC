
#include <systemc.h>
SC_MODULE(test)
{
	sc_in<sc_logic>tQ;
	sc_out<sc_logic>tD;
	void verif() 
	{
		cout << "@ " << sc_time_stamp() << " Q=" << tQ << endl;
	}

	void stimulis()
	{
		while (true)
		{
			tD.write(sc_logic('0'));
			wait(100, SC_NS);
			tD.write(sc_logic('1'));
			wait(200, SC_NS);
			tD.write(sc_logic('X'));
			wait(70, SC_NS);
			tD.write(sc_logic('Z'));
			wait(300, SC_NS);
		}
	}

	SC_CTOR(test)
	{
		SC_METHOD(verif)// on ne peut pas l'intérempre
			sensitive << tQ;
			dont_initialize();

		SC_THREAD(stimulis);// on peut l'interrompre 
	}

};

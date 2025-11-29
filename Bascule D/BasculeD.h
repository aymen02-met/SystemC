
#include <systemc.h>

SC_MODULE(DFF)// nom du classe
{
	sc_in<sc_logic> D;
	sc_in_clk H;
	sc_out<sc_logic> Q;
	void do_dff()
	{
		Q.write(D.read());// pour les port on utilise write et read
	}
	SC_CTOR(DFF)// constructeur du classe DFF
	{
		SC_METHOD(do_dff)// méthode 
			sensitive << H.pos();

	}
};

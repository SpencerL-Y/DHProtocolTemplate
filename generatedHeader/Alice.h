#ifndef Alice_h
#define Alice_h
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <thread>
#include <stdlib.h>
#include <sstream>
#include <stdio.h>
#include <thread>
#include <stdlib.h>
#include "../CommLib/NetComm/include/EtherReceiver.hpp"
#include "../CommLib/NetComm/include/EtherSender.hpp"
#include "../CommLib/NetComm/include/UDPSender.hpp"
#include "../CommLib/NetComm/include/UDPReceiver.hpp"
#include "../CryptoLib/include/Cryptor.hpp"
#include "../UserType.hpp" 
#define STATE___init 0
#define STATE___final 1
#define STATE__S2 2
#define STATE__S4 3
static pcap_t* devAlice;
static char* tempDataAlice
;class Alice {
	private: 
	private:
		int g;
		int p;
		int freshA;
	public: 
		int exp(int num[]);
		int mod(int num[]);
		int receive(IntMsg num);
		int send(IntMsg num);
		void SMLMainAlice();
};
static int __currentState = STATE___init;
int main(int argc, char** argv) {
	Alice obj;
/*Initialize the object by user*/
	obj.SMLMainAlice();
}
#endif


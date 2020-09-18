#ifndef Shared_h
#define Shared_h
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
#define STATE__S8 2
static pcap_t* devShared;
static char* tempDataShared
;class Shared {
	private: 
	private:
		int g;
		int p;
	public: 
		int send(IntMsg num);
		void SMLMainShared();
};
static int __currentState = STATE___init;
int main(int argc, char** argv) {
	Shared obj;
/*Initialize the object by user*/
	obj.SMLMainShared();
}
#endif


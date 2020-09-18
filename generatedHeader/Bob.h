#ifndef Bob_h
#define Bob_h
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
#define STATE__S3 2
#define STATE__S5 3
static pcap_t* devBob;
static char* tempDataBob
;class Bob {
	private: 
	private:
		int g;
		int p;
		int freshB;
	public: 
		int exp(int num[]);
		int mod(int num[]);
		int receive(IntMsg num);
		int send(IntMsg num);
		void SMLMainBob();
};
static int __currentState = STATE___init;
int main(int argc, char** argv) {
	Bob obj;
/*Initialize the object by user*/
	obj.SMLMainBob();
}
#endif


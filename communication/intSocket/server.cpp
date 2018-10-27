//
// main.cpp for main in /home/bouger_t/cpp_plazza/communication/intSocket
//
// Made by thibault bougerolles
// Login   <bouger_t@epitech.net>
//
// Started on  Thu Apr  7 00:18:40 2016 thibault bougerolles
// Last update Mon Apr 11 19:58:40 2016 thibault bougerolles
//

#include <iostream>
#include "intSocket.hh"

int main()
{
  com::ICom	*udp = new com::intSocket{ 1, 8000, 8500};
  com::ICom::SendProtocol	proto;

  (*udp) >> proto;
  std::cout << "filename: " << proto.fileName << std::endl << std::endl;;
  std::cout << proto.information << std::endl;
  delete udp;
}

#include <iostream>
#include <boost/array.hpp>
#include <boost/asio.hpp>

#include "protocol/packet.pb.h"

using boost::asio::ip::udp;
using boost::asio::ip::address;

int main(int argc, char* argv[]) {
  bool

  try {
    boost::asio::io_service io_service;

    //udp::endpoint receiver_endpoint = udp::endpoint(address::from_string("130.239.40.31"), 9000);
    udp::endpoint receiver_endpoint = udp::endpoint(udp::v4(), 9000);
    udp::socket socket(io_service);

    std::cout << "Opening connection to nameserver" << std::endl;
    socket.open(udp::v4());

    std::string packet_string;
    createPacket(protocol::Packet::NS_REGISTER).SerializeToString(&packet_string);

    std::cout << "Sending NS handshake" << std::endl;

    boost::array<char, 1024> send_buf;
    std::copy(std::begin(packet_string), std::end(packet_string), std::begin(send_buf));
    socket.send_to(boost::asio::buffer(send_buf), receiver_endpoint);

    std::cout << "Receiving NS handshake response" << std::endl;

    boost::array<char, 1024> recv_buf;
    udp::endpoint sender_endpoint;
    socket.receive_from(
        boost::asio::buffer(recv_buf), sender_endpoint);

    protocol::Packet in_p;
    in_p.ParseFromString(std::string(recv_buf.begin(), recv_buf.end()));

    std::cout << "Got packet: " << in_p.code() << std::endl;
    std::cout << "Payload: " << in_p.data() << std::endl;
  } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }

  return 0;
}

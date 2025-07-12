#include <iostream>
#include <zmq_addon.hpp>

int main() {
    zmq::context_t ctx;
    zmq::socket_t client(ctx, zmq::socket_type::pull);

    client.connect("tcp://000.000.0.000:5555");
    std::cout << "Connected to server..." << std::endl;

    std::vector<zmq::message_t> recv_msgs;

#include <iostream>
#include <zmq_addon.hpp>

int main() {
	zmq::context_t ctx;
	zmq::socket_t server(ctx, zmq::socket_type::push);

	server.bind("tcp://*:5555");
	std::cout << "Server listening on port 5555..." << std::endl;

	std::array<zmq::const_buffer, 2> send_msgs = {
		zmq::str_buffer("Hello"),
		zmq::str_buffer("Client!")
	};

	zmq::send_multipart(server, send_msgs);
	std::cout << "Message sent to client" << std::endl;

	return 0;
}
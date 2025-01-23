#include <cpr/cpr.h>
#include <fmt/core.h>
#include <nlohmann/json.hpp>

int main(int argc, char **argv) {
	cpr::Response r = cpr::Get(
		cpr::Url{"https://catfact.ninja/fact"}
	);

	nlohmann::json json = nlohmann::json::parse(r.text);

	fmt::println("Status: {} {}", r.status_code, r.reason);
	fmt::println("Cat fact: {}", json["fact"].get<std::string>());

	return 0;
}
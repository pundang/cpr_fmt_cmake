#include <cpr/cpr.h>
#include <fmt/core.h>

int main(int argc, char **argv) {
	cpr::Response r = cpr::Get(
		cpr::Url{"https://catfact.ninja/fact"}
	);

	fmt::println("Status: {} {}", r.status_code, r.status_line);
	fmt::println("Body: {}", r.text);

	return 0;
}
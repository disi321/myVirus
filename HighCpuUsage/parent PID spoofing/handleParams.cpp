#include <iostream>
#include <iterator>
#include <string>

#include "argparse.h"
#include "PPIDspoofing.h"

using namespace argparse;

int main(int argc, const char* argv[]) {

    ArgumentParser parser("example", "Argument parser example");

    parser.add_argument("-P", "--parent", "parent", true);
    parser.add_argument("-p", "--path", "path", true);
    parser.enable_help();

    auto err = parser.parse(argc, argv);
    if (err) {
        std::cout << err << std::endl;
        return -1;
    }

    if (parser.exists("help")) {
        parser.print_help();
        return 0;
    }

    std::string parent;
    std::string path;
    if (parser.exists("parent"))
        parent = parser.get<std::string>("parent");
    else
        parent = parser.get<std::string>("P");
    if (parser.exists("path"))
        path = parser.get<std::string>("path");
    else
        path = parser.get<std::string>("p");

    const char* vIn = parent.c_str();
    wchar_t* vOut = new wchar_t[strlen(vIn) + 1];
    mbstowcs_s(NULL, vOut, strlen(vIn) + 1, vIn, strlen(vIn));
    PPIDspoofing(path.c_str(), vOut);

    return 0;
}
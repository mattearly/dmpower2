#include <string>
int main(int argc, char** argv) {
  if (argc > 1) { 
    std::string arg = argv[1];
    if (arg == "menu") {
      return 0;
    }
    if (arg == "character") {
      return 0;
    }
    return -1; // invalid args
  }

  return 0;
}
#include "globalfuncts.h"
std::string RUNTIME_PATH;
int main(int argc, char *argv[])
{
  {
    const std::string executable_path(argv[0]);
    auto last_slash_pos = executable_path.find_last_of("/\\");
    RUNTIME_PATH = executable_path.substr(0, last_slash_pos + 1);
  }

  set_user_pref_from_file();

  if (autoLoad)
    load_last_save();

  main_menu();

  return 0;
}



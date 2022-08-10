#include "globalfuncts.h"
int main(int argc, char *argv[])
{
  set_user_pref_from_file();

  if (autoLoad)
    load_last_save();

  main_menu();

  return 0;
}



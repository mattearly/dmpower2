cmake_minimum_required (VERSION 3.8)
project("DungeonMasterPower" VERSION 2.0)
set(EXE "dmpower2")
configure_file("dmpowerconfig.h.in" "dmpowerconfig.h")
set(CPP_FILES #object files
  src/campaign.cpp
  src/character_background.cpp
  src/character_classes.cpp
  src/character_export.cpp
  src/character_feats.cpp
  src/character_print.cpp
  src/character_random_name.cpp
  src/character_skills.cpp
  src/character_update.cpp
  src/characters.cpp
  src/charts.cpp
  src/gear.cpp
  src/gen_dungeon.cpp
  src/gen_encounter.cpp
  src/gen_experience.cpp
  src/gen_insult.cpp
  src/gen_name.cpp
  src/gen_reward.cpp
  src/globalfuncts.cpp
  src/main.cpp
  src/menu.cpp
  src/races.cpp
  src/save.cpp
  src/user_settings.cpp)

set(H_FILES #header files
  src/campaign.h
  src/characters.h
  src/charts.h
  src/gear.h
  src/gen_dungeon.h
  src/gen_encounter.h
  src/gen_experience.h
  src/gen_insult.h
  src/gen_name.h
  src/gen_reward.h
  src/globalfuncts.h
  src/races.h
  src/terminal_colors.h)

# binary runtime data for testing and running during development
file(COPY "${PROJECT_SOURCE_DIR}/data/lists/" DESTINATION "${CMAKE_BINARY_DIR}/${EXE}/data/lists/")

if (WIN32)
  add_executable(${EXE} ${CPP_FILES} ${H_FILES} "appicon.rc")
  install(DIRECTORY "${PROJECT_SOURCE_DIR}/data/lists" DESTINATION bin/data)
elseif (UNIX)
  add_executable(${EXE} ${CPP_FILES} ${H_FILES})
  set(CMAKE_INSTALL_PREFIX /usr)
  install(DIRECTORY "${PROJECT_SOURCE_DIR}/data/lists" DESTINATION share/dmpower/data)
elseif (APPLE) #todo:test
  add_executable(${EXE} MACOSX_BUNDLE ${CPP_FILES} ${H_FILES})
  install(DIRECTORY "${PROJECT_SOURCE_DIR}/data/lists" DESTINATION share/dmpower/data) 
endif()

set_property(TARGET ${EXE} PROPERTY CXX_STANDARD 17)
target_include_directories(${EXE} PUBLIC "${PROJECT_BINARY_DIR}")

install(TARGETS ${TARGET} DESTINATION bin)

set(CONFIGFILE "dmpowerconfig.h")
configure_file("${CONFIGFILE}.in" ${CONFIGFILE})

set(TARGET "dmpower")

message(STATUS "========== Configuring ${TARGET} ==========" )

add_executable(${TARGET}
#object files
  campaign.cpp
  character_background.cpp
  character_classes.cpp
  character_export.cpp
  character_feats.cpp
  character_print.cpp
  character_random_name.cpp
  character_skills.cpp
  character_update.cpp
  characters.cpp
  charts.cpp
  gear.cpp
  gen_dungeon.cpp
  gen_encounter.cpp
  gen_experience.cpp
  gen_insult.cpp
  gen_name.cpp
  gen_reward.cpp
  globalfuncts.cpp
  main.cpp
  menu.cpp
  races.cpp
  save.cpp
  user_settings.cpp
#header files
  campaign.h
  characters.h
  charts.h
  gear.h
  gen_dungeon.h
  gen_encounter.h
  gen_experience.h
  gen_insult.h
  gen_name.h
  gen_reward.h
  globalfuncts.h
  races.h
  terminal_colors.h
)

message(STATUS "Binary Dir: ${CMAKE_BINARY_DIR} ==========" )

# binary runtime data for testing and running during development
file(COPY "${PROJECT_SOURCE_DIR}/data/lists/" DESTINATION "${CMAKE_BINARY_DIR}/dmpower/data/lists/")

target_include_directories(${TARGET} PUBLIC "${PROJECT_BINARY_DIR}")

install(TARGETS ${TARGET} DESTINATION bin)

if (WIN32)
  install(DIRECTORY "${PROJECT_SOURCE_DIR}/data/lists" DESTINATION bin/data)
endif()

if (UNIX)
  set(CMAKE_INSTALL_PREFIX /usr)
  install(DIRECTORY "${PROJECT_SOURCE_DIR}/data/lists" DESTINATION share/dmpower/data)
endif()

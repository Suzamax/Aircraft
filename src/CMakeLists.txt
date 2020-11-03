SET(FILES
        tg_auth.cpp
        tg_client.cpp
        tg_state.cpp
        tg_thread.cpp
        window.cpp
        overloaded.h
        ${GENERATED_DATA_DIR}/resources.c
        main.cpp
        application.cpp application.h preferences.cpp preferences.h)

add_executable(${PROJECT_NAME} ${FILES})

find_package(Td 1.6.9 REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE Td::TdStatic)

target_link_libraries(Aircraft PUBLIC GTKMM)

compile_resources(
        ${GENERATED_DATA_DIR}/resources.c
        window.glade
        headerbar.glade
        menu.glade
        preferences.glade
)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)
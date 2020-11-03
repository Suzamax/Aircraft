cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(Aircraft VERSION 0.1)

set(APPLICATION_ID "one.suzamax.Aircraft")
string(REPLACE "." "/" APPLICATION_PREFIX "/${APPLICATION_ID}/")

list(INSERT CMAKE_MODULE_PATH 0 ${PROJECT_SOURCE_DIR}/cmake)
include(GlibUtils)
include(InstallScript)

set(GENERATED_FILES_DIR ${PROJECT_BINARY_DIR}/generated)
set(GENERATED_SOURCES_DIR ${GENERATED_FILES_DIR}/src)
set(GENERATED_DATA_DIR ${GENERATED_FILES_DIR}/data)

find_package(GTKMM)

add_subdirectory(src)
add_subdirectory(data)

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 14)

install(FILES cmake/uninstall.sh DESTINATION ${PROJECT_BINARY_DIR} PERMISSIONS OWNER_EXECUTE OWNER_READ OWNER_WRITE)
cmake_minimum_required(VERSION 3.10)
project(GameEngine)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# EXTERNAL LIBRARIES:
find_package(PkgConfig REQUIRED)
pkg_check_modules(SDL2 REQUIRED sdl2)
pkg_check_modules(SDL2_TTF REQUIRED SDL2_ttf)

# EXECUTABLE:
file(GLOB_RECURSE SOURCES "src/*.cpp")
add_executable(game ${SOURCES})

# INCLUDE HEADERS:
target_include_directories(game 
    PRIVATE 
        ${SDL2_INCLUDE_DIRS} 
        ${SDL2_TTF_INCLUDE_DIRS}
    PUBLIC 
        include
)

# LINK LIBRARIES (ORDER MATTERS) (for MSYS2):
target_link_libraries(game PRIVATE
    ${SDL2_LIBRARIES}
    ${SDL2_TTF_LIBRARIES}
)

# CONSOLE (TRUE = Wide console / FALSE = Show console):
set_target_properties(game PROPERTIES
    WIN32_EXECUTABLE FALSE
)

# STATIC LINKING:
if(MINGW)
    target_link_options(game PRIVATE 
        -static-libgcc 
        -static-libstdc++ 
        -static 
        -lpthread
    )
endif()

# DISTRIBUTION:
install(TARGETS game DESTINATION .)
install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/assets DESTINATION .)
if(WIN32)
    install(FILES 
        $<TARGET_FILE:SDL2::SDL2> 
        $<TARGET_FILE:SDL2_ttf::SDL2_ttf> 
        DESTINATION .
    )
endif()

# BUILD INSTRUCTIONS:
# cmake -S . -B build -G "MinGW Makefiles"
# cmake --build build

# BUILD AND INSTALL INSTRUCTIONS:
# cmake -S . -B build -G "MinGW Makefiles" -DCMAKE_INSTALL_PREFIX=dist
# cmake --build build
# cmake --install build

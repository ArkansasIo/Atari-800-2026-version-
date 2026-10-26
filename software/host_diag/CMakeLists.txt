add_executable(atari800_diag
    main.cpp
    cartridge.cpp
)

target_include_directories(atari800_diag PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

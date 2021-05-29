find_package(FLEX REQUIRED)
flex_target(scanner scanner/scanner.flex "${CMAKE_CURRENT_BINARY_DIR}/scanner.c")
add_executable(bminorc main.c scanner/utilities.c "${CMAKE_CURRENT_BINARY_DIR}/scanner.c")

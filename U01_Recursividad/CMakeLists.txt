
add_executable(U01-E01 Ej-01/main.cpp Ej-01/potencia.cpp)

add_executable(U01-E02 Ej-02/main.cpp Ej-02/sumatoria.cpp)

add_executable(U01-E03 Ej-03/main.cpp Ej-03/ackerman.cpp)

add_executable(U01-E04 Ej-04/main.cpp Ej-04/mcd.cpp)

add_executable(U01-E05 Ej-05/main.cpp Ej-05/digitos.cpp)


find_package( Threads )

include(SFML.cmake)

add_executable(Laberinto Extra-Laberinto/main.cpp Extra-Laberinto/LaberintoSolver.cpp Extra-Laberinto/MazeGenerator.cpp)

target_link_libraries(Laberinto ${CMAKE_THREAD_LIBS_INIT} sfml-system sfml-window sfml-graphics)
file(COPY Extra-Laberinto/tileLab.png DESTINATION ${CMAKE_BINARY_DIR}/U01_Recursividad/)

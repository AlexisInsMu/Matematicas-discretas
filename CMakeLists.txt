cmake_minimum_required(VERSION 3.0.0)
project(Matematicas_discretas VERSION 0.1.0 LANGUAGES C)

add_subdirectory(Discretas/Teoria_de_numeros_enteros)

add_executable(Teorema_chino_del_residuo Teorema_chino_del_residuo.c)

target_link_libraries(Teorema_chino_del_residuo
        Teoria_de_numeros_enteros)


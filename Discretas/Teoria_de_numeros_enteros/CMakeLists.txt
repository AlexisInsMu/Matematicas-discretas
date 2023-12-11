add_library(Teoria_de_numeros_enteros SHARED
        Teoria_de_numeros_enteros.h
        Teoria_de_numeros_enteros.c)

target_include_directories(Teoria_de_numeros_enteros PUBLIC
        ${CMAKE_CURRENT_LIST_DIR})
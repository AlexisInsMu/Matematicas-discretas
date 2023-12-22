add_library(Teoria_de_grafos SHARED 
        Teoria_de_grafos.c 
        Teoria_de_grafos.h)

target_include_directories(Teoria_de_grafos PUBLIC
        ${CMAKE_CURRENT_LIST_DIR})
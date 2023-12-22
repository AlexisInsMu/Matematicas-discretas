add_library(Teoria_de_numeros_enteros SHARED
        Teoria_de_numeros_enteros.h
        Teoria_de_numeros_enteros.c)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/../common ${CMAKE_CURRENT_BINARY_DIR}/../common)
target_link_libraries(Teoria_de_numeros_enteros PRIVATE common
        # Add any required libraries here
)
target_include_directories(Teoria_de_numeros_enteros PUBLIC ${CMAKE_CURRENT_LIST_DIR}/../common})
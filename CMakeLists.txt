cmake_minimum_required(VERSION 3.26)
project(Calculadora_em_C C)

set(CMAKE_C_STANDARD 99)

add_executable(Calculadora_em_C main.c
        Calculadora/Menu.c
        Calculadora/soma.c
        Calculadora/cosseno.c
        Calculadora/divisao.c
        Calculadora/fatorial.c
        Calculadora/media.c
        Calculadora/multiplicacao.c
        Calculadora/primo.c
        Calculadora/subtracao.c)

target_link_libraries(Calculadora_em_C m)

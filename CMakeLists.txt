cmake_minimum_required(VERSION 3.27)
project(a3_4 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(a3_4
        Controller/Controller.c
        Controller/Controller.h
        DynamicArray/DynamicArray.c
        DynamicArray/DynamicArray.h
        Estate/Estate.c
        Estate/Estate.h
        main.c
        Operation/Operation.c
        Operation/Operation.h
        OperationStack/OperationStack.c
        OperationStack/OperationStack.h
        Repository/Repository.c
        Repository/Repository.h
        Tests/Tests.c
        Tests/Tests.h
        UI/UI.c
        UI/UI.h)

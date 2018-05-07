cmake_minimum_required(VERSION 3.10)
project(ProfessionalCpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(PrefessionalCpp
#        main.cpp
        src/main/ch01/EmployeeExample/Employee.h
        src/main/ch01/EmployeeExample/Employee.cpp
#        src/main/domain/EmployeeTest.cpp
        src/main/ch01/EmployeeExample/Database.cpp
        src/main/ch01/EmployeeExample/Database.h
        src/main/ch01/EmployeeExample/DatabaseTest.cpp
        )

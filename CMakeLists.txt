cmake_minimum_required(VERSION 3.27)
project(FINAL)

set(CMAKE_CXX_STANDARD 17)

add_executable(FINAL main.cpp
        Trip.h
        Trip.cpp
        Booking.h
        Booking.cpp
        BusTransitCompany.cpp
        BusTransitCompany.h)

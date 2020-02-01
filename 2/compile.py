import os


file = 'Body.cpp Exception.cpp main.cpp NumRepository.cpp VarRepository.cpp'

os.system('g++ -o main -std=c++11 ' + file)


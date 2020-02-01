import os


file = 'Body.cpp Exception.cpp test.cpp NumRepository.cpp VarRepository.cpp'

os.system('g++ -o test -std=c++11 ' + file)
os.system('test.exe')



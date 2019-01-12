
CXX = g++
file = pointer.cpp
all: clean make excute

make:
	@echo "compile" ${file}
	${CXX} -o out ${file}

excute:
	./out

file:
	@echo "All files:" ${file}

clean:
	@echo "Clean excute files"
	rm -rf out


cmake_minimum_required (VERSION 3.8)
SET (SOURSE 
		Task27_3.cpp
 "worker.cpp" "manager.cpp" "company.cpp")
SET (HEADERS	
 "worker.h" "manager.h" "company.h")
add_executable (office "${SOURSE}" "${HEADERS}")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.

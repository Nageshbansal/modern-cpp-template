```
.
├── app                     	# Main project (may delete this folder if the project is a pure-library project)
    .
    └── src                 	# Source files of the main project

├── .github			# github configuration files			
        ├── issue_templates         	# template for issues
        └── workflows 		#  github actions configuration files

├──docs		
	├── html
	├── latex
                
├── CMake                   	# Custom CMake files
	├── settings.cmake
	├── conan.cmake
	├── vcpkg.cmake
	├── doxygen.cmake

├── include/project_name       	# Public header files of the library
├── src                   	# Custom libraries
          .
        ├── include         	# Internal header files of the library
        └── src             	# Source files of the library
		├── main.cpp

└── libs		# third-party libraries
        ├── A   
     ├──  a.cpp 	 

└── test
        ├── resources      	 # Contains resources for tests (eg. description of inputs)
        └── src             	# Source files of the test application
        └── CMakeLists.txt             	# Cmake file for building tests 	
├──  .clang-format        
├── .clang-tidy
├──  .gitignore
├──  CMakeLists.txt
├──  CONTRIBUTING.md
├──  LICENSE
├──  Makefile
├──  README.md
├──  Codecov.yaml
```
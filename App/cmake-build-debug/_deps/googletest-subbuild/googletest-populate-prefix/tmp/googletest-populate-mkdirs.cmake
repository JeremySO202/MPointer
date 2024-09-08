# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "E:/Escritorio/OneDrive - Estudiantes ITCR/TEC/Curso 2024/II Semestre/Datos 2/Proyectos/Proyecto1/App/cmake-build-debug/_deps/googletest-src"
  "E:/Escritorio/OneDrive - Estudiantes ITCR/TEC/Curso 2024/II Semestre/Datos 2/Proyectos/Proyecto1/App/cmake-build-debug/_deps/googletest-build"
  "E:/Escritorio/OneDrive - Estudiantes ITCR/TEC/Curso 2024/II Semestre/Datos 2/Proyectos/Proyecto1/App/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix"
  "E:/Escritorio/OneDrive - Estudiantes ITCR/TEC/Curso 2024/II Semestre/Datos 2/Proyectos/Proyecto1/App/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/tmp"
  "E:/Escritorio/OneDrive - Estudiantes ITCR/TEC/Curso 2024/II Semestre/Datos 2/Proyectos/Proyecto1/App/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp"
  "E:/Escritorio/OneDrive - Estudiantes ITCR/TEC/Curso 2024/II Semestre/Datos 2/Proyectos/Proyecto1/App/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/src"
  "E:/Escritorio/OneDrive - Estudiantes ITCR/TEC/Curso 2024/II Semestre/Datos 2/Proyectos/Proyecto1/App/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "E:/Escritorio/OneDrive - Estudiantes ITCR/TEC/Curso 2024/II Semestre/Datos 2/Proyectos/Proyecto1/App/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "E:/Escritorio/OneDrive - Estudiantes ITCR/TEC/Curso 2024/II Semestre/Datos 2/Proyectos/Proyecto1/App/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()

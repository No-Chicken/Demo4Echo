cmake_minimum_required(VERSION 3.10)

# Set the project name
project(DemoSnowboy)

# Find the architecture
if(CMAKE_SYSTEM_PROCESSOR MATCHES "arm")
    set(SNOWBOY_LIBRARY "${CMAKE_SOURCE_DIR}/lib/rpi/libsnowboy-detect.a")
    message(STATUS "Building for Arm native architecture.")
else()
    set(SNOWBOY_LIBRARY "${CMAKE_SOURCE_DIR}/lib/ubuntu64/libsnowboy-detect.a")
    message(STATUS "Building for x86 native architecture.")
endif()

add_compile_definitions(_GLIBCXX_USE_CXX11_ABI=0)

# Include directories
include_directories(${CMAKE_SOURCE_DIR})

# Add executable
add_executable(demo2 demo2.cc)

# Link libraries
target_link_libraries(demo2 ${SNOWBOY_LIBRARY})

# Additional flags and options
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 确保链接必要的数学库
find_package(BLAS REQUIRED)
find_package(LAPACK REQUIRED)
target_link_libraries(demo2 ${BLAS_LIBRARIES} ${LAPACK_LIBRARIES})

# 如果是交叉编译，则使用工具链文件
if(CMAKE_CROSSCOMPILING)
    if(NOT DEFINED CMAKE_TOOLCHAIN_FILE)
        message(FATAL_ERROR "Toolchain file must be specified for cross-compilation.")
    endif()
endif()

add_custom_target(clean-all
    COMMAND find "${CMAKE_BINARY_DIR}" -mindepth 1 -maxdepth 1 -exec rm -rf {} +
    COMMENT "Cleaning all generated files."
)





FetchContent_Declare(
        sfml
        URL https://github.com/janbar/flac-cmake/archive/1.3.2-20191201.zip
)

set(SFML_VERSION "2.5.1")
find_package(SFML ${SFML_VERSION} COMPONENTS system window graphics QUIET)

if (NOT SFML_FOUND)
    include(FetchContent)
    FetchContent_Declare(
            sfml
            URL https://github.com/SFML/SFML/releases/download/${SFML_VERSION}/SFML-${SFML_VERSION}-sources.zip
    )

    FetchContent_GetProperties(sfml)
    if(NOT sfml_POPULATED)
        FetchContent_Populate(sfml)
        add_subdirectory(${sfml_SOURCE_DIR} ${sfml_BINARY_DIR})
    endif()
endif()


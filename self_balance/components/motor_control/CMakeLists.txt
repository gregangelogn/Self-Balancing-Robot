idf_build_get_property(target IDF_TARGET)

# if(${target} STREQUAL "linux")
#     set(requires esp_event esp_stubs protocol_examples_common nvs_flash)
# else()
#     set(requires esp_event esp_timer esp32-camera esp_netif nvs_flash esp_partition)
# endif()

set(include_dirs    "."
                    "../../main")

idf_component_register(
    SRCS            "motor_control.c"
    INCLUDE_DIRS    ${include_dirs}
    # REQUIRES        ${requires}
)

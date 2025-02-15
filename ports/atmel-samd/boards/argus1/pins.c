#include "shared-bindings/board/__init__.h"
#include "supervisor/board.h"

STATIC const mp_rom_map_elem_t board_module_globals_table[] = {
    CIRCUITPYTHON_BOARD_DICT_STANDARD_ITEMS

    { MP_ROM_QSTR(MP_QSTR_SCK),      MP_ROM_PTR(&pin_PA13)  },
    { MP_ROM_QSTR(MP_QSTR_MOSI),     MP_ROM_PTR(&pin_PA12)  },
    { MP_ROM_QSTR(MP_QSTR_MISO),     MP_ROM_PTR(&pin_PA14)  },
    { MP_ROM_QSTR(MP_QSTR_SD_CS),    MP_ROM_PTR(&pin_PA27)  },

    // Burn wires
    { MP_ROM_QSTR(MP_QSTR_RELAY_A),  MP_ROM_PTR(&pin_PB07)  },
    { MP_ROM_QSTR(MP_QSTR_BURN1),    MP_ROM_PTR(&pin_PB31)  },
    { MP_ROM_QSTR(MP_QSTR_BURN2),    MP_ROM_PTR(&pin_PB09)  },
    { MP_ROM_QSTR(MP_QSTR_BURN3),    MP_ROM_PTR(&pin_PA04)  },
    { MP_ROM_QSTR(MP_QSTR_BURN4),    MP_ROM_PTR(&pin_PB14)  },

    // Enables
    { MP_ROM_QSTR(MP_QSTR_EN_RF),    MP_ROM_PTR(&pin_PB06)  },
    { MP_ROM_QSTR(MP_QSTR_EN_GPS),   MP_ROM_PTR(&pin_PB01)  },
    { MP_ROM_QSTR(MP_QSTR_EN_IMU),   MP_ROM_PTR(&pin_PB16)  },
    { MP_ROM_QSTR(MP_QSTR_EN_JET),   MP_ROM_PTR(&pin_PB17)  },

    { MP_ROM_QSTR(MP_QSTR_DAC0),     MP_ROM_PTR(&pin_PA02)  },
    { MP_ROM_QSTR(MP_QSTR_AIN5),     MP_ROM_PTR(&pin_PA05)  },

    { MP_ROM_QSTR(MP_QSTR_BATTERY),  MP_ROM_PTR(&pin_PA06)  },
    { MP_ROM_QSTR(MP_QSTR_L1PROG),   MP_ROM_PTR(&pin_PA07)  },
    { MP_ROM_QSTR(MP_QSTR_INOKB),    MP_ROM_PTR(&pin_PB08)  },

    { MP_ROM_QSTR(MP_QSTR_PA15),     MP_ROM_PTR(&pin_PA15)  },
    { MP_ROM_QSTR(MP_QSTR_PA16),     MP_ROM_PTR(&pin_PA16)  },
    { MP_ROM_QSTR(MP_QSTR_PA17),     MP_ROM_PTR(&pin_PA17)  },
    { MP_ROM_QSTR(MP_QSTR_VBUS_RST), MP_ROM_PTR(&pin_PA18)  },
    { MP_ROM_QSTR(MP_QSTR_PA19),     MP_ROM_PTR(&pin_PA19)  },
    { MP_ROM_QSTR(MP_QSTR_PA20),     MP_ROM_PTR(&pin_PA20)  },
    { MP_ROM_QSTR(MP_QSTR_PA22),     MP_ROM_PTR(&pin_PA22)  },
    { MP_ROM_QSTR(MP_QSTR_PB16),     MP_ROM_PTR(&pin_PB16)  },
    { MP_ROM_QSTR(MP_QSTR_PB17),     MP_ROM_PTR(&pin_PB17)  },
    { MP_ROM_QSTR(MP_QSTR_PB22),     MP_ROM_PTR(&pin_PB22)  },

    // Radio
    { MP_ROM_QSTR(MP_QSTR_RF1_RST),  MP_ROM_PTR(&pin_PB00)  },
    { MP_ROM_QSTR(MP_QSTR_RF1_CS),   MP_ROM_PTR(&pin_PB30)  },
    { MP_ROM_QSTR(MP_QSTR_RF1_IO4),  MP_ROM_PTR(&pin_PB04)  },
    { MP_ROM_QSTR(MP_QSTR_RF1_IO0),  MP_ROM_PTR(&pin_PB05)  },

    { MP_ROM_QSTR(MP_QSTR_TX),       MP_ROM_PTR(&pin_PB02)  },
    { MP_ROM_QSTR(MP_QSTR_RX),       MP_ROM_PTR(&pin_PB03)  },
    { MP_ROM_QSTR(MP_QSTR_JET_TX2),  MP_ROM_PTR(&pin_PA17)  },
    { MP_ROM_QSTR(MP_QSTR_JET_RX2),  MP_ROM_PTR(&pin_PA16)  },

    { MP_ROM_QSTR(MP_QSTR_SDA),      MP_ROM_PTR(&pin_PB12)  },
    { MP_ROM_QSTR(MP_QSTR_SCL),      MP_ROM_PTR(&pin_PB13)  },
    { MP_ROM_QSTR(MP_QSTR_SCL2),     MP_ROM_PTR(&pin_PA22)  },
    { MP_ROM_QSTR(MP_QSTR_SDA2),     MP_ROM_PTR(&pin_PA23)  },

    { MP_ROM_QSTR(MP_QSTR_WDT_WDI),  MP_ROM_PTR(&pin_PB23)  },
    { MP_ROM_QSTR(MP_QSTR_NEOPIXEL), MP_ROM_PTR(&pin_PA21)  },

    { MP_ROM_QSTR(MP_QSTR_UART), MP_ROM_PTR(&board_uart_obj) },
    { MP_ROM_QSTR(MP_QSTR_I2C),  MP_ROM_PTR(&board_i2c_obj)  },
    { MP_ROM_QSTR(MP_QSTR_SPI),  MP_ROM_PTR(&board_spi_obj)  },

};
MP_DEFINE_CONST_DICT(board_module_globals, board_module_globals_table);

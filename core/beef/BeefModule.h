/******************************************************************************
 *
 *
 *
 *
 *
 *****************************************************************************/

#ifndef __BEEF_MODULE_H
#define __BEEF_MODULE_H

#include <types.h>

#include <iostream>
#include <vector>

#include <stdint.h>

class BeefModule {
    public:
        BeefModule();
        BeefModule(uint32_t size);
        BeefModule(uint32_t size, beef_word_size capacity);

        uint32_t execute_stream(std::string iStream);
        uint32_t execute_stream(std::vector<int64_t> );

        uint32_t data_pointer_modify(int64_t pointerOffset);
        uint32_t data_pointer_set(uint32_t index);
        uint32_t data_byte_modify(int64_t dataOffset);
        uint32_t output_data(void);
        uint32_t output_data(uint32_t index);
        uint32_t input_data(int64_t data_value);
        uint32_t input_data(int64_t data_value, uint32_t index);

    private:
        std::vector<int64_t> data_segment;
};

#endif // __BEEF_MODULE_H
#include <stdio.h>
#include <stdint.h>

int main(void) 
{
#ifdef BUILD_MODE_DEBUG
    printf("Build mode: Debug\n");
#endif

#ifdef BUILD_MODE_RELEASE
    printf("Build mode: Release\n");
#endif

#if defined(__clang__)
    printf("Compiler: Clang\n");
#elif defined(__GNUC__)
    printf("Compiler: GCC\n");
#elif defined(_MSC_VER)
    printf("Compiler: MSVC\n");
#endif

    printf("Hello C11!\n");

    uint32_t value = 42;
    printf("Value: %u\n", value);

    if (sizeof(void*) == 8)
        printf("Architecture: 64-bit\n");
    else if (sizeof(void*) == 4)
        printf("Architecture: 32-bit\n");
    else
        printf("Architecture: Unknown pointer size\n");

#if defined(_WIN64)
    printf("Architecture: 64-bit (Windows)\n");
#elif defined(_WIN32)
    printf("Architecture: 32-bit (Windows)\n");
#endif

    return 0;
}
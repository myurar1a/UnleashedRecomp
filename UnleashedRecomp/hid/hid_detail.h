#pragma once

namespace hid::detail 
{
    enum class EInputDevice
    {
        Keyboard,
        Mouse,
        Controller
    };

    extern EInputDevice g_inputDevice;

    void Init();

    uint32_t GetState(uint32_t dwUserIndex, XAMINPUT_STATE* pState);
    uint32_t SetState(uint32_t dwUserIndex, XAMINPUT_VIBRATION* pVibration);
    uint32_t GetCapabilities(uint32_t dwUserIndex, XAMINPUT_CAPABILITIES* pCaps);
}

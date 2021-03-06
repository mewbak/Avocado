#pragma once
#include "dmaChannel.h"

namespace device {
namespace dma {
namespace dmaChannel {
class DMA6Channel : public DMAChannel {
    uint32_t readDevice() override { return 0xffffffff; }

   public:
    DMA6Channel(int channel, System* sys) : DMAChannel(channel, sys) {}
};
}  // namespace dmaChannel
}  // namespace dma
}  // namespace device
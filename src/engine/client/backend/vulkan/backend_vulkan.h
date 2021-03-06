#ifndef ENGINE_CLIENT_BACKEND_VULKAN_BACKEND_VULKAN_H
#define ENGINE_CLIENT_BACKEND_VULKAN_BACKEND_VULKAN_H

#include <base/detect.h>
#include <engine/client/backend_sdl.h>

static constexpr int gs_BackendVulkanMajor = 1;
static constexpr int gs_BackendVulkanMinor = 0;

CCommandProcessorFragment_GLBase *CreateVulkanCommandProcessorFragment();

#endif

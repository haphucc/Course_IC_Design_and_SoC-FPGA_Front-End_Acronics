################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
ELFSIZE += \
hammu_ip.elf.size \

ELFCHECK += \
hammu_ip.elf.elfcheck \


# All Target
all: hammu_ip.elf secondary-outputs

# Tool invocations
hammu_ip.elf: $(OBJS) ../src/lscript.ld $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MicroBlaze gcc linker'
	mb-gcc -Wl,-T -Wl,../src/lscript.ld -L../../hammu_ip_bsp/microblaze_0/lib -mlittle-endian -mxl-barrel-shift -mxl-pattern-compare -mcpu=v8.50.c -mno-xl-soft-mul -Wl,--no-relax -Wl,--gc-sections -o "hammu_ip.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

hammu_ip.elf.size: hammu_ip.elf
	@echo 'Invoking: MicroBlaze Print Size'
	mb-size hammu_ip.elf  |tee "hammu_ip.elf.size"
	@echo 'Finished building: $@'
	@echo ' '

hammu_ip.elf.elfcheck: hammu_ip.elf
	@echo 'Invoking: Xilinx ELF Check'
	elfcheck hammu_ip.elf -hw ../../IP_Core_HamMu_Axi4Lite_hw_platform/system.xml -pe microblaze_0  |tee "hammu_ip.elf.elfcheck"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(EXECUTABLES)$(ELFSIZE)$(ELFCHECK)$(S_UPPER_DEPS) hammu_ip.elf
	-@echo ' '

secondary-outputs: $(ELFSIZE) $(ELFCHECK)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

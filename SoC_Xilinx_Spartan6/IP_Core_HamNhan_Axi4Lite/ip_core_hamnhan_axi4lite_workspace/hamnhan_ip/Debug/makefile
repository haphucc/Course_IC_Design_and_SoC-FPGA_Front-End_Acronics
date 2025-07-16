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
hamnhan_ip.elf.size \

ELFCHECK += \
hamnhan_ip.elf.elfcheck \


# All Target
all: hamnhan_ip.elf secondary-outputs

# Tool invocations
hamnhan_ip.elf: $(OBJS) ../src/lscript.ld $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MicroBlaze gcc linker'
	mb-gcc -Wl,-T -Wl,../src/lscript.ld -L../../hamnhan_ip_bsp/microblaze_0/lib -mlittle-endian -mxl-barrel-shift -mxl-pattern-compare -mcpu=v8.50.c -mno-xl-soft-mul -Wl,--no-relax -Wl,--gc-sections -o "hamnhan_ip.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

hamnhan_ip.elf.size: hamnhan_ip.elf
	@echo 'Invoking: MicroBlaze Print Size'
	mb-size hamnhan_ip.elf  |tee "hamnhan_ip.elf.size"
	@echo 'Finished building: $@'
	@echo ' '

hamnhan_ip.elf.elfcheck: hamnhan_ip.elf
	@echo 'Invoking: Xilinx ELF Check'
	elfcheck hamnhan_ip.elf -hw ../../IP_Core_HamNhan_Axi4Lite_hw_platform/system.xml -pe microblaze_0  |tee "hamnhan_ip.elf.elfcheck"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(EXECUTABLES)$(ELFSIZE)$(ELFCHECK)$(S_UPPER_DEPS) hamnhan_ip.elf
	-@echo ' '

secondary-outputs: $(ELFSIZE) $(ELFCHECK)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

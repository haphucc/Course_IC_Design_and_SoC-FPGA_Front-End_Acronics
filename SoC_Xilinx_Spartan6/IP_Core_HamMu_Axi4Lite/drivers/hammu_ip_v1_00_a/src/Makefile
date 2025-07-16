##############################################################################
## Filename:          E:\KhoaHoc_TKVM_Acronics\SoC_Xilinx_Spartan6\IP_Core_HamMu_Axi4Lite/drivers/hammu_ip_v1_00_a/src/Makefile
## Description:       Microprocessor Driver Makefile
## Date:              Sun Jul 13 03:37:34 2025 (by Create and Import Peripheral Wizard)
##############################################################################

COMPILER=
ARCHIVER=
CP=cp
COMPILER_FLAGS=
EXTRA_COMPILER_FLAGS=
LIB=libxil.a

RELEASEDIR=../../../lib
INCLUDEDIR=../../../include
INCLUDES=-I./. -I${INCLUDEDIR}

INCLUDEFILES=*.h
LIBSOURCES=*.c
OUTS = *.o

libs:
	echo "Compiling hammu_ip"
	$(COMPILER) $(COMPILER_FLAGS) $(EXTRA_COMPILER_FLAGS) $(INCLUDES) $(LIBSOURCES)
	$(ARCHIVER) -r ${RELEASEDIR}/${LIB} ${OUTS}
	make clean

include:
	${CP} $(INCLUDEFILES) $(INCLUDEDIR)

clean:
	rm -rf ${OUTS}

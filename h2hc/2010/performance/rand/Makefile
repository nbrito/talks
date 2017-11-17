##
# $Id: Makefile,v 1.1 2010-06-16 07:08:51-03 nbrito Exp $
##

## ------------------x------------------x------------------x------------------
## Author: Nelson Brito <nbrito[at]sekure[dot]org>
##
## Copyright (c) 2010 Nelson Brito. All rights reserved worldwide.
##
## This source code is part of example codes demonstrated during H2HC Seventh
## Edition (November 27th/28th, 2010 / São Paulo / Brazil).
## ------------------x------------------x------------------x------------------
##                                The Hangover
##  A "modern" high performance approach to build an offensive computing tool
##
##                       Copyright (c) 2010 Nelson Brito
##                             All Rights Reserved
##
##   THIS SOFTWARE  IS PROVIDED  ``AS IS'',  WITHOUT  WARRANTY OF ANY KIND,
##   EXPRESS  OR  IMPLIED, INCLUDING BUT NOT  LIMITED  TO THE WARRANTIES OF
##   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
##   IN NO  EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS  BE LIABLE FOR ANY
##   CLAIM, DAMAGES  OR OTHER LIABILITY,  WHETHER IN AN ACTION OF CONTRACT,
##   TORT  OR OTHERWISE,  ARISING FROM,  OUT OF  OR IN CONNECTION  WITH THE
##   SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
## 
## ------------------x------------------x------------------x------------------ */

#
## GLOBAL PARAMETERS
##
## Global parameters used by GCC.
## Any new global parameter should be added in this section.
#
BIN             = /bin
SBIN            = /sbin
PREFIX          = /usr
INCLUDE         = ./include
INCLUDES        = /usr/include
USRBIN          = $(PREFIX)$(BIN)
USRSBIN         = $(PREFIX)$(SBIN)
RM              = $(BIN)/rm -f
SUBARCH        := $(shell uname -m | sed -e s/i.86/i386/)
ARCH	       ?= $(SUBARCH)

#
## GLOBAL COMPILER FLAGS
##
## Global compiler flags used by GCC.
## Any new compiler flag should be added in this section.
#
# Setting the language C.
CC              = $(USRBIN)/gcc
CFLAGS          = -xc
#
# Setting warning messages.
CFLAGS         += -Wall
CFLAGS         += -Werror
CFLAGS         += -Wformat
CFLAGS         += -Wformat-nonliteral
CFLAGS         += -Wformat-security
CFLAGS         += -Wformat-y2k
CFLAGS         += -Wimplicit
CFLAGS         += -Winline
CFLAGS         += -Waddress
CFLAGS         += -Warray-bounds
#
# Tuning parameters to better optimization.
CFLAGS         += -O3
ifeq ($(ARCH),x86_64)
	CFLAGS         += -ffast-math
	CFLAGS         += -fstack-protector-all
endif
CFLAGS         += -ftoplevel-reorder
CFLAGS         += -funroll-loops
CFLAGS         += -funroll-all-loops
CFLAGS         += -fomit-frame-pointer
CFLAGS         += -fkeep-inline-functions
CFLAGS         += -ftree-loop-optimize
CFLAGS         += -fbranch-target-load-optimize
CFLAGS         += -foptimize-register-move
CFLAGS         += -lmpi
ifeq ($(ARCH),x86_64)
	CFLAGS         += -m64
	CFLAGS         += -mpc64
endif
ifeq ($(ARCH),i386)
	CFLAGS         += -m32
	CFLAGS         += -mpc32
endif
CFLAGS         += -msahf
CFLAGS         += -march=native
CFLAGS         += -mtune=native
#
# Setting INCLUDE.
CFLAGS         += -I$(INCLUDE)
CFLAGS         += -I$(INCLUDES)


#
## GLOBAL LINKER FLAGS
##
## Global linker flags used by GCC.
## Any new linker flag should be added in this section.
#
# Tuning parameters to better performance in linkage process.
LDFLAGS         = -m elf_$(ARCH)
#
# CAUTION: Do not enable '-s' and '-static' on the same time.
LDFLAGS        += -s
#LDFLAGS        += -static
LDFLAGS        += -o


#
## GLOBAL OBJECTS
##
## Global sources used by PROGRAM.
## Any new source should be added in this section.
#
HELLO01         = hello01.o
HELLO02         = hello02.o
HELLO03         = hello03.o
HELLO04         = hello04.o
OBJECTS         = $(HELLO01) $(HELLO02) $(HELLO03) $(HELLO04)


#
## GLOBAL PROGRAMS
##
## Global programs.
## Any new program should be added in this section.
#
PROGRAMS        = hello01
PROGRAMS       += hello02
PROGRAMS       += hello03
PROGRAMS       += hello04

# XXX WARNING XXX WARNING XXX WARNING XXX
##
## Touch nothing beyond this point!!!
##
# XXX WARNING XXX WARNING XXX WARNING XXX
all: $(PROGRAMS)

hello01: $(HELLO01)
	$(CC) $(LDFLAGS) $@ $^

hello02: $(HELLO02)
	$(CC) $(LDFLAGS) $@ $^

hello03: $(HELLO03)
	$(CC) $(LDFLAGS) $@ $^

hello04: $(HELLO04)
	$(CC) $(LDFLAGS) $@ $^

test:   $(PROGRAMS)
	@for file in $^; do\
		./$$file;\
	done
clean:
	for file in $(OBJECTS) $(PROGRAMS) *~ .*.swp core; do\
		if [ -f $$file ]; then\
			$(RM) $$file 1>&2 > /dev/null;\
		fi;\
	done

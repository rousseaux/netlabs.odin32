# Use the new build-method if __NEW_BUILD_METHOD__ is defined
ifneq ($(origin __NEW_BUILD_METHOD__),undefined)

###############################################################################
# GNUmakefile :: Build the ApiTest Program as multiple variants               #
# --------------------------------------------------------------------------- #
#                                                                             #
# The purpose of the ApiTest Program is to get Odin in a better shape.        #
# Currently the main focus is on the Standard Widget Toolkit for OS/2, which  #
# is a separate but closely related project in development. For more info see #
# the 'doc' directory.                                                        #
#                                                                             #
# Note:                                                                       #
# This is the new build-method.                                               #
# It is based on the toolchain-wrappers and pattern-rules.                    #
# The old method will be removed when the new method fully functional.        #
#                                                                             #
###############################################################################

#
# This new method uses toolchain-wrapping together with pattern-rules.
# It has been developed to ease the connection between the upcoming generation
# of source-code based on ECore Models.
#

# Get the name of this Makefile so in can be recursively invoked if needed.
# This should always be the first statement, so any include statements should
# go *below* this one.
SELF:=$(lastword $(MAKEFILE_LIST))

# This is the true default target invoked when no targets are specified.
.DEFAULT_GOAL:=default

# Prevent Make from deleting intermediate targets
.SECONDARY:

# Disable standard suffix handlers so unhandled targets end-up at '.DEFAULT:'
.SUFFIXES:

# Enable this to use (target-specific) vars as a dependency in the same target
#.SECONDEXPANSION:

# Unhandles targets end-up here
.DEFAULT:
	@echo !!!!! Unhandled Target: [$@ -- {$^}]

# This is the default target when no targets are specified
#~ default: ApiTestPm.watcom
default: ApiTestOdin.watcom
#~ default: ApiTestWin.watcom
#~ default: ApiTestWin.mingw32msvc
#~ default: ApiTestWin.mingw32
#~ default: ApiTestWin.mingw64
#~ default: test

# The header, resources, source and output dirs relative to this Makefile
inc=h
rsrc=rsrc
src=src
out=out

# Include the toolchain wrappers and target building rules
include toolchains.gmi
include patternrules.gmi

# Create the output directory
$(shell $(md) $(out))
$(info created output-directory: '$(out)')

# --------------------------------------------------------------------------- #
# ApiTestPm.gcc.os2 :: OS/2 Presentation Manager variant                      #
# --------------------------------------------------------------------------- #
.PHONY: ApiTestPm.gcc.os2
ApiTestPm.gcc.os2::
	$(nl)
	@echo [$@]
	@echo ---------------------------------------------------------------------
	@echo Building $(basename $@) using GCC for OS/2 :: OS/2 LX
	@echo ---------------------------------------------------------------------
ApiTestPm.gcc.os2:: toolchain=toolchain.gcc.os2
#ApiTestPm.gcc.os2:: cc++:=compiler-override-command
ApiTestPm.gcc.os2:: $(out)/ApiTestPm.exe

# --------------------------------------------------------------------------- #
# ApiTestOdin.gcc.os2 :: Odin based variant                                   #
# --------------------------------------------------------------------------- #
.PHONY: ApiTestOdin.gcc.os2
ApiTestOdin.gcc.os2::
	$(nl)
	@echo [$@]
	@echo ---------------------------------------------------------------------
	@echo Building $(basename $@) using GCC for OS/2 :: OS/2 LX
	@echo ---------------------------------------------------------------------
ApiTestOdin.gcc.os2:: toolchain=toolchain.gcc.os2
#ApiTestOdin.gcc.os2:: cc++:=compiler-override-command
ApiTestOdin.gcc.os2:: $(out)/ApiTestOdin.exe

# --------------------------------------------------------------------------- #
# ApiTestPm.watcom :: OS/2 Presentation Manager variant                       #
# --------------------------------------------------------------------------- #
.PHONY: ApiTestPm.watcom
ApiTestPm.watcom::
	$(nl)
	@echo [$@]
	@echo ---------------------------------------------------------------------
	@echo Building $(basename $@) using OpenWatcom :: OS/2 LX
	@echo ---------------------------------------------------------------------
ApiTestPm.watcom:: toolchain=toolchain.openwatcom
ApiTestPm.watcom:: cc.defines+=-D$*
ApiTestPm.watcom:: $(out)/ApiTestPm.exe

# --------------------------------------------------------------------------- #
# ApiTestOdin.watcom :: Odin Based variant                                    #
# --------------------------------------------------------------------------- #
.PHONY: ApiTestOdin.watcom
ApiTestOdin.watcom::
	$(nl)
	@echo [$@]
	@echo ---------------------------------------------------------------------
	@echo Building $(basename $@) using OpenWatcom :: OS/2 LX
	@echo ---------------------------------------------------------------------
ApiTestOdin.watcom:: toolchain=toolchain.openwatcom
ApiTestOdin.watcom:: $(out)/ApiTestOdin.ors $(out)/ApiTestOdin.exe

# --------------------------------------------------------------------------- #
# ApiTestOdin.watcom :: Native Win32 variant                                  #
# --------------------------------------------------------------------------- #
.PHONY: ApiTestWin.watcom
ApiTestWin.watcom::
	$(nl)
	@echo [$@]
	@echo ---------------------------------------------------------------------
	@echo Building $(basename $@) using OpenWatcom :: Win32 PE32
	@echo ---------------------------------------------------------------------
ApiTestWin.watcom:: toolchain=toolchain.openwatcom
ApiTestWin.watcom:: $(out)/ApiTestWin.exe

# --------------------------------------------------------------------------- #
# ApiTestWin.mingw32msvc :: Native Win32 variant                              #
# --------------------------------------------------------------------------- #
.PHONY: ApiTestWin.mingw32msvc
ApiTestWin.mingw32msvc::
	$(nl)
	@echo [$@]
	@echo ---------------------------------------------------------------------
	@echo Building $(basename $@) using MinGW32msvc :: Win32 PE32
	@echo ---------------------------------------------------------------------
ApiTestWin.mingw32msvc:: toolchain=toolchain.mingw32msvc
ApiTestWin.mingw32msvc:: cc.flags.pre+=
ApiTestWin.mingw32msvc:: $(out)/ApiTestWin.exe

# --------------------------------------------------------------------------- #
# ApiTestWin.mingw32 :: Native Win32 variant                                  #
# --------------------------------------------------------------------------- #
.PHONY: ApiTestWin.mingw32
ApiTestWin.mingw32::
	$(nl)
	@echo [$@]
	@echo ---------------------------------------------------------------------
	@echo Building $(basename $@) using MinGW32 :: Win32 PE32
	@echo ---------------------------------------------------------------------
ApiTestWin.mingw32:: toolchain=toolchain.mingw32
ApiTestWin.mingw32:: cc.flags.pre+=-xc
ApiTestWin.mingw32:: $(out)/ApiTestWin.exe

# --------------------------------------------------------------------------- #
# ApiTestWin.mingw64 :: Native Win64 variant                                  #
# --------------------------------------------------------------------------- #
.PHONY: ApiTestWin.mingw64
ApiTestWin.mingw64::
	$(nl)
	@echo [$@]
	@echo ---------------------------------------------------------------------
	@echo Building $(basename $@) using MinGW64 :: Win64 PE64
	@echo ---------------------------------------------------------------------
ApiTestWin.mingw64:: toolchain=toolchain.mingw64
ApiTestWin.mingw64:: cc.flags.pre+=-xc
ApiTestWin.mingw64:: lnk.flags.pre=-mwindows
ApiTestWin.mingw64:: $(out)/ApiTestWin.exe

# OS/2 Pm variant
$(out)/ApiTestPm.obj: bits=32
#$(out)/ApiTestPm.obj: export INCLUDE=$(WATCOM)$/$(watcom.hdir)$;$(WATCOM)$/h$/os2


$(out)/ApiTestPm.exe: platform=os2v2
$(out)/ApiTestPm.exe: gui=pm32
$(out)/ApiTestPm.exe: module.rc=$(src)/ApiTestPm.rc
$(out)/ApiTestPm.exe: module.def=$(src)/ApiTestPm.def
$(out)/ApiTestPm.exe: cc.flags.defines=-DNULL=0
$(out)/ApiTestPm.exe: $(out)/ApiTestPm.obj

# OS/2 Odin variant
$(out)/ApiTestOdin.obj: bits=32
#$(out)/ApiTestOdin.obj: export INCLUDE=$(WATCOM)$/$(watcom.hdir)$;$(WATCOM)$/h$/nt

$(out)/ApiTestOdin.exe: platform=os2v2
$(out)/ApiTestOdin.exe: gui=odin32
$(out)/ApiTestOdin.exe: module.rc=$(src)/ApiTestOdin.rc
$(out)/ApiTestOdin.exe: module.def=$(src)/ApiTestOdin.def
$(out)/ApiTestOdin.exe: cc.flags.defines=-DNULL=0
$(out)/ApiTestOdin.exe: $(out)/ApiTestOdin.obj

# Windows variant
$(out)/ApiTestWin.obj: bits=32

$(out)/ApiTestWin.exe: platform=win32
$(out)/ApiTestWin.exe: gui=win32
$(out)/ApiTestWin.exe: module.rc=$(src)/ApiTestWin.rc
$(out)/ApiTestWin.exe: module.def=$(src)/ApiTestWin.def
$(out)/ApiTestWin.exe: cc.flags.defines=-DNULL=0
$(out)/ApiTestWin.exe: $(out)/ApiTestWin.obj

clean:
	$(nl)
	@echo [$@]
	rm -rf -v $(out)
#	rm -f -v *.objdump *.o *.obj *.coff *.omf *.ors *.res *.elf *.exe


else


#! GENINFO :: platform:OS/2, version:20.45, target:ApiTest.generate
###############################################################################
# GNUmakefile :: Build the ApiTest Program as multiple variants               #
# --------------------------------------------------------------------------- #
#                                                                             #
# The purpose of the ApiTest Program is to get Odin in a better shape.        #
# Currently the main focus is on the Standard Widget Toolkit for OS/2, which  #
# is a separate but closely related project in development. For more info see #
# the 'doc' directory.                                                        #
#                                                                             #
# The ApiTest Program can be build as 3 variants:                             #
# -----------------------------------------------                             #
# o A native Pm32 variant                                                     #
#   This variant is not the true focus of ApiTest but is used to investigate  #
#   things from the Pm32 angle, especially stuff that Odin32 delegates to Pm. #
#                                                                             #
# o An Odin32 Based variant                                                   #
#   This variant is the true focus of ApiTest and relates to the test-module  #
#   of the SwtOs2Demo. That test-module addresses issues encountered through  #
#   the SwtOs2 layer while ApiTestOdin addresses these issues by directly     #
#   using the Odin32-API. Using this approach makes it easier to determine if #
#   issues are caused at the SwtOs2 layer or by Odin.                         #
#                                                                             #
# o A native Win32 variant                                                    #
#   This variant is a PE-executable which causes Odin32 to handle it          #
#   differently as apposed to the Odin Based (LX-executable) variant. This    #
#   variant also runs Win(e)dows, which enables investigation of the Win32    #
#   implementation of those environments. This is especially interesting with #
#   regard to the Wine because its sources may contain 'cherries' for Odin.   #
#                                                                             #
# Currently 2 tool-chains are supported on OS/2:                              #
# ----------------------------------------------                              #
# o Open Watcom (v1.9+)                                                       #
#   This is the default tool-chain for these 'out-of-kBuild' builds, because  #
#   it can build all 3 variants, either on OS/2 or on Win(e)dows.             #
#   For convenience and compatibility with gcc, the 'owcc' front-end is used. #
#                                                                             #
# o GNU Compiler Collection for OS/2                                          #
#   This is the same tool-chain used by kBuild when building Odin.            #
#   Currently the 4.9.2 version is used at the developer site.                #
#   This tool-chain can build the Pm32 and Odin32 variants.                   #
#                                                                             #
###############################################################################

ifdef __OLD_METHOD__
$(error OLD)
endif

#
# File Commander User Menu
# ------------------------
# To ease building from the command-line, a File Commander user-menu is
# available. Just navigate with FC/2 to the directory containing this Makefile
# and press F2. Besides the normal menu navigation, one can use the hotkeys
# to quickly activate the desired entry. For instance, the 'bgo' key-sequence
# would build the Odin Based variant using GCC/2, while a sequence of 'ba'
# would build all variants using Open Watcom, which is the default tool-chain
# for these 'out-of-kBuild' builds of ApiTest.
#

# Get the name of this Makefile so in can be recursively invoked if needed.
# This should always be the first statement, so any include statements should
# go *below* this one.
SELF:=$(lastword $(MAKEFILE_LIST))

# Prevent Make from deleting intermediate targets
.SECONDARY:

# This is the true default target invoked when no targets are specified.
# Because only one target can be specified, we redirect to a target called
# 'default' where multiple targets can be specified as dependencies.
# So any changes to default behavior should not be made here but to the
# mentioned 'default' target defined a few paragraphs down.
.DEFAULT_GOAL:=default

# The header, resources, source and output dirs relative to this Makefile
inc=h
rcsrc=rcsrc
src=src
out=out

# Include the toolchain wrappers and target building rules
include toolchains.gmi
include patternrules.gmi

# Create the output directory
$(shell $(md) $(out))
$(info created output-directory: '$(out)')

# Accumulate Open Watcom Include Directories and compose a ';' separated
# include-path with '/' for both for 32-bit OS/2 and 32-bit Windows.
WATCOM2:=$(subst \,/,$(WATCOM))
OW_OS2V2_INCDIRS:=$
OW_OS2V2_INCDIRS+=$(WATCOM2)/h
OW_OS2V2_INCDIRS+=$(WATCOM2)/h/os2
OW_OS2V2_INCDIRS:=$(strip $(OW_OS2V2_INCDIRS))
OW_OS2V2_INCPATH:=$(subst $  ,;,$(OW_OS2V2_INCDIRS))
OW_WIN32_INCDIRS:=$
OW_WIN32_INCDIRS+=$(WATCOM2)/h
OW_WIN32_INCDIRS+=$(WATCOM2)/h/nt
OW_WIN32_INCDIRS:=$(strip $(OW_WIN32_INCDIRS))
OW_WIN32_INCPATH:=$(subst $  ,;,$(OW_WIN32_INCDIRS))

# Accumulate Odin32 Include Directories and compose a ';' separated
# include-path from them.
ODIN32SDK_INCDIRS:=$
ODIN32SDK_INCDIRS+=../../include
ODIN32SDK_INCDIRS+=../../include/win
ODIN32SDK_INCDIRS+=../../include/win/wine
ODIN32SDK_INCDIRS:=$(strip $(ODIN32SDK_INCDIRS))
ODIN32SDK_INCPATH:=$(subst $  ,;,$(ODIN32SDK_INCDIRS))

# Accumulate Odin32 Library Directories (only one) and compose a ';' separated
# library-path from them.
ODIN32SDK_LIBDIRS:=$
ODIN32SDK_LIBDIRS+=../../out/os2.x86/release/stage/lib
ODIN32SDK_LIBDIRS:=$(strip $(ODIN32SDK_LIBDIRS))
ODIN32SDK_LIBPATH:=$(subst $  ,;,$(ODIN32SDK_LIBDIRS))

# Accumulate Odin32 Libraries
ODIN32SDK_LIBS:=$
ODIN32SDK_LIBS+=kernel32.lib
ODIN32SDK_LIBS+=user32.lib
ODIN32SDK_LIBS+=gdi32.lib
ODIN32SDK_LIBS:=$(strip $(ODIN32SDK_LIBS))

# Make running ApiTest use the built Odin version instead of the stock release
#ODIN32SDK_BEGINLIBPATH=..\..\out\os2.x86\debug\stage\bin
ODIN32SDK_BEGINLIBPATH=..\..\out\os2.x86\release\stage\bin

# This macro is invoked by defined but not yet implemented targets
define target.not.implemented
@echo !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
@echo !!! Unhandled Target "$@" invoked
@echo !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
endef

# Convert a space or ';' separated list of include dirs to a list of -I flags for gcc
define incdirs2flags.gcc
$(foreach idir,$(subst ;, ,$(1)),-I$(idir))
endef

# Convert a space or ';' separated list of library dirs to a list of -L flags for gcc
define libdirs2flags.gcc
$(foreach ldir,$(subst ;, ,$(1)),-L$(ldir))
endef

# Convert a space or ';' separated list of library names to a list of -l flags for gcc
define libnames2flags.gcc
$(foreach lname,$(subst ;, ,$(1)),-l$(lname))
endef



# ------------------------------------------------------------------- [default]
# This is the redirected default target from the '.DEFAULT_GOAL' statement
# -----------------------------------------------------------------------------
# It gets invoked when no targets are specified. Any changes to the behavior of
# the default target should be made here by modifying the dependency list.
# Multiple targets can be specified on the dependency list.
# Please note that:
# When typing 'make', the default is building the 'Odin32' variant with GCC/2.
# However, the default from the FC/2 menu is building the 'Odin32' variant with
# Open Watcom. This makes is easy to switch between the two: F2 'BD' for 'owcc'
# or a command recall (cli:up / fc2:ctrl-up) of 'make' for 'gcc'.
# -----------------------------------------------------------------------------
default: gcc.build.odin32
#	@echo [$@]


# ----------------------------------------------------------------------- [all]
# A 'well-known' target which we forward to building all 3 variants
# -----------------------------------------------------------------------------
all: owcc.build.all
#	@echo [$@]


# ------------------------------------------------------------ [owcc.build.all]
# This builds all 3 variants using Open Watcom
# -----------------------------------------------------------------------------
# Double colon targets are executed in sequence and each target can have their
# own target-specific macros. We just use them to display the target-name that
# is invoked and to be able to selectively comment-out the invocation of
# targets declared on the dependency list, which is now split-up over multiple
# '::'-targets.
# -----------------------------------------------------------------------------
owcc.build.all::
	@$(nl)
	@echo [$@]
	@echo Building all 3 variants using Open Watcom
owcc.build.all:: owcc.build.pm32
owcc.build.all:: owcc.build.odin32
owcc.build.all:: owcc.build.win32


# ----------------------------------------------------------- [owcc.build.pm32]
# This builds the Pm32 variant using Open Watcom
# -----------------------------------------------------------------------------
# Because the dependency list gets evaluated before the target-specific macros,
# $(modulename) is not defined yet. This could be solved by '.SECONDEXPANSION:'
# and '$(target-specific-var)', but the 'expandproperties' task used in the
# code-generator at the developers site currently eats all the '$' characters.
# (Ant::<concat><filterchain><expandproperties/></filterchain></concat>)
# So we work around this by using $(eval ...), which has the side-effect that
# $(modulename) becomes a global variable, but that has no further impact.
# -----------------------------------------------------------------------------
owcc.build.pm32::
	@$(nl)
	@echo [$@]
	@echo Building 'Pm32' variant using using Open Watcom
owcc.build.pm32:: $(eval modulename:=ApiTestPm)
owcc.build.pm32:: cc:=owcc
owcc.build.pm32:: cc.flags.sys:=-b os2v2
owcc.build.pm32:: cc.flags.pre:=-xc -Wc,"-q -bc" -Wl,"op q" -fo=$(out)/.obj
owcc.build.pm32:: cc.flags.pre+=-fd=$(out)/$(modulename).wlk
owcc.build.pm32:: cc.flags.pre+=-fm=$(out)/$(modulename).map
owcc.build.pm32:: cc.flags.incdirs:=-I. -I$(inc)
owcc.build.pm32:: cc.flags.libdirs:=
owcc.build.pm32:: cc.flags.libs:=
owcc.build.pm32:: cc.flags.post:=
owcc.build.pm32:: cc.defines:=-DNULL=0
owcc.build.pm32:: module.def:=
owcc.build.pm32:: export INCLUDE:=$(OW_OS2V2_INCPATH)
owcc.build.pm32:: export LIB:=
owcc.build.pm32:: $(out)/$(modulename).exe


# --------------------------------------------------------- [owcc.build.odin32]
# This builds the Odin32 variant using Open Watcom
# -----------------------------------------------------------------------------
owcc.build.odin32::
	@$(nl)
	@echo [$@]
	@echo Building 'Odin32' variant using using Open Watcom
owcc.build.odin32:: $(eval modulename:=ApiTestOdin)
owcc.build.odin32:: cc:=owcc
owcc.build.odin32:: cc.flags.sys:=-b os2v2
owcc.build.odin32:: cc.flags.pre:=-xc -Wc,"-q -bc" -Wl,"op q" -fo=$(out)/.obj
owcc.build.odin32:: cc.flags.pre+=-fd=$(out)/$(modulename).wlk
owcc.build.odin32:: cc.flags.pre+=-fm=$(out)/$(modulename).map
owcc.build.odin32:: cc.flags.incdirs:=-I. -I$(inc)
owcc.build.odin32:: cc.flags.libdirs:=
owcc.build.odin32:: cc.flags.libs:=
owcc.build.odin32:: cc.flags.post:=-Wl,"file {$(out)/ApiTestOdin.ors} lib {$(ODIN32SDK_LIBS)}"
owcc.build.odin32:: cc.defines:=-DNULL=0 -D__i386__ -D__WIN32OS2__
owcc.build.odin32:: module.def:=
owcc.build.odin32:: export INCLUDE:=$(OW_OS2V2_INCPATH);$(ODIN32SDK_INCPATH)
owcc.build.odin32:: export LIB:=$(ODIN32SDK_LIBPATH)
owcc.build.odin32:: $(out)/$(modulename).exe


# ---------------------------------------------------------- [owcc.build.win32]
# This builds the Win32 variant using Open Watcom
# -----------------------------------------------------------------------------
owcc.build.win32::
	@$(nl)
	@echo [$@]
	@echo Building 'Win32' variant using using Open Watcom
owcc.build.win32:: $(eval modulename:=ApiTestWin)
owcc.build.win32:: cc:=owcc
owcc.build.win32:: cc.flags.sys:=-b nt
owcc.build.win32:: cc.flags.pre:=-xc -Wc,"-q -bc" -Wl,"op q" -fo=$(out)/.obj
owcc.build.win32:: cc.flags.pre+=-fd=$(out)/$(modulename).wlk
owcc.build.win32:: cc.flags.pre+=-fm=$(out)/$(modulename).map
owcc.build.win32:: cc.flags.incdirs:=-I. -I$(inc)
owcc.build.win32:: cc.flags.libdirs:=
owcc.build.win32:: cc.flags.libs:=
owcc.build.win32:: cc.flags.post:=
owcc.build.win32:: cc.defines:=-DNULL=0
owcc.build.win32:: module.def:=
owcc.build.win32:: export INCLUDE:=$(OW_WIN32_INCPATH)
owcc.build.win32:: export LIB:=
owcc.build.win32:: $(out)/$(modulename).exe


# ------------------------------------------------------------- [gcc.build.all]
# This builds the Pm32 and Odin32 variants using the GNU/2 tool-chain
# -----------------------------------------------------------------------------
gcc.build.all::
	@$(nl)
	@echo [$@]
	@echo Building 'Pm32' and 'Odin32' variants using GCC/2
gcc.build.all:: gcc.build.pm32
gcc.build.all:: gcc.build.odin32
#gcc.build.all:: gcc.build.win32


# ----------------------------------------------------------- [gcc.build.pm32]
# This builds the Pm32 variant using the GNU/2 tool-chain
# -----------------------------------------------------------------------------
gcc.build.pm32::
	@$(nl)
	@echo [$@]
	@echo Building 'Pm32' variant using using GCC/2
gcc.build.pm32:: $(eval modulename:=ApiTestPm)
gcc.build.pm32:: cc:=gcc
gcc.build.pm32:: cc.flags.sys:=-Zomf -Zmap
gcc.build.pm32:: cc.flags.pre:=-xc
gcc.build.pm32:: cc.flags.incdirs:=-I. -I$(inc)
gcc.build.pm32:: cc.flags.libdirs:=
gcc.build.pm32:: cc.flags.libs:=
gcc.build.pm32:: cc.flags.post:=-Wl,"$(src)/$(modulename).def"
gcc.build.pm32:: cc.defines:=-DNULL=0
gcc.build.pm32:: module.def:=
gcc.build.pm32:: export INCLUDE:=
gcc.build.pm32:: export C_INCLUDE_PATH:=
gcc.build.pm32:: export CPLUS_INCLUDE_PATH:=
gcc.build.pm32:: $(out)/$(modulename).exe


# ---------------------------------------------------------- [gcc.build.odin32]
# This builds the Odin32 variant using the GNU/2 tool-chain
# -----------------------------------------------------------------------------
gcc.build.odin32::
	@$(nl)
	@echo [$@]
	@echo Building 'Odin32' variant using using GCC/2
gcc.build.odin32:: $(eval modulename:=ApiTestOdin)
gcc.build.odin32:: cc:=gcc
gcc.build.odin32:: cc.flags.sys:=-Zomf -Zmap
gcc.build.odin32:: cc.flags.pre:=-xc
gcc.build.odin32:: cc.flags.incdirs:=-I. -I$(inc)
gcc.build.odin32:: cc.flags.libdirs:=$(call libdirs2flags.gcc,$(ODIN32SDK_LIBDIRS))
gcc.build.odin32:: cc.flags.libs:=$(call libnames2flags.gcc,$(ODIN32SDK_LIBS))
gcc.build.odin32:: cc.flags.post:=-Wl,"$(out)/ApiTestOdin.ors" -Wl,"$(src)/$(modulename).def"
gcc.build.odin32:: cc.defines:=-DNULL=0 -D__i386__ -D__WIN32OS2__
gcc.build.odin32:: export INCLUDE:=$(ODIN32SDK_INCPATH)
gcc.build.odin32:: export C_INCLUDE_PATH:=$(ODIN32SDK_INCPATH)
gcc.build.odin32:: export CPLUS_INCLUDE_PATH:=$(ODIN32SDK_INCPATH)
gcc.build.odin32:: module.def:=
gcc.build.odin32:: $(out)/$(modulename).exe


# ! Note: Open Watcom v1.9 bugs (owcc front-end)
# ! The 'owcc' front-end has several problems passing flags to the compilers.
# ! For instance, it does not handle the '/' correctly when part of the path
# ! that specifies a source. The path is discarded and the source is looked for
# ! in the current directory. Also, using '-fr=<file>' has its problems.
# ! Because we want to use '/' for the most part, a small hack is done using
# ! the 'subst' macro on the source specification.
# ! At least the '/' bug with regard to the source specification seems to be
# ! fixed as of 'owcc' "Version 2.0 beta Apr 27 2014 22:48:31 (32-bit)".
# ! Update: Using owcc to link also experiences '/'-bug for opening .obj-files.


# ------------------------------------------------------------- [ApiTestPm.exe]
# Build the Pm32 target executable (LX)
# -----------------------------------------------------------------------------
$(out)/ApiTestPm.exe: $(src)$/ApiTestPm.cpp $(out)/ApiTestPm.res $(module.def)
	@echo [$@]
	$(cc) $(cc.flags.sys) $(cc.flags.pre) $(cc.flags.incdirs) $(cc.flags.libdirs) $(cc.flags.libs) $(cc.flags.post) $(cc.defines) $< -o $@
	wrc -q -bt=os2 -zm $(basename $@).res $@


# ------------------------------------------------------------- [ApiTestPm.res]
# Compile the Pm32 resources to binary form
# -----------------------------------------------------------------------------
$(out)/ApiTestPm.res: $(src)/ApiTestPm.rc
	@echo [$@]
	wrc -q -r -bt=os2 -zm -fo=$@ $<


# ----------------------------------------------------------- [ApiTestOdin.exe]
# Build the Odin32 target executable (LX)
# -----------------------------------------------------------------------------
$(out)/ApiTestOdin.exe: $(src)$/ApiTestOdin.cpp $(out)/ApiTestOdin.ors $(module.def)
	@echo [$@]
	$(cc) $(cc.flags.sys) $(cc.flags.pre) $(cc.flags.incdirs) $(cc.flags.libdirs) $(cc.flags.libs) $(cc.flags.post) $(cc.defines) $< -o $@


# ----------------------------------------------------------- [ApiTestOdin.ors]
# Translate the Win32 resource source to binary form
# -----------------------------------------------------------------------------
# Resources for Odin Based applications (LX) are bound by first translating
# the Win32 resource source (.rc) to Assembly and then assembling the assembler
# source (.s) to an object file (.ors), which is linked-in when building the
# target executable. This target performs those steps and could be considered
# a case of 'early binding' as opposed to normal resource binding (.res) which
# is done after the target executable is built, which is 'late binding'.
# Unlike with regular Odin kBuilds, we do not use the 'rsrc' suffix on the
# modulename, but name the object '.ors', which is short for 'object resource'.
# The '.ors' file is in regular OMF however.
# -----------------------------------------------------------------------------
$(out)/ApiTestOdin.ors: $(src)/ApiTestOdin.rc
	@echo [$@]
	winerc -D__WIN32OS2__ -s $(cc.flags.incdirs) -I$(src) $< -o $(basename $@).s
	as -Zomf $(basename $@).s -o $@


# ------------------------------------------------------------ [ApiTestWin.exe]
# Build the Win32 target executable (PE)
# -----------------------------------------------------------------------------
$(out)/ApiTestWin.exe: $(subst /,\,$(src)/ApiTestWin.cpp) $(out)/ApiTestWin.res $(module.def)
	@echo [$@]
	$(cc) $(cc.flags.sys) $(cc.flags.pre) $(cc.flags.incdirs) $(cc.flags.libdirs) $(cc.flags.libs) $(cc.flags.post) $(cc.defines) $< -o $@ $(module.def)
	wrc -q -bt=nt -zm $(basename $@).res $@


# ------------------------------------------------------------ [ApiTestWin.res]
# Compile the Win32 resources to binary form
# -----------------------------------------------------------------------------
$(out)/ApiTestWin.res: $(src)/ApiTestWin.rc
	@echo [$@]
	@if not exist $(out) mkdir $(out)
	wrc -q -r -bt=nt -zm -fo=$@ $<

# ------------------------------------------------------------ [ApiTestWin.ors]
# Compile the Win32 resources to binary form
# -----------------------------------------------------------------------------
#$(out)/ApiTestWin.ors: $(src)/ApiTestWin.rc
#	@echo [$@]
##	@if not exist $(out) mkdir $(out)
###	winerc -D__WIN32OS2__ -s $(cc.flags.incdirs) -I$(src) $< -o $(basename $@).s
###	as -Zomf $(basename $@).s -o $@
#	$(rc) $(src)/$(modulename).rc -O coff -o $(@)

# --------------------------------------------------------------------- [build]
# Redirect to a target that is considered to do the default build
# -----------------------------------------------------------------------------
build: default
#	@echo [$@]


# ------------------------------------------------------------------ [run.pm32]
# Run the Pm32 variant
# -----------------------------------------------------------------------------
run.pm32: owcc.build.pm32
	@echo [$@]
	$(out)\ApiTestPm.exe


# ---------------------------------------------------------------- [run.odin32]
# Run the Odin32 variant
# -----------------------------------------------------------------------------
# Observation: *** App compiled as WINDOWAPI is started as WINDOWCOMPAT ***
# Starting a WINDOWAPI compiled Odin Based app directly (without 'cmd /c')
# starts it a WINDOWCOMPAT, thus waiting for it to end and stdout visible on
# the console. Using 'cmd /c' makes the starting behave correctly for both
# WINDOWCOMPAT and WINDOWAPI. Both 'make' and 'kmk' exhibit this behavior while
# 'nmake' (v4.00) does not. I wonder if this is related to the pe/pec quirk
# below...
# -----------------------------------------------------------------------------
run.odin32: owcc.build.odin32
	@echo [$@]
#	$(out)\ApiTestOdin.exe
	cmd /c "set BEGINLIBPATH=$(ODIN32SDK_BEGINLIBPATH)&$(out)\ApiTestOdin.exe"


# -------------------------------------------------------------- [run.win32.pe]
# Run the Win32 variant using pe
# -----------------------------------------------------------------------------
# Quirk: *** If Main Window is not destroyed, pe hangs but pec terminates ***
# Needs more investigation.
# Also, for both pe and pec, the value for PostQuitMessage() is not present
# in the 'wParam' field of the message-structure at exit. (wParam is 0)
# -----------------------------------------------------------------------------
run.win32.pe: owcc.build.win32
	@echo [$@]
#	pe $(out)\ApiTestWin.exe
	cmd /c "set BEGINLIBPATH=$(ODIN32SDK_BEGINLIBPATH)&pe $(out)\ApiTestWin.exe"


# ------------------------------------------------------------- [run.win32.pec]
# Run the Win32 variant using pec
# -----------------------------------------------------------------------------
# Quirk: *** Both pe and pec fail when started from 'make' or 'kmk' ***
# The pec.exe program pops up a stange dialog about not finding '?kLIBc?.exe'.
# The pe.exe program does not even show anything but returns with an error.
# Possibly an environment (shell? / klibc?) issue.
# Under investigation; for now 'cmd /c' works around this issue.
# -----------------------------------------------------------------------------
run.win32.pec: owcc.build.win32
	@echo [$@]
#	pec $(out)\ApiTestWin.exe
	cmd /c "set BEGINLIBPATH=$(ODIN32SDK_BEGINLIBPATH)&pec $(out)\ApiTestWin.exe"


# ---------------------------------------------------------- [run.win32.win32k]
# Run the Win32 variant using the win32k.sys driver
# -----------------------------------------------------------------------------
run.win32.win32k: owcc.build.win32
	@echo [$@]
	$(out)\ApiTestWin.exe


# ------------------------------------------------------------ [run.win32.wine]
# Run the Win32 variant under Wine
# -----------------------------------------------------------------------------
run.win32.wine: owcc.build.win32
	@echo [$@]
	$(out)\ApiTestWin.exe

# ----------------------------------------------------- [run.win32.mingw32msvc]
# Run the Win32 variant under Wine
# -----------------------------------------------------------------------------
run.win32.mingw32msvc: mingw32msvc.build.win32
	@echo [$@]
	wine $(out)/ApiTestWin.exe

# ----------------------------------------------------------- [gen.tools.flags]
# Dump the usage flags of some tools used
# -----------------------------------------------------------------------------
gen.tools.flags:
	@echo [$@]
	-owcc -? 2> .flags.owcc
	-wcc386 > .flags.wcc386
	-wpp386 > .flags.wpp386
	-wcl386 > .flags.wcl386
	-gcc --help > .flags.gcc
	-gcc --help=common > .flags.gcc.common


# --------------------------------------------------------------------- [clean]
# Cleanup by removing the complete out-directory
# -----------------------------------------------------------------------------
clean:
	@echo [$@]
	rm -rf -v $(out)
#	rd $(out)

endif

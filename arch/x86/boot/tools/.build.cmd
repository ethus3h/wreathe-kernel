cmd_arch/x86/boot/tools/build := gcc -Wp,-MD,arch/x86/boot/tools/.build.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89   -I./tools/include -include include/generated/autoconf.h -D__EXPORTED_HEADERS__  -o arch/x86/boot/tools/build arch/x86/boot/tools/build.c  

source_arch/x86/boot/tools/build := arch/x86/boot/tools/build.c

deps_arch/x86/boot/tools/build := \
    $(wildcard include/config/efi/stub.h) \
    $(wildcard include/config/x86/32.h) \
    $(wildcard include/config/x86/64.h) \
    $(wildcard include/config/efi/mixed.h) \
  /usr/include/stdc-predef.h \
  /usr/include/stdio.h \
  /usr/include/features.h \
  /usr/include/sys/cdefs.h \
  /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h \
  /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stddef.h \
  /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h \
  /usr/include/libio.h \
  /usr/include/_G_config.h \
  /usr/include/wchar.h \
  /usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stdarg.h \
  /usr/include/bits/stdio_lim.h \
  /usr/include/bits/sys_errlist.h \
  /usr/include/bits/stdio.h \
  /usr/include/bits/stdio2.h \
  /usr/include/string.h \
  /usr/include/xlocale.h \
  /usr/include/bits/string.h \
  /usr/include/bits/string2.h \
  /usr/include/endian.h \
  /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/include/bits/byteswap-16.h \
  /usr/include/stdlib.h \
  /usr/include/bits/string3.h \
  /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h \
  /usr/include/time.h \
  /usr/include/sys/select.h \
  /usr/include/bits/select.h \
  /usr/include/bits/sigset.h \
  /usr/include/bits/time.h \
  /usr/include/bits/select2.h \
  /usr/include/sys/sysmacros.h \
  /usr/include/bits/pthreadtypes.h \
  /usr/include/alloca.h \
  /usr/include/bits/stdlib-bsearch.h \
  /usr/include/bits/stdlib-float.h \
  /usr/include/bits/stdlib.h \
  /usr/include/sys/stat.h \
  /usr/include/bits/stat.h \
  /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h \
  /usr/include/bits/confname.h \
  /usr/include/getopt.h \
  /usr/include/bits/unistd.h \
  /usr/include/fcntl.h \
  /usr/include/bits/fcntl.h \
  /usr/include/bits/fcntl-linux.h \
  /usr/include/bits/fcntl2.h \
  /usr/include/sys/mman.h \
  /usr/include/bits/mman.h \
  /usr/include/bits/mman-linux.h \
  tools/include/tools/le_byteshift.h \
  /usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stdint.h \
  /usr/include/stdint.h \
  /usr/include/bits/wchar.h \

arch/x86/boot/tools/build: $(deps_arch/x86/boot/tools/build)

$(deps_arch/x86/boot/tools/build):

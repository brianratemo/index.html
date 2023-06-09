#ifndef RUBY_MJIT_CONFIG_H
#define RUBY_MJIT_CONFIG_H 1

#ifdef LOAD_RELATIVE
#define MJIT_HEADER_INSTALL_DIR "/include/ruby-3.0.0/x86_64-linux"
#else
#define MJIT_HEADER_INSTALL_DIR "/home/brantellah/.rvm/rubies/ruby-3.0.0/include/ruby-3.0.0/x86_64-linux"
#endif
#define MJIT_MIN_HEADER_NAME "rb_mjit_min_header-3.0.0.h"
#define MJIT_CC_COMMON   "/bin/gcc",
#define MJIT_CFLAGS      MJIT_ARCHFLAG "-w",
#define MJIT_OPTFLAGS    "-O3",
#define MJIT_DEBUGFLAGS  "-ggdb3",
#define MJIT_LDSHARED    "/bin/gcc", "-shared",
#define MJIT_DLDFLAGS    MJIT_ARCHFLAG "-Wl,--compress-debug-sections=zlib",
#define MJIT_LIBS        "-Wl,-rpath,/home/brantellah/.rvm/rubies/ruby-3.0.0/lib", "-L/home/brantellah/.rvm/rubies/ruby-3.0.0/lib", "-lruby",
#define PRELOADENV       "LD_PRELOAD"
#define MJIT_ARCHFLAG    /* no flag */

#endif /* RUBY_MJIT_CONFIG_H */

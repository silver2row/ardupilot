AP_LIBRARIES = ['AP_UAVCAN', 'modules/uavcan/libuavcan/src/**/*.cpp', 'AP_HAL_Linux', 'AP_Scripting', 'AP_Scripting/lua/src']
AP_LIBRARIES_OBJECTS_KW = {}
AP_LIB_EXTRA_SOURCES = {'AP_Scripting': ['lua_generated_bindings.cpp']}
AR = ['/usr/bin/arm-linux-gnueabihf-ar']
ARFLAGS = ['rcs']
BINDIR = '/usr/bin'
BOARD = 'blue'
BOOTLOADER = False
BUILD_SUMMARY_HEADER = ['target', 'size_text', 'size_data', 'size_bss', 'size_total', 'size_free_flash']
CC = ['/usr/lib/ccache/arm-linux-gnueabihf-gcc']
CCLNK_SRC_F = []
CCLNK_TGT_F = ['-o']
CC_NAME = 'gcc'
CC_SRC_F = []
CC_TGT_F = ['-c', '-o']
CC_VERSION = ('10', '2', '1')
CFLAGS = ['-ffunction-sections', '-fdata-sections', '-fsigned-char', '-Wall', '-Wextra', '-Werror=format', '-Wpointer-arith', '-Wcast-align', '-Wno-missing-field-initializers', '-Wno-unused-parameter', '-Wno-redundant-decls', '-Wno-unknown-pragmas', '-Wno-trigraphs', '-Werror=shadow', '-Werror=return-type', '-Werror=unused-result', '-Werror=unused-variable', '-Werror=narrowing', '-Werror=attributes', '-Werror=overflow', '-Werror=parentheses', '-Werror=format-extra-args', '-Werror=ignored-qualifiers', '-Werror=undef', '-DARDUPILOT_BUILD', '-Wno-format-contains-nul', '-MMD']
CFLAGS_MACBUNDLE = ['-fPIC']
CFLAGS_cshlib = ['-fPIC']
COMPILER_CC = 'gcc'
COMPILER_CXX = 'g++'
CONFIGURE_FILES = ['/home/phlastch/ARDU/ardupilot/libraries/AP_Scripting/wscript', '/home/phlastch/ARDU/ardupilot/libraries/AP_GPS/wscript', '/usr/lib/python3.9/importlib/_bootstrap.py', '/usr/lib/python3.9/importlib/_bootstrap_external.py', '/usr/lib/python3.9/codecs.py', '/usr/lib/python3.9/encodings/aliases.py', '/usr/lib/python3.9/encodings/__init__.py', '/usr/lib/python3.9/encodings/utf_8.py', '/usr/lib/python3.9/encodings/latin_1.py', '/usr/lib/python3.9/abc.py', '/usr/lib/python3.9/io.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waf-light', '/usr/lib/python3.9/stat.py', '/usr/lib/python3.9/_collections_abc.py', '/usr/lib/python3.9/genericpath.py', '/usr/lib/python3.9/posixpath.py', '/usr/lib/python3.9/os.py', '/usr/lib/python3.9/_sitebuiltins.py', '/usr/lib/python3.9/_bootlocale.py', '/usr/lib/python3.9/types.py', '/usr/lib/python3.9/warnings.py', '/usr/lib/python3.9/importlib/__init__.py', '/usr/lib/python3.9/importlib/machinery.py', '/usr/lib/python3.9/heapq.py', '/usr/lib/python3.9/keyword.py', '/usr/lib/python3.9/operator.py', '/usr/lib/python3.9/reprlib.py', '/usr/lib/python3.9/collections/__init__.py', '/usr/lib/python3.9/collections/abc.py', '/usr/lib/python3.9/functools.py', '/usr/lib/python3.9/contextlib.py', '/usr/lib/python3.9/enum.py', '/usr/lib/python3.9/sre_constants.py', '/usr/lib/python3.9/sre_parse.py', '/usr/lib/python3.9/sre_compile.py', '/usr/lib/python3.9/copyreg.py', '/usr/lib/python3.9/re.py', '/usr/lib/python3.9/typing.py', '/usr/lib/python3.9/importlib/abc.py', '/usr/lib/python3.9/importlib/util.py', '/usr/lib/python3/dist-packages/mpl_toolkits/__init__.py', '/usr/lib/python3.9/sitecustomize.py', '/usr/lib/python3.9/site.py', '/usr/lib/python3.9/ast.py', '/usr/lib/python3.9/lib-dynload/_opcode.cpython-39-x86_64-linux-gnu.so', '/usr/lib/python3.9/opcode.py', '/usr/lib/python3.9/dis.py', '/usr/lib/python3.9/token.py', '/usr/lib/python3.9/tokenize.py', '/usr/lib/python3.9/linecache.py', '/usr/lib/python3.9/inspect.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/__init__.py', '/usr/lib/python3.9/__future__.py', '/usr/lib/python3.9/shlex.py', '/usr/lib/python3.9/fnmatch.py', '/usr/lib/python3.9/_compression.py', '/usr/lib/python3.9/_weakrefset.py', '/usr/lib/python3.9/threading.py', '/usr/lib/python3.9/lib-dynload/_bz2.cpython-39-x86_64-linux-gnu.so', '/usr/lib/python3.9/bz2.py', '/usr/lib/python3.9/lib-dynload/_lzma.cpython-39-x86_64-linux-gnu.so', '/usr/lib/python3.9/lzma.py', '/usr/lib/python3.9/shutil.py', '/usr/lib/python3.9/traceback.py', '/usr/lib/python3.9/datetime.py', '/usr/lib/python3.9/signal.py', '/usr/lib/python3.9/selectors.py', '/usr/lib/python3.9/subprocess.py', '/usr/lib/python3.9/platform.py', '/usr/lib/python3.9/struct.py', '/usr/lib/python3.9/base64.py', '/usr/lib/python3.9/_compat_pickle.py', '/usr/lib/python3.9/pickle.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Errors.py', '/usr/lib/python3.9/lib-dynload/_hashlib.cpython-39-x86_64-linux-gnu.so', '/usr/lib/python3.9/hashlib.py', '/usr/lib/python3.9/encodings/hex_codec.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Utils.py', '/usr/lib/python3.9/weakref.py', '/usr/lib/python3.9/copy.py', '/usr/lib/python3.9/lib-dynload/_ctypes.cpython-39-x86_64-linux-gnu.so', '/usr/lib/python3.9/ctypes/_endian.py', '/usr/lib/python3.9/ctypes/__init__.py', '/usr/lib/python3.9/lib-dynload/termios.cpython-39-x86_64-linux-gnu.so', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/ansiterm.py', '/usr/lib/python3.9/string.py', '/usr/lib/python3.9/logging/__init__.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Logs.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/ConfigSet.py', '/usr/lib/python3.9/bisect.py', '/usr/lib/python3.9/random.py', '/usr/lib/python3.9/tempfile.py', '/usr/lib/python3.9/textwrap.py', '/usr/lib/python3.9/gettext.py', '/usr/lib/python3.9/locale.py', '/usr/lib/python3.9/optparse.py', '/usr/lib/python3.9/imp.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Node.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Context.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Options.py', '/usr/lib/python3.9/lib-dynload/_queue.cpython-39-x86_64-linux-gnu.so', '/usr/lib/python3.9/queue.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Task.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Runner.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/TaskGen.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Build.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Configure.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Scripting.py', '/usr/lib/python3.9/lib-dynload/_json.cpython-39-x86_64-linux-gnu.so', '/usr/lib/python3.9/json/scanner.py', '/usr/lib/python3.9/json/decoder.py', '/usr/lib/python3.9/json/encoder.py', '/usr/lib/python3.9/json/__init__.py', 'Tools/ardupilotwaf/ap_persistent.py', 'Tools/ardupilotwaf/ardupilotwaf.py', 'Tools/ardupilotwaf/boards.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Tools/__init__.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Tools/c_aliases.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Tools/c_preproc.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Tools/c_config.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Tools/c_osx.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Tools/c_tests.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Tools/ccroot.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Tools/compiler_cxx.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Tools/ar.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Tools/gxx.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Tools/clangxx.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Tools/icpc.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Tools/compiler_c.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/extras/__init__.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Tools/xlc.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/extras/c_bgxlc.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Tools/gcc.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/extras/c_emscripten.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/extras/c_nec.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Tools/clang.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Tools/icc.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Tools/waf_unit_test.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Tools/python.py', 'Tools/ardupilotwaf/build_summary.py', 'Tools/ardupilotwaf/ap_library.py', 'Tools/ardupilotwaf/toolchain.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Tools/cxx.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/Tools/c.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/extras/gccdeps.py', 'Tools/ardupilotwaf/cxx_checks.py', '/usr/lib/python3.9/pipes.py', '/home/phlastch/ARDU/ardupilot/modules/waf/waflib/extras/clang_compilation_database.py', '/usr/lib/python3.9/xml/__init__.py', '/usr/lib/python3.9/xml/etree/__init__.py', '/usr/lib/python3.9/xml/etree/ElementPath.py', '/usr/lib/python3.9/xml/etree/ElementTree.py', 'Tools/ardupilotwaf/mavgen.py', 'Tools/ardupilotwaf/uavcangen.py', 'Tools/ardupilotwaf/git_submodule.py', 'Tools/ardupilotwaf/gtest.py', 'Tools/ardupilotwaf/static_linking.py', '/home/phlastch/ARDU/ardupilot/wscript']
CONFIGURE_HASH = b'\x0e\xf6\x14w\x8e\x84\xcf\x8c\xd3*\xc0\xebt\xd4S\xa8'
COVERAGE = False
CPPPATH_ST = '-I%s'
CXX = ['/usr/lib/ccache/arm-linux-gnueabihf-g++']
CXXFLAGS = ['-Werror=implicit-fallthrough', '-std=gnu++11', '-fdata-sections', '-ffunction-sections', '-fno-exceptions', '-fsigned-char', '-Wall', '-Wextra', '-Wpointer-arith', '-Wno-unused-parameter', '-Wno-missing-field-initializers', '-Wno-reorder', '-Wno-redundant-decls', '-Wno-unknown-pragmas', '-Wno-expansion-to-defined', '-Werror=cast-align', '-Werror=attributes', '-Werror=format-security', '-Werror=format-extra-args', '-Werror=enum-compare', '-Werror=format', '-Werror=array-bounds', '-Werror=uninitialized', '-Werror=init-self', '-Werror=narrowing', '-Werror=return-type', '-Werror=switch', '-Werror=sign-compare', '-Werror=type-limits', '-Werror=undef', '-Werror=unused-result', '-Werror=shadow', '-Werror=unused-value', '-Werror=unused-variable', '-Werror=delete-non-virtual-dtor', '-Wfatal-errors', '-Wno-trigraphs', '-Werror=parentheses', '-DARDUPILOT_BUILD', '-Wuninitialized', '-Warray-bounds', '-Wno-format-contains-nul', '-Werror=unused-but-set-variable', '-Werror=suggest-override', '-Werror=implicit-fallthrough', '-Werror=maybe-uninitialized', '-Werror=duplicated-cond', '-Werror=sizeof-pointer-div', '-O3', '-MMD', '-include', 'ap_config.h']
CXXFLAGS_MACBUNDLE = ['-fPIC']
CXXFLAGS_cxxshlib = ['-fPIC']
CXXLNK_SRC_F = []
CXXLNK_TGT_F = ['-o']
CXX_NAME = 'gcc'
CXX_SRC_F = []
CXX_TGT_F = ['-c', '-o']
DEBUG = False
DEFINES = ['SKETCHBOOK="/home/phlastch/ARDU/ardupilot"', 'AP_SCRIPTING_CHECKS=1', 'AP_SCRIPTING_ENABLED=1', 'AP_SIM_ENABLED=0', 'CONFIG_HAL_BOARD=HAL_BOARD_LINUX', 'CONFIG_HAL_BOARD_SUBTYPE=HAL_BOARD_SUBTYPE_LINUX_BLUE', 'ENABLE_HEAP=1', 'ENABLE_ONVIF=0', 'LUA_32BITS=1', 'UAVCAN_CPP_VERSION=UAVCAN_CPP03', 'UAVCAN_NO_ASSERTIONS=1', 'UAVCAN_NULLPTR=nullptr']
DEFINES_ST = '-D%s'
DEFINE_COMMENTS = {'WAF_BUILD': '', '__STDC_FORMAT_MACROS': '', 'HAVE_LIBDL': '', 'UAVCAN_EXCEPTIONS': '', 'HAVE_CMATH_ISFINITE': '', 'HAVE_CMATH_ISINF': '', 'HAVE_CMATH_ISNAN': '', 'NEED_CMATH_ISFINITE_STD_NAMESPACE': '', 'NEED_CMATH_ISINF_STD_NAMESPACE': '', 'NEED_CMATH_ISNAN_STD_NAMESPACE': '', 'HAVE_ENDIAN_H': '', 'HAVE_BYTESWAP_H': '', 'HAVE_MEMRCHR': '', 'PYTHONDIR': '', 'PYTHONARCHDIR': '', '_GNU_SOURCE': ''}
DEST_BINFMT = 'elf'
DEST_CPU = 'thumb'
DEST_OS = 'linux'
DOUBLE_PRECISION_SOURCES = {'AP_GPS': ['AP_GPS_SBF.cpp']}
DSDL_COMPILER = '/home/phlastch/ARDU/ardupilot/modules/uavcan/libuavcan/dsdl_compiler/libuavcan_dsdlc'
DSDL_COMPILER_DIR = '/home/phlastch/ARDU/ardupilot/modules/uavcan/libuavcan/dsdl_compiler'
ENABLE_ASSERTS = False
ENABLE_GCCDEPS = ['c', 'cxx']
ENABLE_HEADER_CHECKS = False
ENABLE_MALLOC_GUARD = False
ENABLE_ONVIF = False
ENABLE_STATS = False
GIT = ['/usr/bin/git']
GIT_SUBMODULES = ['gtest', 'mavlink']
HAS_GTEST = True
HAVE_BYTESWAP_H = 1
HAVE_CMATH_ISFINITE = 1
HAVE_CMATH_ISINF = 1
HAVE_CMATH_ISNAN = 1
HAVE_DL = 1
HAVE_ENDIAN_H = 1
HAVE_MEMRCHR = 1
HWDEF_EXTRA = None
INCLUDES = ['/home/phlastch/ARDU/ardupilot/libraries/', '/home/phlastch/ARDU/ardupilot/libraries/AP_Common/missing', '/home/phlastch/ARDU/ardupilot/modules/uavcan/libuavcan/include']
LIB = ['m', 'dl']
LIBDIR = '/usr/lib'
LIBPATH_ST = '-L%s'
LIB_DL = ['dl']
LIB_ST = '-l%s'
LINKFLAGS = ['-fno-exceptions', '-Wl,--gc-sections', '-pthread']
LINKFLAGS_MACBUNDLE = ['-bundle', '-undefined', 'dynamic_lookup']
LINKFLAGS_cshlib = ['-shared']
LINKFLAGS_cstlib = ['-Wl,-Bstatic']
LINKFLAGS_cxxshlib = ['-shared']
LINKFLAGS_cxxstlib = ['-Wl,-Bstatic']
LINK_CC = ['/usr/lib/ccache/arm-linux-gnueabihf-gcc']
LINK_CXX = ['/usr/lib/ccache/arm-linux-gnueabihf-g++']
MAVLINK_DIR = '/home/phlastch/ARDU/ardupilot/modules/mavlink'
NEED_CMATH_ISFINITE_STD_NAMESPACE = 1
NEED_CMATH_ISINF_STD_NAMESPACE = 1
NEED_CMATH_ISNAN_STD_NAMESPACE = 1
OPTIONS = {'colors': 'auto', 'jobs': 8, 'keep': 0, 'verbose': 0, 'zones': '', 'profile': 0, 'pdb': 0, 'whelp': 0, 'out': '', 'top': '', 'no_lock_in_run': '', 'no_lock_in_out': '', 'no_lock_in_top': '', 'prefix': '/usr', 'bindir': None, 'libdir': None, 'progress_bar': 0, 'targets': '', 'files': '', 'destdir': '', 'force': False, 'distcheck_args': None, 'check_cxx_compiler': None, 'check_c_compiler': None, 'no_tests': False, 'all_tests': False, 'clear_failed_tests': False, 'testcmd': False, 'dump_test_scripts': False, 'pyc': 1, 'pyo': 1, 'nopycache': None, 'python': None, 'pythondir': None, 'pythonarchdir': None, 'program_group': [], 'upload': None, 'upload_port': None, 'check_verbose': None, 'clean_all_sigs': None, 'asan': None, 'summary_all': None, 'board': 'blue', 'debug': False, 'disable_watchdog': False, 'coverage': False, 'Werror': False, 'toolchain': None, 'disable_gccdeps': False, 'enable_asserts': False, 'save_temps': False, 'enable_malloc_guard': False, 'enable_stats': False, 'bootloader': False, 'autoconfig': True, 'submodule_update': True, 'enable_header_checks': False, 'default_parameters': None, 'enable_math_check_indexes': False, 'disable_scripting': False, 'no_gcs': False, 'scripting_checks': True, 'enable_onvif': False, 'scripting_docs': False, 'apstatedir': '', 'rsync_dest': 'debian@192.168.1.11:/home/debian/', 'enable_benchmarks': False, 'enable_lttng': False, 'disable_libiio': False, 'disable_tests': False, 'enable_sfml': False, 'enable_sfml_joystick': False, 'enable_sfml_audio': False, 'osd': False, 'osd_fonts': False, 'sitl_osd': False, 'sitl_rgbled': False, 'sitl_32bit': False, 'build_dates': False, 'sitl_flash_storage': False, 'disable_ekf2': False, 'disable_ekf3': False, 'ekf_double': False, 'ekf_single': False, 'static': False, 'postype_single': False, 'extra_hwdef': None, 'assert_cc_version': None}
PREFIX = '/usr'
PYC = 1
PYFLAGS = ''
PYFLAGS_OPT = '-O'
PYO = 1
PYTAG = 'cpython-39'
PYTHON = ['/usr/bin/python3']
PYTHONARCHDIR = '/usr/lib/python3/dist-packages'
PYTHONDIR = '/usr/lib/python3/dist-packages'
PYTHON_VERSION = '3.9'
ROMFS_FILES = []
RPATH_ST = '-Wl,-rpath,%s'
RSYNC = ['/usr/bin/rsync']
RSYNC_DEST = 'debian@192.168.1.11:/home/debian/'
SAVE_TEMPS = False
SHLIB_MARKER = '-Wl,-Bdynamic'
SITL32BIT = False
SIZE = ['/usr/bin/arm-linux-gnueabihf-size']
SONAME_ST = '-Wl,-h,%s'
SRCROOT = '/home/phlastch/ARDU/ardupilot'
STLIBPATH_ST = '-L%s'
STLIB_MARKER = '-Wl,-Bstatic'
STLIB_ST = '-l%s'
SUBMODULE_UPDATE = True
TOOLCHAIN = 'arm-linux-gnueabihf'
cfg_files = ['/home/phlastch/ARDU/ardupilot/build/blue/ap_config.h']
cprogram_PATTERN = '%s'
cshlib_PATTERN = 'lib%s.so'
cstlib_PATTERN = 'lib%s.a'
cxxprogram_PATTERN = '%s'
cxxshlib_PATTERN = 'lib%s.so'
cxxstlib_PATTERN = 'lib%s.a'
define_key = []
macbundle_PATTERN = '%s.bundle'

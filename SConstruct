# -*- python -*-
#
# Setup our environment
#
# Do not change these
import glob, os.path, re, sys
import lsst.SConsUtils as scons

# List the direct *and indirect* pacakage dependencies of your package here.
# Indirect dependencies are needed to get header files.
dependencies = ["python"]

env = scons.makeEnv(
        # The name of your package goes here.
        "cpptests",
        # This is used to try to get some version information.
        r"$HeadURL$",
        [
        # For each dependency above, include one or more lines listing
        # at least one required header file and, if needed, a shared library.
        # For maximum safety, all header files and all shared libraries used
        # could be listed, but typically ensuring that one is available will
        # be sufficient to make sure the rest of the package is available.

        # If just a header is required, list it.
        #[],

        # If a header and library are required, list them both.
        # The library name should not include "lib" or ".so" or ".dylib".
        # It should always have ":C++" suffixed.
        ["python", "Python.h"]
        ])
# Describe what your package contains here.
env.Help("""
LSST C++test Rules Testers
""")

###############################################################################
# Modified for special purpose use to only build Parasoft *.bdf file

pkg = env["eups_product"]
env.libs[pkg] += env.getlibs(" ".join(dependencies))

#
# Build/install things
#
for d in Split("src"):
    try:
        SConscript(os.path.join(d, "SConscript"))
    except Exception, e:
        print >> sys.stderr, "%s: %s" % (os.path.join(d, "SConscript"), e)

env['IgnoreFiles'] = r"(~$|\.pyc$|^\.svn$|\.o$)"

#Alias("install", [env.Install(env['prefix'], "python"),
#                  env.Install(env['prefix'], "include"),
#                  env.Install(env['prefix'], "lib"),
#                  env.InstallAs(os.path.join(env['prefix'], "doc", "doxygen"),
#                                os.path.join("doc", "htmlDir")),
#                  env.InstallEups(env['prefix'] + "/ups")])

scons.CleanTree(r"*~ core *.so *.os *.o")

##
## Build TAGS files
##
#files = scons.filesToTag()
#if files:
#    env.Command("TAGS", files, "etags -o $TARGET $SOURCES")

env.Declare()

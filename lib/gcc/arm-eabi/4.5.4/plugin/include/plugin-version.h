#include "configargs.h"

static char basever[] = "4.5.4";
static char datestamp[] = "20110906";
static char devphase[] = "prerelease";
static char revision[] = "[gcc-linaro/4.5 revision 99549]";

/* FIXME plugins: We should make the version information more precise.
   One way to do is to add a checksum. */

static struct plugin_gcc_version gcc_version = {basever, datestamp,
						devphase, revision,
						configuration_arguments};

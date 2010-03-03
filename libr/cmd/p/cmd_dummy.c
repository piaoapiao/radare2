/* radare - GPL3 - Copyright 2010 pancake<@nopcode.org> */

#include <r_types.h>
#include <r_lib.h>
#include <r_cmd.h>

static int call(void *user, const char *cmd) {
	if (strcmp (cmd, "**dummy**"))
		return R_FALSE;
	eprintf ("Dummy call executed\n");
	return R_TRUE;
}

struct r_cmd_handle_t r_cmd_plugin_dummy = {
	.name = "dummy",
	.call = call,
};

#ifndef CORELIB
struct r_lib_struct_t radare_plugin = {
	.type = R_LIB_TYPE_CMD,
	.data = &r_cmd_plugin_dummy
};
#endif
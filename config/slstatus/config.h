/* See LICENSE file for copyright and license details. */

const unsigned int interval = 1000;
static const char unknown_str[] = "n/a";
#define MAXLEN 2048

static const struct arg args[] = {
	{ cpu_perc,   "CPU %s%% | ",   NULL },
	{ ram_perc,   "RAM %s%% | ",   NULL },
	{ disk_perc,  "SSD %s%% | ",   "/" },
	{ vol_perc,   "Vol %s%% | ",   "Master" },
	{ datetime,   "%s",            "%F %R" },
};

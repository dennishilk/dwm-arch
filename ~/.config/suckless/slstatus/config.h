/* See LICENSE file for copyright and license details. */

/* interval between updates (in ms) */
static const unsigned int interval = 1000;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "n/a";

/* maximum output string length */
#define MAXLEN 2048

/*
 * function            description                     argument (example)
 *
 * cpu_perc            CPU usage in percent            NULL
 * ram_perc            RAM usage in percent            NULL
 * vol_perc            ALSA/WirePlumber volume         mixer file (/dev/mixer)
 * datetime            date and time                   format string (%F %T)
 */

static const struct arg args[] = {
	/* function     format             argument */
	{ cpu_perc,     " %s%% | ",        NULL },
	{ ram_perc,     " %s%% | ",        NULL },
	{ vol_perc,     " %s%% | ",        "default" },
	{ datetime,     " %s ",            "%Y-%m-%d %H:%M:%S" },
};

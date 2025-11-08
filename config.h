/* appearance */
static const unsigned int borderpx  = 2;
static const unsigned int snap      = 32;
static const int showbar            = 1;
static const int topbar             = 1;
static const char *fonts[]          = { "JetBrainsMono Nerd Font:size=11" };

/* Gruvbox Dark scheme */
static const char col_gray1[]       = "#282828";
static const char col_gray2[]       = "#3c3836";
static const char col_gray3[]       = "#ebdbb2";
static const char col_gray4[]       = "#fbf1c7";
static const char col_cyan[]        = "#458588";

static const char *colors[][3]      = {
	[SchemeNorm] = { col_gray3, col_gray1, col_gray2 },
	[SchemeSel]  = { col_gray4, col_cyan,  col_cyan  },
};

/* tagging */
static const char *tags[] = { "", "", "", "", "", "", "", "", "" };

/* layout(s) */
static const float mfact     = 0.50;
static const int nmaster     = 1;
static const int resizehints = 0;

static const Layout layouts[] = {
	{ "[]=",      tile },    /* first entry is default */
	{ "><>",      NULL },    /* floating */
	{ "[M]",      monocle }, /* monocle */
};

/* key definitions */
#define MODKEY Mod4Mask

/* commands */
static const char *termcmd[]  = { "alacritty", NULL };
static const char *roficmd[]  = { "rofi", "-show", "drun", NULL };
static const char *chromecmd[]  = { "google-chrome-stable", NULL };

static Key keys[] = {
	{ MODKEY,                       XK_Return, spawn,          {.v = termcmd } },
	{ MODKEY,                       XK_d,      spawn,          {.v = roficmd } },
	{ MODKEY,                       XK_b,      spawn,          {.v = chromecmd } },
	{ MODKEY|ShiftMask,             XK_q,      quit,           {0} },
};

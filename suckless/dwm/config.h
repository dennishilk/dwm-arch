/* See LICENSE file for copyright and license details. */

/* ────────────────────────── Appearance ────────────────────────── */
static const unsigned int borderpx  = 2;
static const unsigned int snap      = 32;
static const unsigned int gappih    = 10;
static const unsigned int gappiv    = 10;
static const unsigned int gappoh    = 10;
static const unsigned int gappov    = 10;
static const int smartgaps          = 0;
static const int showbar            = 1;
static const int topbar             = 1;
static const char *fonts[]          = { "FiraCode Nerd Font:size=11" };
static const char dmenufont[]       = "FiraCode Nerd Font:size=11";
static const char col_gray1[]       = "#222222";
static const char col_gray2[]       = "#444444";
static const char col_gray3[]       = "#bbbbbb";
static const char col_gray4[]       = "#eeeeee";
static const char col_cyan[]        = "#005577";
static const char *colors[][3]      = {
    [SchemeNorm] = { col_gray3, col_gray1, col_gray2 },
    [SchemeSel]  = { col_gray4, col_cyan,  col_cyan  },
};

/* ────────────────────────── Autostart ────────────────────────── */
static const char *const autostart[] = {
    "sh", "-c", "~/.config/suckless/scripts/autostart.sh", NULL,
    NULL /* terminate */
};

/* ────────────────────────── Tags ────────────────────────── */
static const char *tags[] = { "", "", "", "", "" };

/* ────────────────────────── Rules ────────────────────────── */
static const Rule rules[] = {
    /* class           instance    title       tags mask     isfloating  monitor */
    { "Gimp",          NULL,       NULL,       0,            1,          -1 },
    { "Firefox",       NULL,       NULL,       1 << 1,       0,          -1 },
    { "Google-chrome", NULL,       NULL,       1 << 1,       0,          -1 },
    { "Thunar",        NULL,       NULL,       1 << 4,       0,          -1 },
};

/* ────────────────────────── Layouts ────────────────────────── */
static const float mfact     = 0.55;
static const int nmaster     = 1;
static const int resizehints = 0;

#include "vanitygaps.c"

static const Layout layouts[] = {
    { "[]=", tile },
    { "><>", NULL },
    { "[M]", monocle },
};

/* ────────────────────────── Systray Settings ────────────────────────── */
static const int showsystray = 1;
static const unsigned int systrayspacing = 2;
static const int systrayonleft = 0;
static const int systraypinning = 0;
static const int systraypinningfailfirst = 1;

/* ────────────────────────── Misc Variables ────────────────────────── */
static const int lockfullscreen = 1;
static const int focusedontoptiled = 1;
static const int refreshrate = 60;
#define WFDEFAULT   0
#define WFACTIVE    1
#define WFINACTIVE  2

/* ────────────────────────── Keybindings ────────────────────────── */
#define MODKEY Mod4Mask
#define TAGKEYS(KEY,TAG) \
    { MODKEY, KEY, view, {.ui = 1 << TAG} }, \
    { MODKEY|ControlMask, KEY, toggleview, {.ui = 1 << TAG} }, \
    { MODKEY|ShiftMask, KEY, tag, {.ui = 1 << TAG} }, \
    { MODKEY|ControlMask|ShiftMask, KEY, toggletag, {.ui = 1 << TAG} },

static const char *termcmd[]   = { "alacritty", NULL };
static const char *roficmd[]   = { "rofi", "-show", "drun", NULL };
static const char *chromecmd[] = { "google-chrome-stable", NULL };

static Key keys[] = {
    { MODKEY, XK_Return, spawn, {.v = termcmd } },
    { MODKEY, XK_d,      spawn, {.v = roficmd } },
    { MODKEY, XK_b,      spawn, {.v = chromecmd } },
    { MODKEY, XK_j,      focusstack, {.i = +1 } },
    { MODKEY, XK_k,      focusstack, {.i = -1 } },
    { MODKEY, XK_h,      setmfact, {.f = -0.05} },
    { MODKEY, XK_l,      setmfact, {.f = +0.05} },
    { MODKEY|ShiftMask,  XK_c,      killclient, {0} },
    { MODKEY, XK_q,      quit, {0} },
    TAGKEYS(XK_1, 0)
    TAGKEYS(XK_2, 1)
    TAGKEYS(XK_3, 2)
    TAGKEYS(XK_4, 3)
    TAGKEYS(XK_5, 4)
};

/* ────────────────────────── Mouse Bindings ────────────────────────── */
static Button buttons[] = {
    { ClkLtSymbol,  0, Button1, setlayout,      {0} },
    { ClkStatusText,0, Button2, spawn,          {.v = termcmd } },
    { ClkClientWin, MODKEY, Button1, movemouse, {0} },
    { ClkClientWin, MODKEY, Button2, togglefloating, {0} },
    { ClkClientWin, MODKEY, Button3, resizemouse,    {0} },
    { ClkTagBar,    0, Button1, view,           {0} },
    { ClkTagBar,    MODKEY, Button1, tag,       {0} },
};

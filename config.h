/* See LICENSE file for copyright and license details. */

#include "colorschemes.h"

/* appearance */
static const unsigned int borderpx  = 3;        /* border pixel of windows */
static const unsigned int gappx     = 7;        /* gap pixel between windows */
static const unsigned int snap      = 32;       /* snap pixel */
static const int showbar            = 1;        /* 0 means no bar */
static const int topbar             = 1;        /* 0 means bottom bar */
static const int vertpad            = 0;       /* vertical padding of bar */
static const int sidepad            = 0;       /* horizontal padding of bar */
static const int horizpadbar        = 5;        /* horizontal padding for statusbar */
static const int vertpadbar         = 10;        /* vertical padding for statusbar */
static const char *fonts[]          = {
    "Hack Nerd Font:pixelsize=14:antialias=true:autohint=true",
    "Symbola:pixelsize=17:antialias=true:autohint=true", // Unicode
    /* "JoyPixels:pixelsize=14:antialias=true:autohint=true" */
};

#define ICONSIZE 16   /* icon size */
#define ICONSPACING 5 /* space between icon and title */

/* static const char dmenufont[]       = "Hack Nerd Font:pixelsize=14:style=Bold"; */
static const char dmenufont[]       = "Hack Nerd Font:pixelsize=14";
static const char *colors[][3]      = {
	/*               fg         bg         border   */
	[SchemeNorm] = { CurrentColorScheme.Normal.Foreground, CurrentColorScheme.Normal.Background, CurrentColorScheme.Normal.Border },
	[SchemeSel]  = { CurrentColorScheme.Select.Foreground, CurrentColorScheme.Select.Background, CurrentColorScheme.Select.Border },
	[SchemeHid]  = { CurrentColorScheme.Normal.Foreground, CurrentColorScheme.Normal.Background, CurrentColorScheme.Normal.Border },
	[SchemeTagsNorm] = { CurrentColorScheme.TagNormal.Foreground, CurrentColorScheme.TagNormal.Background, CurrentColorScheme.TagNormal.Border },
	[SchemeTagsSel]  = { CurrentColorScheme.TagSelect.Foreground, CurrentColorScheme.TagSelect.Background, CurrentColorScheme.TagSelect.Border },
	[SchemeInfoNorm] = { CurrentColorScheme.Normal.Foreground, CurrentColorScheme.Normal.Background, CurrentColorScheme.Normal.Border },
	[SchemeStatus] = { CurrentColorScheme.StatusNormal.Foreground, CurrentColorScheme.StatusNormal.Background, CurrentColorScheme.StatusNormal.Border },
	[SchemeInfoSel]  = { CurrentColorScheme.Select.Foreground, CurrentColorScheme.Select.Background, CurrentColorScheme.Select.Border },
}; /* stuff */

/* tagging */
static const char *tags[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };

static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 */
	/* class      instance    title       tags mask     isfloating   monitor    scratch key */
	{ "Gimp",     NULL,       NULL,       0,            0,           -1,        0  },
	{ "firefox",  NULL,       NULL,       0,            0,           -1,        0  },
	{ "Galculator", NULL,     NULL,       0,            1,           -1,        0  },
    { "firefox", "Toolkit", "Picture-in-Picture", 0,    1,           -1,        0  },
    { NULL, NULL, "Picture in picture",   0,            1,           -1,        0  },
    { "gmic_qt", "gmic_qt", NULL,         0,            1,          -1,         0  },
	{ NULL,       NULL,   "scratchpad",   0,            1,           -1,       's' },
};

/* layout(s) */
static const float mfact     = 0.50; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 0;    /* 1 means respect size hints in tiled resizals */
static const int lockfullscreen = 1; /* 1 will force focus on the fullscreen window */

static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "[]=",      tile },    /* first entry is default */
	{ "><>",      NULL },    /* no layout function means floating behavior */
	{ "[M]",      monocle },
};

/* key definitions */
#define MODKEY Mod4Mask
#define ALTKEY Mod1Mask
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
static char dmenuprompt[] = "dmenu run:"; /* prompt to be displayed before input area */
static const char *dmenucmd[] = { "dmenu_run", "-fn", dmenufont, "-nb", CurrentColorScheme.Normal.Background, "-nf", CurrentColorScheme.Normal.Foreground, "-sb", CurrentColorScheme.Select.Background, "-sf", CurrentColorScheme.Select.Foreground, "-p", dmenuprompt ,NULL };

// static const char *termcmd[]  = { "st", NULL };
static const char *termcmd[]  = { "tabbed", "-c", "-r", "2", "st", "-w", "\'\'", "-t", "Simple Terminal", NULL };

/*First arg only serves to match against key in rules*/
static const char *scratchpadcmd[] = {"s", "st", "-t", "scratchpad", "-G", "800xX600", NULL};

static Key keys[] = {
	/* modifier                     key        function        argument */
	{ ALTKEY,                       XK_p,      spawn,          {.v = dmenucmd } },
	{ MODKEY,                       XK_Return, spawn,          {.v = termcmd } },
	{ MODKEY,                       XK_grave,  togglescratch,  {.v = scratchpadcmd } },
	{ MODKEY,                       XK_b,      togglebar,      {0} },
	{ MODKEY,                       XK_j,      focusstackvis,  {.i = +1 } },
	{ MODKEY,                       XK_k,      focusstackvis,  {.i = -1 } },
	/* { MODKEY|ShiftMask,             XK_j,      focusstackhid,  {.i = +1 } }, */
	/* { MODKEY|ShiftMask,             XK_k,      focusstackhid,  {.i = -1 } }, */
	{ MODKEY,                       XK_i,      incnmaster,     {.i = +1 } },
	{ ALTKEY|ShiftMask,             XK_Tab,    inplacerotate,  {.i = +2} },
	{ ALTKEY,                       XK_Tab,    inplacerotate,  {.i = -2} },
	{ MODKEY,                       XK_d,      incnmaster,     {.i = -1 } },
	{ MODKEY,                       XK_h,      setmfact,       {.f = -0.05} },
	{ MODKEY,                       XK_l,      setmfact,       {.f = +0.05} },
	/* { MODKEY|ShiftMask,             XK_Return, zoom,           {0} }, */
	{ MODKEY,                       XK_Tab,    view,           {0} },
	{ ControlMask,                  XK_q,      killclient,     {0} },
	{ MODKEY,                       XK_t,      setlayout,      {.v = &layouts[0]} },
	{ MODKEY,                       XK_f,      setlayout,      {.v = &layouts[1]} },
	{ MODKEY,                       XK_m,      setlayout,      {.v = &layouts[2]} },
	{ MODKEY,                       XK_space,  setlayout,      {0} },
	{ MODKEY|ShiftMask,             XK_space,  togglefloating, {0} },
	{ MODKEY,                       XK_0,      view,           {.ui = ~0 } },
	{ MODKEY|ShiftMask,             XK_0,      tag,            {.ui = ~0 } },
	{ MODKEY,                       XK_comma,  focusmon,       {.i = -1 } },
	{ MODKEY,                       XK_period, focusmon,       {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_comma,  tagmon,         {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_period, tagmon,         {.i = +1 } },
	{ MODKEY,                       XK_minus,  setgaps,        {.i = -1 } },
	{ MODKEY,                       XK_equal,  setgaps,        {.i = +1 } },
	{ MODKEY,                       XK_Left,   rotatetags,     {.i = -1 } },
	{ MODKEY,                       XK_Right,  rotatetags,     {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_h,   rotatetags,     {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_l,  rotatetags,     {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_equal,  setgaps,        {.i = 0  } },
//	{ MODKEY,                       XK_s,      show,           {0} },
//	{ MODKEY,                       XK_h,      hide,           {0} },
    // Run Programs
    /* { ALTKEY,                       XK_w,      spawn,          SHCMD("firefox") }, */
    /* { MODKEY,                       XK_w,      spawn,          SHCMD("brave") }, */
    { ALTKEY,                       XK_w,      spawn,          SHCMD("brave") },
    { ALTKEY|ControlMask,           XK_q,      spawn,          SHCMD("slock") },
    { 0,                            XK_Print,  spawn,          SHCMD("flameshot gui") },
    { MODKEY|ShiftMask,             XK_n,      spawn,          SHCMD("pcmanfm") },

    // Run Scripts
    { ALTKEY|ControlMask,           XK_t,      spawn,          SHCMD(". ~/.config/scripts/toggle-transparency.sh") },
    { ControlMask|ShiftMask,        XK_b,      spawn,          SHCMD(". ~/.config/scripts/bluetooth_headphones.sh") },
	{ MODKEY|ShiftMask,             XK_q,      spawn,          SHCMD("~/.config/scripts/dmenu/dmenu-kill-process.sh --gruvbox") },
	{ ALTKEY|ControlMask,           XK_space,  spawn,          SHCMD("~/.config/scripts/dmenu/dmenu-emoji.sh --gruvbox") },

    // Tags
	TAGKEYS(                        XK_1,                      0)
	TAGKEYS(                        XK_2,                      1)
	TAGKEYS(                        XK_3,                      2)
	TAGKEYS(                        XK_4,                      3)
	TAGKEYS(                        XK_5,                      4)
	TAGKEYS(                        XK_6,                      5)
	TAGKEYS(                        XK_7,                      6)
	TAGKEYS(                        XK_8,                      7)
	TAGKEYS(                        XK_9,                      8)
	{ ALTKEY,                       XK_F4,      quit,          {0} },
    { MODKEY|ControlMask,           XK_r,       quit,          {1} },

    // Sound
    { MODKEY,                       XK_F10,     spawn,          SHCMD("pactl set-sink-volume 0 0")},
    { MODKEY,                       XK_F11,     spawn,          SHCMD("pactl set-sink-volume 0 -5%")},
    { MODKEY,                       XK_F12,     spawn,          SHCMD("pactl set-sink-volume 0 +5%")},

    // Screen brightness
    { MODKEY,                       XK_F5,      spawn,          SHCMD("brightnessctl set 10%-")},
    { MODKEY,                       XK_F6,      spawn,          SHCMD("brightnessctl set 10%+")},

    // Shutdown PC
    { ALTKEY,                      XK_Escape,     spawn,          SHCMD("pkill -9 dwm && shutdown now")},
    { ALTKEY|ControlMask,          XK_Escape,     spawn,          SHCMD("pkill -9 dwm && reboot")}

};

/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static Button buttons[] = {
	/* click                event mask      button          function        argument */
	{ ClkLtSymbol,          0,              Button1,        setlayout,      {0} },
	{ ClkLtSymbol,          0,              Button3,        setlayout,      {.v = &layouts[2]} },
	{ ClkWinTitle,          0,              Button1,        togglewin,      {0} },
	{ ClkWinTitle,          0,              Button2,        zoom,           {0} },
	{ ClkStatusText,        0,              Button2,        spawn,          {.v = termcmd } },
	{ ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} },
	{ ClkClientWin,         MODKEY,         Button2,        togglefloating, {0} },
	{ ClkClientWin,         MODKEY,         Button3,        resizemouse,    {0} },
	{ ClkTagBar,            0,              Button1,        view,           {0} },
	{ ClkTagBar,            0,              Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },
};


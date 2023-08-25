/************************************/
/**     COLORSCHEME COMPONENTS      */
/************************************/
#define SIZE_STRING 8

typedef struct {
    char Background[SIZE_STRING];
    char Foreground[SIZE_STRING];
    char Border[SIZE_STRING];
} Scheme;

typedef struct {
    Scheme Normal;
    Scheme Select;
    Scheme TagNormal;
    Scheme TagSelect;
    Scheme StatusNormal;
} ColorScheme;


/************************************/
/**         COLORSCHEMES            */
/************************************/
const ColorScheme Default = {
    .Normal = {
        .Background = "#222222",
        .Foreground = "#bbbbbb",
        .Border = "#444444",
    },
    .Select = {
        .Background = "#005577",
        .Foreground = "#eeeeee",
        .Border = "#005577",
    },
    .TagNormal = {
        .Background = "#222222",
        .Foreground = "#bbbbbb",
        .Border = "#444444",
    },
    .TagSelect = {
        .Background = "#005577",
        .Foreground = "#eeeeee",
        .Border = "#005577",
    },
    .StatusNormal = {
        .Background = "#222222",
        .Foreground = "#bbbbbb",
        .Border = "#444444",
    },
};

const ColorScheme DoomOne = {
    .Normal = {
        .Background = "#14191F",
        .Foreground = "#8C92AC",
        .Border = "#14191F",
    },
    .Select = {
        .Background = "#1F2833",
        .Foreground = "#F3F3F6",
        .Border = "#0087ff",
    },
    .TagNormal = {
        .Background = "#14191F",
        .Foreground = "#8C92AC",
        .Border = "#14191F",
    },
    .TagSelect = {
        .Background = "#0087ff",
        .Foreground = "#F3F3F6",
        .Border = "#0087ff",
    },
    .StatusNormal = {
        .Background = "#14191F",
        .Foreground = "#8C92AC",
        .Border = "#14191F",
    },
};

const ColorScheme MatchaDark = {
    .Normal = {
        .Background = "#141a1b",
        .Foreground = "#6c8782",
        .Border = "#141a1b",
    },
    .Select = {
        .Background = "#263034",
        .Foreground = "#F3F3F6",
        .Border = "#16a085",
    },
    .TagNormal = {
        .Background = "#141a1b",
        .Foreground = "#6c8782",
        .Border = "#141a1b",
    },
    .TagSelect = {
        .Background = "#263034",
        .Foreground = "#F3F3F6",
        .Border = "#16a085",
    },
    .StatusNormal = {
        .Background = "#141a1b",
        .Foreground = "#6c8782",
        .Border = "#141a1b",
    },
};

const ColorScheme Gruvbox = {
    .Normal = {
        .Background = "#282828",
        .Foreground = "#ebdbb2",
        .Border = "#282828",
    },
    .Select = {
        .Background = "#1d2021",
        .Foreground = "#ffaf00",
        .Border = "#ffaf00",
    },
    .TagNormal = {
        .Background = "#282828",
        .Foreground = "#ebdbb2",
        .Border = "#282828",
    },
    .TagSelect = {
        .Background = "#ffaf00",
        .Foreground = "#282828",
        .Border = "#ffaf00",
    },
    .StatusNormal = {
        .Background = "#282828",
        .Foreground = "#ebdbb2",
        .Border = "#282828",
    },
};

const ColorScheme Ayu = {
    .Normal = {
        .Background = "#0A0B11",
        .Foreground = "#F3F3F6",
        .Border = "#0A0B11",
    },
    .Select = {
        .Background = "#1c1e29",
        .Foreground = "#FFBF00",
        .Border = "#E7C547",
    },
    .TagNormal = {
        .Background = "#0A0B11",
        .Foreground = "#F3F3F6",
        .Border = "#0A0B11",
    },
    .TagSelect = {
        .Background = "#E7C547",
        .Foreground = "#0A0B11",
        .Border = "#E7C547",
    },
    .StatusNormal = {
        .Background = "#0A0B11",
        .Foreground = "#F3F3F6",
        .Border = "#0A0B11",
    },
};

const ColorScheme SweetDark = {
    .Normal = {
        .Background = "#161925",
        .Foreground = "#bbbbbb",
        .Border = "#161925",
    },
    .Select = {
        .Background = "#0c0e14",
        .Foreground = "#F3F3F6",
        .Border = "#c50ed2",
    },
    .TagNormal = {
        .Background = "#161925",
        .Foreground = "#F3F3F6",
        .Border = "#161925",
    },
    .TagSelect = {
        .Background = "#c50ed2",
        .Foreground = "#F3F3F6",
        .Border = "#c50ed2",
    },
    .StatusNormal = {
        .Background = "#161925",
        .Foreground = "#bbbbbb",
        .Border = "#161925",
    },
};

const ColorScheme Dracula = {
    .Normal = {
        .Background = "#282a36",
        .Foreground = "#f8f8f2",
        .Border = "#282a36",
    },
    .Select = {
        .Background = "#1e1f29",
        .Foreground = "#ff79c6",
        .Border = "#ff79c6",
    },
    .TagNormal = {
        .Background = "#282a36",
        .Foreground = "#f8f8f2",
        .Border = "#282a36",
    },
    .TagSelect = {
        .Background = "#ff79c6",
        .Foreground = "#000000",
        .Border = "#ff79c6",
    },
    .StatusNormal = {
        .Background = "#282a36",
        .Foreground = "#f8f8f2",
        .Border = "#282a36",
    },
};

const ColorScheme BreezeDark = {
    .Normal = {
        .Background = "#2a2e32",
        .Foreground = "#eff0f1",
        .Border = "#2a2e32",
    },
    .Select = {
        .Background = "#1b1e20",
        .Foreground = "#eff0f1",
        .Border = "#3daee9",
    },
    .TagNormal = {
        .Background = "#2a2e32",
        .Foreground = "#eff0f1",
        .Border = "#2a2e32",
    },
    .TagSelect = {
        .Background = "#3daee9",
        .Foreground = "#eff0f1",
        .Border = "#3daee9",
    },
    .StatusNormal = {
        .Background = "#2a2e32",
        .Foreground = "#eff0f1",
        .Border = "#2a2e32",
    },
};

/************************************/
/**      CURRENT COLORSCHEME        */
/************************************/
const ColorScheme CurrentColorScheme = Gruvbox;


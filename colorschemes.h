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
        .Background = "#1F2833",
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
        .Foreground = "#5C6773",
        .Border = "#0A0B11",
    },
    .Select = {
        .Background = "#212733",
        .Foreground = "#F3F3F6",
        .Border = "#E7C547",
    },
    .TagNormal = {
        .Background = "#0A0B11",
        .Foreground = "#5C6773",
        .Border = "#0A0B11",
    },
    .TagSelect = {
        .Background = "#E7C547",
        .Foreground = "#0A0B11",
        .Border = "#E7C547",
    },
    .StatusNormal = {
        .Background = "#0A0B11",
        .Foreground = "#5C6773",
        .Border = "#0A0B11",
    },
};

const ColorScheme SweetDark = {
    .Normal = {
        .Background = "#161925",
        .Foreground = "#F3F3F6",
        .Border = "#161925",
    },
    .Select = {
        .Background = "#c50ed2",
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
        .Foreground = "#F3F3F6",
        .Border = "#161925",
    },
};

/************************************/
/**      CURRENT COLORSCHEME        */
/************************************/
const ColorScheme CurrentColorScheme = Gruvbox;


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
    }
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
    }
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
    }
};

const ColorScheme Gruvbox = {
    .Normal = {
        .Background = "#282828",
        .Foreground = "#ffaf00",
        .Border = "#282828",
    },
    .Select = {
        .Background = "#ffaf00",
        .Foreground = "#282828",
        .Border = "#ffaf00",
    }
};

const ColorScheme Gruvbox2 = {
    .Normal = {
        .Background = "#282828",
        .Foreground = "#ebdbb2",
        .Border = "#282828",
    },
    .Select = {
        .Background = "#1d2021",
        .Foreground = "#ffaf00",
        .Border = "#ffaf00",
    }
};

const ColorScheme GruvboxMaterial = {
    .Normal = {
        .Background = "#282828",
        .Foreground = "#a89984",
        .Border = "#282828",
    },
    .Select = {
        /* .Background = "#3c3836", */
        .Background = "#d78700",
        /* .Foreground = "#d78700", */
        .Foreground = "#FFFFFF",
        .Border = "#d78700",
    }
};

const ColorScheme Ayu = {
    .Normal = {
        .Background = "#0A0B11",
        .Foreground = "#5C6773",
        /* .Foreground = "#F29718", */
        .Border = "#0A0B11",
    },
    .Select = {
        .Background = "#212733",
        .Foreground = "#F3F3F6",
        /* .Foreground = "#0A0B11", */
        .Border = "#E7C547",
    }
};

/************************************/
/**      CURRENT COLORSCHEME        */
/************************************/
const ColorScheme CurrentColorScheme = Gruvbox2;


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
    Scheme Hide;
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
    .Hide = {
        .Background = "#222222",
        .Foreground = "#bbbbbb",
        .Border = "#444444",
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
    },
    .Hide = {
        .Background = "#14191F",
        .Foreground = "#8C92AC",
        .Border = "#14191F",
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
    },
    .Hide = {
        .Background = "#141a1b",
        .Foreground = "#16a085",
        .Border = "#141a1b",
    }
};

/************************************/
/**      CURRENT COLORSCHEME        */
/************************************/
const ColorScheme CurrentColorScheme = MatchaDark;

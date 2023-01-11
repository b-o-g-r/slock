/* user and group to drop privileges to */
static const char *user = "bogr";
static const char *group = "wheel";

static const char *colorname[NUMCOLS] = {
    [INIT] = "black",     /* after initialization */
    [INPUT] = "#005577",  /* during input */
    [FAILED] = "#CC3333", /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/*Enable blur*/
#define BLUR
/*Set blur radius*/
/*Enable Pixelation*/
static const int blurRadius = 5;

#define PIXELATION
/*Set pixelation radius*/
static const int pixelSize = 5;

/* default message */
static const char *message = "ENTER YOUR PASSWORD";

/* text color */
static const char *text_color = "#ffffff";

/* text size (must be a valid size) */
static const char *font_name = "fixed";

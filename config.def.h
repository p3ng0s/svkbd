static const Bool wmborder = True;
static int fontsize = 22;
static double overlay_delay = 1.0; //in seconds
static double repeat_delay = 0.75; //in seconds, will not work on keys with overlays
static int scan_rate = 50; //scan rate in microseconds, affects key repetition rate
static int heightfactor = 14; //one row of keys takes up 1/x of the screen height
static int xspacing = 5;
static int yspacing = 5;
static const char *defaultfonts[] = {
	"DejaVu Sans:bold:size=22"
};
static const char *defaultcolors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#e2e2e2", "#302826" }, // normal keys
	[SchemeNormShift] = { "#FF875F", "#302826" }, // normal key shift uper

	[SchemeNormABC] = { "#ffffff", "#302826" }, // the text keys
	[SchemeNormABCShift] = { "#FF875F", "#302826" }, // the text shift uper

	[SchemePress] = { "#393939", "#FF875F" }, // when pressed
	[SchemePressShift] = { "#393939", "#FF875F" }, // when pressed upper shift

	[SchemeHighlight] = { "#393939", "#FF875F" }, // on hover
	[SchemeHighlightShift] = { "#393939", "#FF875F" }, // on hover upper shift

	[SchemeOverlay] = { "#ffffff", "#2b3313" }, // overlay theme
	[SchemeOverlayShift] = { "#008ac0", "#2b3313" }, // overlay shift

	[SchemeWindow] = { "#bbbbbb", "#393939" }, // good question | background kb
};

/*
static const char theme_col_fg[] =  "#393939";
static const char theme_col_bg[] =  "#FF875F";
static const char theme_col_text[] = "#393939";

	[SchemeNorm] = { "#bbbbbb", "#132a33" },
	[SchemeNormShift] = { "#008ac0", "#132a33" },
	[SchemeNormABC] = { "#ffffff", "#14313d" },
	[SchemeNormABCShift] = { "#008ac0", "#14313d" },
	[SchemePress] = { "#ffffff", "#259937" },
	[SchemePressShift] = { "#00c001", "#259937" },
	[SchemeHighlight] = { "#58a7c6", "#005577" },
	[SchemeHighlightShift] = { "#008ac0", "#005577" },
	[SchemeOverlay] = { "#ffffff", "#2b3313" },
	[SchemeOverlayShift] = { "#008ac0", "#2b3313" },
	[SchemeWindow] = { "#bbbbbb", "#132a33" },
*/

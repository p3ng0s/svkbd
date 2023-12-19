#define KEYS 41
static Key keys_en[] = {
	{ 0, "1", XK_q, 1 },
	{ 0, "2", XK_w, 1 },
	{ 0, "3", XK_e, 1 },
	{ 0, "4", XK_r, 1 },
	{ 0, "5", XK_t, 1 },
	{ 0, "6", XK_y, 1 },
	{ 0, "7", XK_u, 1 },
	{ 0, "8", XK_i, 1 },
	{ 0, "9", XK_o, 1 },
	{ 0, "0", XK_p, 1 },
	{ 0 }, /* New row */

	{ "Ctrl",0,  XK_Control_L, 1 },
	{ 0, 0, XK_a, 1 },
	{ 0, 0, XK_s, 1 },
	{ 0, 0, XK_d, 1 },
	{ 0, 0, XK_f, 1 },
	{ 0, 0, XK_g, 1 },
	{ 0, 0, XK_h, 1 },
	{ 0, 0, XK_j, 1 },
	{ 0, 0, XK_k, 1 },
	{ 0, 0, XK_l, 1 },
	{ 0 }, /* New row */

	{ 0, 0, XK_Shift_L, 2 },
	{ 0, 0, XK_z, 1 },
	{ 0, 0, XK_x, 1 },
	{ 0, 0, XK_c, 1 },
	{ 0, 0, XK_v, 1 },
	{ 0, 0, XK_b, 1 },
	{ 0, 0, XK_n, 1 },
	{ 0, 0, XK_m, 1 },
	{ "⌫",0, XK_BackSpace, 2 },
	{ 0 }, /* New row */

	{ "↺", 0, XK_Cancel, 1},
	{ "Alt", 0, XK_Alt_L, 1 },
	{ "", "☺", XK_space, 4 },
	{ "/", "'", XK_slash, 1 },
	{ ".", "\"", XK_period, 1 },
	{ "↲", 0, XK_Return, 1 },
	{ 0 }, /* New row */
	{ 0 }, /* New row */
	{ 0 }, /* New row */
};

static Key keys_shortcuts[] = {
	{ "stt", "🕸️", XK_Return, 1, XK_Alt_L },
	{ "dme", 0, XK_space, 1, XK_Alt_L },
	{ "wif", "🦈", XK_w, 1, XK_Alt_L },
	{ "|@|", "🔉", XK_s, 1, XK_Alt_L },
	{ "⌨️", "⏻", XK_p, 1, XK_Alt_L },
	{ "ran", "🗄️", XK_r, 1, XK_Alt_L },
	{ "[D]", "✉️", XK_d, 1, XK_Alt_L },
	{ "📰", "🔒", XK_f, 1, XK_Alt_L },
	{ "|M|", "📖", XK_m, 1, XK_Alt_L },
	{ "😃", "ovpn", XK_o, 1, XK_Alt_L },
	{ 0 }, /* New row */

	{ "Ctrl",0,  XK_Control_L, 1 },
	{ "🎵", 0, XK_a, 1, XK_Alt_L },
	{ "🖼", 0, XK_x, 1, XK_Alt_L },
	{ "", 0, XK_v, 1, XK_Alt_L },
	{ "skp", 0, XK_Tab, 1, XK_Alt_L },
	{ "bar", "bup", XK_b, 1, XK_Alt_L },
	{ "←", 0, XK_j, 1, XK_Alt_L },
	{ "→", 0, XK_k, 1, XK_Alt_L },
	{ "+1", 0, XK_i, 1, XK_Alt_L },
	{ "-1", 0, XK_i, 1, XK_Alt_L },
	{ 0 }, /* New row */

	{ 0, 0, XK_Shift_L, 2 },
	{ "⇤", 0, XK_h, 1, XK_Alt_L },
	{ "⇥", "🔏", XK_l, 1, XK_Alt_L },
	{ "[]=", 0, XK_t, 1, XK_Alt_L },
	{ "g+1", "g=0", XK_equal, 1, XK_Alt_L },
	{ "xme", 0, XK_equal, 1 },
	{ "mut", 0, XF86XK_AudioMute, 1 },
	{ "rof", 0, XK_Super_L, 1 },
	{ "prs", 0, XK_Print, 1 },
	{ 0 }, /* New row */

	{ "↺", 0, XK_Cancel, 1},
	{ "Alt", 0, XK_Alt_L, 1 },
	{ "", "☺", XK_space, 4 },
	{ "/", "'", XK_slash, 1 },
	{ ".", "\"", XK_period, 1 },
	{ "↲", 0, XK_Return, 1 },
	{ 0 }, /* New row */
	{ 0 }, /* New row */
};

static Key keys_symbols[KEYS] = {
	{ "Esc", 0, XK_Escape, 1 },
	{ "F1", 0, XK_F1, 1 },
	{ "F2", 0, XK_F2, 1 },
	{ "F3", 0, XK_F3, 1 },
	{ "F4", 0, XK_F4, 1 },
	{ "F5", 0, XK_F5, 1 },
	{ "F6", 0, XK_F6, 1 },
	{ "F7", 0, XK_F7, 1 },
	{ "F8", 0, XK_F8, 1 },
	{ "F9", 0, XK_F9, 1 },
	{ 0 }, /* New row */

	{ "1", "!", XK_1, 1 },
	{ "2", "@", XK_2, 1 },
	{ "3", "#", XK_3, 1 },
	{ "4", "$", XK_4, 1 },
	{ "5", "%", XK_5, 1 },
	{ "6", "^", XK_6, 1 },
	{ "7", "&", XK_7, 1 },
	{ "8", "*", XK_8, 1 },
	{ "9", "(", XK_9, 1 },
	{ "0", ")", XK_0, 1 },
	{ 0 }, /* New row */

	{ ".", ">", XK_period, 1 },
	{ ",", "<", XK_comma, 1 },
	{ "`", "~", XK_grave, 1 },
	{ "-", "_", XK_minus, 1 },
	{ "=", "+", XK_plus, 1 },
	{ "\\", "|", XK_backslash, 1 },
	{ ";", ":", XK_colon, 1 },
	{ "/", "?", XK_slash, 1 },
	{ "[", "{", XK_bracketleft, 1 },
	{ "]", "}", XK_bracketright, 1 },
	{ "⌫",0, XK_BackSpace, 2 },
	{ 0 }, /* New row */


	{ "↺", 0, XK_Cancel, 1},
	{ 0, 0, XK_Shift_L, 1 },
	{ "↓", 0, XK_Down, 1 },
	{ "↑", 0, XK_Up, 1 },
	{ "←", 0, XK_Left, 1 },
	{ "→", 0, XK_Right, 1 },
	{ "↲", 0, XK_Return, 1 },
};

Buttonmod buttonmods[] = {
	{ XK_Shift_L, Button2 },
	{ XK_Alt_L, Button3 },
};

#define OVERLAYS 106
static Key overlay[OVERLAYS] = {
	{ 0, 0, XK_q }, //Overlay for a
	{ "1", 0, XK_1 },
	{ 0, 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */

	{ 0, 0, XK_w }, //Overlay for a
	{ "2", 0, XK_2 },
	{ 0, 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */

	{ 0, 0, XK_e }, //Overlay for e (first item after boundary defines the trigger)
	{ "3", 0, XK_1 },
	{ "è", 0, XK_egrave },
	{ "é", 0, XK_eacute },
	{ "ê", 0, XK_ecircumflex },
	{ "ë", 0, XK_ediaeresis },
	{ "ę", 0, XK_eogonek },
	{ "ē", 0, XK_emacron },
	{ "ė", 0, XK_eabovedot },
	{ "ě", 0, XK_ecaron },
	{ 0, 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */

	{ 0, 0, XK_r }, //Overlay for r
	{ "4", 0, XK_4 },
	{ 0, 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */

	{ 0, 0, XK_t }, //Overlay for t
	{ "5", 0, XK_5 },
	{ 0, 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */

	{ 0, 0, XK_y }, //Overlay for y
	{ "6", 0, XK_6 },
	{ 0, 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */

	{ 0, 0, XK_u }, //Overlay for u
	{ "7", 0, XK_7 },
	{ 0, 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */

	{ 0, 0, XK_i }, //Overlay for i
	{ "8", 0, XK_8 },
	{ 0, 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */

	{ 0, 0, XK_o }, //Overlay for o
	{ "9", 0, XK_9 },
	{ 0, 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */

	{ 0, 0, XK_p }, //Overlay for q
	{ "0", 0, XK_0 },
	{ 0, 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */

	{ "/?", 0, XK_slash }, //New overlay - punctuation overlay
	{ "1", "!", XK_1, 1 },
	{ "2", "@", XK_2, 1 },
	{ "3", "#", XK_3, 1 },
	{ "4", "$", XK_4, 1 },
	{ "5", "%", XK_5, 1 },
	{ "6", "^", XK_6, 1 },
	{ "7", "&", XK_7, 1 },
	{ "8", "*", XK_8, 1 },
	{ "9", "(", XK_9, 1 },
	{ "0", ")", XK_0, 1 },
	{ "'", "\"", XK_apostrophe, 1 },
	{ "`", "~", XK_grave, 1 },
	{ "-", "_", XK_minus, 1 },
	{ "=", "+", XK_plus, 1 },
	{ "[", "{", XK_bracketleft, 1 },
	{ "]", "}", XK_bracketright, 1 },
	{ ",", "<", XK_comma, 1 },
	{ ".", ">", XK_period, 1 },
	{ "/", "?", XK_slash, 1 },
	{ "\\", "|", XK_backslash, 1 },
	{ "¡", 0, XK_exclamdown, 1 },
	{ "?", 0, XK_questiondown, 1 },
	{ "°", 0, XK_degree, 1 },
	{ "£", 0, XK_sterling, 1 },
	{ "€", 0, XK_EuroSign, 1 },
	{ "¥", 0, XK_yen, 1 },
	{ ";", ":", XK_colon, 1 },
	{ 0, 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
	{ " ", 0, XK_space }, //New overlay -> emoji overlay on Q key (for minimal layer)
	{ "🙂", 0, 0x101f642 }, //New overlay -> emoji overlay
	{ "😀", 0, 0x101f600 },
	{ "😁", 0, 0x101f601 },
	{ "😂", 0, 0x101f602 },
	{ "😃", 0, 0x101f603 },
	{ "😄", 0, 0x101f604 },
	{ "😅", 0, 0x101f605 },
	{ "😆", 0, 0x101f606 },
	{ "😇", 0, 0x101f607 },
	{ "😈", 0, 0x101f608 },
	{ "😉", 0, 0x101f609 },
	{ "😊", 0, 0x101f60a },
	{ "😋", 0, 0x101f60b },
	{ "😌", 0, 0x101f60c },
	{ "😍", 0, 0x101f60d },
	{ "😎", 0, 0x101f60e },
	{ "😏", 0, 0x101f60f },
	{ "😐", 0, 0x101f610 },
	{ "😒", 0, 0x101f612 },
	{ "😓", 0, 0x101f613 },
	{ "😛", 0, 0x101f61b },
	{ "😮", 0, 0x101f62e },
	{ "😟", 0, 0x101f61f },
	{ "😟", 0, 0x101f620 },
	{ "😢", 0, 0x101f622 },
	{ "😭", 0, 0x101f62d },
	{ "😳", 0, 0x101f633 },
	{ "😴", 0, 0x101f634 },
	{ 0, 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
};

#define LAYERS 3
static char* layer_names[LAYERS] = {
	"en",
	"symbols",
	"shortcuts",
};

static Key* available_layers[LAYERS] = {
	keys_en,
	keys_symbols,
	keys_shortcuts,
};

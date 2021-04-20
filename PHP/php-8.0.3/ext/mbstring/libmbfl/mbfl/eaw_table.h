/* East Asian Width table
 *
 * Some characters in East Asian languages are intended to be displayed in a space
 * which is roughly square. (This contrasts with others such as the Latin alphabet,
 * which are taller than they are wide.) To display these East Asian characters
 * properly, twice the horizontal space is used. This must be taken into account
 * when doing things like wrapping text to a specific width.
 *
 * Each pair of numbers in the below table is a range of Unicode codepoints
 * which should be displayed as double-width. */

static const struct {
	int begin;
	int end;
} mbfl_eaw_table[] = {
	{ 0x1100, 0x115f },
	{ 0x11a3, 0x11a7 },
	{ 0x11fa, 0x11ff },
	{ 0x2329, 0x232a },
	{ 0x2e80, 0x2e99 },
	{ 0x2e9b, 0x2ef3 },
	{ 0x2f00, 0x2fd5 },
	{ 0x2ff0, 0x2ffb },
	{ 0x3000, 0x303e },
	{ 0x3041, 0x3096 },
	{ 0x3099, 0x30ff },
	{ 0x3105, 0x312d },
	{ 0x3131, 0x318e },
	{ 0x3190, 0x31ba },
	{ 0x31c0, 0x31e3 },
	{ 0x31f0, 0x321e },
	{ 0x3220, 0x3247 },
	{ 0x3250, 0x32fe },
	{ 0x3300, 0x4dbf },
	{ 0x4e00, 0xa48c },
	{ 0xa490, 0xa4c6 },
	{ 0xa960, 0xa97c },
	{ 0xac00, 0xd7a3 },
	{ 0xd7b0, 0xd7c6 },
	{ 0xd7cb, 0xd7fb },
	{ 0xf900, 0xfaff },
	{ 0xfe10, 0xfe19 },
	{ 0xfe30, 0xfe52 },
	{ 0xfe54, 0xfe66 },
	{ 0xfe68, 0xfe6b },
	{ 0xff01, 0xff60 },
	{ 0xffe0, 0xffe6 },
	{ 0x1b000, 0x1b001 },
	{ 0x1f200, 0x1f202 },
	{ 0x1f210, 0x1f23a },
	{ 0x1f240, 0x1f248 },
	{ 0x1f250, 0x1f251 },
	{ 0x20000, 0x2fffd },
	{ 0x30000, 0x3fffd }
};

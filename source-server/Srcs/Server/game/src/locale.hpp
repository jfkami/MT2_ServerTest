#ifndef __INC_METIN2_GAME_LOCALE_H__
#define __INC_METIN2_GAME_LOCALE_H__

extern "C"
{
	void locale_init(const char *filename);
	const char *locale_find(const char *string);

	extern int g_iUseLocale;

#define LC_TEXT(str) locale_find(str)
};

#endif
//martysama0134's 623a0779c74cb7565145d45548376308

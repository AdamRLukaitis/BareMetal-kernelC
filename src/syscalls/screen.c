int os_Screen_Cursor_Col = 0;
int os_Screen_Cursor_Row = 0;
const int os_Screen_Cursor_Col_Max = 80;
const int os_Screen_Cursor_Row_Max = 25;

void os_inc_cursor()
{
	os_Screen_Cursor_Col++;
	if (os_Screen_Cursor_Col == os_Screen_Cursor_Col_Max)
	{
		os_Screen_Cursor_Col = 0;
		os_Screen_Cursor_Row++;
		if (os_Screen_Cursor_Row == os_Screen_Cursor_Row_Max)
		{
			os_scroll_screen();
		}
	}
}

void os_dec_cursor()
{
	if (os_Screen_Cursor_Col != 0)
	{
		os_Screen_Cursor_Row--;
		os_Screen_Cursor_Col = os_Screen_Cursor_Col_Max;
	}
	else
	{
		os_Screen_Cursor_Col--;
	}
}

void os_print_newline()
{
	
}

void os_output()
{
	
}

void os_scroll_screen()
{
	
}

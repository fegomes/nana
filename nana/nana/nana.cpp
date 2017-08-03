// nana.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <nana/gui/wvl.hpp>
#include <nana/gui/widgets/label.hpp>

int main()
{
	nana::form form;
	nana::label label(form, nana::rectangle(0, 0, 100, 20));
	label.caption("Hello Nana");
	form.show();
	nana::exec();
}


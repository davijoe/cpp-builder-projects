//---------------------------------------------------------------------------

#include <fmx.h>

#pragma hdrstop

#include "Button1.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------
// ValidCtrCheck is used to assure that the components created do not have
// any pure virtual functions.
//

static inline void ValidCtrCheck(TButton1 *)
{
	new TButton1(NULL);
}
//---------------------------------------------------------------------------
__fastcall TButton1::TButton1(TComponent* Owner)
	: TButton(Owner)
{
}
//---------------------------------------------------------------------------
namespace Button1
{
	void __fastcall PACKAGE Register()
	{
		TComponentClass classes[1] = {__classid(TButton1)};
		RegisterComponents(L"Samples", classes, 0);
	}
}
//---------------------------------------------------------------------------

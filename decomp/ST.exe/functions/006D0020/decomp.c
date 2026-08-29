#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006D0020 -> 006CE8C0 @ 006D00B5 | 006D0020 -> EXTERNAL:0000009F @ 006D00AA | 006D0020
   -> EXTERNAL:000000A2 @ 006D005D | 006D0020 -> EXTERNAL:000000B5 @ 006D006A

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 006D0020 -> EXTERNAL:0000009F @ 006D00AA */

void FUN_006d0020(HDC hdc,undefined4 param_2,undefined4 param_3,LPRECT lprc,int param_5,int param_6,
                 int param_7,RecoveredRecord_006D0020_8F58320F *param_8)

{
  byte *lpchText;
  char cVar1;
  COLORREF color;
  HDC pHVar2;
  RecoveredRecord_006D0020_8F58320F *pRVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  tagRECT local_14;

  pHVar2 = hdc;

  iVar4 = Library::DKW::DDX::FUN_006ce770((uint)hdc,&hdc);
  pRVar3 = param_8;
  if (iVar4 == 0) {
    /* ST_CALLSITE[006D0049]: CALL dword ptr [0x0085bab8] */
    SetTextColor(hdc,param_8->field_000C);
    color = *(COLORREF *)(pRVar3 + 1);
    if (color == 0xffffffff) {
      /* ST_CALLSITE[006D005D]: CALL dword ptr [0x0085ba68] */
      SetBkMode(hdc,1);
    }
    else {
      /* ST_CALLSITE[006D006A]: CALL dword ptr [0x0085bab4] */
      SetBkColor(hdc,color);
    }
    local_14.left = (LONG)lprc;
    local_14.right = (int)&lprc->left + param_6;
    local_14.top = param_5;
    local_14.bottom = param_5 + param_7;
    lpchText = &pRVar3[1].field_0x8;
    uVar5 = 0xffffffff;
    pcVar6 = lpchText;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    /* ST_CALLSITE[006D00AA]: CALL dword ptr [0x0085be64] */
    DrawTextA(hdc,lpchText,~uVar5 - 1,&local_14,0x800);

    Library::DKW::DDX::FUN_006ce8c0((int)pHVar2,hdc);
  }
  return;
}


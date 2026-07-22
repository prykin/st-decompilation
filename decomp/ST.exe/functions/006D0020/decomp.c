
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006D0020 -> 006CE8C0 @ 006D00B5 | 006D0020 -> EXTERNAL:0000009F @ 006D00AA | 006D0020
   -> EXTERNAL:000000A2 @ 006D005D | 006D0020 -> EXTERNAL:000000B5 @ 006D006A

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 006D0020 -> EXTERNAL:0000009F @ 006D00AA */

void FUN_006d0020(HDC hdc,undefined4 param_2,undefined4 param_3,LPRECT lprc,int param_5,int param_6,
                 int param_7,int param_8)

{
  LPCSTR lpchText;
  char cVar1;
  COLORREF color;
  HDC pHVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  LPCSTR pCVar6;
  tagRECT local_14;

  pHVar2 = hdc;
  iVar4 = Library::DKW::DDX::FUN_006ce770((uint)hdc,&hdc);
  iVar3 = param_8;
  if (iVar4 == 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    SetTextColor(hdc,*(COLORREF *)(param_8 + 0xc));
    color = *(COLORREF *)(iVar3 + 0x10);
    if (color == 0xffffffff) {
      SetBkMode(hdc,1);
    }
    else {
      SetBkColor(hdc,color);
    }
    local_14.left = (LONG)lprc;
    local_14.right = (int)&lprc->left + param_6;
    local_14.top = param_5;
    local_14.bottom = param_5 + param_7;
    lpchText = (LPCSTR)(iVar3 + 0x18);
    uVar5 = 0xffffffff;
    pCVar6 = lpchText;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pCVar6;
      pCVar6 = pCVar6 + 1;
    } while (cVar1 != '\0');
    DrawTextA(hdc,lpchText,~uVar5 - 1,&local_14,0x800);
    Library::DKW::DDX::FUN_006ce8c0((int)pHVar2,hdc);
  }
  return;
}


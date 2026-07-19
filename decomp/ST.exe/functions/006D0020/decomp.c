
void FUN_006d0020(HDC param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 int param_6,int param_7,int param_8)

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
  
  pHVar2 = param_1;
  iVar4 = Library::DKW::DDX::FUN_006ce770((uint)param_1,&param_1);
  iVar3 = param_8;
  if (iVar4 == 0) {
    SetTextColor(param_1,*(COLORREF *)(param_8 + 0xc));
    color = *(COLORREF *)(iVar3 + 0x10);
    if (color == 0xffffffff) {
      SetBkMode(param_1,1);
    }
    else {
      SetBkColor(param_1,color);
    }
    local_14.left = param_4;
    local_14.right = param_4 + param_6;
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
    DrawTextA(param_1,lpchText,~uVar5 - 1,&local_14,0x800);
    Library::DKW::DDX::FUN_006ce8c0((int)pHVar2,param_1);
  }
  return;
}


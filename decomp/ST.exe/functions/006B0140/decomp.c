
void FUN_006b0140(UINT param_1,HINSTANCE param_2)

{
  uint uVar1;
  
  if (0x1004 < DAT_008568e0 + 0x800) {
    DAT_008568e0 = 0;
  }
  if (param_2 == (HINSTANCE)0x0) {
    param_2 = GetModuleHandleA((LPCSTR)0x0);
  }
  uVar1 = LoadStringA(param_2,param_1,&DAT_00857a60 + DAT_008568e0,0x800);
  if ((uVar1 != 0) && (uVar1 < 0x800)) {
    DAT_008568e0 = DAT_008568e0 + 1 + uVar1;
    return;
  }
  (&DAT_00857a60)[DAT_008568e0] = 0;
  DAT_008568e0 = DAT_008568e0 + 1;
  return;
}


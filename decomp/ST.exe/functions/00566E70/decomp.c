
void __thiscall FUN_00566e70(void *this,undefined4 param_1)

{
  MCIDEVICEID *dwParam2;
  MCIDEVICEID MVar1;
  int iVar2;

  FUN_007193f0();
  if ((DAT_00807300 & 0xff) == 2) {
    dwParam2 = (MCIDEVICEID *)((int)this + 0xf8f);
    if (*(int *)((int)this + 0xf8f) != 0) {
      FUN_00719560((DWORD_PTR)dwParam2);
      FUN_00719c60((DWORD_PTR)dwParam2);
    }
    MVar1 = FUN_00719410(0,CASE_3,(int)this + 0x640);
    *dwParam2 = MVar1;
    if (MVar1 != 0) {
      iVar2 = FUN_00719900(dwParam2);
      if (iVar2 == 0) {
        iVar2 = FUN_00719bb0(dwParam2);
        if (iVar2 != 0) {
          FUN_00719960(dwParam2);
          FUN_007199f0(param_1,1,dwParam2);
        }
      }
    }
  }
  return;
}


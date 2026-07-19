
void __thiscall FUN_00566f30(void *this,undefined4 param_1)

{
  MCIDEVICEID *pMVar1;
  MCIDEVICEID MVar2;
  int iVar3;
  
  FUN_007193f0();
  if ((DAT_00807300 & 0xff) == 2) {
    pMVar1 = (MCIDEVICEID *)((int)this + 0xf8f);
    if (*(int *)((int)this + 0xf8f) != 0) {
      FUN_00719560(pMVar1);
      FUN_00719c60(pMVar1);
    }
    MVar2 = FUN_00719410(0,CASE_3,(int)this + 0x640);
    *pMVar1 = MVar2;
    if (MVar2 != 0) {
      iVar3 = FUN_00719900(pMVar1);
      if (iVar3 == 0) {
        iVar3 = FUN_00719bb0(pMVar1);
        if (iVar3 != 0) {
          FUN_00719960(pMVar1);
          FUN_007199f0(param_1,1,pMVar1);
        }
      }
    }
  }
  return;
}



void __thiscall FUN_005686c0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar2;
  undefined4 local_4c;
  undefined4 local_48 [16];
  uint local_8;
  
  if (*(int *)((int)this + 0xf8b) != 0) {
    local_4c = DAT_00858df8;
    DAT_00858df8 = &local_4c;
    iVar1 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
    if (iVar1 == 0) {
      iVar1 = 0;
      iVar2 = 2;
      do {
        FUN_006c1f00(iVar1,&local_8,(uint *)0x0);
        if (local_8 == 1) {
          FUN_006c1ce0(iVar1,param_1);
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      DAT_00858df8 = (undefined4 *)local_4c;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_4c;
  }
  return;
}


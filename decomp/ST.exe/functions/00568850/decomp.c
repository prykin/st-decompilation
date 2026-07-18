
void __thiscall FUN_00568850(void *this,int param_1)

{
  int iVar1;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar2;
  undefined4 local_50;
  undefined4 local_4c [16];
  uint local_c;
  void *local_8;
  
  if (*(int *)((int)this + 0xf8b) != 0) {
    local_50 = DAT_00858df8;
    DAT_00858df8 = &local_50;
    local_8 = this;
    iVar1 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
    if (iVar1 == 0) {
      iVar1 = 2;
      piVar2 = (int *)((int)local_8 + 0xe2b);
      do {
        FUN_006c1f00(iVar1,&local_c,(uint *)0x0);
        if (((local_c == 1) &&
            ((((3 < iVar1 && (iVar1 < 0xb)) || ((0x11 < iVar1 && (iVar1 < 0x15)))) ||
             ((10 < iVar1 && (iVar1 < 0x12)))))) && (*piVar2 == *(int *)(param_1 + 8))) {
          FUN_006c1ba0(iVar1);
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 3;
      } while (iVar1 < 0x20);
      DAT_00858df8 = (undefined4 *)local_50;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_50;
  }
  return;
}



void __thiscall thunk_FUN_00568bc0(void *this,int param_1)

{
  int iVar1;
  void *unaff_ESI;
  undefined4 uVar2;
  undefined4 auStack_48 [16];
  uint uStack_8;
  
  uVar2 = DAT_00858df8;
  if (*(int *)((int)this + 0xf8b) != 0) {
    DAT_00858df8 = &stack0xffffffb4;
    iVar1 = __setjmp3(auStack_48,0,unaff_ESI,uVar2);
    if (iVar1 == 0) {
      FUN_006c1f00(param_1,&uStack_8,(uint *)0x0);
      if (uStack_8 == 1) {
        FUN_006c1ba0(param_1);
      }
      DAT_00858df8 = (undefined1 *)uVar2;
      return;
    }
  }
  DAT_00858df8 = (undefined1 *)uVar2;
  return;
}


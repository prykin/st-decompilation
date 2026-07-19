
void __thiscall FUN_00550430(void *this,int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar1 = 0;
  if (DAT_00808aaf != 0) {
    puVar3 = &DAT_00808ab0;
    while (puVar3[0x10] != param_1) {
      uVar1 = uVar1 + 1;
      puVar3 = puVar3 + 0x27;
      if (DAT_00808aaf <= uVar1) {
        return;
      }
    }
    uVar2 = FUN_006e51b0(0x807620);
    puVar3[0x12] = uVar2;
    if (((param_2 != 0) && (DAT_00808788 != 0)) && (*(int *)((int)this + 0xf4) == param_1)) {
      *(undefined4 *)((int)this + 0xf4) = 0;
      DAT_00808788 = 0;
      *(undefined4 *)((int)this + 0xd0) = 0xa106;
      AppClassTy::SendMessage((AppClassTy *)&DAT_00807620,3,0x101,(int)this + 0xc0);
    }
  }
  return;
}


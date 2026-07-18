
void __thiscall thunk_FUN_0068fa00(void *this,undefined4 param_1)

{
  AiFltClassTy *this_00;
  int iVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  uint auStack_38 [2];
  char cStack_30;
  undefined1 uStack_2f;
  undefined4 uStack_2e;
  
  uVar2 = 0;
  iVar1 = *(int *)((int)this + 0xa5);
  if (0 < *(int *)(iVar1 + 0xc)) {
    bVar4 = *(int *)(iVar1 + 0xc) != 0;
    do {
      if (bVar4) {
        iVar1 = *(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c);
      }
      else {
        iVar1 = 0;
      }
      this_00 = *(AiFltClassTy **)(iVar1 + 4);
      if ((this_00 != (AiFltClassTy *)0x0) && (*(short *)(this_00 + 0x7b) == -0x8000)) {
        puVar3 = auStack_38;
        for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
        auStack_38[1] = *(undefined4 *)((int)this + 300);
        uStack_2e = param_1;
        auStack_38[0] = 0x75;
        uStack_2f = 1;
        AiFltClassTy::GetAiMess(this_00,auStack_38);
        if ('\0' < cStack_30) {
          return;
        }
      }
      iVar1 = *(int *)((int)this + 0xa5);
      uVar2 = uVar2 + 1;
      bVar4 = uVar2 < *(uint *)(iVar1 + 0xc);
    } while ((int)uVar2 < (int)*(uint *)(iVar1 + 0xc));
  }
  return;
}


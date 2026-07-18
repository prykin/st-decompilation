
void __thiscall thunk_FUN_0067bfd0(void *this,int param_1,int param_2)

{
  void *this_00;
  ushort *puVar1;
  int iVar2;
  ushort *puVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar6;
  uint auStack_40 [2];
  undefined1 uStack_38;
  int iStack_37;
  undefined4 uStack_33;
  undefined2 uStack_2f;
  undefined4 uStack_2d;
  undefined4 uStack_29;
  undefined4 uStack_25;
  void *pvStack_c;
  uint uStack_8;
  
  uStack_8 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    bVar6 = *(int *)(param_1 + 0xc) != 0;
    pvStack_c = this;
    do {
      uVar5 = uStack_8;
      if ((((bVar6) &&
           (puVar3 = (ushort *)(*(int *)(param_1 + 8) * uStack_8 + *(int *)(param_1 + 0x1c)),
           puVar3 != (ushort *)0x0)) && (*puVar3 != 0)) &&
         ((puVar1 = (ushort *)thunk_FUN_0067bc80(param_2,*(uint *)(puVar3 + 4)),
          puVar1 != (ushort *)0x0 ||
          (puVar1 = (ushort *)thunk_FUN_0067bc10(param_2), puVar1 != (ushort *)0x0)))) {
        *(uint *)(puVar3 + 6) = (uint)*puVar1;
        puVar4 = auStack_40;
        for (iVar2 = 0xd; this_00 = pvStack_c, iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        auStack_40[0] = 0x67;
        uStack_38 = 0;
        auStack_40[1] = *(undefined4 *)((int)pvStack_c + 0x6fe);
        iStack_37 = thunk_FUN_0067bf30((int)pvStack_c);
        uStack_33 = *(undefined4 *)(puVar3 + 6);
        iVar2 = thunk_FUN_0067bef0((int)this_00);
        uStack_2f = (undefined2)iVar2;
        uStack_2d = *(undefined4 *)(puVar1 + 2);
        uStack_29 = *(undefined4 *)(puVar1 + 4);
        uStack_25 = *(undefined4 *)(puVar1 + 6);
        thunk_FUN_0067a020(this_00,auStack_40,(uint)*puVar3);
        uVar5 = uStack_8;
      }
      uStack_8 = uVar5 + 1;
      bVar6 = uStack_8 < *(uint *)(param_1 + 0xc);
    } while ((int)uStack_8 < (int)*(uint *)(param_1 + 0xc));
  }
  return;
}


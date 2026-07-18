
int __thiscall thunk_FUN_0062fa80(void *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined3 extraout_var;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iStack_c;
  int iStack_8;
  
  iVar9 = param_1;
  iStack_c = 0;
  if (param_1 == 0) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x1d5) = *(undefined4 *)(param_1 + 0x14);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1d9) = uVar4;
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x1dd) = uVar5;
  bVar6 = thunk_FUN_004961b0(*(short *)((int)this + 0x1d5),(short)uVar4,(short)uVar5);
  if (CONCAT31(extraout_var,bVar6) != 0) {
    sVar1 = *(short *)((int)this + 0x1d5);
    sVar2 = *(short *)((int)this + 0x1dd);
    sVar3 = *(short *)((int)this + 0x1d9);
    if ((((((sVar1 < 0) || (DAT_007fb240 <= sVar1)) || (sVar3 < 0)) ||
         ((DAT_007fb242 <= sVar3 || (sVar2 < 0)))) ||
        ((DAT_007fb244 <= sVar2 ||
         (*(int *)(DAT_007fb248 + 4 +
                  ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 + (int)sVar1) * 8
                  ) == 0)))) &&
       (iVar7 = thunk_FUN_00495ec0((short)*(undefined4 *)((int)this + 0x1d5),
                                   (short)*(undefined4 *)((int)this + 0x1d9),
                                   (short)*(undefined4 *)((int)this + 0x1dd),1,(int)this),
       iVar7 == 0)) {
      piVar8 = (int *)(param_1 + 0x24);
      *(undefined4 *)((int)this + 0x1e1) = *(undefined4 *)(param_1 + 0x20);
      *(undefined1 *)((int)this + 0x1f9) = *(undefined1 *)(param_1 + 0x38);
      param_1 = 5;
      do {
        if ((*piVar8 != 0) && (iVar7 = thunk_FUN_0062ed90(), -1 < iVar7)) {
          iStack_c = iStack_c + 1;
        }
        piVar8 = piVar8 + 1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      *(undefined4 *)((int)this + 0x1fa) = *(undefined4 *)(iVar9 + 0x39);
      if (iStack_c == 0) {
        return 0;
      }
      iStack_8 = 0x3d;
      puVar10 = (undefined4 *)(iVar9 + 0x3d);
      piVar8 = (int *)((int)this + 0x1e5);
      param_1 = 5;
      do {
        puVar12 = (undefined4 *)*piVar8;
        if (puVar12 != (undefined4 *)0x0) {
          iStack_8 = iStack_8 + 0x3e;
          uVar4 = puVar12[4];
          puVar11 = puVar10;
          for (iVar9 = 0xf; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
          }
          *(undefined2 *)puVar12 = *(undefined2 *)puVar11;
          puVar10 = (undefined4 *)((int)puVar10 + 0x3e);
          *(undefined4 *)(*piVar8 + 0x10) = uVar4;
        }
        piVar8 = piVar8 + 1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      return iStack_8;
    }
  }
  thunk_FUN_0062f900(this);
  return 0;
}


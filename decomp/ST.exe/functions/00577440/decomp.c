
void __fastcall FUN_00577440(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  short sVar5;
  uint uVar6;
  uint *puVar7;
  uint local_8;
  
  iVar2 = FUN_006e4d40(&DAT_00807620,param_1);
  if ((iVar2 == 1) && (DAT_00808784 == 0)) {
    if (*(char *)(param_1 + 0x430) == '\x01') {
      puVar7 = (uint *)(param_1 + 0x20);
      uVar3 = FUN_006e51b0(*(int *)(param_1 + 0x18));
      iVar2 = FUN_00718f40(DAT_0080759c,(undefined4 *)(param_1 + 0x28),0,0x100,10,
                           (int *)(param_1 + 0x24),2,uVar3,puVar7);
      if (iVar2 == -4) {
        FUN_006b0a20(DAT_0080759c,param_1 + 0x28,0,0x100,0);
        *(undefined1 *)(param_1 + 0x430) = 2;
      }
    }
    else if ((*(char *)(param_1 + 0x430) == '\x02') && (*(int *)(param_1 + 0x431) != 0)) {
      iVar2 = FUN_006e51b0(*(int *)(param_1 + 0x18));
      piVar4 = *(int **)(param_1 + 0x431);
      bVar1 = false;
      uVar3 = 0xffffffff;
      local_8 = 0x101;
      if (piVar4 != (int *)0x0) {
        do {
          if (*(uint *)((int)piVar4 + 7) <= (uint)(iVar2 - *(int *)((int)piVar4 + 0xb))) {
            sVar5 = 0;
            *(int *)((int)piVar4 + 0xb) = iVar2;
            if (*(char *)((int)piVar4 + 6) == '\0') {
              *(short *)((int)piVar4 + 0xf) = *(short *)((int)piVar4 + 0xf) + 1;
            }
            else {
              *(short *)((int)piVar4 + 0xf) = *(short *)((int)piVar4 + 0xf) + -1;
            }
            if (*(short *)((int)piVar4 + 0xf) < 0) {
              if (*(char *)((int)piVar4 + 5) == '\0') {
                *(undefined1 *)((int)piVar4 + 6) = 0;
                *(undefined2 *)((int)piVar4 + 0xf) = 0;
              }
              else {
                *(short *)((int)piVar4 + 0xf) = *(short *)((int)piVar4 + 0x11) + -1;
              }
            }
            if (*(short *)((int)piVar4 + 0x11) <= *(short *)((int)piVar4 + 0xf)) {
              if (*(char *)((int)piVar4 + 5) == '\0') {
                *(undefined1 *)((int)piVar4 + 6) = 1;
                sVar5 = *(short *)((int)piVar4 + 0x11) + -1;
              }
              *(short *)((int)piVar4 + 0xf) = sVar5;
            }
            uVar6 = (uint)*(byte *)(piVar4 + 1);
            if (uVar6 < local_8) {
              local_8 = uVar6;
            }
            if ((int)uVar3 < (int)uVar6) {
              uVar3 = uVar6;
            }
            *(undefined1 *)(param_1 + 0x28 + uVar6 * 4) =
                 *(undefined1 *)(*(short *)((int)piVar4 + 0xf) * 3 + 0x13 + (int)piVar4);
            *(undefined1 *)(param_1 + 0x29 + (uint)*(byte *)(piVar4 + 1) * 4) =
                 *(undefined1 *)(*(short *)((int)piVar4 + 0xf) * 3 + 0x14 + (int)piVar4);
            *(undefined1 *)(param_1 + 0x2a + (uint)*(byte *)(piVar4 + 1) * 4) =
                 *(undefined1 *)((int)piVar4 + (*(short *)((int)piVar4 + 0xf) + 7) * 3);
            bVar1 = true;
          }
          piVar4 = (int *)*piVar4;
        } while (piVar4 != (int *)0x0);
        if (bVar1) {
          FUN_006b0a20(DAT_0080759c,param_1 + 0x28 + local_8 * 4,local_8,(uVar3 - local_8) + 1,0);
          SystemClassTy::Life((SystemClassTy *)param_1);
          return;
        }
      }
    }
  }
  SystemClassTy::Life((SystemClassTy *)param_1);
  return;
}


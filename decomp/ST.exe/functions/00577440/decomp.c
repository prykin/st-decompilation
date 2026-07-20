
void __fastcall FUN_00577440(int param_1)

{
  bool bVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  int *piVar5;
  short sVar6;
  uint uVar7;
  uint *puVar8;
  uint local_8;
  
  iVar2 = FUN_006e4d40(&DAT_00807620,param_1);
  if ((iVar2 == 1) && (DAT_00808784 == 0)) {
    if (*(char *)(param_1 + 0x430) == '\x01') {
      puVar8 = (uint *)(param_1 + 0x20);
      DVar3 = FUN_006e51b0(*(int *)(param_1 + 0x18));
      iVar2 = Library::Ourlib::PALETTE::FUN_00718f40
                        (DAT_0080759c,(undefined4 *)(param_1 + 0x28),0,0x100,10,
                         (int *)(param_1 + 0x24),2,DVar3,puVar8);
      if (iVar2 == -4) {
        FUN_006b0a20(DAT_0080759c,param_1 + 0x28,0,0x100,0);
        *(undefined1 *)(param_1 + 0x430) = 2;
      }
    }
    else if ((*(char *)(param_1 + 0x430) == '\x02') && (*(int *)(param_1 + 0x431) != 0)) {
      DVar3 = FUN_006e51b0(*(int *)(param_1 + 0x18));
      piVar5 = *(int **)(param_1 + 0x431);
      bVar1 = false;
      uVar4 = 0xffffffff;
      local_8 = 0x101;
      if (piVar5 != (int *)0x0) {
        do {
          if (*(uint *)((int)piVar5 + 7) <= DVar3 - *(int *)((int)piVar5 + 0xb)) {
            sVar6 = 0;
            *(DWORD *)((int)piVar5 + 0xb) = DVar3;
            if (*(char *)((int)piVar5 + 6) == '\0') {
              *(short *)((int)piVar5 + 0xf) = *(short *)((int)piVar5 + 0xf) + 1;
            }
            else {
              *(short *)((int)piVar5 + 0xf) = *(short *)((int)piVar5 + 0xf) + -1;
            }
            if (*(short *)((int)piVar5 + 0xf) < 0) {
              if (*(char *)((int)piVar5 + 5) == '\0') {
                *(undefined1 *)((int)piVar5 + 6) = 0;
                *(undefined2 *)((int)piVar5 + 0xf) = 0;
              }
              else {
                *(short *)((int)piVar5 + 0xf) = *(short *)((int)piVar5 + 0x11) + -1;
              }
            }
            if (*(short *)((int)piVar5 + 0x11) <= *(short *)((int)piVar5 + 0xf)) {
              if (*(char *)((int)piVar5 + 5) == '\0') {
                *(undefined1 *)((int)piVar5 + 6) = 1;
                sVar6 = *(short *)((int)piVar5 + 0x11) + -1;
              }
              *(short *)((int)piVar5 + 0xf) = sVar6;
            }
            uVar7 = (uint)*(byte *)(piVar5 + 1);
            if (uVar7 < local_8) {
              local_8 = uVar7;
            }
            if ((int)uVar4 < (int)uVar7) {
              uVar4 = uVar7;
            }
            *(undefined1 *)(param_1 + 0x28 + uVar7 * 4) =
                 *(undefined1 *)(*(short *)((int)piVar5 + 0xf) * 3 + 0x13 + (int)piVar5);
            *(undefined1 *)(param_1 + 0x29 + (uint)*(byte *)(piVar5 + 1) * 4) =
                 *(undefined1 *)(*(short *)((int)piVar5 + 0xf) * 3 + 0x14 + (int)piVar5);
            *(undefined1 *)(param_1 + 0x2a + (uint)*(byte *)(piVar5 + 1) * 4) =
                 *(undefined1 *)((int)piVar5 + (*(short *)((int)piVar5 + 0xf) + 7) * 3);
            bVar1 = true;
          }
          piVar5 = (int *)*piVar5;
        } while (piVar5 != (int *)0x0);
        if (bVar1) {
          FUN_006b0a20(DAT_0080759c,param_1 + 0x28 + local_8 * 4,local_8,(uVar4 - local_8) + 1,0);
          SystemClassTy::Life((SystemClassTy *)param_1);
          return;
        }
      }
    }
  }
  SystemClassTy::Life((SystemClassTy *)param_1);
  return;
}


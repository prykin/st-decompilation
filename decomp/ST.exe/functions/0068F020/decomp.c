
void FUN_0068f020(int param_1)

{
  ushort uVar1;
  code *pcVar2;
  void *this;
  int iVar3;
  undefined2 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar7;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 unaff_ESI;
  uint uVar8;
  void *unaff_EDI;
  bool bVar9;
  undefined8 uVar10;
  undefined4 local_50;
  undefined4 local_4c [16];
  uint local_c;
  void *local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar3 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  this = local_8;
  if (iVar3 == 0) {
    if ((param_1 != 0) && (*(int *)(param_1 + 0xc) != 0)) {
      thunk_FUN_0068e950();
      iVar3 = *(int *)((int)this + 0xa5);
      if (0 < *(int *)(iVar3 + 0xc)) {
        bVar9 = *(int *)(iVar3 + 0xc) != 0;
        uVar8 = 0;
        do {
          if (bVar9) {
            iVar3 = *(int *)(iVar3 + 8) * uVar8 + *(int *)(iVar3 + 0x1c);
          }
          else {
            iVar3 = 0;
          }
          if ((iVar3 != 0) && (*(int *)(iVar3 + 4) != 0)) {
            thunk_FUN_00660d40(*(int *)(iVar3 + 4));
          }
          iVar3 = *(int *)((int)this + 0xa5);
          uVar8 = uVar8 + 1;
          bVar9 = uVar8 < *(uint *)(iVar3 + 0xc);
        } while ((int)uVar8 < (int)*(uint *)(iVar3 + 0xc));
      }
      thunk_FUN_00676c40(*(int *)((int)this + 0xbd),&LAB_0040242d);
      local_c = *(uint *)(param_1 + 0xc);
      uVar7 = extraout_EDX;
      while (local_c = local_c - 1, -1 < (int)local_c) {
        if (local_c < *(uint *)(param_1 + 0xc)) {
          puVar4 = (undefined2 *)(*(int *)(param_1 + 8) * local_c + *(int *)(param_1 + 0x1c));
        }
        else {
          puVar4 = (undefined2 *)0x0;
        }
        if (DAT_007fa174 == 0) {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)uVar7 >> 8),
                                                      *(undefined1 *)((int)this + 0x24)),
                                             CONCAT22((short)((uint)puVar4 >> 0x10),*puVar4),1);
          uVar7 = extraout_EDX_00;
        }
        if (piVar5 != (int *)0x0) {
          iVar3 = (**(code **)(*piVar5 + 0x2c))();
          if (iVar3 == 0x78) {
            uVar10 = (**(code **)(*piVar5 + 0x2c))();
            uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
            if ((int)uVar10 == 0x78) {
              iVar3 = *(int *)((int)piVar5 + 0x259);
            }
            else {
              iVar3 = 0;
            }
            if ((iVar3 != 0) &&
               (uVar8 = thunk_FUN_0068e8c0(this,iVar3), uVar7 = extraout_EDX_01, this = local_8,
               -1 < (int)uVar8)) {
              iVar3 = *(int *)((int)local_8 + 0xbd);
              if (uVar8 < *(uint *)(iVar3 + 0xc)) {
                iVar3 = *(int *)(iVar3 + 8) * uVar8 + *(int *)(iVar3 + 0x1c);
              }
              else {
                iVar3 = 0;
              }
              if ((iVar3 != 0) && (-1 < *(int *)(iVar3 + 0x30))) {
                uVar1 = *(ushort *)(iVar3 + 0xc);
                iVar3 = (**(code **)(*piVar5 + 0x2c))();
                if (iVar3 == 0x78) {
                  *(uint *)((int)piVar5 + 0x269) = (uint)uVar1;
                }
                FUN_006b0c70(param_1,local_c);
              }
              FUN_006b0c70(*(int *)((int)local_8 + 0xbd),uVar8);
              uVar7 = extraout_EDX_02;
              this = local_8;
            }
          }
          else {
            uVar8 = thunk_FUN_0068e8c0(this,iVar3);
            uVar7 = extraout_EDX_03;
            if (-1 < (int)uVar8) {
              iVar3 = *(int *)((int)this + 0xbd);
              if (uVar8 < *(uint *)(iVar3 + 0xc)) {
                iVar3 = *(int *)(iVar3 + 8) * uVar8 + *(int *)(iVar3 + 0x1c);
              }
              else {
                iVar3 = 0;
              }
              if ((iVar3 != 0) && (-1 < *(int *)(iVar3 + 0x30))) {
                thunk_FUN_0065d760(piVar5,0);
                FUN_006b0c70(param_1,local_c);
              }
              FUN_006b0c70(*(int *)((int)this + 0xbd),uVar8);
              uVar7 = extraout_EDX_04;
            }
          }
        }
      }
      thunk_FUN_0068ea40();
    }
    DAT_00858df8 = (undefined4 *)local_50;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  iVar6 = FUN_006ad4d0(s_E____titans_ai_ai_tact_cpp_007d56e0,0x242,0,iVar3,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7d56e0,0x243);
  return;
}


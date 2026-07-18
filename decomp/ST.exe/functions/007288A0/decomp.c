
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall FUN_007288a0(void *this,int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  uint *puVar13;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_14;
  int local_10;
  void *local_c;
  int local_8;
  
  iVar10 = (int)*(short *)(DAT_00857110 + 2 + DAT_00857114 * 8);
  param_1 = param_1 + iVar10 * param_2;
  local_14 = *(int *)((int)this + 0x28);
  iVar12 = iVar10 * local_14 + *(int *)((int)this + 0xc);
  local_30 = 1;
  local_10 = iVar10;
  local_c = this;
  local_8 = iVar12;
  iVar5 = FUN_007287e0(&local_30,DAT_00857114);
  if (iVar5 != 0) {
    local_4c = -1;
    iVar5 = FUN_007287e0(&local_4c,DAT_00857114);
    if ((iVar5 != 0) && (iVar10 < *(int *)((int)this + 0x3c))) {
      do {
        if (*(int *)((int)this + 0x34) <= iVar10) {
          iVar5 = local_40 >> 0x10;
          if (*(int *)((int)local_c + 0x38) <= iVar5) {
            iVar5 = *(int *)((int)local_c + 0x38);
          }
          iVar6 = local_24 >> 0x10;
          if (iVar6 < *(int *)((int)local_c + 0x30)) {
            iVar6 = *(int *)((int)local_c + 0x30);
          }
          iVar7 = iVar5 - iVar6;
          this = local_c;
          iVar10 = local_10;
          iVar12 = local_8;
          if (iVar7 != 0 && iVar6 <= iVar5) {
            puVar13 = (uint *)(param_1 + iVar6);
            pbVar11 = (byte *)(local_8 + iVar6);
            uVar8 = 0;
            if (2 < iVar7) {
              uVar8 = (uint)*pbVar11;
              if (((uint)puVar13 & 1) != 0) {
                pbVar11 = pbVar11 + 1;
                *(undefined1 *)puVar13 = *(undefined1 *)(param_3 + uVar8);
                puVar13 = (uint *)((int)puVar13 + 1);
                iVar7 = iVar7 + -1;
                uVar8 = (uint)*pbVar11;
              }
              if (((uint)puVar13 & 2) != 0) {
                pbVar1 = pbVar11 + 1;
                pbVar11 = pbVar11 + 2;
                iVar7 = iVar7 + -2;
                *(ushort *)puVar13 =
                     CONCAT11(*(undefined1 *)(param_3 + (uint)*pbVar1),
                              *(undefined1 *)(param_3 + uVar8));
                uVar8 = (uint)*pbVar11;
                puVar13 = (uint *)((int)puVar13 + 2);
              }
              while (3 < iVar7) {
                pbVar1 = pbVar11 + 2;
                uVar9 = CONCAT11(*(undefined1 *)(param_3 + (uint)pbVar11[1]),
                                 *(undefined1 *)(param_3 + uVar8));
                pbVar2 = pbVar11 + 3;
                pbVar11 = pbVar11 + 4;
                *puVar13 = (uint)uVar9 |
                           CONCAT22(uVar9,CONCAT11(*(undefined1 *)(param_3 + (uint)*pbVar2),
                                                   *(undefined1 *)(param_3 + (uint)*pbVar1))) <<
                           0x10;
                uVar8 = (uint)*pbVar11;
                puVar13 = puVar13 + 1;
                iVar7 = iVar7 + -4;
              }
              if (iVar7 == 0) goto LAB_00728a04;
            }
            bVar3 = pbVar11[1];
            *(undefined1 *)puVar13 = *(undefined1 *)(param_3 + uVar8);
            if (iVar7 != 1) {
              bVar4 = pbVar11[2];
              *(undefined1 *)((int)puVar13 + 1) = *(undefined1 *)(param_3 + (uint)bVar3);
              if (iVar7 != 2) {
                *(undefined1 *)((int)puVar13 + 2) = *(undefined1 *)(param_3 + (uint)bVar4);
              }
            }
          }
        }
LAB_00728a04:
        local_2c = local_2c + -1;
        if (local_2c == 0) {
          iVar5 = FUN_007287e0(&local_30,local_28);
          if (iVar5 == 0) {
            return;
          }
        }
        else {
          local_24 = local_24 + local_20;
        }
        local_48 = local_48 + -1;
        if (local_48 == 0) {
          iVar5 = FUN_007287e0(&local_4c,local_44);
          if (iVar5 == 0) {
            return;
          }
        }
        else {
          local_40 = local_40 + local_3c;
        }
        param_1 = param_1 + param_2;
        iVar10 = iVar10 + 1;
        iVar12 = iVar12 + local_14;
        local_10 = iVar10;
        local_8 = iVar12;
      } while (iVar10 < *(int *)((int)this + 0x3c));
    }
  }
  return;
}


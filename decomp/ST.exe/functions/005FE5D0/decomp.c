
bool __thiscall FUN_005fe5d0(void *this,int param_1,undefined2 *param_2,int param_3)

{
  short *psVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  int local_28;
  int local_24;
  int local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = 1;
  local_8 = 0;
  if (*(int *)((int)this + 0x233) == 0) {
    return false;
  }
  psVar1 = (short *)(param_1 * 0x52 + *(int *)((int)this + 0x233));
  if (*(int *)(psVar1 + 0x27) != 0) {
    FUN_006ab060((undefined4 *)(psVar1 + 0x27));
  }
  iVar3 = FUN_006aac70(600);
  *(int *)(psVar1 + 0x27) = iVar3;
  psVar1[0x23] = 0;
  psVar1[0x24] = 0;
  psVar1[0x25] = 0;
  psVar1[0x26] = 0;
  local_20 = -1;
  local_24 = -1;
  local_28 = -1;
  do {
    if (local_8 == 0) {
      local_8 = 1;
      **(undefined2 **)(psVar1 + 0x27) = *param_2;
      *(undefined2 *)(*(int *)(psVar1 + 0x27) + 2) = param_2[1];
      *(undefined2 *)(*(int *)(psVar1 + 0x27) + 4) = param_2[2];
    }
    else {
      iVar3 = thunk_FUN_005fe280(psVar1,local_8,&local_10,&local_14,&local_18);
      if (iVar3 != 0) {
        if (local_18 <= *(short *)(param_3 + 4)) {
          local_c = 0;
        }
        sVar8 = (short)(local_10 >> 0x1f);
        if (local_10 < 0) {
          iVar3 = (short)(((short)(local_10 / 0xc9) + sVar8) -
                         (short)((longlong)local_10 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar3 = (int)(short)(((short)(local_10 / 0xc9) + sVar8) -
                              (short)((longlong)local_10 * 0x28c1979 >> 0x3f));
        }
        sVar8 = (short)(local_14 >> 0x1f);
        if (local_14 < 0) {
          iVar7 = (short)(((short)(local_14 / 0xc9) + sVar8) -
                         (short)((longlong)local_14 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar7 = (int)(short)(((short)(local_14 / 0xc9) + sVar8) -
                              (short)((longlong)local_14 * 0x28c1979 >> 0x3f));
        }
        sVar8 = (short)(local_18 >> 0x1f);
        if (local_18 < 0) {
          iVar6 = (short)(((short)(local_18 / 200) + sVar8) -
                         (short)((longlong)local_18 * 0x51eb851f >> 0x3f)) + -1;
        }
        else {
          iVar6 = (int)(short)(((short)(local_18 / 200) + sVar8) -
                              (short)((longlong)local_18 * 0x51eb851f >> 0x3f));
        }
        if ((((iVar3 < 0) || (DAT_007fb240 <= iVar3)) || (iVar7 < 0)) ||
           (((DAT_007fb242 <= iVar7 || (iVar6 < 0)) || (DAT_007fb244 <= iVar6)))) {
          local_8 = local_8 + -1;
          if (local_8 < 1) {
            thunk_FUN_005fd6a0(this);
            return false;
          }
          goto LAB_005fe866;
        }
        if (((iVar3 != local_20) || (iVar7 != local_24)) || (iVar6 != local_28)) {
          sVar8 = (short)iVar3;
          sVar9 = (short)iVar7;
          sVar10 = (short)iVar6;
          bVar2 = thunk_FUN_004961b0(sVar8,sVar9,sVar10);
          local_28 = iVar6;
          local_24 = iVar7;
          local_20 = iVar3;
          if ((CONCAT31(extraout_var,bVar2) == 0) &&
             ((((((-1 < sVar8 && (sVar8 < DAT_007fb240)) && (-1 < sVar9)) &&
                ((sVar9 < DAT_007fb242 && (-1 < sVar10)))) &&
               ((sVar10 < DAT_007fb244 &&
                (*(int *)(DAT_007fb248 +
                         ((int)DAT_007fb246 * (int)sVar10 + (int)DAT_007fb240 * (int)sVar9 +
                         (int)sVar8) * 8) != 0)))) ||
              (uVar4 = thunk_FUN_00496250(local_10,local_14,local_18), -1 < (int)uVar4)))) {
            local_c = 0;
          }
        }
        piVar5 = (int *)(psVar1 + 0x27);
        iVar3 = local_8 * 6;
        local_8 = local_8 + 1;
        *(undefined2 *)(*piVar5 + iVar3) = (undefined2)local_10;
        *(undefined2 *)(*piVar5 + 2 + iVar3) = (undefined2)local_14;
        *(undefined2 *)(*piVar5 + 4 + iVar3) = (undefined2)local_18;
        if (99 < local_8) {
          local_c = 0;
          goto LAB_005fe866;
        }
      }
    }
    if (local_c == 0) {
LAB_005fe866:
      *(undefined4 *)(param_1 * 0x52 + 0x35 + *(int *)((int)this + 0x233)) =
           *(undefined4 *)(DAT_00802a38 + 0xe4);
      if (local_8 != 0) {
        *(int *)(psVar1 + 0x23) = local_8;
      }
      return local_c == 0;
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall FUN_00727da0(void *this,int param_1,uint param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar3;
  uint extraout_ECX;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  int *piVar12;
  undefined2 *puVar13;
  int local_60;
  int local_5c;
  int local_58;
  int local_44;
  int local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  void *local_8;
  
  iVar6 = *(int *)(param_1 + 0x28) + param_2 * 0x1c;
  puVar5 = (undefined4 *)
           ((uint)*(byte *)(*(int *)(param_1 + 0x28) + 1 + param_2 * 0x1c) * 0x10 + param_3);
  DAT_008570a8 = *puVar5;
  DAT_008570ac = puVar5[1];
  DAT_008570b0 = puVar5[2];
  _DAT_008570b4 = puVar5[3];
  puVar5 = (undefined4 *)((uint)*(byte *)(iVar6 + 2) * 0x10 + param_3);
  DAT_008570b8 = *puVar5;
  DAT_008570bc = puVar5[1];
  DAT_008570c0 = puVar5[2];
  _DAT_008570c4 = puVar5[3];
  puVar5 = (undefined4 *)((uint)*(byte *)(iVar6 + 3) * 0x10 + param_3);
  DAT_008570c8 = *puVar5;
  DAT_008570cc = puVar5[1];
  DAT_008570d0 = puVar5[2];
  _DAT_008570d4 = puVar5[3];
  iVar6 = *(int *)((int)this + 0x124);
  if (iVar6 == 2) {
    _DAT_008570f8 = (uint)*(byte *)(*(short *)(param_1 + 8) + 0x438 + (int)this);
  }
  else if (iVar6 == 6) {
    _DAT_008570f8 = param_2;
    DAT_008570a0 = '\x01' << ((byte)(*(int *)((int)this + 0xa8) << 1) & 0x1f);
    DAT_008570d8 = *(int *)(param_1 + 0x3c);
    DAT_00857078 = (int)(*(int *)((int)this + 0x2e4) + (*(int *)((int)this + 0x2e4) >> 0x1f & 3U))
                   >> 2;
    if (DAT_00857078 < 0x20000) {
      DAT_00857078 = 0x20000;
    }
  }
  else {
    _DAT_008570f8 = (iVar6 != 3) + 0xfe;
  }
  uVar3 = 0;
  iVar8 = -0x80000000;
  param_2 = 0;
  iVar6 = 0x7fff0000;
  param_1 = -0x80000000;
  piVar12 = &DAT_008570ac;
  do {
    iVar7 = *piVar12;
    if (iVar7 < iVar6) {
      iVar6 = iVar7;
      iVar8 = param_1;
      param_2 = uVar3;
    }
    if (iVar8 < iVar7) {
      iVar8 = iVar7;
      DAT_00857070 = uVar3;
      param_1 = iVar7;
    }
    piVar12 = piVar12 + 4;
    uVar3 = uVar3 + 1;
  } while ((int)piVar12 < 0x8570dc);
  if (iVar6 < iVar8) {
    DAT_00857098 = iVar6 >> 0x10;
    local_34 = -1;
    local_8 = this;
    iVar6 = FUN_00727c80(&local_34,param_2);
    if (iVar6 != 0) {
      local_60 = 1;
      iVar6 = FUN_00727c80(&local_60,param_2);
      if (iVar6 != 0) {
        if (*(int *)((int)this + 0x124) == 6) {
          iVar6 = *(int *)((int)this + 0x28) * DAT_00857098;
          param_1 = *(int *)((int)this + 0xc) + iVar6;
          param_2 = *(int *)((int)this + 0x14) + iVar6 * 2;
          if (DAT_00857098 < *(int *)((int)this + 0x3c)) {
            do {
              iVar6 = local_18;
              if (*(int *)((int)this + 0x34) <= DAT_00857098) {
                uVar3 = local_10 & 0xffff0000;
                uVar9 = (local_3c & 0xffff0000) - uVar3;
                this = local_8;
                if (uVar9 != 0 && (int)uVar3 <= (int)(local_3c & 0xffff0000)) {
                  DAT_00857068 = (local_44 - local_18) / (int)(uVar9 >> 0x10);
                  uVar9 = local_3c & 0xffff0000;
                  if ((int)DAT_0085705c <= (int)(local_3c & 0xffff0000)) {
                    uVar9 = DAT_0085705c;
                  }
                  if ((int)uVar3 < (int)DAT_008570dc) {
                    uVar3 = FUN_006db5f0(DAT_00857068,DAT_008570dc - uVar3);
                    iVar6 = iVar6 + uVar3;
                    uVar9 = extraout_ECX;
                    uVar3 = DAT_008570dc;
                  }
                  iVar8 = DAT_008570d8;
                  bVar1 = DAT_008570a0;
                  this = local_8;
                  if (uVar9 - uVar3 != 0 && (int)uVar3 <= (int)uVar9) {
                    uVar9 = uVar9 - uVar3 >> 0x10;
                    pbVar10 = (byte *)(param_1 + (uVar3 >> 0x10));
                    uVar4 = uVar9;
                    pbVar11 = pbVar10;
                    puVar13 = (undefined2 *)((uVar3 >> 0x10) * 2 + param_2);
                    do {
                      if ((*pbVar11 != 0xff) && (DAT_00857078 < *(int *)(puVar13 + -1) - iVar6)) {
                        *(byte *)(iVar8 + (uint)*pbVar11) =
                             *(byte *)(iVar8 + (uint)*pbVar11) | bVar1;
                      }
                      iVar7 = iVar6 + DAT_00857068;
                      pbVar11 = pbVar11 + 1;
                      *puVar13 = (short)((uint)iVar6 >> 0x10);
                      uVar3 = uVar4 - 1;
                      bVar2 = 0 < (int)uVar4;
                      uVar4 = uVar3;
                      iVar6 = iVar7;
                      puVar13 = puVar13 + 1;
                    } while (uVar3 != 0 && bVar2);
                    bVar1 = DAT_008570f8;
                    do {
                      *pbVar10 = bVar1;
                      pbVar10 = pbVar10 + 1;
                      uVar3 = uVar9 - 1;
                      bVar2 = 0 < (int)uVar9;
                      uVar9 = uVar3;
                    } while (uVar3 != 0 && bVar2);
                  }
                }
              }
              local_30 = local_30 + -1;
              if (local_30 == 0) {
                iVar6 = FUN_00727c80(&local_34,local_2c);
                if (iVar6 == 0) {
                  return;
                }
              }
              else {
                local_10 = local_10 + local_c;
                local_18 = local_18 + local_14;
              }
              local_5c = local_5c + -1;
              if (local_5c == 0) {
                iVar6 = FUN_00727c80(&local_60,local_58);
                if (iVar6 == 0) {
                  return;
                }
              }
              else {
                local_3c = local_3c + local_38;
                local_44 = local_44 + local_40;
              }
              DAT_00857098 = DAT_00857098 + 1;
              param_1 = param_1 + *(int *)((int)this + 0x28);
              param_2 = param_2 + *(int *)((int)this + 0x28) * 2;
            } while (DAT_00857098 < *(int *)((int)this + 0x3c));
            return;
          }
        }
        else if (DAT_00857098 < *(int *)((int)this + 0x3c)) {
          do {
            if (*(int *)((int)this + 0x34) <= DAT_00857098) {
              FUN_00728170((int)&local_34,(int)&local_60);
            }
            bVar2 = FUN_00727d50(&local_34);
          } while (((CONCAT31(extraout_var,bVar2) != 0) &&
                   (bVar2 = FUN_00727d50(&local_60), CONCAT31(extraout_var_00,bVar2) != 0)) &&
                  (DAT_00857098 = DAT_00857098 + 1, DAT_00857098 < *(int *)((int)this + 0x3c)));
        }
      }
    }
  }
  return;
}


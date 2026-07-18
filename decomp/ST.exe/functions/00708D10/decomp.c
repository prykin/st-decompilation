
void __thiscall
FUN_00708d10(void *this,int param_1,int param_2,byte *param_3,int param_4,int param_5,uint param_6,
            int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  ushort *puVar8;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint *local_20;
  int local_1c;
  uint local_18;
  void *local_14;
  uint local_10;
  uint local_c;
  byte *local_8;
  
  local_1c = 0;
  if (param_8 != 0) {
    iVar6 = *(int *)((int)this + 0x278);
    iVar1 = (int)((param_6 - *(int *)((int)this + 0x16c)) * iVar6) /
            (*(int *)((int)this + 0x170) - *(int *)((int)this + 0x16c));
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    else if (iVar6 <= iVar1) {
      iVar1 = iVar6 + -1;
    }
    local_1c = *(int *)((int)this + 0x27c) + iVar1 * 0x100;
  }
  local_68 = *(int *)((int)this + 0x30);
  local_64 = *(int *)((int)this + 0x34);
  local_60 = *(int *)((int)this + 0x38) - local_68;
  local_5c = *(int *)((int)this + 0x3c) - local_64;
  local_10 = (uint)*(short *)(param_3 + 0x12);
  DAT_00857008 = 1;
  DAT_00856fc8 = 1;
  iVar1 = *(int *)((int)this + 0x2f0);
  if (iVar1 != 100) {
    if (iVar1 == 0x43) {
      DAT_00857008 = 3;
    }
    else {
      if (iVar1 != 0x28) goto LAB_00708dda;
      DAT_00857008 = 5;
    }
    DAT_00856fc8 = 2;
  }
LAB_00708dda:
  local_34 = (int)*(short *)(param_3 + 0x10);
  if (param_7 == 0) {
    local_28 = (int)*(short *)(param_3 + 0x14);
  }
  else {
    local_28 = (*(short *)(param_3 + 0x14) + 1) / 2;
  }
  local_30 = 0;
  local_14 = this;
  while( true ) {
    if (local_30 == 1) {
      param_6 = param_6 + param_7;
    }
    if (DAT_00856fc8 == DAT_00857008) {
      local_48 = (int)*(short *)(param_3 + 0xe);
      local_40 = (int)*(short *)(param_3 + 0x12);
      local_3c = local_28;
      local_44 = local_34;
    }
    else {
      local_18 = local_34 % DAT_00857008;
      local_2c = (local_34 + local_28) % DAT_00857008;
      local_c = (int)*(short *)(param_3 + 0xe) % DAT_00857008;
      local_24 = (int)*(short *)(param_3 + 0xe) + (int)*(short *)(param_3 + 0x12);
      iVar6 = local_24 % DAT_00857008;
      uVar4 = local_18;
      uVar5 = local_c;
      iVar1 = local_2c;
      if (DAT_00857008 != 5) {
        iVar6 = iVar6 + 1;
        uVar4 = local_18 + 1;
        uVar5 = local_c + 1;
        iVar1 = local_2c + 1;
      }
      local_3c = ((local_34 + local_28) / DAT_00857008) * 2 + (iVar1 >> 1);
      local_40 = (local_24 / DAT_00857008) * 2 + (iVar6 >> 1);
      local_48 = ((int)*(short *)(param_3 + 0xe) / DAT_00857008) * 2 + ((int)uVar5 >> 1);
      local_44 = (local_34 / DAT_00857008) * 2 + ((int)uVar4 >> 1);
      local_40 = local_40 - local_48;
      local_3c = local_3c - local_44;
    }
    local_44 = local_44 + param_5;
    local_48 = local_48 + param_4;
    iVar1 = FUN_006b0460(&local_58,&local_48,&local_68);
    if (iVar1 != 0) {
      local_24 = 1;
      iVar6 = (local_58 - *(int *)((int)this + 0x2c8)) / *(int *)((int)this + 0x2c0);
      local_2c = (int)((local_50 - *(int *)((int)this + 0x2c8)) + -1 + local_58) /
                 *(int *)((int)this + 0x2c0);
      iVar2 = (local_54 - *(int *)((int)this + 0x2cc)) / *(int *)((int)this + 0x2c4);
      iVar3 = ((local_4c - *(int *)((int)this + 0x2cc)) + -1 + local_54) /
              *(int *)((int)this + 0x2c4);
      iVar1 = *(int *)((int)this + 0x2b0) + *(int *)((int)this + 0x2b8) * iVar2 * 2;
      if (iVar2 <= iVar3) {
        local_18 = (iVar3 - iVar2) + 1;
        do {
          if (iVar6 <= local_2c) {
            puVar8 = (ushort *)(iVar1 + iVar6 * 2);
            iVar2 = (local_2c - iVar6) + 1;
            do {
              if ((int)(uint)*puVar8 < (int)param_6) {
                local_24 = 0;
              }
              puVar8 = puVar8 + 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          iVar1 = iVar1 + *(int *)((int)this + 0x2b8) * 2;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
      pbVar7 = (byte *)(local_54 * param_2 + local_58 + param_1);
      local_20 = (uint *)(*(int *)((int)this + 0x14) +
                         (*(int *)((int)this + 0x28) * local_54 + local_58) * 2);
      local_18 = local_58 - local_48;
      if (DAT_00856fc8 == DAT_00857008) {
        iVar1 = (local_54 - *(short *)(param_3 + 0x10)) - param_5;
        if (iVar1 < 1) {
          local_8 = param_3 + (param_3[0xd] >> 1 & 0xe) + 0x16;
        }
        else {
          local_8 = FUN_006cfe10(param_3,iVar1);
        }
        if (param_8 == 0) {
          if (local_50 == local_10) {
            if (local_24 == 0) {
              FUN_006f4e70(pbVar7,param_2,local_20,*(int *)((int)this + 0x28) << 1,param_6,local_8,
                           local_50,local_4c);
            }
            else {
              FUN_006d25e0(pbVar7,param_2,local_8,local_50,local_4c);
            }
          }
          else if (local_24 == 0) {
            FUN_006f5240(pbVar7,param_2,local_20,*(int *)((int)this + 0x28) << 1,param_6,local_8,
                         local_10,local_18,local_50,local_4c);
          }
          else {
            FUN_006d26d0(pbVar7,param_2,local_8,local_10,local_18,local_50,local_4c);
          }
        }
        else if (local_50 == local_10) {
          if (local_24 == 0) {
            FUN_006f5c60(pbVar7,param_2,pbVar7,param_2,(ushort *)local_20,
                         *(int *)((int)this + 0x28) << 1,param_6,local_8,local_50,local_4c,local_1c)
            ;
          }
          else {
            FUN_006f85a0(pbVar7,param_2,pbVar7,param_2,local_8,local_50,local_4c,local_1c);
          }
        }
        else if (local_24 == 0) {
          FUN_006f7d10(pbVar7,param_2,pbVar7,param_2,(ushort *)local_20,
                       *(int *)((int)this + 0x28) << 1,param_6,local_8,local_10,local_18,local_50,
                       local_4c,local_1c);
        }
        else {
          FUN_006f88a0(pbVar7,param_2,pbVar7,param_2,local_8,local_10,local_18,local_50,local_4c,
                       local_1c);
        }
      }
      else {
        uVar4 = (local_50 - param_4) + local_58;
        if (DAT_00857008 == 3) {
          uVar5 = uVar4 & 1;
        }
        else {
          uVar5 = (-(uint)((uVar4 & 1) != 0) & 3) - 1;
        }
        iVar1 = ((int)uVar4 / 2) * DAT_00857008 + (uVar5 - (int)*(short *)(param_3 + 0xe));
        uVar4 = local_58 - param_4;
        if (DAT_00857008 == 3) {
          local_c = (uVar4 & 1) << 1;
        }
        else {
          local_c = (uVar4 & 1) << 1 | 1;
        }
        local_38 = ((int)uVar4 / 2) * DAT_00857008 + (local_c - (int)*(short *)(param_3 + 0xe));
        uVar4 = (local_4c - param_5) + local_54;
        if (DAT_00857008 == 3) {
          uVar5 = uVar4 & 1;
        }
        else {
          uVar5 = (-(uint)((uVar4 & 1) != 0) & 3) - 1;
        }
        iVar6 = ((int)uVar4 / 2) * DAT_00857008 + (uVar5 - (int)*(short *)(param_3 + 0x10));
        uVar4 = local_54 - param_5;
        if (DAT_00857008 == 3) {
          local_18 = (uVar4 & 1) << 1;
        }
        else {
          local_18 = (uVar4 & 1) << 1 | 1;
        }
        local_2c = ((int)uVar4 / 2) * DAT_00857008 + (local_18 - (int)*(short *)(param_3 + 0x10));
        if (local_2c < 1) {
          local_8 = param_3 + (param_3[0xd] >> 1 & 0xe) + 0x16;
        }
        else {
          local_8 = FUN_006cfe10(param_3,local_2c);
        }
        if (param_8 == 0) {
          if (local_24 == 0) {
            if (DAT_00857008 == 3) {
              FUN_006f8ab0(pbVar7,param_2,(ushort *)local_20,*(int *)((int)local_14 + 0x28) << 1,
                           param_6,local_8,local_10,local_38,iVar1 - local_38,iVar6 - local_2c,
                           local_c,local_18);
              this = local_14;
            }
            else {
              FUN_006f94d0(pbVar7,param_2,(ushort *)local_20,*(int *)((int)local_14 + 0x28) << 1,
                           param_6,local_8,local_10,local_38,iVar1 - local_38,iVar6 - local_2c,
                           local_c,local_18);
              this = local_14;
            }
          }
          else if (DAT_00857008 == 3) {
            FUN_00704e70(pbVar7,param_2,local_8,local_10,local_38,iVar1 - local_38,iVar6 - local_2c,
                         local_c,local_18);
            this = local_14;
          }
          else {
            FUN_00705180(pbVar7,param_2,local_8,local_10,local_38,iVar1 - local_38,iVar6 - local_2c,
                         local_c,local_18);
            this = local_14;
          }
        }
        else if (local_24 == 0) {
          if (DAT_00857008 == 3) {
            FUN_00702510(pbVar7,param_2,pbVar7,param_2,(ushort *)local_20,
                         *(int *)((int)local_14 + 0x28) << 1,param_6,local_8,local_10,local_38,
                         iVar1 - local_38,iVar6 - local_2c,local_c,local_18,local_1c);
            this = local_14;
          }
          else {
            FUN_00702a30(pbVar7,param_2,pbVar7,param_2,(ushort *)local_20,
                         *(int *)((int)local_14 + 0x28) << 1,param_6,local_8,local_10,local_38,
                         iVar1 - local_38,iVar6 - local_2c,local_c,local_18,local_1c);
            this = local_14;
          }
        }
        else if (DAT_00857008 == 3) {
          FUN_00705ed0(pbVar7,param_2,pbVar7,param_2,local_8,local_10,local_38,iVar1 - local_38,
                       iVar6 - local_2c,local_c,local_18,local_1c);
          this = local_14;
        }
        else {
          FUN_00706340(pbVar7,param_2,pbVar7,param_2,local_8,local_10,local_38,iVar1 - local_38,
                       iVar6 - local_2c,local_c,local_18,local_1c);
          this = local_14;
        }
      }
    }
    if ((param_7 == 0) || (local_30 != 0)) break;
    local_34 = local_34 + local_28;
    local_28 = *(short *)(param_3 + 0x14) - local_28;
    local_30 = 1;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_007282b0(void *this,AnonShape_007282B0_AFD740A9 *param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_60;
  int local_5c;
  int local_58;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_10;
  int local_c;
  void *local_8;
  
  pbVar1 = (byte *)(param_1->field_0028 + param_2 * 0x1c);
  puVar3 = (undefined4 *)((uint)pbVar1[1] * 0x10 + param_3);
  DAT_008570a8 = *puVar3;
  DAT_008570ac = puVar3[1];
  DAT_008570b0 = puVar3[2];
  _DAT_008570b4 = puVar3[3];
  puVar3 = (undefined4 *)((uint)pbVar1[2] * 0x10 + param_3);
  DAT_008570b8 = *puVar3;
  DAT_008570bc = puVar3[1];
  DAT_008570c0 = puVar3[2];
  _DAT_008570c4 = puVar3[3];
  puVar3 = (undefined4 *)((uint)pbVar1[3] * 0x10 + param_3);
  DAT_008570c8 = *puVar3;
  DAT_008570cc = puVar3[1];
  DAT_008570d0 = puVar3[2];
  _DAT_008570d4 = puVar3[3];
  if ((*(byte *)(param_1->field_003C + param_2) & DAT_0085706c) == 0) {
    _DAT_008570f8 = 0xff;
  }
  else {
    _DAT_008570f8 = (int)param_1->field_0008 << 1;
    if ((*pbVar1 & 0x20) == 0) {
      _DAT_008570f8 = ((int)param_1->field_0008 - (uint)param_1->field_0048) * 2 + 1;
      if ((*(byte *)(param_1->field_003C + param_2) & DAT_00857058) == 0) {
        _DAT_008570f8 = _DAT_008570f8 | 0x80;
      }
      else {
        _DAT_008570f8 = _DAT_008570f8 | (param_2 & 3) << 4;
      }
      iVar4 = param_1->field_0020;
      fVar2 = *(float *)(iVar4 + (uint)pbVar1[1] * 0xc);
      if (*(float *)(iVar4 + (uint)pbVar1[2] * 0xc) < fVar2) {
        fVar2 = *(float *)(iVar4 + (uint)pbVar1[2] * 0xc);
      }
      if (*(float *)(iVar4 + (uint)pbVar1[3] * 0xc) < fVar2) {
        fVar2 = *(float *)(iVar4 + (uint)pbVar1[3] * 0xc);
      }
      if (_DAT_007904f8 < fVar2) {
        _DAT_008570f8 = _DAT_008570f8 | 0x40;
      }
    }
    else {
      if ((param_1->field_0048 != 0) &&
         ((double)*(float *)(param_1->field_0020 + 8 + (uint)pbVar1[1] * 0xc) <=
          -(*(double *)((int)this + 0xd0) * _DAT_007901c0))) {
        _DAT_008570f8 = ((int)param_1->field_0008 - (uint)param_1->field_0048) * 2;
      }
      if ((*(byte *)(param_1->field_003C + param_2) & DAT_00857058) == 0) {
        _DAT_008570f8 = _DAT_008570f8 | 0x80;
      }
    }
  }
  iVar4 = DAT_008570cc;
  iVar5 = DAT_008570cc;
  if (DAT_008570bc < DAT_008570ac) {
    if (DAT_008570cc < DAT_008570bc) {
      iVar6 = 2;
    }
    else {
      iVar6 = 1;
      iVar4 = DAT_008570bc;
      if (DAT_008570ac <= DAT_008570cc) {
        DAT_00857070 = 2;
        goto LAB_007284f0;
      }
    }
    DAT_00857070 = 0;
    iVar5 = DAT_008570ac;
  }
  else {
    if (DAT_008570cc < DAT_008570ac) {
      iVar6 = 2;
    }
    else {
      iVar6 = 0;
      iVar4 = DAT_008570ac;
      if (DAT_008570bc <= DAT_008570cc) {
        DAT_00857070 = 2;
        goto LAB_007284f0;
      }
    }
    DAT_00857070 = 1;
    iVar5 = DAT_008570bc;
  }
LAB_007284f0:
  if (iVar4 < iVar5) {
    DAT_00857098 = iVar4 >> 0x10;
    local_34 = -1;
    local_8 = this;
    iVar4 = FUN_00727c80(&local_34,iVar6);
    if (iVar4 != 0) {
      local_60 = 1;
      iVar4 = FUN_00727c80(&local_60,iVar6);
      if ((iVar4 != 0) && (DAT_00857098 < *(int *)((int)this + 0x3c))) {
        do {
          if (*(int *)((int)this + 0x34) <= DAT_00857098) {
            FUN_007285d0((int)&local_34,(int)&local_60);
          }
          local_30 = local_30 + -1;
          if (local_30 < 1) {
            iVar4 = FUN_00727c80(&local_34,local_2c);
            if (iVar4 == 0) {
              return;
            }
          }
          else {
            local_10 = local_10 + local_c;
          }
          local_5c = local_5c + -1;
          if (local_5c < 1) {
            iVar4 = FUN_00727c80(&local_60,local_58);
            if (iVar4 == 0) {
              return;
            }
          }
          else {
            local_3c = local_3c + local_38;
          }
          DAT_00857098 = DAT_00857098 + 1;
        } while (DAT_00857098 < *(int *)((int)this + 0x3c));
      }
    }
  }
  return;
}


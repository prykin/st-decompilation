
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0052afe0(void *this,byte param_1,float param_2,float param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  longlong lVar9;
  int local_30 [8];
  float local_10;
  float local_c;
  float local_8;
  
  local_30[5] = 2;
  local_30[6] = 2;
  iVar8 = 0;
  local_30[0] = 1;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 1;
  local_30[4] = 1;
  local_30[7] = 1;
  if (param_2 < _DAT_0079034c) {
    lVar9 = __ftol();
    iVar5 = (short)lVar9 + -1;
  }
  else {
    lVar9 = __ftol();
    iVar5 = (int)(short)lVar9;
  }
  bVar1 = param_3 < _DAT_0079034c;
  *(int *)((int)this + 0x237) = iVar5;
  if (bVar1) {
    lVar9 = __ftol();
    iVar5 = (short)lVar9 + -1;
  }
  else {
    lVar9 = __ftol();
    iVar5 = (int)(short)lVar9;
  }
  *(int *)((int)this + 0x23b) = iVar5;
  if (*(int *)((int)this + 0xdb3) == 0) {
    iVar5 = 0;
    piVar7 = local_30;
    local_c = (float)(int)*DAT_00806750 * _DAT_007904f8;
    local_10 = (float)(int)DAT_00806750[1] * _DAT_007904f8;
    fVar2 = _DAT_0079034c;
    do {
      fVar3 = param_3 - (float)piVar7[1] * (float)(int)DAT_00806750[1] * _DAT_007904f8 *
                        _DAT_00790784;
      fVar4 = param_2 - (float)*piVar7 * (float)(int)*DAT_00806750 * _DAT_007904f8 * _DAT_00790784;
      local_8 = fVar4 * fVar4 + fVar3 * fVar3;
      if (fVar2 < local_8) {
        iVar8 = iVar5;
        fVar2 = local_8;
      }
      iVar5 = iVar5 + 1;
      piVar7 = piVar7 + 2;
    } while (iVar5 < 4);
    if (fVar2 != _DAT_0079034c) {
      puVar6 = FUN_006e6460(DAT_00807598,(int)this + (uint)param_1 * 4 + 0xdb7,1,0x97,0x96,0,1);
      iVar5 = local_30[iVar8 * 2];
      *(undefined4 **)((int)this + 0xdb3) = puVar6;
      *(byte *)((int)this + 0xdcc) = param_1;
      *(undefined1 *)((int)this + 0xdc7) = 1;
      *(undefined4 *)((int)this + 0xdc8) = 0;
      *(undefined1 *)((int)this + 0xdcd) = 0;
      local_8 = (float)iVar5 * local_c * (float)_DAT_007901c0;
      iVar8 = local_30[iVar8 * 2 + 1];
      *(float *)((int)this + 0xdd6) = local_8;
      *(float *)((int)this + 0xdce) = param_2;
      fVar2 = (float)iVar8 * local_10 * (float)_DAT_007901c0;
      *(float *)((int)this + 0xdda) = fVar2;
      fVar3 = (float)_DAT_0079acd8;
      *(float *)((int)this + 0xdd2) = param_3;
      fVar3 = (param_2 - local_8) * fVar3 * (float)_DAT_0079acc8;
      *(float *)((int)this + 0xdde) = fVar3;
      *(float *)((int)this + 0xde6) = fVar3 * _DAT_0079acc0;
      fVar3 = (param_3 - fVar2) * _DAT_0079acbc;
      *(float *)((int)this + 0xde2) = fVar3;
      *(float *)((int)this + 0xdea) = fVar3 * _DAT_0079acb8;
      FUN_006e6540((int)puVar6,local_8,fVar2,-1);
      thunk_FUN_005252c0((*(char *)((int)this + 0xdcc) != '\0') + 0xb8);
      return;
    }
  }
  else {
    FUN_006e65c0(DAT_00807598,*(undefined4 *)((int)this + (uint)param_1 * 4 + 0xdbf),
                 (char)*(undefined2 *)(*(int *)((int)this + (uint)param_1 * 4 + 0x9c8) + 0x23),
                 param_2,param_3,5,5,1);
    thunk_FUN_005252c0((param_1 != 0) + 0xb6);
  }
  return;
}


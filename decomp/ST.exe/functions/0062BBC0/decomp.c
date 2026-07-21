
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __cdecl
FUN_0062bbc0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,undefined4 param_9,undefined4 param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  AnonShape_0062BBC0_87279CD5 *pAVar7;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  AnonShape_0062BBC0_87279CD5 *local_8;

  local_8 = (AnonShape_0062BBC0_87279CD5 *)Library::DKW::LIB::FUN_006aac70(0x6d);
  pAVar7 = local_8;
  for (iVar6 = 0x1b; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(int *)pAVar7 = 0;
    pAVar7 = (AnonShape_0062BBC0_87279CD5 *)&pAVar7->field_0x4;
  }
  *(undefined1 *)pAVar7 = 0;
  *(int *)local_8 = param_1;
  *(int *)&local_8->field_0x4 = param_2;
  *(int *)&local_8->field_0x8 = param_3;
  *(int *)&local_8->field_0x30 = param_4;
  *(int *)&local_8->field_0x34 = param_5;
  *(int *)&local_8->field_0x38 = param_6;
  *(int *)&local_8->field_0xc = param_8;
  *(int *)&local_8->field_0x10 = param_7;
  local_8->field_0x3c = 3;
  local_8->field_003D = param_9;
  local_8->field_0041 = param_10;
  local_8->field_0045 = 0;
  local_2c = (float)(*(int *)&local_8->field_0x30 - *(int *)local_8);
  local_28 = (float)(*(int *)&local_8->field_0x34 - *(int *)&local_8->field_0x4);
  local_24 = (float)(*(int *)&local_8->field_0x38 - *(int *)&local_8->field_0x8);
  fVar1 = SQRT(local_2c * local_2c + local_28 * local_28 + local_24 * local_24);
  local_2c = local_2c / fVar1;
  local_28 = local_28 / fVar1;
  local_24 = local_24 / fVar1;
  iVar6 = *(int *)&local_8->field_0x38;
  if (iVar6 == *(int *)&local_8->field_0x8) {
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
  }
  else {
    fVar1 = (float)(*(int *)&local_8->field_0x4 - *(int *)&local_8->field_0x34);
    fVar4 = (float)(*(int *)local_8 - *(int *)&local_8->field_0x30);
    fVar3 = fVar1 * local_28 + fVar4 * local_2c;
    if (fVar3 == _DAT_0079034c) {
      FreeAndNull(&local_8);
      return (int *)0x0;
    }
    local_14 = (float)*(int *)local_8;
    fVar5 = (float)*(int *)&local_8->field_0x34;
    fVar2 = (float)*(int *)&local_8->field_0x30;
    fVar3 = (--(local_14 * local_2c +
               (float)*(int *)&local_8->field_0x4 * local_28 +
               (float)*(int *)&local_8->field_0x8 * local_24) -
            ((float)iVar6 * local_24 + fVar5 * local_28 + fVar2 * local_2c)) / fVar3;
    local_14 = (fVar4 * fVar3 + fVar2) - local_14;
    local_10 = (fVar1 * fVar3 + fVar5) - (float)*(int *)&local_8->field_0x4;
    local_c = (float)iVar6 - (float)*(int *)&local_8->field_0x8;
    fVar1 = SQRT(local_14 * local_14 + local_10 * local_10 + local_c * local_c);
    local_14 = local_14 / fVar1;
    local_10 = local_10 / fVar1;
    local_c = local_c / fVar1;
  }
  local_20 = local_10 * local_24 - local_c * local_28;
  local_1c = local_c * local_2c - local_14 * local_24;
  local_18 = local_14 * local_28 - local_10 * local_2c;
  iVar6 = thunk_FUN_0062ba50(&local_2c,(float *)&local_8->field_0x49);
  if (iVar6 == 0) {
    return (int *)0x0;
  }
  return (int *)local_8;
}


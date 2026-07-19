
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
  int *piVar7;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  int *local_8;
  
  local_8 = (int *)Library::DKW::LIB::FUN_006aac70(0x6d);
  piVar7 = local_8;
  for (iVar6 = 0x1b; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  *(undefined1 *)piVar7 = 0;
  *local_8 = param_1;
  local_8[1] = param_2;
  local_8[2] = param_3;
  local_8[0xc] = param_4;
  local_8[0xd] = param_5;
  local_8[0xe] = param_6;
  local_8[3] = param_8;
  local_8[4] = param_7;
  *(undefined1 *)(local_8 + 0xf) = 3;
  *(undefined4 *)((int)local_8 + 0x3d) = param_9;
  *(undefined4 *)((int)local_8 + 0x41) = param_10;
  *(undefined4 *)((int)local_8 + 0x45) = 0;
  local_2c = (float)(local_8[0xc] - *local_8);
  local_28 = (float)(local_8[0xd] - local_8[1]);
  local_24 = (float)(local_8[0xe] - local_8[2]);
  fVar1 = SQRT(local_2c * local_2c + local_28 * local_28 + local_24 * local_24);
  local_2c = local_2c / fVar1;
  local_28 = local_28 / fVar1;
  local_24 = local_24 / fVar1;
  iVar6 = local_8[0xe];
  if (iVar6 == local_8[2]) {
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
  }
  else {
    fVar1 = (float)(local_8[1] - local_8[0xd]);
    fVar4 = (float)(*local_8 - local_8[0xc]);
    fVar3 = fVar1 * local_28 + fVar4 * local_2c;
    if (fVar3 == _DAT_0079034c) {
      FUN_006ab060(&local_8);
      return (int *)0x0;
    }
    local_14 = (float)*local_8;
    fVar5 = (float)local_8[0xd];
    fVar2 = (float)local_8[0xc];
    fVar3 = (--(local_14 * local_2c + (float)local_8[1] * local_28 + (float)local_8[2] * local_24) -
            ((float)iVar6 * local_24 + fVar5 * local_28 + fVar2 * local_2c)) / fVar3;
    local_14 = (fVar4 * fVar3 + fVar2) - local_14;
    local_10 = (fVar1 * fVar3 + fVar5) - (float)local_8[1];
    local_c = (float)iVar6 - (float)local_8[2];
    fVar1 = SQRT(local_14 * local_14 + local_10 * local_10 + local_c * local_c);
    local_14 = local_14 / fVar1;
    local_10 = local_10 / fVar1;
    local_c = local_c / fVar1;
  }
  local_20 = local_10 * local_24 - local_c * local_28;
  local_1c = local_c * local_2c - local_14 * local_24;
  local_18 = local_14 * local_28 - local_10 * local_2c;
  iVar6 = thunk_FUN_0062ba50(&local_2c,(float *)((int)local_8 + 0x49));
  if (iVar6 == 0) {
    return (int *)0x0;
  }
  return local_8;
}


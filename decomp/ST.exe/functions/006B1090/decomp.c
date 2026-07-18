
void __cdecl FUN_006b1090(uint *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint local_14 [4];
  
  local_14[0] = 0;
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  iVar2 = 0;
  piVar3 = (int *)&stack0x00000008;
  do {
    iVar1 = *piVar3;
    if (iVar1 < 0) break;
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + 1;
    local_14[(int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5] =
         local_14[(int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5] | 1 << ((byte)iVar1 & 0x1f);
  } while (iVar2 < 0x80);
  *param_1 = local_14[0];
  param_1[1] = local_14[1];
  param_1[2] = local_14[2];
  param_1[3] = local_14[3];
  return;
}


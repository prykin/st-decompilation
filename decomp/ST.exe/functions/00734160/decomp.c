
uint __cdecl FUN_00734160(int *param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint local_c;
  
  if ((param_1 == (int *)0x0) &&
     (iVar2 = FUN_00730fa0(2,0x7a0178,0x29,0,(byte *)"stream != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  param_1[1] = param_1[1] + -1;
  if (param_1[1] < 0) {
    local_c = FUN_0073cd70(param_1);
  }
  else {
    local_c = (uint)*(byte *)*param_1;
    *param_1 = *param_1 + 1;
  }
  return local_c;
}


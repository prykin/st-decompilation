
char FUN_006ad0b0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_3 - param_1 >> 0x1f;
  iVar2 = (param_3 - param_1 ^ uVar3) - uVar3;
  uVar3 = param_4 - param_2 >> 0x1f;
  iVar1 = (param_4 - param_2 ^ uVar3) - uVar3;
  if ((iVar2 == 0) && (iVar1 == 0)) {
    return '\x7f';
  }
  if (param_2 <= param_4) {
    if (param_3 < param_1) {
      if (iVar1 * 2 <= iVar2) {
        return '\x04';
      }
      return (iVar2 * 2 <= iVar1) + '\x05';
    }
    if (iVar1 * 2 <= iVar2) {
      return '\0';
    }
    return (iVar1 < iVar2 * 2) + '\x06';
  }
  if (param_3 < param_1) {
    if (iVar1 * 2 <= iVar2) {
      return '\x04';
    }
    return (iVar1 < iVar2 * 2) + '\x02';
  }
  if (iVar1 * 2 <= iVar2) {
    return '\0';
  }
  return (iVar2 * 2 <= iVar1) + '\x01';
}


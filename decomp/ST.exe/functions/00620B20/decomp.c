
undefined4 __thiscall FUN_00620b20(void *this,int param_1,int param_2,int param_3)

{
  int groupContent;
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  uVar3 = 0xffffffff;
  local_8 = 0xffffffff;
  if ((*(int *)((int)this + 0xe9) != 0) &&
     (uVar1 = *(int *)(*(int *)((int)this + 0xe9) + 0xc) - 1, -1 < (int)uVar1)) {
    do {
      groupContent = *(int *)((int)this + 0xe9);
      if ((uVar1 < *(uint *)(groupContent + 0xc)) &&
         (piVar2 = (int *)(*(int *)(groupContent + 8) * uVar1 + *(int *)(groupContent + 0x1c)),
         piVar2 != (int *)0x0)) {
        if ((param_2 < piVar2[2] + -3) ||
           (((piVar2[2] + 3 < param_2 || (uVar3 = local_8, param_3 < piVar2[3] + -3)) ||
            (piVar2[3] + 3 < param_3)))) {
          if (0x1194 < (uint)(param_1 - *piVar2)) {
            FUN_006b0c70(groupContent,uVar1);
          }
        }
        else {
          piVar2[2] = param_2;
          uVar3 = 1;
          local_8 = 1;
          piVar2[3] = param_3;
          piVar2[1] = param_1;
          if (0x1194 < (uint)(param_1 - *piVar2)) {
            uVar3 = 2;
            *piVar2 = param_1;
            local_8 = 2;
          }
        }
      }
      uVar1 = uVar1 - 1;
    } while (-1 < (int)uVar1);
    return uVar3;
  }
  return 0xffffffff;
}



undefined4 __thiscall FUN_00621300(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 local_8;
  
  uVar4 = 0xffffffff;
  local_8 = 0xffffffff;
  if ((*(int *)((int)this + 0x101) != 0) &&
     (uVar2 = *(int *)(*(int *)((int)this + 0x101) + 0xc) - 1, -1 < (int)uVar2)) {
    do {
      iVar1 = *(int *)((int)this + 0x101);
      if ((uVar2 < *(uint *)(iVar1 + 0xc)) &&
         (piVar3 = (int *)(*(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c)),
         piVar3 != (int *)0x0)) {
        if ((param_2 < piVar3[2] + -3) ||
           (((piVar3[2] + 3 < param_2 || (uVar4 = local_8, param_3 < piVar3[3] + -3)) ||
            (piVar3[3] + 3 < param_3)))) {
          if (0x1194 < (uint)(param_1 - *piVar3)) {
            FUN_006b0c70(iVar1,uVar2);
          }
        }
        else {
          piVar3[2] = param_2;
          uVar4 = 1;
          local_8 = 1;
          piVar3[3] = param_3;
          piVar3[1] = param_1;
          if (0x1194 < (uint)(param_1 - *piVar3)) {
            uVar4 = 2;
            *piVar3 = param_1;
            local_8 = 2;
          }
        }
      }
      uVar2 = uVar2 - 1;
    } while (-1 < (int)uVar2);
    return uVar4;
  }
  return 0xffffffff;
}



undefined4 __thiscall
FUN_00694780(void *this,int param_1,uint param_2,uint param_3,int param_4,undefined4 param_5,
            uint param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_c;

  local_c = 0;
  if (param_6 != 0) {
    do {
      uVar3 = 0;
      uVar2 = param_2;
      do {
        if ((((*(uint *)this <= local_c + param_1) || (*(uint *)((int)this + 4) <= uVar2)) ||
            (*(uint *)((int)this + 8) <= param_3)) || ((param_4 < 0 || (1 < param_4)))) {
          return 0;
        }
        iVar1 = (*(uint *)((int)this + 8) * param_4 + param_3) * *(uint *)((int)this + 4) + uVar2;
        uVar3 = uVar3 + 1;
        uVar2 = uVar2 + 1;
        *(undefined4 *)(*(int *)((int)this + 0x10) + (iVar1 * *(int *)this + local_c + param_1) * 4)
             = param_5;
      } while (uVar3 < param_6);
      local_c = local_c + 1;
    } while (local_c < param_6);
  }
  return 1;
}


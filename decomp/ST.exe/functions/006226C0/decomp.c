
uint __thiscall FUN_006226c0(void *this,uint param_1,int param_2)

{
  void *pvVar1;
  bool bVar2;
  uint3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar3;
  int iVar4;
  void *local_8;
  
  uVar3 = *(uint *)((int)this + 0x2ae);
  local_8 = this;
  if (((uVar3 == 0) || (uVar3 == 1)) &&
     (uVar3 = (uint)DAT_0080874d, *(uint *)((int)this + 0x24) != uVar3)) {
    switch(*(undefined1 *)((int)this + 0x2ad)) {
    case 0:
    case 2:
      bVar2 = thunk_FUN_0041d6c0(this,uVar3);
      uVar3 = CONCAT31(extraout_var,bVar2);
      if (uVar3 == 0) {
        return (uint)extraout_var << 8;
      }
      break;
    case 1:
      bVar2 = thunk_FUN_0041d620(this,uVar3);
      uVar3 = CONCAT31(extraout_var_00,bVar2);
      if (uVar3 == 0) {
        return 0;
      }
      break;
    case 3:
      return 0;
    }
  }
  iVar4 = *(int *)((int)this + 0x211);
  if (((*(int *)(iVar4 + 0x48) <= (int)param_1) && ((int)param_1 <= *(int *)(iVar4 + 0x58))) &&
     ((uVar3 = param_2, *(int *)(iVar4 + 0x44) <= param_2 && (param_2 <= *(int *)(iVar4 + 0x54)))))
  {
    param_1 = FUN_006ddbd0();
    pvVar1 = DAT_00802a88;
    uVar3 = param_1;
    if ((param_1 == 0) || (DAT_00802a88 == (void *)0x0)) goto cf_common_exit_006227F9;
    uVar3 = CONCAT31((int3)(param_1 >> 8),DAT_0080874d);
    iVar4 = (int)*(short *)((int)this + 0x4b);
    if ((DAT_0080874d == 0xff) ||
       ((((((uVar3 = 0, *(int *)((int)DAT_00802a88 + 0xf8) == 0 ||
            (uVar3 = thunk_FUN_00558c00(DAT_00802a88,
                                        *(Global_sub_00558C00_param_1Enum *)
                                         ((int)DAT_00802a88 + 0x10c),
                                        (int)*(short *)((int)this + 0x47),
                                        (int)*(short *)((int)this + 0x49),&param_2,(int *)&local_8),
            iVar4 < 0)) || (4 < iVar4)) ||
          ((param_2 < 0 || (*(int *)((int)pvVar1 + 0x30) <= param_2)))) ||
         ((uVar3 = (&DAT_0079aed0)[iVar4] + (int)local_8, (int)uVar3 < 0 ||
          ((*(int *)((int)pvVar1 + 0x34) <= (int)uVar3 || (*(int *)((int)pvVar1 + 0x4c) == 0))))))
        || (uVar3 = (uint)*(byte *)(uVar3 * *(int *)((int)pvVar1 + 0x30) +
                                    *(int *)((int)pvVar1 + 0x4c) + param_2), uVar3 != 0))))
    goto cf_common_exit_006227F9;
  }
  param_1 = 0;
cf_common_exit_006227F9:
  return CONCAT31((int3)(uVar3 >> 8),(undefined1)param_1);
}


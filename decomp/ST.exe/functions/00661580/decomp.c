
void __fastcall FUN_00661580(AnonShape_00661580_92A3F5B0 *param_1)

{
  void *this;
  int iVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  
  this = param_1->field_0284;
  if (this == (void *)0x0) {
    return;
  }
  if (param_1->field_020B == 0) {
    return;
  }
  if ((param_1->field_01FB != 0) &&
     ((uint)param_1->field_0280 < (uint)(param_1->field_01FF + param_1->field_01FB))) {
    return;
  }
  param_1->field_01FF = param_1->field_0280;
  if ((param_1->field_00FF != '\0') && (param_1->field_007B == 2)) {
    iVar1 = *(int *)((int)this + 0x138);
    if (param_1->field_0039 != 3) {
      if (iVar1 != 0) goto LAB_006615ff;
      iVar1 = *(int *)((int)this + 0x134);
    }
    if (iVar1 == 0) {
      return;
    }
  }
LAB_006615ff:
  iVar1 = thunk_FUN_0068e800(this,param_1->field_007D);
  if (iVar1 < (int)(3 - (uint)(param_1->field_007B != 1))) {
    iVar1 = param_1->field_020B;
    uVar2 = 0;
    if (0 < *(int *)(iVar1 + 0xc)) {
      bVar4 = *(int *)(iVar1 + 0xc) != 0;
      do {
        if (bVar4) {
          puVar3 = (uint *)(*(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c));
        }
        else {
          puVar3 = (uint *)0x0;
        }
        if (((puVar3[10] == 0) && (puVar3[9] == 0)) &&
           (thunk_FUN_00660f70(param_1,puVar3,(short)uVar2), puVar3[9] != 0)) {
          return;
        }
        iVar1 = param_1->field_020B;
        uVar2 = uVar2 + 1;
        bVar4 = uVar2 < *(uint *)(iVar1 + 0xc);
      } while ((int)uVar2 < (int)*(uint *)(iVar1 + 0xc));
    }
  }
  return;
}


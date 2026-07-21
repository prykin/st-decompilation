
bool FUN_00695180(AnonShape_0052EFB0_8161B92D *param_1,AnonShape_00695180_3C0E4B54 *param_2,
                 int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = *(int *)(param_3 + 0x10);
  uVar5 = 0;
  iVar6 = 0;
  iVar8 = 0;
  if (param_1->field_000C != iVar1) {
    return false;
  }
  if (param_4 == 0) {
    return true;
  }
  if ((param_1->field_0014 == 0) && (0 < iVar1)) {
    iVar2 = param_1->field_0018;
    iVar3 = param_2->field_0018;
    do {
      if (uVar5 < *(uint *)(iVar2 + 0xc)) {
        iVar7 = *(int *)(iVar2 + 8) * uVar5 + *(int *)(iVar2 + 0x1c);
      }
      else {
        iVar7 = 0;
      }
      if (uVar5 < *(uint *)(iVar3 + 0xc)) {
        iVar4 = *(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c);
      }
      else {
        iVar4 = 0;
      }
      iVar8 = iVar8 + *(int *)(iVar7 + 0x2c);
      iVar6 = iVar6 + *(int *)(iVar4 + 0x2c);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar1);
  }
  return param_2->field_0014 + param_2->field_0010 * 0x122 + iVar6 <
         param_1->field_0014 + param_1->field_0010 * 0x122 + iVar8;
}


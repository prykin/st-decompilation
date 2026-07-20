
int __fastcall FUN_007233f0(AnonShape_007233F0_CA87FFD3 *param_1)

{
  AnonNested_007233F0_0064_6FCF4A7B *pAVar1;
  int iVar2;
  int iVar3;
  
  pAVar1 = param_1->field_0064;
  iVar2 = pAVar1->field_0000;
  iVar3 = -1;
  if (iVar2 != 0) {
    iVar3 = 0;
    while (iVar2 != param_1->field_0068) {
      iVar2 = pAVar1->field_0070;
      pAVar1 = (AnonNested_007233F0_0064_6FCF4A7B *)&pAVar1->field_0070;
      iVar3 = iVar3 + 1;
      if (iVar2 == 0) {
        return -1;
      }
    }
  }
  return iVar3;
}


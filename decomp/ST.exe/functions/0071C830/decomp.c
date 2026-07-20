
void __fastcall FUN_0071c830(AnonShape_0071C830_6B4541B2 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1->field_0024 != 0) {
    param_1->field_0070 = 1;
    *(undefined4 *)(param_1->field_0024 + 4) = 0;
    while( true ) {
      iVar2 = param_1->field_0024;
      uVar3 = *(uint *)(iVar2 + 4);
      if (*(uint *)(iVar2 + 0xc) <= uVar3) break;
      iVar4 = *(int *)(iVar2 + 8) * uVar3 + *(int *)(iVar2 + 0x1c);
      *(uint *)(iVar2 + 4) = uVar3 + 1;
      if (iVar4 == 0) {
        return;
      }
      piVar1 = (int *)(iVar4 + 0x60);
      *piVar1 = *piVar1 + 1;
    }
  }
  return;
}


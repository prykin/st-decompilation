
void __fastcall FUN_0061e770(AnonShape_0061E770_099C0C21 *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = param_1->field_00A3;
  if (iVar1 != 0) {
    uVar2 = 0;
    if (0 < *(int *)(iVar1 + 0xc)) {
      bVar3 = *(int *)(iVar1 + 0xc) != 0;
      do {
        if (bVar3) {
          iVar1 = *(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c);
        }
        else {
          iVar1 = 0;
        }
        uVar2 = uVar2 + 1;
        *(undefined4 *)(iVar1 + 0x2a) = PTR_00802a38->field_00E4;
        iVar1 = param_1->field_00A3;
        bVar3 = uVar2 < *(uint *)(iVar1 + 0xc);
      } while ((int)uVar2 < (int)*(uint *)(iVar1 + 0xc));
    }
    param_1->field_0046 = 1;
  }
  return;
}


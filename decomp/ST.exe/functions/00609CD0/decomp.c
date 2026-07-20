
void __fastcall FUN_00609cd0(STFieldC *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1->field_0234 != 0) {
    iVar1 = *(int *)(param_1->field_0234 + 0xc);
    uVar3 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = param_1->field_0234;
        if (((uVar3 < *(uint *)(iVar2 + 0xc)) &&
            (iVar2 = *(int *)(iVar2 + 8) * uVar3 + *(int *)(iVar2 + 0x1c), iVar2 != 0)) &&
           (STFieldC::LoadImagSpr(param_1,uVar3), *(int *)&param_1->field_0x20d == 6)) {
          FUN_006eab60(PTR_00807598,*(uint *)(iVar2 + 0x3c));
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < iVar1);
    }
  }
  return;
}


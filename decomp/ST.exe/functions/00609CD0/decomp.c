
void __fastcall FUN_00609cd0(void *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)((int)param_1 + 0x234) != 0) {
    iVar1 = *(int *)(*(int *)((int)param_1 + 0x234) + 0xc);
    uVar3 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)((int)param_1 + 0x234);
        if (((uVar3 < *(uint *)(iVar2 + 0xc)) &&
            (iVar2 = *(int *)(iVar2 + 8) * uVar3 + *(int *)(iVar2 + 0x1c), iVar2 != 0)) &&
           (STFieldC::LoadImagSpr(param_1,uVar3), *(int *)((int)param_1 + 0x20d) == 6)) {
          FUN_006eab60(DAT_00807598,*(uint *)(iVar2 + 0x3c));
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < iVar1);
    }
  }
  return;
}


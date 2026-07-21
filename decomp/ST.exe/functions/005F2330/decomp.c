
void __fastcall FUN_005f2330(AnonShape_005F2330_0E1D2560 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;

  uVar3 = 0;
  if ((DArrayTy *)param_1->field_0038 != (DArrayTy *)0x0) {
    DArrayDestroy((DArrayTy *)param_1->field_0038);
    param_1->field_0038 = 0;
  }
  if (param_1->field_003C != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = *(int *)(param_1->field_003C + 0xc);
    if (0 < iVar1) {
      do {
        iVar2 = param_1->field_003C;
        if (uVar3 < *(uint *)(iVar2 + 0xc)) {
          iVar2 = *(int *)(iVar2 + 8) * uVar3 + *(int *)(iVar2 + 0x1c);
        }
        else {
          iVar2 = 0;
        }
        if (-1 < (int)*(uint *)(iVar2 + 0x18)) {
          FUN_006e8ba0(PTR_00807598,*(uint *)(iVar2 + 0x18));
          *(undefined4 *)(iVar2 + 0x18) = 0xffffffff;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < iVar1);
    }
    DArrayDestroy((DArrayTy *)param_1->field_003C);
    param_1->field_003C = 0;
  }
  return;
}


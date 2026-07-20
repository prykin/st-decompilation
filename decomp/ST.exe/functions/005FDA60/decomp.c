
void __fastcall FUN_005fda60(AnonShape_005FDA60_3863B978 *param_1)

{
  int *piVar1;
  STT3DSprC *pSVar2;
  int iVar3;
  int local_8;
  
  piVar1 = &param_1->field_0233;
  iVar3 = 0;
  if (param_1->field_0233 != 0) {
    if ((param_1->field_0226 != 0) && (local_8 = 0, 0 < param_1->field_0226)) {
      do {
        if (*(int *)(iVar3 + 0x4e + *piVar1) != 0) {
          FUN_006ab060((LPVOID *)(iVar3 + 0x4e + *piVar1));
        }
        pSVar2 = *(STT3DSprC **)(iVar3 + 0x42 + *piVar1);
        if (pSVar2 != (STT3DSprC *)0x0) {
          thunk_FUN_004ad310(pSVar2);
          Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)(iVar3 + 0x42 + *piVar1));
          *(undefined4 *)(iVar3 + 0x42 + *piVar1) = 0;
        }
        local_8 = local_8 + 1;
        iVar3 = iVar3 + 0x52;
      } while (local_8 < param_1->field_0226);
    }
    FUN_006ab060((LPVOID *)piVar1);
  }
  if (param_1->field_023B != 0) {
    FUN_006ab060((LPVOID *)&param_1->field_023B);
  }
  if (param_1->field_023F != 0) {
    FUN_006ab060((LPVOID *)&param_1->field_023F);
  }
  return;
}


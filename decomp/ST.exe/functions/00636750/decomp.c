
void __fastcall FUN_00636750(AnonShape_00636750_9523C2A1 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;

  if (param_1->field_002C != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = *(int *)(param_1->field_002C + 0xc);
    uVar4 = 0;
    if (0 < iVar1) {
      do {
        iVar3 = param_1->field_002C;
        if (((uVar4 < *(uint *)(iVar3 + 0xc)) &&
            (iVar3 = *(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c), iVar3 != 0)) &&
           (*(int *)(iVar3 + 4) < 0)) {
          uVar2 = thunk_FUN_006364b0(param_1->field_0004);
          *(uint *)(iVar3 + 4) = uVar2;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < iVar1);
    }
  }
  return;
}


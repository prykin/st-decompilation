
void __fastcall FUN_00635f50(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;

  if (*param_1 != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = *(int *)(*param_1 + 0xc);
    uVar3 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = *param_1;
        if (((uVar3 < *(uint *)(iVar2 + 0xc)) &&
            (iVar2 = *(int *)(iVar2 + 8) * uVar3 + *(int *)(iVar2 + 0x1c), iVar2 != 0)) &&
           (*(char *)(iVar2 + 0xc) != '\0')) {
          FUN_006eab60(PTR_00807598,*(uint *)(iVar2 + 4));
          *(undefined1 *)(iVar2 + 0xc) = 0;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < iVar1);
    }
  }
  return;
}


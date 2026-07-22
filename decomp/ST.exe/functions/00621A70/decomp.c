
void __fastcall FUN_00621a70(AnonShape_00621A70_2531BB4B *param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int local_c;
  int local_8;

  uVar2 = 0;
  local_8 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((param_1->field_010A != 0) && (local_c = *(int *)(param_1->field_010A + 0xc), 0 < local_c)) {
    do {
      iVar1 = param_1->field_010A;
      if ((uVar2 < *(uint *)(iVar1 + 0xc)) &&
         (pcVar3 = (char *)(*(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c)),
         pcVar3 != (char *)0x0)) {
        if (((param_1->field_0105 != '\0') && (*pcVar3 == '\0')) &&
           (9 < g_playSystem_00802A38->field_00E4 - param_1->field_0106)) {
          thunk_FUN_00621780(param_1,uVar2);
        }
        if (*(uint *)(pcVar3 + 1) < 0x5dd) {
          uVar2 = uVar2 + 1;
        }
        else {
          FUN_006b0c70((DArrayTy *)param_1->field_010A,uVar2);
        }
        if (*pcVar3 != '\0') {
          local_8 = local_8 + 1;
        }
      }
      local_c = local_c + -1;
    } while (local_c != 0);
    if (local_8 != 0) {
      return;
    }
  }
  param_1->field_0105 = 0;
  return;
}


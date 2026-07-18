
void __fastcall FUN_00621a70(void *param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int local_c;
  int local_8;
  
  uVar2 = 0;
  local_8 = 0;
  if ((*(int *)((int)param_1 + 0x10a) != 0) &&
     (local_c = *(int *)(*(int *)((int)param_1 + 0x10a) + 0xc), 0 < local_c)) {
    do {
      iVar1 = *(int *)((int)param_1 + 0x10a);
      if ((uVar2 < *(uint *)(iVar1 + 0xc)) &&
         (pcVar3 = (char *)(*(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c)),
         pcVar3 != (char *)0x0)) {
        if (((*(char *)((int)param_1 + 0x105) != '\0') && (*pcVar3 == '\0')) &&
           (9 < (uint)(*(int *)(DAT_00802a38 + 0xe4) - *(int *)((int)param_1 + 0x106)))) {
          thunk_FUN_00621780(param_1,uVar2);
        }
        if (*(uint *)(pcVar3 + 1) < 0x5dd) {
          uVar2 = uVar2 + 1;
        }
        else {
          FUN_006b0c70(*(int *)((int)param_1 + 0x10a),uVar2);
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
  *(undefined1 *)((int)param_1 + 0x105) = 0;
  return;
}


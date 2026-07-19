
void __fastcall FUN_0062f150(void *param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int local_10;
  int local_c;
  int local_8;
  
  pvVar2 = DAT_00802a88;
  local_c = 0;
  if ((*(char *)((int)param_1 + 0x1f9) != '\0') && (DAT_00802a88 != (void *)0x0)) {
    iVar1 = *(int *)((int)param_1 + 0x1dd);
    if ((DAT_0080874d != -1) && (*(int *)((int)DAT_00802a88 + 0xf8) != 0)) {
      thunk_FUN_00558c00(DAT_00802a88,
                         *(Global_sub_00558C00_param_1Enum *)((int)DAT_00802a88 + 0x10c),
                         *(int *)((int)param_1 + 0x1d5),*(int *)((int)param_1 + 0x1d9),&local_8,
                         &local_10);
      if (((((-1 < iVar1) && (iVar1 < 5)) && (-1 < local_8)) &&
          (((local_8 < *(int *)((int)pvVar2 + 0x30) &&
            (local_10 = (&DAT_0079aed0)[iVar1] + local_10, -1 < local_10)) &&
           (local_10 < *(int *)((int)pvVar2 + 0x34))))) &&
         ((*(int *)((int)pvVar2 + 0x4c) != 0 &&
          (*(char *)(local_10 * *(int *)((int)pvVar2 + 0x30) + *(int *)((int)pvVar2 + 0x4c) +
                    local_8) == '\0')))) goto LAB_0062f208;
    }
    local_c = 1;
  }
LAB_0062f208:
  local_8 = 0;
  piVar3 = (int *)((int)param_1 + 0x1e5);
  do {
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      pvVar2 = *(void **)(iVar1 + 0x10);
      if (*(int *)(iVar1 + 0x18) == 2) {
        if (*(uint *)(DAT_00802a38 + 0xe4) % 5 == 0) {
          if (pvVar2 != (void *)0x0) {
            thunk_FUN_004ace30(pvVar2,*(uint *)(DAT_00806724 + 0x30 +
                                               (uint)*(byte *)(iVar1 + 0x34) * 4),
                               (int)*(short *)(DAT_00806724 + 0x2c));
          }
          *(char *)(*piVar3 + 0x34) = *(char *)(*piVar3 + 0x34) + '\x01';
          if (*(short *)(DAT_00806724 + 0x23) <= (short)(ushort)*(byte *)(*piVar3 + 0x34)) {
            thunk_FUN_0062f6c0(param_1,local_8);
          }
        }
      }
      else if (*(uint *)(iVar1 + 0x39) <
               (uint)(*(int *)(DAT_00802a38 + 0xe4) - *(int *)(iVar1 + 0x35))) {
        *(undefined4 *)(iVar1 + 0x18) = 2;
        *(undefined4 *)(*piVar3 + 0x35) = *(undefined4 *)(DAT_00802a38 + 0xe4);
        *(undefined4 *)(*piVar3 + 0x39) = 10;
        *(undefined1 *)(*piVar3 + 0x34) = 0;
      }
      iVar1 = *piVar3;
      if (local_c == 0) {
        if (((iVar1 != 0) && (*(char *)(iVar1 + 0x3d) != '\0')) && (pvVar2 != (void *)0x0)) {
          thunk_FUN_004ad430((int)pvVar2);
          *(undefined1 *)(*piVar3 + 0x3d) = 0;
        }
      }
      else if (((iVar1 != 0) && (*(char *)(iVar1 + 0x3d) == '\0')) && (pvVar2 != (void *)0x0)) {
        thunk_FUN_004ad460(pvVar2,0);
        *(undefined1 *)(*piVar3 + 0x3d) = 1;
      }
    }
    piVar3 = piVar3 + 1;
    local_8 = local_8 + 1;
  } while (local_8 < 5);
  return;
}


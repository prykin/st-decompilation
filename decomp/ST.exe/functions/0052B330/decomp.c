
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0052b330(int param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (*(char *)(param_1 + 0xdc7) != '\x01') {
    if (*(char *)(param_1 + 0xdc7) != '\x02') {
      return 0;
    }
    if (0x13 < *(uint *)(param_1 + 0xdc8)) {
      return 0;
    }
    *(uint *)(param_1 + 0xdc8) = *(uint *)(param_1 + 0xdc8) + 1;
    return 0;
  }
  *(int *)(param_1 + 0xdc8) = *(int *)(param_1 + 0xdc8) + 1;
  if (((*(char *)(param_1 + 0xdcd) == '\0') || (*(char *)(param_1 + 0xdcd) == '\x01')) &&
     (*(float *)(param_1 + 0xdd6) != *(float *)(param_1 + 0xdce))) {
    bVar1 = false;
    *(float *)(param_1 + 0xdd6) = *(float *)(param_1 + 0xdd6) + *(float *)(param_1 + 0xdde);
    if (*(float *)(param_1 + 0xde6) != _DAT_0079034c) {
      *(float *)(param_1 + 0xdde) = *(float *)(param_1 + 0xde6) + *(float *)(param_1 + 0xdde);
    }
    if (*(float *)(param_1 + 0xdde) <= _DAT_0079034c) {
      if (*(float *)(param_1 + 0xdd6) < *(float *)(param_1 + 0xdce)) {
        *(undefined4 *)(param_1 + 0xdd6) = *(undefined4 *)(param_1 + 0xdce);
        goto LAB_0052b416;
      }
    }
    else if (*(float *)(param_1 + 0xdce) < *(float *)(param_1 + 0xdd6)) {
      *(undefined4 *)(param_1 + 0xdd6) = *(undefined4 *)(param_1 + 0xdce);
LAB_0052b416:
      *(undefined1 *)(param_1 + 0xdcd) = 2;
      bVar1 = true;
    }
  }
  if (((*(char *)(param_1 + 0xdcd) == '\0') || (*(char *)(param_1 + 0xdcd) == '\x02')) &&
     (*(float *)(param_1 + 0xdda) != *(float *)(param_1 + 0xdd2))) {
    *(float *)(param_1 + 0xdda) = *(float *)(param_1 + 0xdda) + *(float *)(param_1 + 0xde2);
    if (*(float *)(param_1 + 0xdea) != _DAT_0079034c) {
      *(float *)(param_1 + 0xde2) = *(float *)(param_1 + 0xdea) + *(float *)(param_1 + 0xde2);
    }
    if (*(float *)(param_1 + 0xde2) <= _DAT_0079034c) {
      if (*(float *)(param_1 + 0xdd2) <= *(float *)(param_1 + 0xdda)) goto LAB_0052b581;
      *(undefined4 *)(param_1 + 0xdda) = *(undefined4 *)(param_1 + 0xdd2);
    }
    else {
      if (*(float *)(param_1 + 0xdda) <= *(float *)(param_1 + 0xdd2)) goto LAB_0052b581;
      *(undefined4 *)(param_1 + 0xdda) = *(undefined4 *)(param_1 + 0xdd2);
    }
    *(undefined1 *)(param_1 + 0xdcd) = 1;
    if (*(float *)(param_1 + 0xdd6) != *(float *)(param_1 + 0xdce)) {
LAB_0052b581:
      if (*(int *)(param_1 + 0xdb3) == 0) {
        return 0;
      }
      FUN_006e6540(*(int *)(param_1 + 0xdb3),*(undefined4 *)(param_1 + 0xdd6),
                   *(undefined4 *)(param_1 + 0xdda),-1);
      return 1;
    }
  }
  else if (!bVar1) goto LAB_0052b581;
  *(undefined1 *)(param_1 + 0xdc7) = 2;
  if (*(int **)(param_1 + 0xdb3) != (int *)0x0) {
    FUN_006e6580(DAT_00807598,*(int **)(param_1 + 0xdb3));
  }
  *(undefined4 *)(param_1 + 0xdb3) = 0;
  *(undefined4 *)(param_1 + 0xdc8) = 0;
  FUN_006e65c0(DAT_00807598,*(undefined4 *)(param_1 + 0xdbf + (uint)*(byte *)(param_1 + 0xdcc) * 4),
               (char)*(undefined2 *)
                      (*(int *)(param_1 + 0x9c8 + (uint)*(byte *)(param_1 + 0xdcc) * 4) + 0x23),
               *(undefined4 *)(param_1 + 0xdd6),*(undefined4 *)(param_1 + 0xdda),5,5,1);
  thunk_FUN_005252c0((*(char *)(param_1 + 0xdcc) != '\0') + 0xb6);
  return 0;
}


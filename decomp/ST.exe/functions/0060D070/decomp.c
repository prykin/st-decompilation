
undefined4 __fastcall FUN_0060d070(AnonShape_0060D070_1487100A *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short local_24 [12];
  int local_c;
  int local_8;

  local_c = 0;
  if ((param_1->field_0244 != 0) && (local_8 = 0, 0 < param_1->field_023C)) {
    do {
      iVar1 = param_1->field_0244;
      iVar5 = local_8 * 0x44;
      if (*(int *)(iVar5 + iVar1) != 0) {
        iVar6 = (g_playSystem_00802A38->field_00E4 - *(int *)(iVar5 + 0x3c + iVar1)) *
                *(int *)(iVar5 + 0x38 + iVar1);
        if (iVar6 < *(int *)(iVar5 + 4 + iVar1)) {
          if (((param_1->field_022F == '\0') && (local_8 == 0)) &&
             (uVar3 = iVar6 - *(int *)(iVar1 + 4) / 2, uVar4 = (int)uVar3 >> 0x1f,
             (int)((uVar3 ^ uVar4) - uVar4) < *(int *)(iVar1 + 0x38))) {
            thunk_FUN_0060aef0(param_1);
            param_1->field_022F = 1;
          }
          local_c = local_c + 1;
          iVar1 = iVar5 + param_1->field_0244;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar5 = *(int *)(iVar5 + 0x34 + param_1->field_0244) + *(int *)(iVar1 + 0x30);
          if (0x168 < iVar5) {
            iVar5 = iVar5 + -0x168;
          }
          iVar2 = *(int *)(iVar1 + 4);
          thunk_FUN_0062cac0(*(AnonShape_0062CAC0_4BF74422 **)(iVar1 + 0x40),
                             (*(int *)(iVar1 + 0x24) * iVar6) / iVar2 + *(int *)(iVar1 + 0x18),
                             (*(int *)(iVar1 + 0x28) * iVar6) / iVar2 + *(int *)(iVar1 + 0x1c),
                             (*(int *)(iVar1 + 0x2c) * iVar6) / iVar2 + *(int *)(iVar1 + 0x20),iVar5
                             ,*(int *)(iVar1 + 8),iVar6,local_24);
        }
        else {
          thunk_FUN_0060d220((int)param_1);
          *(undefined4 *)(iVar5 + param_1->field_0244) = 0;
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < param_1->field_023C);
    if (local_c != 0) {
      return 1;
    }
  }
  return 2;
}


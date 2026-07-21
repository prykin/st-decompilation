
undefined4 __fastcall FUN_004ddd50(int *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int local_c;
  int local_8;

  bVar3 = false;
  bVar2 = false;
  uVar4 = GetPlayerRaceId((char)param_1[9]);
  uVar4 = uVar4 & 0xff;
  if (uVar4 == 1) {
    local_8 = 0x17;
  }
  else if (uVar4 == 2) {
    local_8 = 0x88;
  }
  else if (uVar4 == 3) {
    local_8 = 0x78;
  }
  else {
    local_8 = 0;
  }
  if (-1 < param_1[0x134]) {
    piVar5 = param_1;
    piVar9 = param_1 + 0x136;
    do {
      if (piVar5[0x137] != 0) {
        if (*piVar9 == 0) {
          if (piVar9[-1] < *(int *)(&DAT_007e6028 + (piVar9[-2] + -0x96) * 0x14)) {
            *piVar9 = 1;
            bVar2 = true;
            piVar9[2] = PTR_00802a38->field_00E4;
          }
        }
        else {
          iVar8 = piVar9[-2] + -0x96;
          iVar6 = thunk_FUN_004e60d0(param_1[9],local_8);
          local_c = *(int *)(&DAT_007e601c + (iVar6 + iVar8 * 5) * 4);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar6 = (**(code **)(*param_1 + 0x2c))();
          iVar6 = thunk_FUN_004b72e0((char)param_1[9],iVar6);
          if (iVar6 != 0) {
            iVar6 = thunk_FUN_004b79c0((char)param_1[9],param_1[6]);
            if (iVar6 == 0) {
              local_c = local_c * 4;
              if (DAT_00811798 != (void *)0x0) {
                thunk_FUN_00621580(DAT_00811798,param_1[9],5);
              }
            }
          }
          if ((uint)(piVar9[2] + local_c) <= PTR_00802a38->field_00E4) {
            iVar6 = (&DAT_007e6024)[iVar8 * 5];
            iVar7 = thunk_FUN_004d7b50((char)param_1[9],3);
            if (iVar6 <= iVar7) {
              thunk_FUN_004d7d30((char)param_1[9],3,param_1[6],iVar6);
              iVar6 = piVar9[-1];
              bVar3 = true;
              piVar9[-1] = iVar6 + 1;
              if (*(int *)(&DAT_007e6028 + iVar8 * 0x14) <= iVar6 + 1) {
                *piVar9 = 0;
                bVar2 = true;
              }
              piVar9[2] = PTR_00802a38->field_00E4;
            }
          }
        }
      }
      piVar1 = piVar9 + 3;
      piVar5 = piVar9 + -0x131;
      piVar9 = piVar9 + 5;
    } while (-1 < *piVar1);
    if (bVar2) {
      thunk_FUN_004ddcc0((AnonShape_004DDCC0_33DEB43E *)param_1);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((bVar3) && (param_1[9] == (uint)*(byte *)(param_1[4] + 0x112d))) {
      thunk_FUN_004d8b70((char)param_1[9]);
    }
  }
  return 0;
}



undefined4 __fastcall FUN_004ddd50(int *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  int uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int local_c;
  int local_8;

  bVar3 = false;
  bVar2 = false;
  uVar4 = GetPlayerRaceId((char)param_1[9]);
  uVar5 = uVar4 & 0xff;
  if (uVar5 == 1) {
    local_8 = 0x17;
  }
  else if (uVar5 == 2) {
    local_8 = 0x88;
  }
  else if (uVar5 == 3) {
    local_8 = 0x78;
  }
  else {
    local_8 = 0;
  }
  if (-1 < param_1[0x134]) {
    piVar6 = param_1;
    piVar10 = param_1 + 0x136;
    do {
      if (piVar6[0x137] != 0) {
        if (*piVar10 == 0) {
          if (piVar10[-1] < *(int *)(&DAT_007e6028 + (piVar10[-2] + -0x96) * 0x14)) {
            *piVar10 = 1;
            bVar2 = true;
            piVar10[2] = g_playSystem_00802A38->field_00E4;
          }
        }
        else {
          iVar9 = piVar10[-2] + -0x96;
          iVar7 = thunk_FUN_004e60d0(param_1[9],local_8);
          local_c = *(int *)(&DAT_007e601c + (iVar7 + iVar9 * 5) * 4);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar7 = (**(code **)(*param_1 + 0x2c))();
          iVar7 = thunk_FUN_004b72e0((char)param_1[9],iVar7);
          if (iVar7 != 0) {
            iVar7 = thunk_FUN_004b79c0((char)param_1[9],param_1[6]);
            if (iVar7 == 0) {
              local_c = local_c * 4;
              if (DAT_00811798 != (void *)0x0) {
                thunk_FUN_00621580(DAT_00811798,(byte *)param_1[9],5);
              }
            }
          }
          if ((uint)(piVar10[2] + local_c) <= g_playSystem_00802A38->field_00E4) {
            iVar7 = (&DAT_007e6024)[iVar9 * 5];
            iVar8 = thunk_FUN_004d7b50((char)param_1[9],3);
            if (iVar7 <= iVar8) {
              thunk_FUN_004d7d30((char)param_1[9],3,param_1[6],iVar7);
              iVar7 = piVar10[-1];
              bVar3 = true;
              piVar10[-1] = iVar7 + 1;
              if (*(int *)(&DAT_007e6028 + iVar9 * 0x14) <= iVar7 + 1) {
                *piVar10 = 0;
                bVar2 = true;
              }
              piVar10[2] = g_playSystem_00802A38->field_00E4;
            }
          }
        }
      }
      piVar1 = piVar10 + 3;
      piVar6 = piVar10 + -0x131;
      piVar10 = piVar10 + 5;
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


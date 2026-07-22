
undefined4 __fastcall FUN_0060dab0(AnonShape_0060DAB0_7A3B9916 *param_1)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int local_18;
  int local_14;
  int local_10;
  int local_c;

  iVar8 = param_1->field_0244;
  uVar6 = 2;
  if ((iVar8 != 0) && (param_1->field_0240 == 1)) {
    iVar7 = g_playSystem_00802A38->field_00E4 - *(int *)(iVar8 + 0x28);
    *(int *)(iVar8 + 0x1c) = *(int *)(iVar8 + 0x1c) + 6;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar9 = *(int *)(param_1->field_0244 + 0x18) * iVar7;
    *(int *)(param_1->field_0244 + 0x14) = param_1->field_01FD + iVar9;
    iVar8 = param_1->field_0244;
    if (iVar9 < *(int *)(iVar8 + 0x1c)) {
      local_14 = (*(int *)(iVar8 + 0x10) * iVar9) / *(int *)(iVar8 + 0x1c);
    }
    else {
      local_14 = *(int *)(iVar8 + 0x10);
    }
    *(int *)(iVar8 + 0x20) = *(int *)(iVar8 + 0x20) + 1;
    iVar8 = param_1->field_0244;
    if (*(int *)(iVar8 + 0x20) <= *(int *)(iVar8 + 0x24)) {
      *(undefined4 *)(iVar8 + 0x20) = 0;
    }
    iVar8 = param_1->field_0244;
    local_18 = 0;
    if (0 < *(int *)(iVar8 + 0xc)) {
      do {
        iVar8 = *(int *)(iVar8 + 0x10);
        local_c = 0;
        if (0 < local_14) {
          local_10 = 0;
          do {
            iVar9 = param_1->field_0234;
            uVar10 = local_c + iVar8 * local_18;
            if ((uVar10 < *(uint *)(iVar9 + 0xc)) &&
               (iVar9 = *(int *)(iVar9 + 8) * uVar10 + *(int *)(iVar9 + 0x1c), iVar9 != 0)) {
              iVar4 = param_1->field_0244;
              iVar5 = *(int *)(iVar4 + 0x14);
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              psVar1 = (short *)(*(int *)(iVar4 + 8) + (local_10 / *(int *)(iVar4 + 0x10)) * 4);
              iVar4 = *(int *)(iVar4 + 0x1c);
              sVar2 = *psVar1;
              fcos((float10)*(float *)(iVar9 + 0x2c));
              sVar3 = psVar1[1];
              lVar11 = Library::MSVCRT::__ftol();
              fsin((float10)*(float *)(iVar9 + 0x2c));
              *(int *)(iVar9 + 0xc) = (int)lVar11 + *(int *)(iVar9 + 0x18);
              lVar11 = Library::MSVCRT::__ftol();
              *(int *)(iVar9 + 0x10) = (int)lVar11 + *(int *)(iVar9 + 0x1c);
              *(int *)(iVar9 + 0x14) = *(int *)(iVar9 + 0x20) + (int)sVar3 / (iVar7 * 0x50 + 200);
              if (iVar5 - (iVar4 * sVar2) / 10000 < param_1->field_01F9) {
                if ((*(int *)(iVar9 + 4) == 0) && (-1 < (int)*(uint *)(iVar9 + 0x3c))) {
                  *(int *)(iVar9 + 0x24) = *(int *)(param_1->field_0244 + 0x20) + local_c;
                  FUN_006eaaa0(PTR_00807598,*(uint *)(iVar9 + 0x3c),0);
                  *(undefined4 *)(iVar9 + 4) = 1;
                }
                if (*(int *)(iVar9 + 0x28) < *(int *)(iVar9 + 0x24)) {
                  *(int *)(iVar9 + 0x24) = *(int *)(iVar9 + 0x24) % *(int *)(iVar9 + 0x28);
                }
              }
              else if ((*(int *)(iVar9 + 4) != 0) && (-1 < (int)*(uint *)(iVar9 + 0x3c))) {
                FUN_006eab60(PTR_00807598,*(uint *)(iVar9 + 0x3c));
                *(undefined4 *)(iVar9 + 4) = 0xffffffff;
              }
            }
            local_c = local_c + 1;
            local_10 = local_10 + 0x33;
          } while (local_c < local_14);
        }
        iVar8 = param_1->field_0244;
        local_18 = local_18 + 1;
      } while (local_18 < *(int *)(iVar8 + 0xc));
    }
    uVar6 = 1;
  }
  return uVar6;
}


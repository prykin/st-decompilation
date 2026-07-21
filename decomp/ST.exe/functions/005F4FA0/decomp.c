
int __fastcall FUN_005f4fa0(AnonShape_005F4FA0_36330E3A *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  short sVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  longlong lVar9;
  int local_20;
  short local_18;
  short local_14;
  int local_c;
  int local_8;

  local_c = 0;
  bVar3 = false;
  iVar4 = 0;
  if ((param_1->field_0169 != 0) && (local_8 = 0, 0 < param_1->field_010D)) {
    do {
      uVar7 = local_8 * param_1->field_0109;
      if (PTR_00802a38->field_00E4 < *(uint *)(&param_1->field_0x159 + local_8 * 4)) {
        local_c = 1;
      }
      else {
        (&param_1->field_0139)[local_8] = (&param_1->field_0139)[local_8] + param_1->field_0125;
        iVar4 = *(int *)(&param_1->field_0x149 + local_8 * 4) + param_1->field_0121;
        *(int *)(&param_1->field_0x149 + local_8 * 4) = iVar4;
        if ((local_8 == 0) && (iVar4 = iVar4 / 200, iVar4 != param_1->field_0129)) {
          param_1->field_0129 = iVar4;
          thunk_FUN_005f5700(param_1,iVar4,param_1->field_0139);
        }
        local_20 = 0;
        if (0 < param_1->field_0109) {
          do {
            iVar4 = param_1->field_0169;
            if (((uVar7 < *(uint *)(iVar4 + 0xc)) &&
                (pcVar8 = (char *)(*(int *)(iVar4 + 8) * uVar7 + *(int *)(iVar4 + 0x1c)),
                pcVar8 != (char *)0x0)) && (*pcVar8 != '\x02')) {
              *(int *)(pcVar8 + 2) =
                   (*(int *)(pcVar8 + 0x12) * (&param_1->field_0139)[local_8]) / 10000 +
                   param_1->field_0111;
              iVar4 = *(int *)(pcVar8 + 2);
              *(int *)(pcVar8 + 6) =
                   (*(int *)(pcVar8 + 0x16) * (&param_1->field_0139)[local_8]) / 10000 +
                   param_1->field_0115;
              iVar1 = *(int *)(&param_1->field_0x149 + local_8 * 4);
              *(int *)(pcVar8 + 10) = iVar1;
              sVar5 = (short)(iVar4 >> 0x1f);
              if (iVar4 < 0) {
                local_18 = (((short)(iVar4 / 0xc9) + sVar5) -
                           (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)) + -1;
              }
              else {
                local_18 = ((short)(iVar4 / 0xc9) + sVar5) -
                           (short)((longlong)iVar4 * 0x28c1979 >> 0x3f);
              }
              iVar2 = *(int *)(pcVar8 + 6);
              sVar5 = (short)(iVar2 >> 0x1f);
              if (iVar2 < 0) {
                local_14 = (((short)(iVar2 / 0xc9) + sVar5) -
                           (short)((longlong)iVar2 * 0x28c1979 >> 0x3f)) + -1;
              }
              else {
                local_14 = ((short)(iVar2 / 0xc9) + sVar5) -
                           (short)((longlong)iVar2 * 0x28c1979 >> 0x3f);
              }
              sVar5 = (short)(iVar1 >> 0x1f);
              if (iVar1 < 0) {
                sVar5 = (((short)(iVar1 / 200) + sVar5) -
                        (short)((longlong)iVar1 * 0x51eb851f >> 0x3f)) + -1;
              }
              else {
                sVar5 = ((short)(iVar1 / 200) + sVar5) -
                        (short)((longlong)iVar1 * 0x51eb851f >> 0x3f);
              }
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              if ((((iVar4 < 0) || (g_worldGrid.sizeX <= iVar4)) ||
                  ((*(int *)(pcVar8 + 6) < 0 ||
                   (((int)g_worldGrid.sizeY <= *(int *)(pcVar8 + 6) || (iVar1 < 0)))))) ||
                 (iVar4 = thunk_FUN_004961b0(local_18,local_14,sVar5), uVar6 = extraout_EDX,
                 iVar4 == 0)) {
                FUN_006e3210((AnonShape_006E3210_FE49985F *)PTR_00807598,
                             (*(int *)(pcVar8 + 2) * PTR_00807598->field_0380) / 0xc9,
                             (*(int *)(pcVar8 + 6) * PTR_00807598->field_0380) / 0xc9);
                lVar9 = Library::MSVCRT::__ftol();
                uVar6 = (undefined4)((ulonglong)lVar9 >> 0x20);
                if (*(int *)(pcVar8 + 10) < (int)(short)lVar9) {
                  *pcVar8 = '\x02';
                  if (-1 < (int)*(uint *)(pcVar8 + 0x1f)) {
                    FUN_006e8ba0(PTR_00807598,*(uint *)(pcVar8 + 0x1f));
                    pcVar8[0x1f] = -1;
                    pcVar8[0x20] = -1;
                    pcVar8[0x21] = -1;
                    pcVar8[0x22] = -1;
                  }
                  goto LAB_005f528b;
                }
              }
              if (*pcVar8 == '\0') {
                if ((*(int *)(pcVar8 + 0x1f) == -1) && (param_1->field_0103 != '\0')) {
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  thunk_FUN_005f4a30((int)pcVar8,CONCAT31((int3)((uint)uVar6 >> 8),pcVar8[1]),0);
                }
                *pcVar8 = '\x01';
              }
              if ((local_c == 0) && (*pcVar8 != '\x02')) {
                local_c = 1;
              }
              if (((local_8 == 0) && (!bVar3)) && (*pcVar8 != '\x02')) {
                bVar3 = true;
              }
            }
LAB_005f528b:
            local_20 = local_20 + 1;
            uVar7 = uVar7 + 1;
          } while (local_20 < param_1->field_0109);
        }
      }
      local_8 = local_8 + 1;
      iVar4 = local_c;
    } while (local_8 < param_1->field_010D);
  }
  return iVar4;
}


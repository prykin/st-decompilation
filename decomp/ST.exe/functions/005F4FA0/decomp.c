
int __fastcall FUN_005f4fa0(AnonShape_005F4FA0_36330E3A *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined3 extraout_var;
  int iVar5;
  short sVar6;
  undefined4 extraout_EDX;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  longlong lVar10;
  int local_20;
  short local_18;
  short local_14;
  int local_c;
  int local_8;
  
  local_c = 0;
  bVar3 = false;
  iVar5 = 0;
  if ((param_1->field_0169 != 0) && (local_8 = 0, 0 < param_1->field_010D)) {
    do {
      uVar8 = local_8 * param_1->field_0109;
      if ((uint)PTR_00802a38->field_00E4 < *(uint *)(&param_1->field_0x159 + local_8 * 4)) {
        local_c = 1;
      }
      else {
        (&param_1->field_0139)[local_8] = (&param_1->field_0139)[local_8] + param_1->field_0125;
        iVar5 = *(int *)(&param_1->field_0x149 + local_8 * 4) + param_1->field_0121;
        *(int *)(&param_1->field_0x149 + local_8 * 4) = iVar5;
        if ((local_8 == 0) && (iVar5 = iVar5 / 200, iVar5 != param_1->field_0129)) {
          param_1->field_0129 = iVar5;
          thunk_FUN_005f5700(param_1,iVar5,param_1->field_0139);
        }
        local_20 = 0;
        if (0 < param_1->field_0109) {
          do {
            iVar5 = param_1->field_0169;
            if (((uVar8 < *(uint *)(iVar5 + 0xc)) &&
                (pcVar9 = (char *)(*(int *)(iVar5 + 8) * uVar8 + *(int *)(iVar5 + 0x1c)),
                pcVar9 != (char *)0x0)) && (*pcVar9 != '\x02')) {
              *(int *)(pcVar9 + 2) =
                   (*(int *)(pcVar9 + 0x12) * (&param_1->field_0139)[local_8]) / 10000 +
                   param_1->field_0111;
              iVar5 = *(int *)(pcVar9 + 2);
              *(int *)(pcVar9 + 6) =
                   (*(int *)(pcVar9 + 0x16) * (&param_1->field_0139)[local_8]) / 10000 +
                   param_1->field_0115;
              iVar1 = *(int *)(&param_1->field_0x149 + local_8 * 4);
              *(int *)(pcVar9 + 10) = iVar1;
              sVar6 = (short)(iVar5 >> 0x1f);
              if (iVar5 < 0) {
                local_18 = (((short)(iVar5 / 0xc9) + sVar6) -
                           (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
              }
              else {
                local_18 = ((short)(iVar5 / 0xc9) + sVar6) -
                           (short)((longlong)iVar5 * 0x28c1979 >> 0x3f);
              }
              iVar2 = *(int *)(pcVar9 + 6);
              sVar6 = (short)(iVar2 >> 0x1f);
              if (iVar2 < 0) {
                local_14 = (((short)(iVar2 / 0xc9) + sVar6) -
                           (short)((longlong)iVar2 * 0x28c1979 >> 0x3f)) + -1;
              }
              else {
                local_14 = ((short)(iVar2 / 0xc9) + sVar6) -
                           (short)((longlong)iVar2 * 0x28c1979 >> 0x3f);
              }
              sVar6 = (short)(iVar1 >> 0x1f);
              if (iVar1 < 0) {
                sVar6 = (((short)(iVar1 / 200) + sVar6) -
                        (short)((longlong)iVar1 * 0x51eb851f >> 0x3f)) + -1;
              }
              else {
                sVar6 = ((short)(iVar1 / 200) + sVar6) -
                        (short)((longlong)iVar1 * 0x51eb851f >> 0x3f);
              }
              if ((((iVar5 < 0) || (g_worldGrid.sizeX <= iVar5)) ||
                  ((*(int *)(pcVar9 + 6) < 0 ||
                   (((int)g_worldGrid.sizeY <= *(int *)(pcVar9 + 6) || (iVar1 < 0)))))) ||
                 (bVar4 = thunk_FUN_004961b0(local_18,local_14,sVar6), uVar7 = extraout_EDX,
                 CONCAT31(extraout_var,bVar4) == 0)) {
                FUN_006e3210((AnonShape_006E3210_FE49985F *)PTR_00807598,
                             (*(int *)(pcVar9 + 2) * PTR_00807598->field_0380) / 0xc9,
                             (*(int *)(pcVar9 + 6) * PTR_00807598->field_0380) / 0xc9);
                lVar10 = Library::MSVCRT::__ftol();
                uVar7 = (undefined4)((ulonglong)lVar10 >> 0x20);
                if (*(int *)(pcVar9 + 10) < (int)(short)lVar10) {
                  *pcVar9 = '\x02';
                  if (-1 < (int)*(uint *)(pcVar9 + 0x1f)) {
                    FUN_006e8ba0(PTR_00807598,*(uint *)(pcVar9 + 0x1f));
                    pcVar9[0x1f] = -1;
                    pcVar9[0x20] = -1;
                    pcVar9[0x21] = -1;
                    pcVar9[0x22] = -1;
                  }
                  goto LAB_005f528b;
                }
              }
              if (*pcVar9 == '\0') {
                if ((*(int *)(pcVar9 + 0x1f) == -1) && (param_1->field_0103 != '\0')) {
                  thunk_FUN_005f4a30((int)pcVar9,CONCAT31((int3)((uint)uVar7 >> 8),pcVar9[1]),0);
                }
                *pcVar9 = '\x01';
              }
              if ((local_c == 0) && (*pcVar9 != '\x02')) {
                local_c = 1;
              }
              if (((local_8 == 0) && (!bVar3)) && (*pcVar9 != '\x02')) {
                bVar3 = true;
              }
            }
LAB_005f528b:
            local_20 = local_20 + 1;
            uVar8 = uVar8 + 1;
          } while (local_20 < param_1->field_0109);
        }
      }
      local_8 = local_8 + 1;
      iVar5 = local_c;
    } while (local_8 < param_1->field_010D);
  }
  return iVar5;
}


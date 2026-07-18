
int __fastcall FUN_005f4fa0(void *param_1)

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
  if ((*(int *)((int)param_1 + 0x169) != 0) && (local_8 = 0, 0 < *(int *)((int)param_1 + 0x10d))) {
    do {
      uVar8 = local_8 * *(int *)((int)param_1 + 0x109);
      if (*(uint *)(DAT_00802a38 + 0xe4) < *(uint *)((int)param_1 + local_8 * 4 + 0x159)) {
        local_c = 1;
      }
      else {
        *(int *)((int)param_1 + local_8 * 4 + 0x139) =
             *(int *)((int)param_1 + local_8 * 4 + 0x139) + *(int *)((int)param_1 + 0x125);
        iVar5 = *(int *)((int)param_1 + local_8 * 4 + 0x149) + *(int *)((int)param_1 + 0x121);
        *(int *)((int)param_1 + local_8 * 4 + 0x149) = iVar5;
        if ((local_8 == 0) && (iVar5 = iVar5 / 200, iVar5 != *(int *)((int)param_1 + 0x129))) {
          *(int *)((int)param_1 + 0x129) = iVar5;
          thunk_FUN_005f5700(param_1,iVar5,*(int *)((int)param_1 + 0x139));
        }
        local_20 = 0;
        if (0 < *(int *)((int)param_1 + 0x109)) {
          do {
            iVar5 = *(int *)((int)param_1 + 0x169);
            if (((uVar8 < *(uint *)(iVar5 + 0xc)) &&
                (pcVar9 = (char *)(*(int *)(iVar5 + 8) * uVar8 + *(int *)(iVar5 + 0x1c)),
                pcVar9 != (char *)0x0)) && (*pcVar9 != '\x02')) {
              *(int *)(pcVar9 + 2) =
                   (*(int *)(pcVar9 + 0x12) * *(int *)((int)param_1 + local_8 * 4 + 0x139)) / 10000
                   + *(int *)((int)param_1 + 0x111);
              iVar5 = *(int *)(pcVar9 + 2);
              *(int *)(pcVar9 + 6) =
                   (*(int *)(pcVar9 + 0x16) * *(int *)((int)param_1 + local_8 * 4 + 0x139)) / 10000
                   + *(int *)((int)param_1 + 0x115);
              iVar1 = *(int *)((int)param_1 + local_8 * 4 + 0x149);
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
              if ((((iVar5 < 0) || (DAT_007fb240 <= iVar5)) ||
                  ((*(int *)(pcVar9 + 6) < 0 ||
                   (((int)DAT_007fb242 <= *(int *)(pcVar9 + 6) || (iVar1 < 0)))))) ||
                 (bVar4 = thunk_FUN_004961b0(local_18,local_14,sVar6), uVar7 = extraout_EDX,
                 CONCAT31(extraout_var,bVar4) == 0)) {
                FUN_006e3210((int)DAT_00807598,
                             (*(int *)(pcVar9 + 2) * *(int *)((int)DAT_00807598 + 0x380)) / 0xc9,
                             (*(int *)(pcVar9 + 6) * *(int *)((int)DAT_00807598 + 0x380)) / 0xc9);
                lVar10 = __ftol();
                uVar7 = (undefined4)((ulonglong)lVar10 >> 0x20);
                if (*(int *)(pcVar9 + 10) < (int)(short)lVar10) {
                  *pcVar9 = '\x02';
                  if (-1 < (int)*(uint *)(pcVar9 + 0x1f)) {
                    FUN_006e8ba0(DAT_00807598,*(uint *)(pcVar9 + 0x1f));
                    pcVar9[0x1f] = -1;
                    pcVar9[0x20] = -1;
                    pcVar9[0x21] = -1;
                    pcVar9[0x22] = -1;
                  }
                  goto LAB_005f528b;
                }
              }
              if (*pcVar9 == '\0') {
                if ((*(int *)(pcVar9 + 0x1f) == -1) && (*(char *)((int)param_1 + 0x103) != '\0')) {
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
          } while (local_20 < *(int *)((int)param_1 + 0x109));
        }
      }
      local_8 = local_8 + 1;
      iVar5 = local_c;
    } while (local_8 < *(int *)((int)param_1 + 0x10d));
  }
  return iVar5;
}


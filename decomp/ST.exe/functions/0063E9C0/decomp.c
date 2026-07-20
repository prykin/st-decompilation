
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0063e9c0(void *this,int param_1)

{
  float fVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  unkbyte10 extraout_ST0;
  float10 fVar11;
  unkbyte10 extraout_ST1;
  longlong lVar12;
  longlong lVar13;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  uVar9 = (*(int *)((int)this + 0x2c0) % 10) * *(int *)((int)this + 700);
  if (*(uint *)((int)this + 0x245) < 2) {
    local_18 = 10;
    cVar2 = *(char *)((int)this + 0x329);
    if ((cVar2 == '\0') && ((*(int *)((int)this + 0x2b0) - *(int *)((int)this + 0x2b8)) / 10 == 1))
    {
      *(undefined1 *)((int)this + 0x329) = 5;
      goto cf_common_join_0063EACD;
    }
    if (cVar2 == '\0') goto cf_common_join_0063EACD;
    uVar7 = *(uint *)(DAT_00802a38 + 0xe4);
  }
  else {
    if (*(uint *)((int)this + 0x245) == 2) {
      local_18 = 5;
      goto cf_common_join_0063EACD;
    }
    local_18 = 10;
    cVar2 = *(char *)((int)this + 0x329);
    if ((cVar2 == '\0') && ((*(int *)((int)this + 0x2b0) - *(int *)((int)this + 0x2b8)) / 10 == 1))
    {
      *(undefined1 *)((int)this + 0x329) = 5;
      goto cf_common_join_0063EACD;
    }
    if (cVar2 == '\0') goto cf_common_join_0063EACD;
    uVar7 = *(uint *)(DAT_00802a38 + 0xe4);
  }
  local_18 = 10;
  if (uVar7 % 10 == 0) {
    local_18 = 10;
    *(char *)((int)this + 0x329) = cVar2 + '\x01';
  }
cf_common_join_0063EACD:
  local_14 = uVar9;
  if ((int)uVar9 < (int)(*(int *)((int)this + 700) + uVar9)) {
    do {
      iVar10 = *(int *)((int)this + 0x336);
      if ((local_14 < *(uint *)(iVar10 + 0xc)) &&
         (iVar10 = *(int *)(iVar10 + 8) * local_14 + *(int *)(iVar10 + 0x1c), iVar10 != 0)) {
        *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        if (param_1 == 10) {
          iVar4 = local_18 * *(int *)((int)this + 0x2c0) + *(int *)((int)this + 0x2b4);
        }
        else {
          iVar4 = *(int *)((int)this + 0x2c0);
          iVar4 = ((iVar4 * iVar4 * -0x5f) / 2000 - iVar4 * local_18) + *(int *)((int)this + 0x2b4);
        }
        *(float *)(iVar10 + 0x2c) = (float)iVar4;
        lVar12 = Library::MSVCRT::__ftol();
        fcos(extraout_ST0);
        lVar13 = Library::MSVCRT::__ftol();
        fsin(extraout_ST1);
        iVar4 = (int)lVar13 + *(int *)(iVar10 + 0x14);
        *(int *)(iVar10 + 8) = iVar4;
        lVar13 = Library::MSVCRT::__ftol();
        iVar5 = (int)lVar13 + *(int *)(iVar10 + 0x18);
        *(int *)(iVar10 + 0xc) = iVar5;
        sVar8 = (short)(iVar4 >> 0x1f);
        sVar3 = (short)(iVar5 >> 0x1f);
        if (param_1 == 10) {
          if ((int)local_14 % (int)(uint)*(byte *)((int)this + 0x328) == 0) {
            iVar6 = (int)(local_14 - uVar9) / (int)(uint)*(byte *)((int)this + 0x328);
            if (iVar4 < 0) {
              local_c = (short)(((short)(iVar4 / 0xc9) + sVar8) -
                               (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              local_c = (int)(short)(((short)(iVar4 / 0xc9) + sVar8) -
                                    (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
            }
            if (iVar5 < 0) {
              iVar4 = (short)(((short)(iVar5 / 0xc9) + sVar3) -
                             (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar4 = (int)(short)(((short)(iVar5 / 0xc9) + sVar3) -
                                  (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
            }
            if ((local_c != *(short *)((int)this + iVar6 * 4 + 0x2c4)) ||
               (iVar4 != *(short *)((int)this + iVar6 * 4 + 0x2c6))) {
              *(short *)((int)this + iVar6 * 4 + 0x2c4) = (short)local_c;
              iVar5 = (int)lVar12 / 0xc9;
              sVar8 = (short)iVar4;
              *(short *)((int)this + iVar6 * 4 + 0x2c6) = sVar8;
              if (iVar5 < 1) {
                local_1c = 4000;
              }
              else {
                local_1c = (undefined4)(4000 / (longlong)iVar5);
              }
              local_10 = 0;
              do {
                if (-1 < (short)local_c) {
                  sVar3 = (short)local_10;
                  if ((((((short)local_c < SHORT_007fb240) && (-1 < sVar8)) &&
                       (sVar8 < SHORT_007fb242)) && ((-1 < sVar3 && (sVar3 < SHORT_007fb244)))) &&
                     (iVar4 = *(int *)(DAT_007fb248 +
                                      ((int)sVar3 * (int)SHORT_007fb246 +
                                       (int)SHORT_007fb240 * (int)sVar8 + (int)(short)local_c) * 8),
                     iVar4 != 0)) {
                    thunk_FUN_00601d10(*(undefined4 *)((int)this + 0x259),local_1c,iVar4,
                                       (short)*(undefined4 *)((int)this + 0x25d),
                                       *(undefined2 *)((int)this + 0x261),0xa8,0x110);
                  }
                  if ((((short)local_c < SHORT_007fb240) && (-1 < sVar8)) &&
                     ((sVar8 < SHORT_007fb242 &&
                      (((-1 < sVar3 && (sVar3 < SHORT_007fb244)) &&
                       (iVar4 = *(int *)(DAT_007fb248 + 4 +
                                        ((int)sVar3 * (int)SHORT_007fb246 +
                                         (int)SHORT_007fb240 * (int)sVar8 + (int)(short)local_c) * 8
                                        ), iVar4 != 0)))))) {
                    thunk_FUN_00601d10(*(undefined4 *)((int)this + 0x259),local_1c,iVar4,
                                       (short)*(undefined4 *)((int)this + 0x25d),
                                       *(undefined2 *)((int)this + 0x261),0xa8,0x110);
                  }
                }
                local_10 = local_10 + 1;
              } while (local_10 < 5);
            }
          }
        }
        else if (((*(byte *)(DAT_00802a38 + 0xe4) & 1) != 0) &&
                ((int)local_14 % (int)(uint)*(byte *)((int)this + 0x328) == 0)) {
          iVar6 = (int)(local_14 - uVar9) / (int)(uint)*(byte *)((int)this + 0x328);
          if (iVar4 < 0) {
            local_c = (short)(((short)(iVar4 / 0xc9) + sVar8) -
                             (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            local_c = (int)(short)(((short)(iVar4 / 0xc9) + sVar8) -
                                  (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
          }
          if (iVar5 < 0) {
            iVar4 = (short)(((short)(iVar5 / 0xc9) + sVar3) -
                           (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iVar4 = (int)(short)(((short)(iVar5 / 0xc9) + sVar3) -
                                (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
          }
          if ((local_c != *(short *)((int)this + iVar6 * 4 + 0x2c4)) ||
             (iVar4 != *(short *)((int)this + iVar6 * 4 + 0x2c6))) {
            *(short *)((int)this + iVar6 * 4 + 0x2c4) = (short)local_c;
            iVar5 = (int)lVar12 / 0xc9;
            sVar8 = (short)iVar4;
            *(short *)((int)this + iVar6 * 4 + 0x2c6) = sVar8;
            if (iVar5 < 1) {
              local_1c = 4000;
            }
            else {
              local_1c = (undefined4)(4000 / (longlong)iVar5);
            }
            local_10 = 0;
            do {
              if ((((-1 < (short)local_c) && ((short)local_c < SHORT_007fb240)) && (-1 < sVar8)) &&
                 (((sVar8 < SHORT_007fb242 && (sVar3 = (short)local_10, -1 < sVar3)) &&
                  ((sVar3 < SHORT_007fb244 &&
                   (iVar4 = *(int *)(DAT_007fb248 +
                                    ((int)sVar3 * (int)SHORT_007fb246 +
                                     (int)SHORT_007fb240 * (int)sVar8 + (int)(short)local_c) * 8),
                   iVar4 != 0)))))) {
                thunk_FUN_00601d10(*(undefined4 *)((int)this + 0x259),local_1c,iVar4,
                                   (short)*(undefined4 *)((int)this + 0x25d),
                                   *(undefined2 *)((int)this + 0x261),0xa8,0x110);
              }
              local_10 = local_10 + 1;
            } while (local_10 < 5);
          }
        }
        uVar7 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar7;
        *(uint *)(iVar10 + 8) = *(int *)(iVar10 + 8) + (uVar7 >> 0x10) % 6;
        uVar7 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar7;
        iVar5 = *(int *)(iVar10 + 0xc) + (uVar7 >> 0x10) % 6;
        *(int *)(iVar10 + 0xc) = iVar5;
        iVar4 = *(int *)(*(int *)((int)this + 0x211) + 0x380);
        fVar11 = FUN_006e3210(*(int *)((int)this + 0x211),(*(int *)(iVar10 + 8) * iVar4) / 0xc9,
                              (iVar5 * iVar4) / 0xc9);
        fVar1 = (float)fVar11;
        if (*(float *)(iVar10 + 0x10) != fVar1) {
          if (fVar1 <= *(float *)(iVar10 + 0x10)) {
            if (*(float *)(iVar10 + 0x10) <= fVar1 - _DAT_0079d4a8) {
              *(float *)(iVar10 + 0x10) = fVar1;
            }
            else {
              *(float *)(iVar10 + 0x10) = fVar1 - _DAT_0079d4a8;
            }
          }
          else if (fVar1 - _DAT_00790504 <= *(float *)(iVar10 + 0x10)) {
            *(float *)(iVar10 + 0x10) = fVar1;
          }
          else {
            FUN_006e8ba0(*(void **)((int)this + 0x211),*(uint *)(iVar10 + 0x38));
            *(undefined4 *)(iVar10 + 0x38) = 0xffffffff;
          }
        }
        *(undefined4 *)(iVar10 + 0x30) = *(undefined4 *)(DAT_00802a38 + 0xe4);
        uVar7 = *(byte *)((int)this + 0x329) + 5;
        *(uint *)(iVar10 + 0x20) = uVar7;
        if (0xf < uVar7) {
          *(undefined4 *)(iVar10 + 0x20) = 0xe;
        }
        iVar4 = *(int *)(iVar10 + 0x20) + 5;
        *(int *)(iVar10 + 0x24) = iVar4;
        if (0xf < iVar4) {
          *(undefined4 *)(iVar10 + 0x24) = 0xf;
        }
      }
      local_14 = local_14 + 1;
    } while ((int)local_14 < (int)(uVar9 + *(int *)((int)this + 700)));
  }
  iVar10 = *(int *)((int)this + 0x2c0) + 1;
  *(int *)((int)this + 0x2c0) = iVar10;
  if ((1 < *(uint *)((int)this + 0x245)) && (*(uint *)((int)this + 0x245) == 2)) {
    *(int *)((int)this + 0x2b8) =
         (*(int *)((int)this + 0x2b4) - (iVar10 * iVar10 * 0x5f) / 2000) - iVar10 * local_18;
    return;
  }
  *(int *)((int)this + 0x2b8) = iVar10 * local_18 + *(int *)((int)this + 0x2b4);
  return;
}


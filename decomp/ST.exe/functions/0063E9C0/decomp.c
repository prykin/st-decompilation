#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

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
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST0;
  float10 fVar11;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  unkbyte10 extraout_ST1;
  longlong lVar12;
  longlong lVar13;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;

  uVar9 = (STField<int>(this,0x2c0) % 10) * STField<int>(this,700);
  if (STField<uint>(this,0x245) < 2) {
    local_18 = 10;
    cVar2 = STField<char>(this,0x329);
    if ((cVar2 == '\0') && ((STField<int>(this,0x2b0) - STField<int>(this,0x2b8)) / 10 == 1))
    {
      STField<undefined1>(this,0x329) = 5;
      goto cf_common_join_0063EACD;
    }
    if (cVar2 == '\0') goto cf_common_join_0063EACD;
    uVar7 = g_playSystem_00802A38->field_00E4;
  }
  else {
    if (STField<uint>(this,0x245) == 2) {
      local_18 = 5;
      goto cf_common_join_0063EACD;
    }
    local_18 = 10;
    cVar2 = STField<char>(this,0x329);
    if ((cVar2 == '\0') && ((STField<int>(this,0x2b0) - STField<int>(this,0x2b8)) / 10 == 1))
    {
      STField<undefined1>(this,0x329) = 5;
      goto cf_common_join_0063EACD;
    }
    if (cVar2 == '\0') goto cf_common_join_0063EACD;
    uVar7 = g_playSystem_00802A38->field_00E4;
  }
  local_18 = 10;
  if (uVar7 % 10 == 0) {
    local_18 = 10;
    STField<char>(this,0x329) = cVar2 + '\x01';
  }
cf_common_join_0063EACD:
  local_14 = uVar9;
  if ((int)uVar9 < (int)(STField<int>(this,700) + uVar9)) {
    do {
      iVar10 = STField<int>(this,0x336);
      if ((local_14 < STField<uint>(iVar10,0xC)) &&
         (iVar10 = STField<int>(iVar10,0x8) * local_14 + STField<int>(iVar10,0x1C), iVar10 != 0)) {
        STField<int>(this,0x1c) = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        if (param_1 == 10) {
          iVar4 = local_18 * STField<int>(this,0x2c0) + STField<int>(this,0x2b4);
        }
        else {
          iVar4 = STField<int>(this,0x2c0);
          iVar4 = ((iVar4 * iVar4 * -0x5f) / 2000 - iVar4 * local_18) + STField<int>(this,0x2b4);
        }
        STField<float>(iVar10,0x2C) = (float)iVar4;
        lVar12 = Library::MSVCRT::__ftol();
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        fcos(extraout_ST0);
        lVar13 = Library::MSVCRT::__ftol();
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        fsin(extraout_ST1);
        iVar4 = (int)lVar13 + STField<int>(iVar10,0x14);
        STField<int>(iVar10,0x8) = iVar4;
        lVar13 = Library::MSVCRT::__ftol();
        iVar5 = (int)lVar13 + STField<int>(iVar10,0x18);
        STField<int>(iVar10,0xC) = iVar5;
        sVar8 = (short)(iVar4 >> 0x1f);
        sVar3 = (short)(iVar5 >> 0x1f);
        if (param_1 == 10) {
          if ((int)local_14 % (int)(uint)STField<byte>(this,0x328) == 0) {
            iVar6 = (int)(local_14 - uVar9) / (int)(uint)STField<byte>(this,0x328);
            if (iVar4 < 0) {
              local_c = (short)(((short)(iVar4 / 0xc9) + sVar8) -
                               (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              local_c = (short)(((short)(iVar4 / 0xc9) + sVar8) -
                                    (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
            }
            if (iVar5 < 0) {
              iVar4 = (short)(((short)(iVar5 / 0xc9) + sVar3) -
                             (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar4 = (short)(((short)(iVar5 / 0xc9) + sVar3) -
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
                local_1c = (int)(4000 / (longlong)iVar5);
              }
              local_10 = 0;
              do {
                if (-1 < (short)local_c) {
                  sVar3 = (short)local_10;
                  if ((((((short)local_c < g_worldGrid.sizeX) && (-1 < sVar8)) &&
                       (sVar8 < g_worldGrid.sizeY)) && ((-1 < sVar3 && (sVar3 < g_worldGrid.sizeZ)))
                      ) && (STGridAt3D(g_worldGrid, local_c, sVar8, sVar3).objects[0]
                            != nullptr)) {
                    thunk_FUN_00601d10(STField<int>(this,0x259),local_1c,
                                       (RecoveredRecord_00601D10_11B39116 *)
                                       STGridAt3D(g_worldGrid, local_c, sVar8, sVar3).
                                       objects[0],(short)STField<undefined4>(this,0x25d),
                                       STField<ushort>(this,0x261),0xa8,0x110);
                  }
                  if ((((short)local_c < g_worldGrid.sizeX) && (-1 < sVar8)) &&
                     ((sVar8 < g_worldGrid.sizeY &&
                      (((-1 < sVar3 && (sVar3 < g_worldGrid.sizeZ)) &&
                       (STGridAt3D(g_worldGrid, local_c, sVar8, sVar3).objects[1] !=
                        nullptr)))))) {
                    thunk_FUN_00601d10(STField<int>(this,0x259),local_1c,
                                       (RecoveredRecord_00601D10_11B39116 *)
                                       STGridAt3D(g_worldGrid, local_c, sVar8, sVar3).
                                       objects[1],(short)STField<undefined4>(this,0x25d),
                                       STField<ushort>(this,0x261),0xa8,0x110);
                  }
                }
                local_10 = local_10 + 1;
              } while (local_10 < 5);
            }
          }
        }
        else if (((g_playSystem_00802A38->field_00E4 & 1) != 0) &&
                ((int)local_14 % (int)(uint)STField<byte>(this,0x328) == 0)) {
          iVar6 = (int)(local_14 - uVar9) / (int)(uint)STField<byte>(this,0x328);
          if (iVar4 < 0) {
            local_c = (short)(((short)(iVar4 / 0xc9) + sVar8) -
                             (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            local_c = (short)(((short)(iVar4 / 0xc9) + sVar8) -
                                  (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
          }
          if (iVar5 < 0) {
            iVar4 = (short)(((short)(iVar5 / 0xc9) + sVar3) -
                           (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iVar4 = (short)(((short)(iVar5 / 0xc9) + sVar3) -
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
              local_1c = (int)(4000 / (longlong)iVar5);
            }
            local_10 = 0;
            do {
              if ((((-1 < (short)local_c) && ((short)local_c < g_worldGrid.sizeX)) && (-1 < sVar8))
                 && (((sVar8 < g_worldGrid.sizeY && (sVar3 = (short)local_10, -1 < sVar3)) &&
                     ((sVar3 < g_worldGrid.sizeZ &&
                      (STGridAt3D(g_worldGrid, local_c, sVar8, sVar3).objects[0] !=
                       nullptr)))))) {
                thunk_FUN_00601d10(STField<int>(this,0x259),local_1c,
                                   (RecoveredRecord_00601D10_11B39116 *)
                                   STGridAt3D(g_worldGrid, local_c, sVar8, sVar3).
                                   objects[0],(short)STField<undefined4>(this,0x25d),
                                   STField<ushort>(this,0x261),0xa8,0x110);
              }
              local_10 = local_10 + 1;
            } while (local_10 < 5);
          }
        }
        uVar7 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar7;
        STField<uint>(iVar10,0x8) = STField<int>(iVar10,0x8) + (uVar7 >> 0x10) % 6;
        uVar7 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar7;
        iVar5 = STField<int>(iVar10,0xC) + (uVar7 >> 0x10) % 6;
        STField<int>(iVar10,0xC) = iVar5;
        iVar4 = (STField<ST3DSMAPContext *>(this,0x211))->field_0380;
        fVar11 = ST3DSMAPContext::sub_006E3210
                           (STField<ST3DSMAPContext *>(this,0x211),
                            (STField<int>(iVar10,0x8) * iVar4) / 0xc9,(iVar5 * iVar4) / 0xc9);
        fVar1 = (float)fVar11;
        if (STField<float>(iVar10,0x10) != fVar1) {
          if (fVar1 <= STField<float>(iVar10,0x10)) {
            if (STField<float>(iVar10,0x10) <= fVar1 - _DAT_0079d4a8) {
              STField<float>(iVar10,0x10) = fVar1;
            }
            else {
              STField<float>(iVar10,0x10) = fVar1 - _DAT_0079d4a8;
            }
          }
          else if (fVar1 - _DAT_00790504 <= STField<float>(iVar10,0x10)) {
            STField<float>(iVar10,0x10) = fVar1;
          }
          else {
            Library::Ourlib::ST3DSMAP::SprClose
                      (STField<void *>(this,0x211),STField<uint>(iVar10,0x38));
            STField<undefined4>(iVar10,0x38) = 0xffffffff;
          }
        }
        STField<uint>(iVar10,0x30) = g_playSystem_00802A38->field_00E4;
        uVar7 = STField<byte>(this,0x329) + 5;
        STField<uint>(iVar10,0x20) = uVar7;
        if (0xf < uVar7) {
          STField<undefined4>(iVar10,0x20) = 0xe;
        }
        iVar4 = STField<int>(iVar10,0x20) + 5;
        STField<int>(iVar10,0x24) = iVar4;
        if (0xf < iVar4) {
          STField<undefined4>(iVar10,0x24) = 0xf;
        }
      }
      local_14 = local_14 + 1;
    } while ((int)local_14 < (int)(uVar9 + STField<int>(this,700)));
  }
  iVar10 = STField<int>(this,0x2c0) + 1;
  STField<int>(this,0x2c0) = iVar10;
  if ((1 < STField<uint>(this,0x245)) && (STField<uint>(this,0x245) == 2)) {
    STField<int>(this,0x2b8) =
         (STField<int>(this,0x2b4) - (iVar10 * iVar10 * 0x5f) / 2000) - iVar10 * local_18;
    return;
  }
  STField<int>(this,0x2b8) = iVar10 * local_18 + STField<int>(this,0x2b4);
  return;
}


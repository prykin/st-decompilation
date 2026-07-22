
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00600750(AnonShape_00600750_A7773F7A *param_1)

{
  short sVar1;
  STT3DSprC *this;
  VisibleClassTy *pVVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  STT3DSprC *local_c;
  int local_8;

  local_18 = 0;
  local_8 = 0;
  if (0 < param_1->field_0226) {
    do {
      iVar4 = local_8;
      iVar6 = local_8 * 0x52;
      iVar3 = iVar6 + param_1->field_0233;
      local_c = (STT3DSprC *)iVar6;
      switch(*(undefined4 *)(iVar6 + 0x39 + param_1->field_0233)) {
      case 1:
        uVar7 = thunk_FUN_006001e0(param_1,local_8);
        pVVar2 = g_visibleClass_00802A88;
        if (uVar7 == 0) {
          if (param_1->field_0232 != '\0') {
            local_c = *(STT3DSprC **)(iVar6 + 0x42 + param_1->field_0233);
            iVar3 = iVar6 + param_1->field_0233;
            if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
              sVar1 = *(short *)(iVar3 + 10);
              if (sVar1 < 0) {
                local_10 = (int)(short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                                       (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f)) - 1;
              }
              else {
                local_10 = (uint)(short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                                        (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f));
              }
              sVar1 = *(short *)(iVar3 + 8);
              if (sVar1 < 0) {
                iVar4 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                               (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
              }
              else {
                iVar4 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                    (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
              }
              sVar1 = *(short *)(iVar3 + 6);
              if (sVar1 < 0) {
                iVar3 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                               (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
              }
              else {
                iVar3 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                    (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
              }
              if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
                  (((VisibleClassTy::sub_00558C00
                               (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar3,
                                iVar4,&local_1c,&local_24), (int)local_10 < 0 ||
                    ((4 < (int)local_10 || (local_1c < 0)))) || (pVVar2->field_0030 <= local_1c))))
                 || ((((iVar3 = local_24 + g_centeredOffsets5[local_10], iVar3 < 0 ||
                       (pVVar2->field_0034 <= iVar3)) || (pVVar2->field_004C == (byte *)0x0)) ||
                     (pVVar2->field_004C[iVar3 * pVVar2->field_0030 + local_1c] != 0)))) {
                if (*(char *)(iVar6 + 0x41 + param_1->field_0233) == '\0') {
                  thunk_FUN_004ad460(local_c,0);
                  *(undefined1 *)(iVar6 + 0x41 + param_1->field_0233) = 1;
                }
              }
              else if (*(char *)(iVar6 + 0x41 + param_1->field_0233) != '\0') {
                thunk_FUN_004ad430((int)local_c);
                *(undefined1 *)(iVar6 + 0x41 + param_1->field_0233) = 0;
              }
            }
            iVar6 = param_1->field_0233 + iVar6;
            local_14 = (uint)*(short *)(iVar6 + 6);
            STT3DSprC::sub_004AD3C0
                      (local_c,(float)(int)local_14 * _DAT_007904f8 * _DAT_007904f0,
                       (float)(int)*(short *)(iVar6 + 8) * _DAT_007904f8 * _DAT_007904f0,
                       (float)(int)*(short *)(iVar6 + 10) * _DAT_007904f8 * _DAT_007904f0 +
                       _DAT_007904fc);
          }
        }
        else {
          *(undefined4 *)(iVar6 + 0x39 + param_1->field_0233) = 3;
          if ((param_1->field_0232 == '\0') ||
             (iVar3 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_005FDB50::
                      thunk_FUN_005fdb50((AnonReceiver_005FDB50 *)param_1,1,iVar4), iVar3 != 0)) {
LAB_00600928:
            thunk_FUN_005fd940(param_1,iVar4);
          }
          else {
            sVar1 = *(short *)(iVar6 + 8 + param_1->field_0233);
            iVar6 = iVar6 + param_1->field_0233;
            iVar3 = *(int *)(iVar6 + 0x42);
            if (sVar1 < 0) {
              iVar4 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                             (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar4 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                  (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
            }
            sVar1 = *(short *)(iVar6 + 6);
            if (sVar1 < 0) {
              iVar6 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                             (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar6 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                  (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
            }
            thunk_FUN_00600110(param_1,iVar6,iVar4,0x460);
            iVar6 = param_1->field_01E9;
            if (iVar6 != 0) {
              if (param_1->field_01F1 == 0) {
                SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006EA050::sub_006EA460
                          ((AnonReceiver_006EA050 *)PTR_00807598,*(uint *)(iVar3 + 0x18),
                           *(int *)(iVar6 + 0x1ed));
              }
              else {
                FUN_006ea3e0(PTR_00807598,*(uint *)(iVar3 + 0x18),*(int *)(iVar6 + 0x1ed));
              }
            }
            uVar9 = 0x53;
            uVar8 = 0x5a;
            iVar6 = 1;
            uVar7 = thunk_FUN_004ad650(iVar3);
            FUN_006ea4e0(PTR_00807598,uVar7,iVar6,uVar8,uVar9);
          }
        }
        break;
      case 2:
        if (((*(uint *)(iVar3 + 0x3d) <= g_playSystem_00802A38->field_00E4) &&
            (iVar3 = thunk_FUN_005ff1f0(param_1,local_8,3,param_1->field_022E), -1 < iVar3)) &&
           (iVar3 = thunk_FUN_005fff60(param_1,local_8,iVar3), iVar4 = local_8, iVar3 != 0)) {
          iVar3 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_005FDB50::thunk_FUN_005fdb50
                            ((AnonReceiver_005FDB50 *)param_1,0,local_8);
          if (iVar3 != 0) goto LAB_00600928;
          *(undefined4 *)(iVar6 + 0x39 + param_1->field_0233) = 1;
        }
        break;
      case 3:
        if (param_1->field_0232 == '\0') {
          thunk_FUN_005fd940(param_1,local_8);
        }
        else {
          this = *(STT3DSprC **)(iVar3 + 0x42);
          local_14 = thunk_FUN_004ac910(this,'\r');
          local_28 = thunk_FUN_004ac910(this,'\x0e');
          if (0x15 < (int)local_14) {
            if (local_14 == 0x16) {
              STT3DSprC::StartShow(this,0xf,g_playSystem_00802A38->field_00E4);
            }
            local_10 = thunk_FUN_004ac910(this,'\x0f');
            STT3DSprC::ShowCurFase(this,'\x0f');
            iVar3 = STT3DSprC::sub_004ACD30(this,'\x0f');
            if ((int)local_10 < iVar3) {
              local_10 = local_10 + 1;
            }
            STT3DSprC::SetCurFase(this,'\x0f',local_10);
          }
          if (*(char *)(iVar6 + 0x28 + param_1->field_0233) != '\0') {
            iVar3 = STT3DSprC::sub_004ACD30(this,'\x0e');
            iVar6 = thunk_FUN_004ac910(this,'\x0e');
            if (iVar3 + -1 == iVar6) {
              STT3DSprC::StopShow(this,0xe);
            }
          }
          iVar3 = STT3DSprC::sub_004ACD30(this,'\r');
          iVar6 = thunk_FUN_004ac910(this,'\r');
          if (iVar3 + -1 == iVar6) {
            STT3DSprC::StopShow(this,0xd);
          }
          iVar3 = STT3DSprC::sub_004ACD30(this,'\x0f');
          iVar6 = thunk_FUN_004ac910(this,'\x0f');
          if (iVar3 + -1 == iVar6) {
            *(undefined4 *)((int)local_c + 0x39 + param_1->field_0233) = 4;
          }
          iVar3 = STT3DSprC::sub_004ACD30(this,'\r');
          uVar7 = local_14;
          if ((int)local_14 < iVar3) {
            uVar7 = local_14 + 1;
          }
          iVar3 = STT3DSprC::sub_004ACD30(this,'\x0e');
          uVar5 = local_28;
          if ((int)local_28 < iVar3) {
            uVar5 = local_28 + 1;
          }
          STT3DSprC::SetCurFase(this,'\x0e',uVar5);
          STT3DSprC::ShowCurFase(this,'\x0e');
          STT3DSprC::SetCurFase(this,'\r',uVar7);
          STT3DSprC::ShowCurFase(this,'\r');
          iVar3 = (int)local_c + param_1->field_0233;
          local_28 = (uint)*(short *)(iVar3 + 6);
          STT3DSprC::sub_004AD3C0
                    (this,(float)(int)local_28 * _DAT_007904f8 * _DAT_007904f0,
                     (float)(int)*(short *)(iVar3 + 8) * _DAT_007904f8 * _DAT_007904f0,
                     (float)(int)*(short *)((int)local_c + 10 + param_1->field_0233) * _DAT_007904f8
                     * _DAT_007904f0 + _DAT_007904fc);
          pVVar2 = g_visibleClass_00802A88;
          if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
            sVar1 = *(short *)((int)local_c + 10 + param_1->field_0233);
            iVar3 = (int)local_c + param_1->field_0233;
            if (sVar1 < 0) {
              local_10 = (int)(short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                                     (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f)) - 1;
            }
            else {
              local_10 = (uint)(short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                                      (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f));
            }
            sVar1 = *(short *)(iVar3 + 8);
            if (sVar1 < 0) {
              iVar6 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                             (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar6 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                  (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
            }
            sVar1 = *(short *)(iVar3 + 6);
            if (sVar1 < 0) {
              iVar3 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                             (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar3 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                  (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
            }
            if (((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
                 (VisibleClassTy::sub_00558C00
                            (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar3,iVar6
                             ,&local_20,&local_2c), (int)local_10 < 0)) ||
                (((4 < (int)local_10 || (local_20 < 0)) ||
                 ((pVVar2->field_0030 <= local_20 ||
                  ((iVar3 = g_centeredOffsets5[local_10] + local_2c, iVar3 < 0 ||
                   (pVVar2->field_0034 <= iVar3)))))))) ||
               ((pVVar2->field_004C == (byte *)0x0 ||
                (pVVar2->field_004C[local_20 + iVar3 * pVVar2->field_0030] != 0)))) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (*(char *)((int)local_c + 0x41 + param_1->field_0233) == '\0') {
                thunk_FUN_004ad460(this,0);
                *(undefined1 *)((int)local_c + 0x41 + param_1->field_0233) = 1;
              }
            }
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            else if (*(char *)((int)local_c + 0x41 + param_1->field_0233) != '\0') {
              thunk_FUN_004ad430((int)this);
              *(undefined1 *)((int)local_c + 0x41 + param_1->field_0233) = 0;
            }
          }
        }
        break;
      case 4:
        thunk_FUN_005fd940(param_1,local_8);
        break;
      case 5:
        local_18 = local_18 + 1;
      }
      local_8 = local_8 + 1;
    } while (local_8 < param_1->field_0226);
  }
  if (local_18 != param_1->field_0226) {
    return 0;
  }
  return 1;
}


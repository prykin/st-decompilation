
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00600750(AnonShape_00600750_A7773F7A *param_1)

{
  short sVar1;
  STT3DSprC *pSVar2;
  VisibleClassTy *pVVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
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
      iVar5 = local_8;
      iVar7 = local_8 * 0x52;
      iVar4 = iVar7 + param_1->field_0233;
      local_c = (STT3DSprC *)iVar7;
      switch(*(undefined4 *)(iVar7 + 0x39 + param_1->field_0233)) {
      case 1:
        uVar8 = thunk_FUN_006001e0(param_1,local_8);
        pVVar3 = g_visibleClass_00802A88;
        if (uVar8 == 0) {
          if (param_1->field_0232 != '\0') {
            local_c = *(STT3DSprC **)(iVar7 + 0x42 + param_1->field_0233);
            iVar4 = iVar7 + param_1->field_0233;
            if (g_visibleClass_00802A88 != nullptr) {
              sVar1 = *(short *)(iVar4 + 10);
              if (sVar1 < 0) {
                local_10 = (int)(short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                                       (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f)) - 1;
              }
              else {
                local_10 = (uint)(short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                                        (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f));
              }
              sVar1 = *(short *)(iVar4 + 8);
              if (sVar1 < 0) {
                iVar5 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                               (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
              }
              else {
                iVar5 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                    (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
              }
              sVar1 = *(short *)(iVar4 + 6);
              if (sVar1 < 0) {
                iVar4 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                               (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
              }
              else {
                iVar4 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                    (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
              }
              if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
                  (((VisibleClassTy::sub_00558C00
                               (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar4,
                                iVar5,&local_1c,&local_24), (int)local_10 < 0 ||
                    ((4 < (int)local_10 || (local_1c < 0)))) || (pVVar3->field_0030 <= local_1c))))
                 || ((((iVar4 = local_24 + g_centeredOffsets5[local_10], iVar4 < 0 ||
                       (pVVar3->field_0034 <= iVar4)) || (pVVar3->field_004C == nullptr)) ||
                     (pVVar3->field_004C[iVar4 * pVVar3->field_0030 + local_1c] != 0)))) {
                if (*(char *)(iVar7 + 0x41 + param_1->field_0233) == '\0') {
                  thunk_FUN_004ad460(local_c,0);
                  *(undefined1 *)(iVar7 + 0x41 + param_1->field_0233) = 1;
                }
              }
              else if (*(char *)(iVar7 + 0x41 + param_1->field_0233) != '\0') {
                thunk_FUN_004ad430(local_c);
                *(undefined1 *)(iVar7 + 0x41 + param_1->field_0233) = 0;
              }
            }
            iVar7 = param_1->field_0233 + iVar7;
            local_14 = (uint)*(short *)(iVar7 + 6);
            STT3DSprC::sub_004AD3C0
                      (local_c,(float)(int)local_14 * _DAT_007904f8 * _DAT_007904f0,
                       (float)(int)*(short *)(iVar7 + 8) * _DAT_007904f8 * _DAT_007904f0,
                       (float)(int)*(short *)(iVar7 + 10) * _DAT_007904f8 * _DAT_007904f0 +
                       _DAT_007904fc);
          }
        }
        else {
          *(undefined4 *)(iVar7 + 0x39 + param_1->field_0233) = 3;
          if ((param_1->field_0232 == '\0') ||
             (iVar4 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_005FDB50::
                      thunk_FUN_005fdb50((AnonReceiver_005FDB50 *)param_1,1,iVar5), iVar4 != 0)) {
LAB_00600928:
            thunk_FUN_005fd940(param_1,iVar5);
          }
          else {
            sVar1 = *(short *)(iVar7 + 8 + param_1->field_0233);
            iVar7 = iVar7 + param_1->field_0233;
            pSVar2 = *(STT3DSprC **)(iVar7 + 0x42);
            if (sVar1 < 0) {
              iVar4 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                             (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar4 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                  (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
            }
            sVar1 = *(short *)(iVar7 + 6);
            if (sVar1 < 0) {
              iVar7 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                             (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar7 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                  (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
            }
            thunk_FUN_00600110(param_1,iVar7,iVar4,0x460);
            iVar4 = param_1->field_01E9;
            if (iVar4 != 0) {
              if (param_1->field_01F1 == 0) {
                Library::Ourlib::ST3DSMAP::SprSetLevBefore
                          (g_sT3DSMAPContext_00807598,pSVar2->field_0018,*(int *)(iVar4 + 0x1ed));
              }
              else {
                Library::Ourlib::ST3DSMAP::SprSetLevAfter
                          (g_sT3DSMAPContext_00807598,pSVar2->field_0018,*(int *)(iVar4 + 0x1ed));
              }
            }
            uVar10 = 0x53;
            uVar9 = 0x5a;
            iVar4 = 1;
            uVar8 = thunk_FUN_004ad650(pSVar2);
            Library::Ourlib::ST3DSMAP::SprSetLevBeforeLand
                      (g_sT3DSMAPContext_00807598,uVar8,iVar4,uVar9,uVar10);
          }
        }
        break;
      case 2:
        if (((*(uint *)(iVar4 + 0x3d) <= g_playSystem_00802A38->field_00E4) &&
            (iVar4 = thunk_FUN_005ff1f0(param_1,local_8,3,param_1->field_022E), -1 < iVar4)) &&
           (iVar4 = thunk_FUN_005fff60(param_1,local_8,iVar4), iVar5 = local_8, iVar4 != 0)) {
          iVar4 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_005FDB50::thunk_FUN_005fdb50
                            ((AnonReceiver_005FDB50 *)param_1,0,local_8);
          if (iVar4 != 0) goto LAB_00600928;
          *(undefined4 *)(iVar7 + 0x39 + param_1->field_0233) = 1;
        }
        break;
      case 3:
        if (param_1->field_0232 == '\0') {
          thunk_FUN_005fd940(param_1,local_8);
        }
        else {
          pSVar2 = *(STT3DSprC **)(iVar4 + 0x42);
          local_14 = thunk_FUN_004ac910(pSVar2,'\r');
          local_28 = thunk_FUN_004ac910(pSVar2,'\x0e');
          if (0x15 < (int)local_14) {
            if (local_14 == 0x16) {
              STT3DSprC::StartShow(pSVar2,0xf,g_playSystem_00802A38->field_00E4);
            }
            local_10 = thunk_FUN_004ac910(pSVar2,'\x0f');
            STT3DSprC::ShowCurFase(pSVar2,'\x0f');
            iVar4 = STT3DSprC::sub_004ACD30(pSVar2,'\x0f');
            if ((int)local_10 < iVar4) {
              local_10 = local_10 + 1;
            }
            STT3DSprC::SetCurFase(pSVar2,'\x0f',local_10);
          }
          if (*(char *)(iVar7 + 0x28 + param_1->field_0233) != '\0') {
            iVar4 = STT3DSprC::sub_004ACD30(pSVar2,'\x0e');
            iVar7 = thunk_FUN_004ac910(pSVar2,'\x0e');
            if (iVar4 + -1 == iVar7) {
              STT3DSprC::StopShow(pSVar2,0xe);
            }
          }
          iVar4 = STT3DSprC::sub_004ACD30(pSVar2,'\r');
          iVar7 = thunk_FUN_004ac910(pSVar2,'\r');
          if (iVar4 + -1 == iVar7) {
            STT3DSprC::StopShow(pSVar2,0xd);
          }
          iVar4 = STT3DSprC::sub_004ACD30(pSVar2,'\x0f');
          iVar7 = thunk_FUN_004ac910(pSVar2,'\x0f');
          if (iVar4 + -1 == iVar7) {
            *(undefined4 *)((int)local_c + 0x39 + param_1->field_0233) = 4;
          }
          iVar4 = STT3DSprC::sub_004ACD30(pSVar2,'\r');
          uVar8 = local_14;
          if ((int)local_14 < iVar4) {
            uVar8 = local_14 + 1;
          }
          iVar4 = STT3DSprC::sub_004ACD30(pSVar2,'\x0e');
          uVar6 = local_28;
          if ((int)local_28 < iVar4) {
            uVar6 = local_28 + 1;
          }
          STT3DSprC::SetCurFase(pSVar2,'\x0e',uVar6);
          STT3DSprC::ShowCurFase(pSVar2,'\x0e');
          STT3DSprC::SetCurFase(pSVar2,'\r',uVar8);
          STT3DSprC::ShowCurFase(pSVar2,'\r');
          iVar4 = (int)local_c + param_1->field_0233;
          local_28 = (uint)*(short *)(iVar4 + 6);
          STT3DSprC::sub_004AD3C0
                    (pSVar2,(float)(int)local_28 * _DAT_007904f8 * _DAT_007904f0,
                     (float)(int)*(short *)(iVar4 + 8) * _DAT_007904f8 * _DAT_007904f0,
                     (float)(int)*(short *)((int)local_c + 10 + param_1->field_0233) * _DAT_007904f8
                     * _DAT_007904f0 + _DAT_007904fc);
          pVVar3 = g_visibleClass_00802A88;
          if (g_visibleClass_00802A88 != nullptr) {
            sVar1 = *(short *)((int)local_c + 10 + param_1->field_0233);
            iVar4 = (int)local_c + param_1->field_0233;
            if (sVar1 < 0) {
              local_10 = (int)(short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                                     (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f)) - 1;
            }
            else {
              local_10 = (uint)(short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                                      (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f));
            }
            sVar1 = *(short *)(iVar4 + 8);
            if (sVar1 < 0) {
              iVar7 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                             (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar7 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                  (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
            }
            sVar1 = *(short *)(iVar4 + 6);
            if (sVar1 < 0) {
              iVar4 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                             (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar4 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                  (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
            }
            if (((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
                 (VisibleClassTy::sub_00558C00
                            (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar4,iVar7
                             ,&local_20,&local_2c), (int)local_10 < 0)) ||
                (((4 < (int)local_10 || (local_20 < 0)) ||
                 ((pVVar3->field_0030 <= local_20 ||
                  ((iVar4 = g_centeredOffsets5[local_10] + local_2c, iVar4 < 0 ||
                   (pVVar3->field_0034 <= iVar4)))))))) ||
               ((pVVar3->field_004C == nullptr ||
                (pVVar3->field_004C[local_20 + iVar4 * pVVar3->field_0030] != 0)))) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (*(char *)((int)local_c + 0x41 + param_1->field_0233) == '\0') {
                thunk_FUN_004ad460(pSVar2,0);
                *(undefined1 *)((int)local_c + 0x41 + param_1->field_0233) = 1;
              }
            }
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            else if (*(char *)((int)local_c + 0x41 + param_1->field_0233) != '\0') {
              thunk_FUN_004ad430(pSVar2);
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


#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00600750(RecoveredRecordView_00600750_34156DAE *param_1)

{
  short sVar1;
  STT3DSprC *pSVar2;
  VisibleClassTy *pVVar3;
  int iVar4;
  uint uVar8;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
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
      iVar6 = local_8;
      iVar8 = local_8 * 0x52;
      iVar5 = iVar8 + param_1->field_0233;
      local_c = (STT3DSprC *)iVar8;
      switch(*(undefined4 *)(iVar8 + 0x39 + param_1->field_0233)) {
      case 1:

        uVar8 = thunk_FUN_006001e0(param_1,local_8);
        pVVar3 = g_visibleClass_00802A88;
        if (uVar8 == 0) {
          if (param_1->field_0232 != '\0') {
            local_c = *(STT3DSprC **)(iVar8 + 0x42 + param_1->field_0233);
            iVar5 = iVar8 + param_1->field_0233;
            if (g_visibleClass_00802A88 != nullptr) {
              sVar1 = STField<short>(iVar5,0xA);
              if (sVar1 < 0) {
                local_10 = (short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                                       (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f)) - 1;
              }
              else {
                local_10 = (uint)(short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                                        (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f));
              }
              sVar1 = STField<short>(iVar5,0x8);
              iVar6 = STBiasedDiv16(sVar1, 0xc9); /* exact signed 16-bit grid-index division */
              sVar1 = STField<short>(iVar5,0x6);
              iVar5 = STBiasedDiv16(sVar1, 0xc9); /* exact signed 16-bit grid-index division */
              if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
                  /* ST_CALLSITE[00600A26]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
                  (((VisibleClassTy::sub_00558C00
                               (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar5,
                                iVar6,&local_1c,&local_24), (int)local_10 < 0 ||
                    ((4 < (int)local_10 || (local_1c < 0)))) || (pVVar3->field_0030 <= local_1c))))
                 || ((((iVar5 = local_24 + g_centeredOffsets5[local_10], iVar5 < 0 ||
                       (pVVar3->field_0034 <= iVar5)) || (pVVar3->field_004C == nullptr)) ||
                     (pVVar3->field_004C[iVar5 * pVVar3->field_0030 + local_1c] != 0)))) {
                if (*(char *)(iVar8 + 0x41 + param_1->field_0233) == '\0') {
                  thunk_FUN_004ad460(local_c,0);
                  *(undefined1 *)(iVar8 + 0x41 + param_1->field_0233) = 1;
                }
              }
              else if (*(char *)(iVar8 + 0x41 + param_1->field_0233) != '\0') {
                /* ST_CALLSITE[00600AAC]: CALL 0x00403d0f; direct=00403D0F STT3DSprC::sub_004AD430 */
                STT3DSprC::sub_004AD430(local_c);
                *(undefined1 *)(iVar8 + 0x41 + param_1->field_0233) = 0;
              }
            }
            iVar8 = param_1->field_0233 + iVar8;
            local_14 = (uint)STField<short>(iVar8,0x6);
            /* ST_CALLSITE[00600B1B]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
            STT3DSprC::sub_004AD3C0
                      (local_c,(float)(int)local_14 * _DAT_007904f8 * _DAT_007904f0,
                       (float)(int)STField<short>(iVar8,0x8) * _DAT_007904f8 * _DAT_007904f0,
                       (float)(int)STField<short>(iVar8,0xA) * _DAT_007904f8 * _DAT_007904f0 +
                       _DAT_007904fc);
          }
        }
        else {
          *(undefined4 *)(iVar8 + 0x39 + param_1->field_0233) = 3;
          if ((param_1->field_0232 == '\0') ||

             (iVar5 = SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_005FDB50::
                      thunk_FUN_005fdb50((RecoveredReceiver_005FDB50 *)param_1,1,iVar6), iVar5 != 0)
             ) {
LAB_00600928:

            thunk_FUN_005fd940(param_1,iVar6);
          }
          else {
            sVar1 = *(short *)(iVar8 + 8 + param_1->field_0233);
            iVar8 = iVar8 + param_1->field_0233;
            pSVar2 = *(STT3DSprC **)(iVar8 + 0x42);
            iVar5 = STBiasedDiv16(sVar1, 0xc9); /* exact signed 16-bit grid-index division */
            sVar1 = STField<short>(iVar8,0x6);
            iVar8 = STBiasedDiv16(sVar1, 0xc9); /* exact signed 16-bit grid-index division */
            thunk_FUN_00600110(param_1,iVar8,iVar5,0x460);
            iVar5 = param_1->field_01E9;
            if (iVar5 != 0) {
              if (param_1->field_01F1 == 0) {
                Library::Ourlib::ST3DSMAP::SprSetLevBefore
                          (g_sT3DSMAPContext_00807598,pSVar2->field_0018,STField<int>(iVar5,0x1ED));
              }
              else {
                Library::Ourlib::ST3DSMAP::SprSetLevAfter
                          (g_sT3DSMAPContext_00807598,pSVar2->field_0018,STField<int>(iVar5,0x1ED));
              }
            }
            uVar11 = 0x53;
            uVar10 = 0x5a;
            iVar5 = 1;

            uVar9 = thunk_FUN_004ad650(pSVar2);

            Library::Ourlib::ST3DSMAP::SprSetLevBeforeLand
                      (g_sT3DSMAPContext_00807598,uVar9,iVar5,uVar10,uVar11);
          }
        }
        break;
      case 2:
        if (((STField<uint>(iVar5,0x3D) <= g_playSystem_00802A38->field_00E4) &&

            (iVar4 = thunk_FUN_005ff1f0(param_1,local_8,3,param_1->field_022E), -1 < iVar4)) &&

           (iVar5 = thunk_FUN_005fff60(param_1,local_8,iVar4), iVar6 = local_8, iVar5 != 0)) {

          iVar5 = SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_005FDB50::
                  thunk_FUN_005fdb50((RecoveredReceiver_005FDB50 *)param_1,0,local_8);
          if (iVar5 != 0) goto LAB_00600928;
          *(undefined4 *)(iVar8 + 0x39 + param_1->field_0233) = 1;
        }
        break;
      case 3:
        if (param_1->field_0232 == '\0') {

          thunk_FUN_005fd940(param_1,local_8);
        }
        else {
          pSVar2 = *(STT3DSprC **)(iVar5 + 0x42);

          local_14 = thunk_FUN_004ac910(pSVar2,'\r');

          local_28 = thunk_FUN_004ac910(pSVar2,'\x0e');
          if (0x15 < (int)local_14) {
            if (local_14 == 0x16) {
              /* ST_CALLSITE[00600B6C]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
              STT3DSprC::StartShow(pSVar2,0xf,g_playSystem_00802A38->field_00E4);
            }

            local_10 = thunk_FUN_004ac910(pSVar2,'\x0f');
            /* ST_CALLSITE[00600B81]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
            STT3DSprC::ShowCurFase(pSVar2,'\x0f');
            /* ST_CALLSITE[00600B8A]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
            iVar5 = STT3DSprC::sub_004ACD30(pSVar2,'\x0f');
            if ((int)local_10 < iVar5) {
              local_10 = local_10 + 1;
            }
            /* ST_CALLSITE[00600BA4]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
            STT3DSprC::SetCurFase(pSVar2,'\x0f',local_10);
          }
          if (*(char *)(iVar8 + 0x28 + param_1->field_0233) != '\0') {
            /* ST_CALLSITE[00600BBB]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
            iVar5 = STT3DSprC::sub_004ACD30(pSVar2,'\x0e');

            iVar8 = thunk_FUN_004ac910(pSVar2,'\x0e');
            if (iVar5 + -1 == iVar8) {
              /* ST_CALLSITE[00600BD4]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
              STT3DSprC::StopShow(pSVar2,0xe);
            }
          }
          /* ST_CALLSITE[00600BDD]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
          iVar5 = STT3DSprC::sub_004ACD30(pSVar2,'\r');

          iVar8 = thunk_FUN_004ac910(pSVar2,'\r');
          if (iVar5 + -1 == iVar8) {
            /* ST_CALLSITE[00600BF6]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
            STT3DSprC::StopShow(pSVar2,0xd);
          }
          /* ST_CALLSITE[00600BFF]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
          iVar5 = STT3DSprC::sub_004ACD30(pSVar2,'\x0f');

          iVar8 = thunk_FUN_004ac910(pSVar2,'\x0f');
          if (iVar5 + -1 == iVar8) {
            *(undefined4 *)((int)local_c + 0x39 + param_1->field_0233) = 4;
          }
          /* ST_CALLSITE[00600C29]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
          iVar5 = STT3DSprC::sub_004ACD30(pSVar2,'\r');
          uVar9 = local_14;
          if ((int)local_14 < iVar5) {
            uVar9 = local_14 + 1;
          }
          /* ST_CALLSITE[00600C3A]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
          iVar5 = STT3DSprC::sub_004ACD30(pSVar2,'\x0e');
          uVar7 = local_28;
          if ((int)local_28 < iVar5) {
            uVar7 = local_28 + 1;
          }
          /* ST_CALLSITE[00600C4C]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
          STT3DSprC::SetCurFase(pSVar2,'\x0e',uVar7);
          /* ST_CALLSITE[00600C55]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
          STT3DSprC::ShowCurFase(pSVar2,'\x0e');
          /* ST_CALLSITE[00600C5F]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
          STT3DSprC::SetCurFase(pSVar2,'\r',uVar9);
          /* ST_CALLSITE[00600C68]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
          STT3DSprC::ShowCurFase(pSVar2,'\r');
          iVar5 = (int)local_c + param_1->field_0233;
          local_28 = (uint)STField<short>(iVar5,0x6);
          /* ST_CALLSITE[00600CD0]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
          STT3DSprC::sub_004AD3C0
                    (pSVar2,(float)(int)local_28 * _DAT_007904f8 * _DAT_007904f0,
                     (float)(int)STField<short>(iVar5,0x8) * _DAT_007904f8 * _DAT_007904f0,
                     (float)(int)*(short *)((int)local_c + 10 + param_1->field_0233) * _DAT_007904f8
                     * _DAT_007904f0 + _DAT_007904fc);
          pVVar3 = g_visibleClass_00802A88;
          if (g_visibleClass_00802A88 != nullptr) {
            sVar1 = *(short *)((int)local_c + 10 + param_1->field_0233);
            iVar5 = (int)local_c + param_1->field_0233;
            if (sVar1 < 0) {
              local_10 = (short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                                     (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f)) - 1;
            }
            else {
              local_10 = (uint)(short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                                      (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f));
            }
            sVar1 = STField<short>(iVar5,0x8);
            iVar8 = STBiasedDiv16(sVar1, 0xc9); /* exact signed 16-bit grid-index division */
            sVar1 = STField<short>(iVar5,0x6);
            iVar5 = STBiasedDiv16(sVar1, 0xc9); /* exact signed 16-bit grid-index division */
            if (((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
                 /* ST_CALLSITE[00600DB5]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
                 (VisibleClassTy::sub_00558C00
                            (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar5,iVar8
                             ,&local_20,&local_2c), (int)local_10 < 0)) ||
                (((4 < (int)local_10 || (local_20 < 0)) ||
                 ((pVVar3->field_0030 <= local_20 ||
                  ((iVar5 = g_centeredOffsets5[local_10] + local_2c, iVar5 < 0 ||
                   (pVVar3->field_0034 <= iVar5)))))))) ||
               ((pVVar3->field_004C == nullptr ||
                (pVVar3->field_004C[local_20 + iVar5 * pVVar3->field_0030] != 0)))) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (*(char *)((int)local_c + 0x41 + param_1->field_0233) == '\0') {
                thunk_FUN_004ad460(pSVar2,0);
                *(undefined1 *)((int)local_c + 0x41 + param_1->field_0233) = 1;
              }
            }
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            else if (*(char *)((int)local_c + 0x41 + param_1->field_0233) != '\0') {
              /* ST_CALLSITE[00600E43]: CALL 0x00403d0f; direct=00403D0F STT3DSprC::sub_004AD430 */
              STT3DSprC::sub_004AD430(pSVar2);
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


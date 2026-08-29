#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSwitchEnumApplier] Switch target field_020C uses
   /SubmarineTitans/Recovered/Enums/RecoveredReceiver_0060EF40_field_020CState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9 */

int __fastcall FUN_006101b0(RecoveredReceiver_0060EF40 *param_1)

{
  char cVar1;
  byte bVar2;
  int local_EAX_128;
  int local_EAX_493;
  int local_EAX_1240;
  int iVar3;
  uint local_EAX_1692;
  uint local_EAX_4124;
  int iVar14;
  uint uVar6;
  uint uVar4;
  uint uVar5;
  uint local_EAX_8584;
  RecoveredReceiver_0060EF40_field_020CState RVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  short sVar11;
  VisibleClassTy *pVVar12;
  int iVar13;
  bool bVar14;
  uint uVar15;
  byte uVar16;
  byte uVar17;
  ushort uVar18;
  uint local_68;
  uint local_64;
  undefined2 uStack_62;
  uint local_60;
  uint local_58;
  uint local_54;
  undefined2 uStack_52;
  uint local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;
  local_1c = 0;
  switch(param_1->field_020C) {
  case CASE_1:
    cVar1 = param_1->field_0214;
    if (cVar1 == '\x01') {

      iVar13 = thunk_FUN_00615ad0((RecoveredRecordView_00615AD0_52CA5C0D *)param_1);
      if ((iVar13 == 0) || (*(int *)(param_1->field_02DD + 4) == 0)) {
LAB_00610341:
        param_1->field_020C = CASE_9;
      }
      else {
        param_1->field_027C =
             (((int)param_1->field_01EF - (int)param_1->field_01E9) * 10000) /
             *(int *)(param_1->field_02DD + 4);
        param_1->field_0280 =
             (((int)param_1->field_01F1 - (int)param_1->field_01EB) * 10000) /
             *(int *)(param_1->field_02DD + 4);
        param_1->field_0284 =
             (((int)param_1->field_01F3 - (int)param_1->field_01ED) * 10000) /
             *(int *)(param_1->field_02DD + 4);
        param_1->field_0256 = 1;
        thunk_FUN_0060ece0(param_1,0,(int)param_1->field_01E9,(int)param_1->field_01EB,
                           (int)param_1->field_01ED,(int)param_1->field_01EF,
                           (int)param_1->field_01F1,(int)param_1->field_01F3,1);
        param_1->field_020C = CASE_2;
      }
    }
    else if (cVar1 == '\x02') {

      local_EAX_493 =
           SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0060EF40::thunk_FUN_0060ef40
                     (param_1,7);
      if (local_EAX_493 < 1) {
LAB_0061033a:

        thunk_FUN_0060ec00((RecoveredRecord_0060EC00_3D989AA8 *)param_1);
        goto LAB_00610341;
      }
      param_1->field_0256 = 1;
      thunk_FUN_0060ece0(param_1,1,(int)param_1->field_01E9,(int)param_1->field_01EB,
                         (int)param_1->field_01ED,(int)param_1->field_02CB,(int)param_1->field_02CD,
                         (int)param_1->field_02CF,1);
      if (param_1->field_0278 == 0) {
        param_1->field_027C =
             ((&SHORT_007ed570)[(short)param_1->field_02DD[param_1->field_02D9 * 0xe + 3] * 4] *
             10000000) /
             *(int *)(&DAT_007cfe74 + (short)param_1->field_02DD[param_1->field_02D9 * 0xe + 3] * 4);
        param_1->field_0280 =
             ((&SHORT_007ed572)[(short)param_1->field_02DD[param_1->field_02D9 * 0xe + 3] * 4] *
             10000000) /
             *(int *)(&DAT_007cfe74 + (short)param_1->field_02DD[param_1->field_02D9 * 0xe + 3] * 4);
        iVar13 = ((&SHORT_007ed574)[(short)param_1->field_02DD[param_1->field_02D9 * 0xe + 3] * 4] *
                 10000000) /
                 *(int *)(&DAT_007cfe74 +
                         (short)param_1->field_02DD[param_1->field_02D9 * 0xe + 3] * 4);
      }
      else {
        param_1->field_027C =
             (((int)param_1->field_0272 - (short)param_1->field_02DD[param_1->field_02D9 * 0xe]
              ) * 10000) / *(int *)(param_1->field_02DD + param_1->field_02D9 * 0xe + 4);
        param_1->field_0280 =
             (((int)param_1->field_0274 -
              (short)param_1->field_02DD[param_1->field_02D9 * 0xe + 1]) * 10000) /
             *(int *)(param_1->field_02DD + param_1->field_02D9 * 0xe + 4);
        iVar13 = (((int)param_1->field_0276 -
                  (short)param_1->field_02DD[param_1->field_02D9 * 0xe + 2]) * 10000) /
                 *(int *)(param_1->field_02DD + param_1->field_02D9 * 0xe + 4);
      }
      param_1->field_0284 = iVar13;
      param_1->field_020C = CASE_2;
    }
    else if (cVar1 == '\x03') {

      local_EAX_128 =
           FUN_006acf0d((int)param_1->field_01E9,(int)param_1->field_01EB,(int)param_1->field_01ED,
                        (int)param_1->field_01EF,(int)param_1->field_01F1,(int)param_1->field_01F3);
      if (local_EAX_128 == 0) goto LAB_0061033a;
      param_1->field_027C =
           (((int)param_1->field_01EF - (int)param_1->field_01E9) * 10000) / local_EAX_128;
      param_1->field_0280 =
           (((int)param_1->field_01F1 - (int)param_1->field_01EB) * 10000) / local_EAX_128;
      param_1->field_0284 =
           (((int)param_1->field_01F3 - (int)param_1->field_01ED) * 10000) / local_EAX_128;
      iVar13 = param_1->field_01F7;
      param_1->field_0294 = g_playSystem_00802A38->field_00E4;
      param_1->field_028C = local_EAX_128;
      if (iVar13 == 0) {
        param_1->field_0288 = 10;
        param_1->field_020C = CASE_8;
      }
      else if (iVar13 == 1) {
        param_1->field_0288 = 0x35;
        param_1->field_020C = CASE_8;
      }
      else if (iVar13 == 2) {
        param_1->field_0288 = 7;
        param_1->field_020C = CASE_8;
      }
      else {
        param_1->field_0288 = 0x1e;
        param_1->field_020C = CASE_8;
      }
    }
    if (param_1->field_020C != CASE_9) {
      if ((param_1->field_0250 == '\0') && (param_1->field_0252 != nullptr)) {
        thunk_FUN_004ad460(param_1->field_0252,0);
        param_1->field_0250 = 1;
      }
      if (param_1->field_01F7 == 0) {
        thunk_FUN_00617560(param_1,0x477);
        return local_1c;
      }
    }
    break;
  case CASE_2:
  case CASE_4:

    local_EAX_1240 = thunk_FUN_006139a0(param_1,&local_10,&local_14,&local_18);
    if (local_EAX_1240 == 0) goto cf_common_exit_006121E1;
    param_1->field_0262 = param_1->field_025C;
    param_1->field_0260 = param_1->field_025A;
    param_1->field_0264 = param_1->field_025E;
    sVar7 = (short)local_10;
    param_1->field_025A = sVar7;
    local_20 = (int)sVar7;
    sVar11 = (short)local_14;
    param_1->field_025C = sVar11;
    sVar10 = (short)local_18;
    param_1->field_025E = sVar10;
    local_c = 0;
    if (sVar7 < 0) {
      iVar13 = (short)((sVar7 / 0xc9 + (sVar7 >> 0xf)) -
                      (short)((longlong)local_20 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar13 = (short)((sVar7 / 0xc9 + (sVar7 >> 0xf)) -
                           (short)((longlong)local_20 * 0x28c1979 >> 0x3f));
    }
    local_24 = (uint)sVar11;
    if (sVar11 < 0) {
      iVar8 = (short)((sVar11 / 0xc9 + (sVar11 >> 0xf)) -
                     (short)((longlong)(int)local_24 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar8 = (short)((sVar11 / 0xc9 + (sVar11 >> 0xf)) -
                          (short)((longlong)(int)local_24 * 0x28c1979 >> 0x3f));
    }
    iVar9 = (int)sVar10;
    if (sVar10 < 0) {
      iVar3 = (short)((sVar10 / 200 + (sVar10 >> 0xf)) -
                     (short)((longlong)iVar9 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      iVar3 = (short)((sVar10 / 200 + (sVar10 >> 0xf)) -
                          (short)((longlong)iVar9 * 0x51eb851f >> 0x3f));
    }
    if (((param_1->field_0215 == iVar13) && (param_1->field_0217 == iVar8)) &&
       (param_1->field_0219 == iVar3)) {
LAB_00610886:
      local_EAX_1692 = 0;
    }
    else {
      bVar14 = param_1->field_01F7 == 2;
      local_8 = (uint)bVar14;
      iVar13 = local_20 - (short)((short)iVar13 * 0xc9 + 100);
      iVar8 = local_24 - (short)((short)iVar8 * 0xc9 + 100);
      iVar9 = iVar9 + iVar3 * -0xc9;
      iVar9 = iVar9 * iVar9;
      if (0x2773 < (STSignedDiv4(iVar9)) + iVar8 * iVar8 + iVar13 * iVar13)
      goto LAB_00610886;

      local_EAX_1692 =
           SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00601500::thunk_FUN_00601500
                     ((RecoveredReceiver_00601500 *)((int)&param_1[1].field_0000 + 1),local_10,
                      local_14,local_18,(int)param_1->field_0260,(int)param_1->field_0262,
                      (int)param_1->field_0264,param_1->field_01D9,param_1->field_021B,
                      param_1->field_01FB,param_1->field_01FF,0xb0,(uint)bVar14,0);
      if (0 < (int)local_EAX_1692) {
        if (local_EAX_1692 == 5) {

          thunk_FUN_0060ec00((RecoveredRecord_0060EC00_3D989AA8 *)param_1);
          param_1->field_020C = CASE_9;
        }
        else {

          RVar6 = thunk_FUN_00615fd0(param_1,local_EAX_1692,param_1->field_020C);
          param_1->field_020C = RVar6;
        }
      }
    }
    if (param_1->field_020C == CASE_2) {
      param_1->field_022B = (int)param_1->field_025A;
      param_1->field_022F = (int)param_1->field_025C;
      param_1->field_0233 = (int)param_1->field_025E;
      if ((local_EAX_1692 == 0) && ((param_1->field_01F7 == 0 || (param_1->field_01F7 == 2)))) {
        if (param_1->field_0248 < 0) {
          uVar15 = 0;
        }
        else {
          if (4 < param_1->field_0248) goto LAB_00610911;
          uVar15 = 5;
        }
        /* ST_CALLSITE[0061090C]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
        TraksClassTy::TraksCreate
                  (g_traksClass_00802A7C,1,1,uVar15,(int)param_1->field_025A,
                   (int)param_1->field_025C,(int)param_1->field_025E,0,0,0,0,0,0,-1,0,0);
      }
LAB_00610911:
      if (param_1->field_02E9 == '\0') {
        return local_1c;
      }
      if (param_1->field_0252 == nullptr) {
        return local_1c;
      }
      iVar13 = param_1->field_01F7;
      if (iVar13 == 0) {
LAB_00610969:
        local_24 = (uint)param_1->field_0264;
        local_3c = (float)(int)param_1->field_0260 * _DAT_007904f8 * _DAT_007904f0;
        local_38 = (float)(int)param_1->field_0262 * _DAT_007904f8 * _DAT_007904f0;
        local_34 = (float)(int)local_24 * _DAT_007904f8 * _DAT_007904f0;

        ST3DSMAPContext::sub_006E25D0(g_sT3DSMAPContext_00807598,&local_68,&local_3c,0.0,0.0,0.0,1);
        local_24 = (uint)param_1->field_025E;
        local_48 = (float)(int)param_1->field_025A * _DAT_007904f8 * _DAT_007904f0;
        local_44 = (float)(int)param_1->field_025C * _DAT_007904f8 * _DAT_007904f0;
        local_40 = (float)(int)local_24 * _DAT_007904f8 * _DAT_007904f0;

        ST3DSMAPContext::sub_006E25D0(g_sT3DSMAPContext_00807598,&local_58,&local_48,0.0,0.0,0.0,1);
        /* ST_CALLSITE[00610A75]: CALL dword ptr [EDX + 0x14]; [STIndirectCallsiteApplier] exact slot 0x14; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
        sVar7 = STStructuralVirtualCall<undefined4>(param_1, 0x14, STPiece<2,2>(local_68), uStack_62, STPiece<2,2>(local_60), local_58 >> 0x10, (undefined1)uStack_52, local_50 >> 0x10);
        param_1->field_0237 = *(int *)(&DAT_007d2138 + sVar7 * 4);
      }
      else if (iVar13 == 1) {
        iVar13 = param_1->field_0237 + 1;
        param_1->field_0237 = iVar13;
        if (9 < iVar13) {
          param_1->field_0237 = 0;
        }
      }
      else {
        if (iVar13 == 2) goto LAB_00610969;
        param_1->field_0237 = 0;
      }
      /* ST_CALLSITE[00610A97]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      STT3DSprC::SetCurFase(param_1->field_0252,'\r',param_1->field_0237);
      /* ST_CALLSITE[00610AA4]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
      STT3DSprC::ShowCurFase(param_1->field_0252,'\r');
      /* ST_CALLSITE[00610AF7]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
      STT3DSprC::sub_004AD3C0
                (param_1->field_0252,(float)param_1->field_022B * _DAT_007904f8 * _DAT_007904f0,
                 (float)param_1->field_022F * _DAT_007904f8 * _DAT_007904f0,
                 (float)param_1->field_0233 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      pVVar12 = g_visibleClass_00802A88;
      if (g_visibleClass_00802A88 == nullptr) goto cf_common_exit_006115EC;
      iVar13 = param_1->field_0233;
      sVar7 = (short)(iVar13 >> 0x1f);
      if (iVar13 < 0) {
        local_c = (short)(((short)(iVar13 / 200) + sVar7) -
                              (short)((longlong)iVar13 * 0x51eb851f >> 0x3f)) - 1;
      }
      else {
        local_c = (uint)(short)(((short)(iVar13 / 200) + sVar7) -
                               (short)((longlong)iVar13 * 0x51eb851f >> 0x3f));
      }
      iVar13 = param_1->field_022F;
      iVar13 = STBiasedDiv16(iVar13, 0xc9); /* exact signed 16-bit grid-index division */
      iVar8 = param_1->field_022B;
      iVar8 = STBiasedDiv16(iVar8, 0xc9); /* exact signed 16-bit grid-index division */
      if (((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
         /* ST_CALLSITE[00610BCA]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
         ((VisibleClassTy::sub_00558C00
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar8,iVar13,
                      (int *)&local_24,&local_20), (int)local_c < 0 ||
          (((4 < (int)local_c || ((int)local_24 < 0)) ||
           (iVar13 = pVVar12->field_0030, iVar13 <= (int)local_24))))))
      goto cf_common_exit_00611C0F;
      iVar8 = g_centeredOffsets5[local_c];
    }
    else {
      if (param_1->field_020C != CASE_4) {
        return local_1c;
      }
      if (param_1->field_0248 < 0) {
        if ((uint)param_1->field_0294 < g_playSystem_00802A38->field_00E4) {
          param_1->field_0248 = 0;
          param_1->field_024C = g_playSystem_00802A38->field_00E4;
        }
      }
      else {
        uVar15 = g_playSystem_00802A38->field_00E4 - param_1->field_024C >> 2;
        param_1->field_0248 = uVar15;
        if ((int)PTR_00806724->entryCount <= (int)uVar15) {
          param_1->field_0248 = PTR_00806724->entryCount + -1;
cf_common_exit_006121E1:

          thunk_FUN_0060ec00((RecoveredRecord_0060EC00_3D989AA8 *)param_1);
          param_1->field_020C = CASE_9;
          return local_1c;
        }
        if ((g_playSystem_00802A38->field_00E4 & 1) == 0) {
          iVar13 = param_1->field_0288 + -3;
          param_1->field_0288 = iVar13;
          if (iVar13 < 5) {
            param_1->field_0288 = 5;
          }
          if (0 < param_1->field_021B) {
            param_1->field_021B = param_1->field_021B + -0x12;
          }
          if (param_1->field_021B < 0) {
            param_1->field_021B = 0;
          }
        }
      }
      param_1->field_022B = (int)param_1->field_025A;
      param_1->field_022F = (int)param_1->field_025C;
      param_1->field_0233 = (int)param_1->field_025E;
      if ((local_EAX_1692 == 0) && ((param_1->field_01F7 == 0 || (param_1->field_01F7 == 2)))) {
        if (param_1->field_0248 < 0) {
          uVar15 = 0;
        }
        else {
          if (4 < param_1->field_0248) goto LAB_00610d47;
          uVar15 = 5;
        }
        /* ST_CALLSITE[00610D42]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
        TraksClassTy::TraksCreate
                  (g_traksClass_00802A7C,1,1,uVar15,(int)param_1->field_025A,
                   (int)param_1->field_025C,(int)param_1->field_025E,0,0,0,0,0,0,-1,0,0);
      }
LAB_00610d47:
      if (param_1->field_02E9 == '\0') {
        return local_1c;
      }
      if (param_1->field_0252 == nullptr) {
        return local_1c;
      }
      iVar13 = param_1->field_01F7;
      if (iVar13 == 0) {
LAB_00610d9f:
        local_24 = (uint)param_1->field_0264;
        local_48 = (float)(int)param_1->field_0260 * _DAT_007904f8 * _DAT_007904f0;
        local_44 = (float)(int)param_1->field_0262 * _DAT_007904f8 * _DAT_007904f0;
        local_40 = (float)(int)local_24 * _DAT_007904f8 * _DAT_007904f0;

        ST3DSMAPContext::sub_006E25D0(g_sT3DSMAPContext_00807598,&local_58,&local_48,0.0,0.0,0.0,1);
        local_24 = (uint)param_1->field_025E;
        local_3c = (float)(int)param_1->field_025A * _DAT_007904f8 * _DAT_007904f0;
        local_38 = (float)(int)param_1->field_025C * _DAT_007904f8 * _DAT_007904f0;
        local_34 = (float)(int)local_24 * _DAT_007904f8 * _DAT_007904f0;

        ST3DSMAPContext::sub_006E25D0(g_sT3DSMAPContext_00807598,&local_68,&local_3c,0.0,0.0,0.0,1);
        /* ST_CALLSITE[00610EAB]: CALL dword ptr [EAX + 0x14]; [STIndirectCallsiteApplier] exact slot 0x14; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
        sVar7 = STStructuralVirtualCall<undefined4>(param_1, 0x14, STPiece<2,2>(local_58), uStack_52, STPiece<2,2>(local_50), local_68 >> 0x10, (undefined1)uStack_62, local_60 >> 0x10);
        param_1->field_0237 = *(int *)(&DAT_007d2138 + sVar7 * 4);
      }
      else if (iVar13 == 1) {
        iVar13 = param_1->field_0237 + 1;
        param_1->field_0237 = iVar13;
        if (9 < iVar13) {
          param_1->field_0237 = 0;
        }
      }
      else {
        if (iVar13 == 2) goto LAB_00610d9f;
        param_1->field_0237 = 0;
      }
      /* ST_CALLSITE[00610ECD]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      STT3DSprC::SetCurFase(param_1->field_0252,'\r',param_1->field_0237);
      /* ST_CALLSITE[00610EDA]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
      STT3DSprC::ShowCurFase(param_1->field_0252,'\r');
      /* ST_CALLSITE[00610F2D]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
      STT3DSprC::sub_004AD3C0
                (param_1->field_0252,(float)param_1->field_022B * _DAT_007904f8 * _DAT_007904f0,
                 (float)param_1->field_022F * _DAT_007904f8 * _DAT_007904f0,
                 (float)param_1->field_0233 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      pVVar12 = g_visibleClass_00802A88;
      if (g_visibleClass_00802A88 == nullptr) goto cf_common_exit_006115EC;
      iVar13 = param_1->field_0233;
      sVar7 = (short)(iVar13 >> 0x1f);
      if (iVar13 < 0) {
        local_c = (short)(((short)(iVar13 / 200) + sVar7) -
                              (short)((longlong)iVar13 * 0x51eb851f >> 0x3f)) - 1;
      }
      else {
        local_c = (uint)(short)(((short)(iVar13 / 200) + sVar7) -
                               (short)((longlong)iVar13 * 0x51eb851f >> 0x3f));
      }
      iVar13 = param_1->field_022F;
      iVar13 = STBiasedDiv16(iVar13, 0xc9); /* exact signed 16-bit grid-index division */
      iVar8 = param_1->field_022B;
      iVar8 = STBiasedDiv16(iVar8, 0xc9); /* exact signed 16-bit grid-index division */
      if (((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
         /* ST_CALLSITE[00611000]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
         ((VisibleClassTy::sub_00558C00
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar8,iVar13,
                      (int *)&local_24,&local_20), (int)local_c < 0 ||
          (((4 < (int)local_c || ((int)local_24 < 0)) ||
           (iVar13 = pVVar12->field_0030, iVar13 <= (int)local_24))))))
      goto cf_common_exit_00611C0F;
      iVar8 = g_centeredOffsets5[local_c];
    }
    iVar8 = iVar8 + local_20;
    if (((-1 < iVar8) && (iVar8 < pVVar12->field_0034)) && (pVVar12->field_004C != nullptr)) {
      bVar2 = pVVar12->field_004C[iVar8 * iVar13 + local_24];
      goto LAB_00611061;
    }
    goto cf_common_exit_00611C0F;
  case CASE_3:

    iVar13 = thunk_FUN_006164e0(param_1,&local_10,&local_14,&local_18);
    if (iVar13 < 1) {
      param_1->field_0256 = 2;
      param_1->field_020C = CASE_4;
      param_1->field_0270 = 0xffff;
      uVar15 = param_1->field_001C * 0x41c64e6d + 0x3039;
      param_1->field_001C = uVar15;
      param_1->field_0294 = (uVar15 >> 0x10) % 0xb + 10 + g_playSystem_00802A38->field_00E4;
      param_1->field_0298 = g_playSystem_00802A38->field_00E4;

      local_1c = thunk_FUN_006173a0(param_1,10,&local_10,&local_14,&local_18);
      if (0 < local_1c) {
        return local_1c;
      }
      goto cf_common_exit_006121E1;
    }
    param_1->field_0260 = param_1->field_025A;
    param_1->field_0262 = param_1->field_025C;
    param_1->field_0264 = param_1->field_025E;
    sVar7 = (short)local_10;
    param_1->field_025A = sVar7;
    sVar11 = (short)local_14;
    param_1->field_025C = sVar11;
    sVar10 = (short)local_18;
    param_1->field_025E = sVar10;
    local_c = 0;
    iVar13 = STBiasedDiv16(sVar7, 0xc9); /* exact signed 16-bit grid-index division */
    if (param_1->field_0215 == iVar13) {
      iVar13 = STBiasedDiv16(sVar11, 0xc9); /* exact signed 16-bit grid-index division */
      if (param_1->field_0217 != iVar13) goto LAB_00611185;
      iVar13 = STBiasedDiv16(sVar10, 200); /* exact signed 16-bit grid-index division */
      local_EAX_4124 = local_c;
      if (param_1->field_0219 != iVar13) goto LAB_00611185;
    }
    else {
LAB_00611185:

      local_EAX_4124 =
           SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00601500::thunk_FUN_00601500
                     ((RecoveredReceiver_00601500 *)((int)&param_1[1].field_0000 + 1),local_10,
                      local_14,local_18,(int)param_1->field_0260,(int)param_1->field_0262,
                      (int)param_1->field_0264,param_1->field_01D9,param_1->field_021B,
                      param_1->field_01FB,param_1->field_01FF,0xb0,0,0);
      local_c = local_EAX_4124;
      if (0 < (int)local_EAX_4124) {
        if (local_EAX_4124 == 5) {

          thunk_FUN_0060ec00((RecoveredRecord_0060EC00_3D989AA8 *)param_1);
          param_1->field_020C = CASE_9;
        }
        else {

          RVar6 = thunk_FUN_00615fd0(param_1,local_EAX_4124,param_1->field_020C);
          param_1->field_020C = RVar6;
        }
      }
    }
    if ((param_1->field_020C != CASE_3) && (param_1->field_020C != CASE_4)) {
      return local_1c;
    }
    param_1->field_022B = (int)param_1->field_025A;
    param_1->field_022F = (int)param_1->field_025C;
    param_1->field_0233 = (int)param_1->field_025E;
    if ((local_EAX_4124 == 0) && ((param_1->field_01F7 == 0 || (param_1->field_01F7 == 2)))) {
      if (param_1->field_0248 < 0) {
        uVar15 = 0;
      }
      else {
        if (4 < param_1->field_0248) goto LAB_006112a8;
        uVar15 = 5;
      }
      /* ST_CALLSITE[006112A3]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
      TraksClassTy::TraksCreate
                (g_traksClass_00802A7C,1,1,uVar15,(int)param_1->field_025A,(int)param_1->field_025C,
                 (int)param_1->field_025E,0,0,0,0,0,0,-1,0,0);
    }
LAB_006112a8:
    if (param_1->field_02E9 == '\0') {
      return local_1c;
    }
    if (param_1->field_0252 == nullptr) {
      return local_1c;
    }
    iVar13 = param_1->field_01F7;
    if (iVar13 == 0) {
LAB_00611304:
      local_24 = (uint)param_1->field_0264;
      local_48 = (float)(int)param_1->field_0260 * _DAT_007904f8 * _DAT_007904f0;
      local_44 = (float)(int)param_1->field_0262 * _DAT_007904f8 * _DAT_007904f0;
      local_40 = (float)(int)local_24 * _DAT_007904f8 * _DAT_007904f0;

      ST3DSMAPContext::sub_006E25D0(g_sT3DSMAPContext_00807598,&local_58,&local_48,0.0,0.0,0.0,1);
      local_24 = (uint)param_1->field_025E;
      local_3c = (float)(int)param_1->field_025A * _DAT_007904f8 * _DAT_007904f0;
      local_38 = (float)(int)param_1->field_025C * _DAT_007904f8 * _DAT_007904f0;
      local_34 = (float)(int)local_24 * _DAT_007904f8 * _DAT_007904f0;

      ST3DSMAPContext::sub_006E25D0(g_sT3DSMAPContext_00807598,&local_68,&local_3c,0.0,0.0,0.0,1);
      /* ST_CALLSITE[00611410]: CALL dword ptr [EAX + 0x14]; [STIndirectCallsiteApplier] exact slot 0x14; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
      sVar7 = STStructuralVirtualCall<undefined4>(param_1, 0x14, STPiece<2,2>(local_58), uStack_52, STPiece<2,2>(local_50), local_68 >> 0x10, (undefined1)uStack_62, local_60 >> 0x10);
      param_1->field_0237 = *(int *)(&DAT_007d2138 + sVar7 * 4);
    }
    else if (iVar13 == 1) {
      iVar13 = param_1->field_0237 + 1;
      param_1->field_0237 = iVar13;
      if (9 < iVar13) {
        param_1->field_0237 = 0;
      }
    }
    else {
      if (iVar13 == 2) goto LAB_00611304;
      param_1->field_0237 = 0;
    }
    /* ST_CALLSITE[00611432]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    STT3DSprC::SetCurFase(param_1->field_0252,'\r',param_1->field_0237);
    /* ST_CALLSITE[0061143F]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
    STT3DSprC::ShowCurFase(param_1->field_0252,'\r');
    /* ST_CALLSITE[00611492]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
    STT3DSprC::sub_004AD3C0
              (param_1->field_0252,(float)param_1->field_022B * _DAT_007904f8 * _DAT_007904f0,
               (float)param_1->field_022F * _DAT_007904f8 * _DAT_007904f0,
               (float)param_1->field_0233 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    pVVar12 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 != nullptr) {
      iVar13 = param_1->field_0233;
      sVar7 = (short)(iVar13 >> 0x1f);
      if (iVar13 < 0) {
        local_c = (short)(((short)(iVar13 / 200) + sVar7) -
                              (short)((longlong)iVar13 * 0x51eb851f >> 0x3f)) - 1;
      }
      else {
        local_c = (uint)(short)(((short)(iVar13 / 200) + sVar7) -
                               (short)((longlong)iVar13 * 0x51eb851f >> 0x3f));
      }
      iVar13 = param_1->field_022F;
      iVar13 = STBiasedDiv16(iVar13, 0xc9); /* exact signed 16-bit grid-index division */
      iVar8 = param_1->field_022B;
      iVar8 = STBiasedDiv16(iVar8, 0xc9); /* exact signed 16-bit grid-index division */
      if (((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
           /* ST_CALLSITE[00611565]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
           (VisibleClassTy::sub_00558C00
                      (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar8,iVar13,
                       (int *)&local_24,&local_20), (int)local_c < 0)) ||
          (((4 < (int)local_c || ((int)local_24 < 0)) ||
           ((pVVar12->field_0030 <= (int)local_24 ||
            ((iVar13 = g_centeredOffsets5[local_c] + local_20, iVar13 < 0 ||
             (pVVar12->field_0034 <= iVar13)))))))) ||
         ((pVVar12->field_004C == nullptr ||
          (pVVar12->field_004C[local_24 + iVar13 * pVVar12->field_0030] != 0))))
      goto cf_common_exit_00611C0F;
      if (param_1->field_0250 == '\0') goto cf_common_exit_006115EC;
      goto LAB_006115da;
    }
    goto cf_common_exit_006115EC;
  case CASE_5:

    iVar14 = thunk_FUN_00616f60(param_1,&local_10,&local_14,&local_18);
    if (iVar14 == 0) {
      return local_1c;
    }
    param_1->field_0262 = param_1->field_025C;
    param_1->field_0260 = param_1->field_025A;
    bVar14 = param_1->field_01F7 == 2;
    param_1->field_0264 = param_1->field_025E;
    local_8 = (uint)bVar14;
    sVar7 = (short)local_10;
    param_1->field_025A = sVar7;
    sVar11 = (short)local_14;
    param_1->field_025C = sVar11;
    sVar10 = (short)local_18;
    param_1->field_025E = sVar10;
    local_c = 0;
    iVar13 = STBiasedDiv16(sVar7, 0xc9); /* exact signed 16-bit grid-index division */
    if (param_1->field_0215 == iVar13) {
      iVar13 = STBiasedDiv16(sVar11, 0xc9); /* exact signed 16-bit grid-index division */
      if (param_1->field_0217 != iVar13) goto LAB_006117e5;
      iVar13 = STBiasedDiv16(sVar10, 200); /* exact signed 16-bit grid-index division */
      uVar6 = local_c;
      if (param_1->field_0219 != iVar13) goto LAB_006117e5;
    }
    else {
LAB_006117e5:

      uVar6 = SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00601500::thunk_FUN_00601500
                        ((RecoveredReceiver_00601500 *)((int)&param_1[1].field_0000 + 1),local_10,
                         local_14,local_18,(int)param_1->field_0260,(int)param_1->field_0262,
                         (int)param_1->field_0264,param_1->field_01D9,param_1->field_021B,
                         param_1->field_01FB,param_1->field_01FF,0xb0,(uint)bVar14,0);
      local_c = uVar6;
      if (0 < (int)uVar6) {
        if (uVar6 == 5) {

          thunk_FUN_0060ec00((RecoveredRecord_0060EC00_3D989AA8 *)param_1);
          param_1->field_020C = CASE_9;
        }
        else {

          RVar6 = thunk_FUN_00615fd0(param_1,uVar6,param_1->field_020C);
          param_1->field_020C = RVar6;
        }
      }
    }
    RVar6 = param_1->field_020C;
    if (((RVar6 != CASE_5) && (RVar6 != CASE_3)) && (RVar6 != CASE_4)) {
      return local_1c;
    }
    param_1->field_022B = (int)param_1->field_025A;
    param_1->field_022F = (int)param_1->field_025C;
    param_1->field_0233 = (int)param_1->field_025E;
    if ((uVar6 == 0) && ((param_1->field_01F7 == 0 || (param_1->field_01F7 == 2)))) {
      if (param_1->field_0248 < 0) {
        uVar15 = 0;
      }
      else {
        if (4 < param_1->field_0248) goto LAB_0061190f;
        uVar15 = 5;
      }
      /* ST_CALLSITE[0061190A]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
      TraksClassTy::TraksCreate
                (g_traksClass_00802A7C,1,1,uVar15,(int)param_1->field_025A,(int)param_1->field_025C,
                 (int)param_1->field_025E,0,0,0,0,0,0,-1,0,0);
    }
LAB_0061190f:
    if (param_1->field_02E9 == '\0') {
      return local_1c;
    }
    if (param_1->field_0252 == nullptr) {
      return local_1c;
    }
    iVar13 = param_1->field_01F7;
    if (iVar13 == 0) {
LAB_0061196b:
      local_24 = (uint)param_1->field_0264;
      local_48 = (float)(int)param_1->field_0260 * _DAT_007904f8 * _DAT_007904f0;
      local_44 = (float)(int)param_1->field_0262 * _DAT_007904f8 * _DAT_007904f0;
      local_40 = (float)(int)local_24 * _DAT_007904f8 * _DAT_007904f0;

      ST3DSMAPContext::sub_006E25D0(g_sT3DSMAPContext_00807598,&local_58,&local_48,0.0,0.0,0.0,1);
      local_24 = (uint)param_1->field_025E;
      local_3c = (float)(int)param_1->field_025A * _DAT_007904f8 * _DAT_007904f0;
      local_38 = (float)(int)param_1->field_025C * _DAT_007904f8 * _DAT_007904f0;
      local_34 = (float)(int)local_24 * _DAT_007904f8 * _DAT_007904f0;

      ST3DSMAPContext::sub_006E25D0(g_sT3DSMAPContext_00807598,&local_68,&local_3c,0.0,0.0,0.0,1);
      /* ST_CALLSITE[00611A77]: CALL dword ptr [EDX + 0x14]; [STIndirectCallsiteApplier] exact slot 0x14; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
      sVar7 = STStructuralVirtualCall<undefined4>(param_1, 0x14, STPiece<2,2>(local_58), uStack_52, STPiece<2,2>(local_50), local_68 >> 0x10, (undefined1)uStack_62, local_60 >> 0x10);
      param_1->field_0237 = *(int *)(&DAT_007d2138 + sVar7 * 4);
    }
    else if (iVar13 == 1) {
      iVar13 = param_1->field_0237 + 1;
      param_1->field_0237 = iVar13;
      if (9 < iVar13) {
        param_1->field_0237 = 0;
      }
    }
    else {
      if (iVar13 == 2) goto LAB_0061196b;
      param_1->field_0237 = 0;
    }
    /* ST_CALLSITE[00611A99]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    STT3DSprC::SetCurFase(param_1->field_0252,'\r',param_1->field_0237);
    /* ST_CALLSITE[00611AA6]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
    STT3DSprC::ShowCurFase(param_1->field_0252,'\r');
    /* ST_CALLSITE[00611AF9]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
    STT3DSprC::sub_004AD3C0
              (param_1->field_0252,(float)param_1->field_022B * _DAT_007904f8 * _DAT_007904f0,
               (float)param_1->field_022F * _DAT_007904f8 * _DAT_007904f0,
               (float)param_1->field_0233 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    pVVar12 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == nullptr) goto cf_common_exit_006115EC;
    iVar13 = param_1->field_0233;
    sVar7 = (short)(iVar13 >> 0x1f);
    if (iVar13 < 0) {
      local_c = (short)(((short)(iVar13 / 200) + sVar7) -
                            (short)((longlong)iVar13 * 0x51eb851f >> 0x3f)) - 1;
    }
    else {
      local_c = (uint)(short)(((short)(iVar13 / 200) + sVar7) -
                             (short)((longlong)iVar13 * 0x51eb851f >> 0x3f));
    }
    iVar13 = param_1->field_022F;
    iVar13 = STBiasedDiv16(iVar13, 0xc9); /* exact signed 16-bit grid-index division */
    iVar8 = param_1->field_022B;
    iVar8 = STBiasedDiv16(iVar8, 0xc9); /* exact signed 16-bit grid-index division */
    if (((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
         /* ST_CALLSITE[00611BC4]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
         ((VisibleClassTy::sub_00558C00
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar8,iVar13,
                      (int *)&local_24,&local_20), (int)local_c < 0 ||
          ((((4 < (int)local_c || ((int)local_24 < 0)) || (pVVar12->field_0030 <= (int)local_24)) ||
           ((iVar13 = g_centeredOffsets5[local_c] + local_20, iVar13 < 0 ||
            (pVVar12->field_0034 <= iVar13)))))))) || (pVVar12->field_004C == nullptr)) ||
       (pVVar12->field_004C[local_24 + iVar13 * pVVar12->field_0030] != 0))
    goto cf_common_exit_00611C0F;
LAB_00611c36:
    if (param_1->field_0250 != '\0') {
LAB_006115da:
      /* ST_CALLSITE[006115E0]: CALL 0x00403d0f; direct=00403D0F STT3DSprC::sub_004AD430 */
      STT3DSprC::sub_004AD430(param_1->field_0252);
      param_1->field_0250 = 0;
    }
    goto cf_common_exit_006115EC;
  case CASE_6:
    if (param_1->field_0210 < g_playSystem_00802A38->field_00E4) {

      thunk_FUN_00615860((int)param_1->field_01F5,&local_30,&local_2c,&local_28);

      uVar4 = thunk_FUN_00613140(param_1,((int)(local_30 + (local_30 >> 0x1f & 0x3ffU)) >> 10) +
                                         (int)param_1->field_01E9,
                                 ((int)(local_2c + (local_2c >> 0x1f & 0x3ffU)) >> 10) +
                                 (int)param_1->field_01EB,
                                 ((int)(local_28 + (local_28 >> 0x1f & 0x3ffU)) >> 10) +
                                 (int)param_1->field_01ED,(int)param_1->field_01E9,
                                 (int)param_1->field_01EB,(int)param_1->field_01ED);
      thunk_FUN_00613280(param_1,(int)param_1->field_01E9,(int)param_1->field_01EB,
                         (int)param_1->field_01ED,uVar4);
      /* ST_CALLSITE[00611CF9]: CALL 0x00405993; direct=00405993 STGenBombC::LoadImagSpr */
      STGenBombC::LoadImagSpr((STGenBombC *)param_1,1,0);
      if ((param_1->field_0250 != '\0') && (param_1->field_0252 != nullptr)) {
        /* ST_CALLSITE[00611D12]: CALL 0x00403d0f; direct=00403D0F STT3DSprC::sub_004AD430 */
        STT3DSprC::sub_004AD430(param_1->field_0252);
        param_1->field_0250 = 0;
      }
      param_1->field_020C = CASE_1;
      return local_1c;
    }
    break;
  case CASE_7:
    if ((param_1->field_02E9 != '\0') && (param_1->field_0252 != nullptr)) {

      uVar15 = thunk_FUN_004ac910(param_1->field_0252,'\r');

      local_24 = thunk_FUN_004ac910(param_1->field_0252,'\x0e');
      if (0xe < (int)uVar15) {
        if (uVar15 == 0xf) {
          /* ST_CALLSITE[00611D83]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
          STT3DSprC::StartShow(param_1->field_0252,0xf,g_playSystem_00802A38->field_00E4);
        }

        uVar5 = thunk_FUN_004ac910(param_1->field_0252,'\x0f');
        /* ST_CALLSITE[00611D9F]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
        STT3DSprC::ShowCurFase(param_1->field_0252,'\x0f');
        /* ST_CALLSITE[00611DAC]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
        iVar13 = STT3DSprC::sub_004ACD30(param_1->field_0252,'\x0f');
        if ((int)uVar5 < iVar13) {
          uVar5 = uVar5 + 1;
        }
        /* ST_CALLSITE[00611DBF]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
        STT3DSprC::SetCurFase(param_1->field_0252,'\x0f',uVar5);
      }
      if (param_1->field_0251 != '\0') {
        /* ST_CALLSITE[00611DD6]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
        iVar13 = STT3DSprC::sub_004ACD30(param_1->field_0252,'\x0e');

        iVar8 = thunk_FUN_004ac910(param_1->field_0252,'\x0e');
        if (iVar13 + -1 == iVar8) {
          /* ST_CALLSITE[00611DF7]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
          STT3DSprC::StopShow(param_1->field_0252,0xe);
        }
      }
      /* ST_CALLSITE[00611E04]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      iVar13 = STT3DSprC::sub_004ACD30(param_1->field_0252,'\r');

      iVar8 = thunk_FUN_004ac910(param_1->field_0252,'\r');
      if (iVar13 + -1 == iVar8) {
        /* ST_CALLSITE[00611E25]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow(param_1->field_0252,0xd);
      }
      /* ST_CALLSITE[00611E32]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      iVar13 = STT3DSprC::sub_004ACD30(param_1->field_0252,'\x0f');

      iVar8 = thunk_FUN_004ac910(param_1->field_0252,'\x0f');
      if (iVar13 + -1 == iVar8) {
        param_1->field_020C = CASE_9;
        return local_1c;
      }
      /* ST_CALLSITE[00611E67]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      iVar13 = STT3DSprC::sub_004ACD30(param_1->field_0252,'\r');
      if ((int)uVar15 < iVar13) {
        uVar15 = uVar15 + 1;
      }
      /* ST_CALLSITE[00611E79]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      iVar13 = STT3DSprC::sub_004ACD30(param_1->field_0252,'\x0e');
      uVar5 = local_24;
      if ((int)local_24 < iVar13) {
        uVar5 = local_24 + 1;
      }
      /* ST_CALLSITE[00611E8F]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      STT3DSprC::SetCurFase(param_1->field_0252,'\x0e',uVar5);
      /* ST_CALLSITE[00611E9C]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
      STT3DSprC::ShowCurFase(param_1->field_0252,'\x0e');
      /* ST_CALLSITE[00611EAA]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      STT3DSprC::SetCurFase(param_1->field_0252,'\r',uVar15);
      /* ST_CALLSITE[00611EB7]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
      STT3DSprC::ShowCurFase(param_1->field_0252,'\r');
      /* ST_CALLSITE[00611F0A]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
      STT3DSprC::sub_004AD3C0
                (param_1->field_0252,(float)param_1->field_022B * _DAT_007904f8 * _DAT_007904f0,
                 (float)param_1->field_022F * _DAT_007904f8 * _DAT_007904f0,
                 (float)param_1->field_0233 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      pVVar12 = g_visibleClass_00802A88;
      if (g_visibleClass_00802A88 == nullptr) {
        return local_1c;
      }
      iVar13 = param_1->field_0233;
      sVar7 = (short)(iVar13 >> 0x1f);
      if (iVar13 < 0) {
        local_24 = (short)(((short)(iVar13 / 200) + sVar7) -
                               (short)((longlong)iVar13 * 0x51eb851f >> 0x3f)) - 1;
      }
      else {
        local_24 = (uint)(short)(((short)(iVar13 / 200) + sVar7) -
                                (short)((longlong)iVar13 * 0x51eb851f >> 0x3f));
      }
      iVar13 = param_1->field_022F;
      iVar13 = STBiasedDiv16(iVar13, 0xc9); /* exact signed 16-bit grid-index division */
      iVar8 = param_1->field_022B;
      iVar8 = STBiasedDiv16(iVar8, 0xc9); /* exact signed 16-bit grid-index division */
      if ((((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
            /* ST_CALLSITE[00611FD5]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
            (VisibleClassTy::sub_00558C00
                       (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar8,iVar13,
                        &local_20,(int *)&local_c), -1 < (int)local_24)) &&
           (((int)local_24 < 5 && (-1 < local_20)))) &&
          (((local_20 < pVVar12->field_0030 &&
            ((iVar13 = g_centeredOffsets5[local_24] + local_c, -1 < iVar13 &&
             (iVar13 < pVVar12->field_0034)))) && (pVVar12->field_004C != nullptr)))) &&
         (pVVar12->field_004C[local_20 + iVar13 * pVVar12->field_0030] == 0)) {
        if (param_1->field_0250 == '\0') {
          return local_1c;
        }
        /* ST_CALLSITE[00612060]: CALL 0x00403d0f; direct=00403D0F STT3DSprC::sub_004AD430 */
        STT3DSprC::sub_004AD430(param_1->field_0252);
        param_1->field_0250 = 0;
        return local_1c;
      }
      if (param_1->field_0250 != '\0') {
        return local_1c;
      }
      thunk_FUN_004ad460(param_1->field_0252,0);
      param_1->field_0250 = 1;
      return local_1c;
    }
  case CASE_9:

    thunk_FUN_0060ec00((RecoveredRecord_0060EC00_3D989AA8 *)param_1);
    break;
  case CASE_8:
    param_1->field_0260 = param_1->field_025A;
    param_1->field_0262 = param_1->field_025C;
    param_1->field_0264 = param_1->field_025E;
    iVar13 = g_playSystem_00802A38->field_00E4 - param_1->field_0294;
    if ((iVar13 == 2) && (param_1->field_01F7 == 1)) {
      thunk_FUN_00617560(param_1,0x48b);
    }
    iVar13 = param_1->field_0288 * iVar13;
    iVar8 = param_1->field_027C * iVar13;
    iVar9 = param_1->field_0280 * iVar13;
    sVar11 = (((short)(iVar8 / 10000) + (short)(iVar8 >> 0x1f)) -
             (short)((longlong)iVar8 * 0x68db8bad >> 0x3f)) + param_1->field_01E9;
    iVar8 = param_1->field_0284 * iVar13;
    sVar10 = (((short)(iVar9 / 10000) + (short)(iVar9 >> 0x1f)) -
             (short)((longlong)iVar9 * 0x68db8bad >> 0x3f)) + param_1->field_01EB;
    param_1->field_025A = sVar11;
    param_1->field_025C = sVar10;
    sVar7 = (((short)(iVar8 / 10000) + (short)(iVar8 >> 0x1f)) -
            (short)((longlong)iVar8 * 0x68db8bad >> 0x3f)) + param_1->field_01ED;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_8 = CONCAT22(sVar7,(undefined2)local_8);
    param_1->field_025E = sVar7;
    if (0x648 < iVar13) {
      param_1->field_0256 = 2;
      param_1->field_020C = CASE_4;
      param_1->field_0270 = 0xffff;
      uVar15 = param_1->field_001C * 0x41c64e6d + 0x3039;
      param_1->field_001C = uVar15;
      param_1->field_0294 = (uVar15 >> 0x10) % 0xb + 10 + g_playSystem_00802A38->field_00E4;
      param_1->field_0298 = g_playSystem_00802A38->field_00E4;

      local_1c = thunk_FUN_006173a0(param_1,iVar13,&local_10,&local_14,&local_18);
      if (0 < local_1c) {
        param_1->field_025A = (short)local_10;
        param_1->field_025C = (short)local_14;
        param_1->field_025E = (short)local_18;
        return local_1c;
      }
      goto cf_common_exit_006121E1;
    }
    local_c = 0;
    iVar13 = (int)sVar11;
    if (sVar11 < 0) {
      iVar8 = (short)((sVar11 / 0xc9 + (sVar11 >> 0xf)) -
                     (short)((longlong)iVar13 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar8 = (short)((sVar11 / 0xc9 + (sVar11 >> 0xf)) -
                          (short)((longlong)iVar13 * 0x28c1979 >> 0x3f));
    }
    if (param_1->field_0215 == iVar8) {
      iVar8 = STBiasedDiv16(sVar10, 0xc9); /* exact signed 16-bit grid-index division */
      if (param_1->field_0217 != iVar8) goto LAB_006122dd;
      iVar8 = STBiasedDiv16(sVar7, 200); /* exact signed 16-bit grid-index division */
      if (param_1->field_0219 != iVar8) goto LAB_006122dd;
      local_EAX_8584 = 0;
    }
    else {
LAB_006122dd:

      local_EAX_8584 =
           SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00601500::thunk_FUN_00601500
                     ((RecoveredReceiver_00601500 *)((int)&param_1[1].field_0000 + 1),iVar13,
                      (int)sVar10,(int)sVar7,(int)param_1->field_0260,(int)param_1->field_0262,
                      (int)param_1->field_0264,param_1->field_01D9,param_1->field_021B,
                      param_1->field_01FB,param_1->field_01FF,0xb0,(uint)(param_1->field_01F7 == 2),
                      0);
      if (0 < (int)local_EAX_8584) {
        if (local_EAX_8584 == 5) {

          thunk_FUN_0060ec00((RecoveredRecord_0060EC00_3D989AA8 *)param_1);
          param_1->field_020C = CASE_9;
        }
        else {

          RVar6 = thunk_FUN_00615fd0(param_1,local_EAX_8584,param_1->field_020C);
          param_1->field_020C = RVar6;
        }
      }
    }
    param_1->field_022B = (int)param_1->field_025A;
    param_1->field_022F = (int)param_1->field_025C;
    param_1->field_0233 = (int)param_1->field_025E;
    if ((local_EAX_8584 == 0) && ((param_1->field_01F7 == 0 || (param_1->field_01F7 == 2)))) {
      if (param_1->field_0248 < 0) {
        uVar15 = 0;
      }
      else {
        if (4 < param_1->field_0248) goto LAB_006123fd;
        uVar15 = 5;
      }
      /* ST_CALLSITE[006123F8]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
      TraksClassTy::TraksCreate
                (g_traksClass_00802A7C,1,1,uVar15,(int)param_1->field_025A,(int)param_1->field_025C,
                 (int)param_1->field_025E,0,0,0,0,0,0,-1,0,0);
    }
LAB_006123fd:
    if (param_1->field_02E9 == '\0') {
      return local_1c;
    }
    if (param_1->field_0252 == nullptr) {
      return local_1c;
    }
    iVar13 = param_1->field_01F7;
    if (iVar13 == 0) {
LAB_00612459:
      local_24 = (uint)param_1->field_0264;
      local_48 = (float)(int)param_1->field_0260 * _DAT_007904f8 * _DAT_007904f0;
      local_44 = (float)(int)param_1->field_0262 * _DAT_007904f8 * _DAT_007904f0;
      local_40 = (float)(int)local_24 * _DAT_007904f8 * _DAT_007904f0;

      ST3DSMAPContext::sub_006E25D0(g_sT3DSMAPContext_00807598,&local_58,&local_48,0.0,0.0,0.0,1);
      local_24 = (uint)param_1->field_025E;
      local_3c = (float)(int)param_1->field_025A * _DAT_007904f8 * _DAT_007904f0;
      local_38 = (float)(int)param_1->field_025C * _DAT_007904f8 * _DAT_007904f0;
      local_34 = (float)(int)local_24 * _DAT_007904f8 * _DAT_007904f0;

      ST3DSMAPContext::sub_006E25D0(g_sT3DSMAPContext_00807598,&local_68,&local_3c,0.0,0.0,0.0,1);
      /* ST_CALLSITE[00612565]: CALL dword ptr [EAX + 0x14]; [STIndirectCallsiteApplier] exact slot 0x14; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
      sVar7 = STStructuralVirtualCall<undefined4>(param_1, 0x14, STPiece<2,2>(local_58), uStack_52, STPiece<2,2>(local_50), local_68 >> 0x10, (undefined1)uStack_62, local_60 >> 0x10);
      param_1->field_0237 = *(int *)(&DAT_007d2138 + sVar7 * 4);
    }
    else if (iVar13 == 1) {
      iVar13 = param_1->field_0237 + 1;
      param_1->field_0237 = iVar13;
      if (9 < iVar13) {
        param_1->field_0237 = 0;
      }
    }
    else {
      if (iVar13 == 2) goto LAB_00612459;
      param_1->field_0237 = 0;
    }
    /* ST_CALLSITE[00612587]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    STT3DSprC::SetCurFase(param_1->field_0252,'\r',param_1->field_0237);
    /* ST_CALLSITE[00612594]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
    STT3DSprC::ShowCurFase(param_1->field_0252,'\r');
    /* ST_CALLSITE[006125E7]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
    STT3DSprC::sub_004AD3C0
              (param_1->field_0252,(float)param_1->field_022B * _DAT_007904f8 * _DAT_007904f0,
               (float)param_1->field_022F * _DAT_007904f8 * _DAT_007904f0,
               (float)param_1->field_0233 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    pVVar12 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == nullptr) goto cf_common_exit_006115EC;
    iVar13 = param_1->field_0233;
    sVar7 = (short)(iVar13 >> 0x1f);
    if (iVar13 < 0) {
      local_24 = (short)(((short)(iVar13 / 200) + sVar7) -
                             (short)((longlong)iVar13 * 0x51eb851f >> 0x3f)) - 1;
    }
    else {
      local_24 = (uint)(short)(((short)(iVar13 / 200) + sVar7) -
                              (short)((longlong)iVar13 * 0x51eb851f >> 0x3f));
    }
    iVar13 = param_1->field_022F;
    iVar13 = STBiasedDiv16(iVar13, 0xc9); /* exact signed 16-bit grid-index division */
    iVar8 = param_1->field_022B;
    iVar8 = STBiasedDiv16(iVar8, 0xc9); /* exact signed 16-bit grid-index division */
    if ((((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
          /* ST_CALLSITE[006126BA]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
          (VisibleClassTy::sub_00558C00
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar8,iVar13,
                      &local_20,(int *)&local_c), (int)local_24 < 0)) ||
         ((4 < (int)local_24 || (local_20 < 0)))) || (pVVar12->field_0030 <= local_20)) ||
       (((iVar13 = g_centeredOffsets5[local_24] + local_c, iVar13 < 0 ||
         (pVVar12->field_0034 <= iVar13)) || (pVVar12->field_004C == nullptr))))
    goto cf_common_exit_00611C0F;
    bVar2 = pVVar12->field_004C[local_20 + iVar13 * pVVar12->field_0030];
LAB_00611061:
    if (bVar2 == 0) goto LAB_00611c36;
cf_common_exit_00611C0F:
    if (param_1->field_0250 == '\0') {
      thunk_FUN_004ad460(param_1->field_0252,0);
      param_1->field_0250 = 1;
    }
cf_common_exit_006115EC:
    if ((-1 < param_1->field_0248) && (param_1->field_0250 != '\0')) {
      iVar13 = (int)PTR_00806724->field_002C;
      uVar15 = PTR_00806724->entries[param_1->field_0248];
      uVar16 = (undefined1)uVar15;
      uVar17 = (undefined1)(uVar15 >> 8);
      uVar18 = (undefined2)(uVar15 >> 0x10);

      uVar15 = thunk_FUN_004ad650(param_1->field_0252);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      Library::Ourlib::ST3DSMAP::SprSetMask
                (g_sT3DSMAPContext_00807598,uVar15,CONCAT22(uVar18,CONCAT11(uVar17,uVar16)),iVar13);
      return local_1c;
    }
  }
  return local_1c;
}


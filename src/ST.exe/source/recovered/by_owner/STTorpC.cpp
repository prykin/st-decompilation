#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STTorpC.cpp

// 00643E20 STTorpC::sub_00643E20
#line 4 "decomp/ST.exe/functions/00643E20/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079D4AC
   Entries: 00402644
   Slots: 0xD8
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:54 calls=12
   caller_families=9 receiver_extent=638/649; unique_owner_for_target */

undefined4 __fastcall st::fn_00643E20(AnonShape_00643E20_B7FEAA75 *param_1,undefined4 param_2)

{
  byte *puVar1;
  short sVar2;
  VisibleClassTy *pVVar3;
  STGameObjC *pSVar4;
  int iVar5;
  uint uVar6;
  int iVar9_mg1;
  int iVar9_mg3;
  byte bVar7;
  int iVar8;
  int iVar9;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  STGameObjC *local_c;
  int *local_8;

  pVVar3 = g_visibleClass_00802A88;
  local_8 = nullptr;
  local_c = nullptr;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  if (g_visibleClass_00802A88 != nullptr) {
    sVar2 = param_1->field_0045;
    iVar9 = STBiasedDiv16(sVar2, 200); /* exact signed 16-bit grid-index division */
    sVar2 = param_1->field_0043;
    iVar8 = STBiasedDiv16(sVar2, 0xc9); /* exact signed 16-bit grid-index division */
    sVar2 = param_1->field_0041;
    iVar5 = STBiasedDiv16(sVar2, 0xc9); /* exact signed 16-bit grid-index division */
    if ((((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
          /* ST_CALLSITE[00643F02]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
          (st::fn_00403F53
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar5,iVar8,
                      &local_1c,&local_20), iVar9 < 0)) ||
         (((4 < iVar9 || (local_1c < 0)) ||
          ((pVVar3->field_0030 <= local_1c ||
           ((local_20 = g_centeredOffsets5[iVar9] + local_20, local_20 < 0 ||
            (pVVar3->field_0034 <= local_20)))))))) || (pVVar3->field_004C == nullptr)) ||
       (pVVar3->field_004C[local_1c + local_20 * pVVar3->field_0030] != 0)) {
      if (param_1->field_01E7 == '\x01') {
        st::fn_00402982(&param_1->field_0x1d5,0);
      }
    }
    else if (param_1->field_01E7 == '\0') {
      st::fn_00403D0F((STT3DSprC *)&param_1->field_0x1d5);
    }
  }
  if (param_1->field_023D == 1) {
    if ((byte)param_1->field_027D < 8) {
      /* ST_CALLSITE[00643FA4]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
      local_c = st::fn_004028BA
                          (g_allPlayers_007FA174,param_1->field_0024,param_1->field_0262,CASE_1);
    }
    pSVar4 = local_c;
    if ((((param_1->field_027D == '\0') && (param_1->field_0259 != 10)) &&
        (local_c != nullptr)) && (local_c->field_0018 == param_1->field_025E)) {
      st::fn_006EA3E0
                (param_1->field_0211,param_1->field_01ED,local_c->field_01ED);
    }
    bVar7 = param_1->field_027D + 1;
    param_1->field_027D = bVar7;
    if (bVar7 < 8) {
      if ((pSVar4 == nullptr) || (pSVar4->field_0018 != param_1->field_025E)) {
        st::fn_006EA2F0(param_1->field_0211,param_1->field_01ED);
      }
      bVar7 = param_1->field_027D;
    }
    if (bVar7 == 8) {
      st::fn_006EA2F0(param_1->field_0211,param_1->field_01ED);
      uVar6 = st::fn_0040503D((RecoveredRecord_STTorpC_0041DA30 *)param_1);
      return uVar6;
    }
  }
  else {
    if (param_1->field_0270 == 0) {
      puVar1 = &param_1->field_0x1d5;
      /* ST_CALLSITE[00644070]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      iVar9 = st::fn_00401064((STT3DSprC *)puVar1,'\0',(uint)(byte)param_1->field_027C);
      if (iVar9 != 0) {
        return 0xffffffff;
      }
      /* ST_CALLSITE[00644087]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
      iVar9 = st::fn_004030BC((STT3DSprC *)puVar1,'\0');
      if (iVar9 != 0) {
        return 0xffffffff;
      }
      bVar7 = param_1->field_027C;
      /* ST_CALLSITE[006440A6]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      iVar9 = st::fn_004022AC((STT3DSprC *)puVar1,'\x01');
      if ((int)(uint)bVar7 < iVar9) {
        /* ST_CALLSITE[006440B4]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
        iVar9 = st::fn_00401064((STT3DSprC *)puVar1,'\x01',(uint)bVar7);
        if (iVar9 != 0) {
          return 0xffffffff;
        }
        /* ST_CALLSITE[006440CB]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
        iVar9 = st::fn_004030BC((STT3DSprC *)puVar1,'\x01');
        if (iVar9 != 0) {
          return 0xffffffff;
        }
      }
      /* ST_CALLSITE[006440E2]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      iVar9 = st::fn_004022AC((STT3DSprC *)puVar1,'\x01');
      if (iVar9 != (byte)param_1->field_027C - 1) goto cf_common_exit_0064428F;
    }
    else {
      bVar7 = param_1->field_027C;
      if (bVar7 < 0xf) {
        iVar9_mg1 = st::fn_006E62D0
                              (g_playSystem_00802A38,
                               (AnonShape_005EFAE0_B406B78B *)param_1->field_0274,(int *)&local_8);
        if (iVar9_mg1 == -4) {
          param_1->field_027C = 0xfa;
          return 0;
        }
        /* ST_CALLSITE[00644154]: CALL dword ptr [EDX + 0xe0] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        iVar9 = (**(code **)(*local_8 + 0xe0))
                          (param_1->field_0278,&local_10,&local_14,&local_18,&local_24);
        if (iVar9 != 0) {
          return 0xffffffff;
        }
        param_1->field_0041 = (undefined2)local_10;
        param_1->field_0045 = (undefined2)local_18;
        param_1->field_0043 = (undefined2)local_14;
        if (local_24 == 0) {
          st::fn_006EA460
                    (param_1->field_0211,param_1->field_01ED,STField<int>(local_8,0x1ed));
        }
        else {
          st::fn_006EA3E0
                    (param_1->field_0211,param_1->field_01ED,STField<int>(local_8,0x1ed));
        }
        bVar7 = param_1->field_027C;
      }
      if (bVar7 == 0xf) {
        iVar9_mg3 = st::fn_006E62D0
                              (g_playSystem_00802A38,
                               (AnonShape_005EFAE0_B406B78B *)param_1->field_0274,(int *)&local_8);
        if (iVar9_mg3 == -4) {
          param_1->field_027C = 0xfa;
          return 0;
        }
        /* ST_CALLSITE[006441E9]: CALL dword ptr [EAX + 0xe4] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*local_8 + 0xe4))(param_1->field_0278);
      }
      puVar1 = &param_1->field_0x1d5;
      /* ST_CALLSITE[00644202]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      iVar9 = st::fn_00401064((STT3DSprC *)puVar1,'\0',(uint)(byte)param_1->field_027C);
      if (iVar9 != 0) {
        return 0xffffffff;
      }
      /* ST_CALLSITE[00644219]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
      iVar9 = st::fn_004030BC((STT3DSprC *)puVar1,'\0');
      if (iVar9 != 0) {
        return 0xffffffff;
      }
      bVar7 = param_1->field_027C;
      /* ST_CALLSITE[00644238]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      iVar9 = st::fn_004022AC((STT3DSprC *)puVar1,'\x01');
      if ((int)(uint)bVar7 < iVar9) {
        /* ST_CALLSITE[00644246]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
        iVar9 = st::fn_00401064((STT3DSprC *)puVar1,'\x01',(uint)bVar7);
        if (iVar9 != 0) {
          return 0xffffffff;
        }
        /* ST_CALLSITE[0064425D]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
        iVar9 = st::fn_004030BC((STT3DSprC *)puVar1,'\x01');
        if (iVar9 != 0) {
          return 0xffffffff;
        }
      }
      /* ST_CALLSITE[00644274]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      iVar9 = st::fn_004022AC((STT3DSprC *)puVar1,'\x01');
      if (iVar9 != (byte)param_1->field_027C - 1) goto cf_common_exit_0064428F;
    }
    /* ST_CALLSITE[0064428A]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
    st::fn_00404264((STT3DSprC *)&param_1->field_0x1d5,1);
  }
cf_common_exit_0064428F:
  uVar6 = st::fn_0040503D((RecoveredRecord_STTorpC_0041DA30 *)param_1);
  return uVar6;
}


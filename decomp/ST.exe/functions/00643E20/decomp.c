#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_00643e20(AnonShape_00643E20_B7FEAA75 *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  short sVar2;
  VisibleClassTy *pVVar3;
  STGameObjC *pSVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
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
          (VisibleClassTy::sub_00558C00
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar5,iVar8,
                      &local_1c,&local_20), iVar9 < 0)) ||
         (((4 < iVar9 || (local_1c < 0)) ||
          (((int)pVVar3->field_0030 <= local_1c ||
           ((local_20 = g_centeredOffsets5[iVar9] + local_20, local_20 < 0 ||
            (pVVar3->field_0034 <= local_20)))))))) || (pVVar3->field_004C == nullptr)) ||
       (pVVar3->field_004C[local_1c + local_20 * pVVar3->field_0030] != 0)) {
      if (param_1->field_01E7 == '\x01') {
        thunk_FUN_004ad460(&param_1->field_0x1d5,0);
      }
    }
    else if (param_1->field_01E7 == '\0') {
      thunk_FUN_004ad430((STT3DSprC *)&param_1->field_0x1d5);
    }
  }
  if (param_1->field_023D == 1) {
    if ((byte)param_1->field_027D < 8) {
      local_c = STAllPlayersC::GetObjPtr
                          (g_allPlayers_007FA174,param_1->field_0024,param_1->field_0262,CASE_1);
    }
    pSVar4 = local_c;
    if ((((param_1->field_027D == '\0') && (param_1->field_0259 != 10)) &&
        (local_c != nullptr)) && (local_c->field_0018 == param_1->field_025E)) {
      Library::Ourlib::ST3DSMAP::SprSetLevAfter
                (param_1->field_0211,param_1->field_01ED,local_c->field_01ED);
    }
    bVar7 = param_1->field_027D + 1;
    param_1->field_027D = bVar7;
    if (bVar7 < 8) {
      if ((pSVar4 == nullptr) || (pSVar4->field_0018 != param_1->field_025E)) {
        Library::Ourlib::ST3DSMAP::SprRstLev(param_1->field_0211,param_1->field_01ED);
      }
      bVar7 = param_1->field_027D;
    }
    if (bVar7 == 8) {
      Library::Ourlib::ST3DSMAP::SprRstLev(param_1->field_0211,param_1->field_01ED);
      uVar6 = thunk_FUN_0041da30((AnonShape_0041DA30_EF7DF530 *)param_1);
      return uVar6;
    }
  }
  else {
    if (param_1->field_0270 == 0) {
      puVar1 = &param_1->field_0x1d5;
      iVar9 = STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\0',(uint)(byte)param_1->field_027C);
      if (iVar9 != 0) {
        return 0xffffffff;
      }
      iVar9 = STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\0');
      if (iVar9 != 0) {
        return 0xffffffff;
      }
      bVar7 = param_1->field_027C;
      iVar9 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\x01');
      if ((int)(uint)bVar7 < iVar9) {
        iVar9 = STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x01',(uint)bVar7);
        if (iVar9 != 0) {
          return 0xffffffff;
        }
        iVar9 = STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\x01');
        if (iVar9 != 0) {
          return 0xffffffff;
        }
      }
      iVar9 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\x01');
      if (iVar9 != (byte)param_1->field_027C - 1) goto cf_common_exit_0064428F;
    }
    else {
      bVar7 = param_1->field_027C;
      if (bVar7 < 0xf) {
        iVar9 = STPlaySystemC::sub_006E62D0
                          (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)param_1->field_0274,
                           (int *)&local_8);
        if (iVar9 == -4) {
          param_1->field_027C = 0xfa;
          return 0;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar9 = (**(code **)(*local_8 + 0xe0))
                          (param_1->field_0278,&local_10,&local_14,&local_18,&local_24);
        if (iVar9 != 0) {
          return 0xffffffff;
        }
        param_1->field_0041 = (undefined2)local_10;
        param_1->field_0045 = (undefined2)local_18;
        param_1->field_0043 = (undefined2)local_14;
        if (local_24 == 0) {
          Library::Ourlib::ST3DSMAP::SprSetLevBefore
                    (param_1->field_0211,param_1->field_01ED,STField<int>(local_8,0x1ed));
        }
        else {
          Library::Ourlib::ST3DSMAP::SprSetLevAfter
                    (param_1->field_0211,param_1->field_01ED,STField<int>(local_8,0x1ed));
        }
        bVar7 = param_1->field_027C;
      }
      if (bVar7 == 0xf) {
        iVar9 = STPlaySystemC::sub_006E62D0
                          (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)param_1->field_0274,
                           (int *)&local_8);
        if (iVar9 == -4) {
          param_1->field_027C = 0xfa;
          return 0;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*local_8 + 0xe4))(param_1->field_0278);
      }
      puVar1 = &param_1->field_0x1d5;
      iVar9 = STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\0',(uint)(byte)param_1->field_027C);
      if (iVar9 != 0) {
        return 0xffffffff;
      }
      iVar9 = STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\0');
      if (iVar9 != 0) {
        return 0xffffffff;
      }
      bVar7 = param_1->field_027C;
      iVar9 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\x01');
      if ((int)(uint)bVar7 < iVar9) {
        iVar9 = STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x01',(uint)bVar7);
        if (iVar9 != 0) {
          return 0xffffffff;
        }
        iVar9 = STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\x01');
        if (iVar9 != 0) {
          return 0xffffffff;
        }
      }
      iVar9 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\x01');
      if (iVar9 != (byte)param_1->field_027C - 1) goto cf_common_exit_0064428F;
    }
    STT3DSprC::StopShow((STT3DSprC *)&param_1->field_0x1d5,1);
  }
cf_common_exit_0064428F:
  uVar6 = thunk_FUN_0041da30((AnonShape_0041DA30_EF7DF530 *)param_1);
  return uVar6;
}


#include "../../pseudocode_runtime.h"


void __fastcall FUN_0058bd90(AnonShape_0058BD90_DCBCF849 *param_1)

{
  undefined1 *puVar1;
  int iVar3;
  uint uVar4;
  int iVar2;
  int iVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  uint local_8;

  local_8 = 0;
  if (param_1->field_0231 == 1) {
    return;
  }
  sVar6 = param_1->field_0041;
  if (sVar6 < 0) {
    sVar6 = ((sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = (sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f);
  }
  param_1->field_0047 = sVar6;
  param_1->field_005B = sVar6;
  sVar6 = param_1->field_0043;
  if (sVar6 < 0) {
    sVar6 = ((sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = (sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f);
  }
  param_1->field_0049 = sVar6;
  param_1->field_005D = sVar6;
  sVar6 = param_1->field_0045;
  if (sVar6 < 0) {
    sVar6 = ((sVar6 / 200 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x51eb851f >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = (sVar6 / 200 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x51eb851f >> 0x3f);
  }
  param_1->field_004B = sVar6;
  param_1->field_005F = sVar6;
  iVar3 = thunk_FUN_0041c710((AnonShape_0041C710_C4D46939 *)param_1);
  puVar1 = &param_1->field_0x1d5;
  if (iVar3 == 0) {
    iVar3 = 0;
    uVar4 = thunk_FUN_004ad650((STT3DSprC *)puVar1);
    Library::Ourlib::ST3DSMAP::SprSetVisible(param_1->field_0211,uVar4,iVar3);
    iVar2 = thunk_FUN_0041caf0((AnonShape_0041CAF0_1630B9E0 *)param_1);
    if (iVar2 == 1) {
      iVar3 = 1;
    }
    else {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 1;
    uVar4 = thunk_FUN_004ad650((STT3DSprC *)puVar1);
    Library::Ourlib::ST3DSMAP::SprSetVisible(param_1->field_0211,uVar4,iVar3);
    iVar3 = 1;
  }
  iVar4 = thunk_FUN_004ad650((STT3DSprC *)puVar1);
  FUN_006e6870(param_1->field_0211,iVar4,iVar3);
  switch(param_1->field_0231) {
  case 0:
  case 3:
    goto switchD_0058bec9_caseD_0;
  default:
    goto cf_common_exit_0058C391;
  case 2:
    goto switchD_0058bec9_caseD_2;
  case 4:
    puVar1 = &param_1->field_0x1d5;
    iVar3 = thunk_FUN_004ac910(puVar1,'\x0e');
    local_8 = iVar3 + 1;
    if ((int)local_8 < 0x23) {
      STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x0e',local_8);
    }
    else {
      STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x0e',0x18);
      param_1->field_0231 = 2;
    }
    if (local_8 == 0x20) {
      thunk_FUN_0058bb90((AnonShape_0058BB90_CF74AF20 *)param_1);
    }
switchD_0058bec9_caseD_2:
    if (param_1->field_0231 == 2) {
      local_8 = 0x18;
    }
    if ((g_playSystem_00802A38->field_00E4 & 3) == 0) {
      if (param_1->field_0235 == 0) {
        if (param_1->field_023D < param_1->field_0241) {
          iVar3 = param_1->field_0239 + 1;
          param_1->field_0239 = iVar3;
          if (PTR_00806724->entryCount <= iVar3) {
            param_1->field_0231 = 1;
            param_1->field_0251 = param_1->field_0249 * 2 - param_1->field_0251;
            param_1->field_0255 = param_1->field_024D * 2 - param_1->field_0255;
            goto cf_common_exit_0058C391;
          }
          STT3DSprC::sub_004ACE60((STT3DSprC *)&param_1->field_0x1d5,'\x0e');
          STT3DSprC::sub_004ACE30
                    ((STT3DSprC *)&param_1->field_0x1d5,PTR_00806724->entries[param_1->field_0239],
                     (int)PTR_00806724->field_002C);
        }
      }
      else {
        iVar3 = param_1->field_0239;
        iVar5 = iVar3 + -1;
        param_1->field_0239 = iVar5;
        if (iVar5 < 1) {
          param_1->field_0239 = 0;
          param_1->field_0235 = 0;
          thunk_FUN_004aceb0(&param_1->field_0x1d5,'\x0e');
          param_1->field_0241 = -param_1->field_023D;
        }
        else {
          STT3DSprC::sub_004ACE30
                    ((STT3DSprC *)&param_1->field_0x1d5,PTR_00806724->entries[iVar3 + -1],
                     (int)PTR_00806724->field_002C);
          param_1->field_0241 = -param_1->field_023D;
        }
      }
    }
    iVar5 = param_1->field_0261 + param_1->field_0259 * 5;
    iVar9 = param_1->field_0265 + param_1->field_025D * 5;
    param_1->field_0265 = iVar9;
    iVar3 = param_1->field_023D + -5;
    sVar7 = param_1->field_0269 - (short)((uint)iVar5 >> 8);
    param_1->field_023D = iVar3;
    param_1->field_0261 = iVar5;
    iVar3 = iVar3 * iVar3 * 0xd;
    sVar8 = param_1->field_026D - (short)((uint)iVar9 >> 8);
    param_1->field_0041 = sVar7;
    param_1->field_0043 = sVar8;
    sVar6 = (short)((int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe) + param_1->field_0271;
    param_1->field_0045 = sVar6;
    if ((((sVar6 < 0x4b0) && (g_playSystem_00802A38->field_00E4 % 0x11 == 0)) &&
        ((int)sVar7 < g_worldGrid.sizeX * 0xc9)) &&
       (((0 < sVar7 && ((int)sVar8 < g_worldGrid.sizeY * 0xc9)) && (0 < sVar8)))) {
      param_1->field_0231 = 4;
    }
    goto LAB_0058c38c;
  case 6:
    break;
  }
  iVar3 = STT3DSprC::sub_004ACD30((STT3DSprC *)&param_1->field_0x1d5,'\b');
  iVar5 = thunk_FUN_004ac910(&param_1->field_0x1d5,'\b');
  if (iVar3 + -1 <= iVar5) {
    thunk_FUN_0058bb50(param_1);
  }
switchD_0058bec9_caseD_0:
  sVar6 = param_1->field_0041;
  param_1->field_0045 = param_1->field_0045 + 0x12;
  sVar8 = param_1->field_0045;
  if (sVar6 < 0) {
    sVar6 = ((sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = (sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f);
  }
  sVar7 = param_1->field_0043;
  if (sVar7 < 0) {
    sVar7 = ((sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar7 = (sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f);
  }
  if (sVar8 < 0) {
    iVar3 = (short)((sVar8 / 200 + (sVar8 >> 0xf)) -
                   (short)((longlong)(int)sVar8 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iVar3 = (int)(short)((sVar8 / 200 + (sVar8 >> 0xf)) -
                        (short)((longlong)(int)sVar8 * 0x51eb851f >> 0x3f));
  }
  if (((sVar6 < 0) || (g_worldGrid.sizeX <= sVar6)) ||
     ((sVar7 < 0 ||
      ((((g_worldGrid.sizeY <= sVar7 || (sVar8 = (short)iVar3, sVar8 < 0)) ||
        (g_worldGrid.sizeZ <= sVar8)) ||
       ((STGridAt3D(g_worldGrid, sVar6, sVar7, sVar8).objects[0] == nullptr ||
        (STGridAt3D(g_worldGrid, sVar6, sVar7, sVar8).objects[0]->value_20 == 400)))))))) {
    if ((5 < iVar3) && ((g_playSystem_00802A38->field_00E4 & 3) == 0)) {
      iVar3 = param_1->field_0239;
      iVar5 = iVar3 + 1;
      param_1->field_0239 = iVar5;
      if (PTR_00806724->entryCount <= iVar5) {
        iVar3 = param_1->field_0231;
        param_1->field_0239 = 0;
        param_1->field_0231 = 1;
        if (iVar3 == 3) {
          thunk_FUN_0058c560(param_1,param_1->field_0249,param_1->field_024D);
        }
        goto cf_common_exit_0058C391;
      }
      STT3DSprC::sub_004ACE30
                ((STT3DSprC *)&param_1->field_0x1d5,PTR_00806724[1].entries[iVar3 + -0xc],
                 (int)PTR_00806724->field_002C);
    }
    if ((g_playSystem_00802A38->field_00E4 & 1) == 0) {
      iVar3 = thunk_FUN_004ac910(&param_1->field_0x1d5,'\x0e');
      local_8 = iVar3 + 1;
      if (0x18 < (int)local_8) {
        local_8 = 0x18;
      }
LAB_0058c38c:
      STT3DSprC::SetCurFase((STT3DSprC *)&param_1->field_0x1d5,'\x0e',local_8);
    }
  }
  else {
    puVar1 = &param_1->field_0x1d5;
    param_1->field_0231 = 5;
    STT3DSprC::StopShow((STT3DSprC *)puVar1,0xe);
    thunk_FUN_004ad5e0((STT3DSprC *)puVar1);
    STT3DSprC::LoadSequence((STT3DSprC *)puVar1,8,PTR_00806774,"explsna",CASE_1D);
    STT3DSprC::StartShow((STT3DSprC *)puVar1,8,g_playSystem_00802A38->field_00E4);
    param_1->field_0045 = param_1->field_0045 + 0x12;
    param_1->field_0231 = 6;
  }
cf_common_exit_0058C391:
  STT3DSprC::ShowCurFase((STT3DSprC *)&param_1->field_0x1d5,'\x0e');
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)param_1 + 0xd8))();
  return;
}


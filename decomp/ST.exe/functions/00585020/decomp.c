#include "../../pseudocode_runtime.h"


void __fastcall FUN_00585020(AnonShape_00585020_1C9B1418 *param_1)

{
  int iVar1;
  byte *this;
  STWorldObject *pSVar2;
  int iVar4;
  uint uVar5;
  int iVar3;
  int iVar5;
  int local_EAX_906;
  int iVar7;
  int iVar6;
  short sVar7;
  int iVar8;
  int local_14;
  short local_10;
  short local_8;

  sVar7 = param_1->field_0041;
  sVar7 = STBiasedDiv16(sVar7, 0xc9); /* exact signed 16-bit grid-index division */
  param_1->field_0047 = sVar7;
  param_1->field_005B = sVar7;
  sVar7 = param_1->field_0043;
  sVar7 = STBiasedDiv16(sVar7, 0xc9); /* exact signed 16-bit grid-index division */
  param_1->field_0049 = sVar7;
  param_1->field_005D = sVar7;
  sVar7 = param_1->field_0045;
  sVar7 = STBiasedDiv16(sVar7, 200); /* exact signed 16-bit grid-index division */
  param_1->field_004B = sVar7;
  param_1->field_005F = sVar7;
  iVar4 = thunk_FUN_0041c710((AnonShape_0041C710_C4D46939 *)param_1);
  this = &param_1->field_0x1d5;
  if (iVar4 == 0) {
    iVar4 = 0;
    uVar5 = thunk_FUN_004ad650((STT3DSprC *)this);
    Library::Ourlib::ST3DSMAP::SprSetVisible(param_1->field_0211,uVar5,iVar4);
    iVar3 = thunk_FUN_0041caf0((AnonShape_0041CAF0_1630B9E0 *)param_1);
    if (iVar3 == 1) {
      iVar4 = 1;
    }
    else {
      iVar4 = 0;
    }
  }
  else {
    iVar4 = 1;
    uVar5 = thunk_FUN_004ad650((STT3DSprC *)this);
    Library::Ourlib::ST3DSMAP::SprSetVisible(param_1->field_0211,uVar5,iVar4);
    iVar4 = 1;
  }
  iVar5 = thunk_FUN_004ad650((STT3DSprC *)this);
  FUN_006e6870(param_1->field_0211,iVar5,iVar4);
  sVar7 = param_1->field_0041;
  iVar4 = (int)sVar7;
  if (sVar7 < 0) {
    local_10 = ((sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)) + -1
    ;
  }
  else {
    local_10 = (sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f);
  }
  sVar7 = param_1->field_0043;
  iVar6 = (int)sVar7;
  if (sVar7 < 0) {
    local_8 = ((sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_8 = (sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f);
  }
  sVar7 = param_1->field_0045;
  local_14 = STBiasedDiv16(sVar7, 200); /* exact signed 16-bit grid-index division */
  iVar8 = param_1->field_0231;
  sVar7 = (short)local_14;
  if (iVar8 == 0) {
    iVar6 = g_playSystem_00802A38->field_00E4 - param_1->field_023D;
    iVar4 = (param_1->field_024D * iVar6 * iVar6) / 22000;
    if ((local_14 < 5) && (iVar7 = thunk_FUN_004961b0(local_10,local_8,sVar7), iVar7 == 0)) {
      if ((((-1 < local_10) &&
           (((local_10 < g_worldGrid.sizeX && (-1 < local_8)) && (local_8 < g_worldGrid.sizeY)))) &&
          (((-1 < sVar7 && (sVar7 < g_worldGrid.sizeZ)) &&
           (pSVar2 = STGridAt3D(g_worldGrid, local_10, local_8, sVar7).objects[0],
           pSVar2 != nullptr)))) && (pSVar2->value_20 != 0xaa)) {
        thunk_FUN_00584c50(param_1,&pSVar2->vtable);
        thunk_FUN_005860d0(param_1,(int)(short)param_1->field_0041,(int)(short)param_1->field_0043,
                           0x464);
      }
      param_1->field_0231 = 2;
      thunk_FUN_00584b10((AnonShape_00584B10_33997544 *)param_1);
      return;
    }
    iVar8 = DAT_007cb8e4 >> 1;
    if (iVar8 < iVar6) {
      iVar1 = PTR_00806724->entryCount + -1;
      iVar8 = ((iVar6 - iVar8) * iVar1) / iVar8;
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      if (PTR_00806724->entryCount <= iVar8) {
        /* ST_CALLSITE[00585572]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
        STT3DSprC::sub_004ACE30((STT3DSprC *)this,0,0);
        iVar8 = iVar1;
      }
      param_1->field_0241 = iVar8;
      /* ST_CALLSITE[0058558E]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
      STT3DSprC::sub_004ACE30
                ((STT3DSprC *)this,PTR_00806724->entries[iVar8],(int)PTR_00806724->field_002C);
    }
    sVar7 = (short)iVar4;
    if (iVar4 + 0x28 < 0) {
      /* ST_CALLSITE[005855BB]: CALL 0x00403107; direct=00403107 sub_00416240 */
      sub_00416240(param_1,*(ushort *)&param_1->field_0x278,*(short *)&param_1->field_0x27c,
                   sVar7 + param_1->field_0045 + 0x28);
      param_1->field_0251 = 0x168;
      param_1->field_0235 = (int)param_1->field_0045;
      *(int *)&param_1->field_0x274 = *(int *)&param_1->field_0x274 + 1;
      param_1->field_023D = g_playSystem_00802A38->field_00E4;
      iVar4 = (int)((ulonglong)((longlong)param_1->field_024D * -0x2aaaaaab) >> 0x20);
      param_1->field_024D = iVar4 - (iVar4 >> 0x1f);
      if (g_visibleClass_00802A88 != nullptr) {
        sVar7 = param_1->field_0043;
        iVar4 = STBiasedDiv16(sVar7, 0xc9); /* exact signed 16-bit grid-index division */
        sVar7 = param_1->field_0041;
        iVar6 = STBiasedDiv16(sVar7, 0xc9); /* exact signed 16-bit grid-index division */
        /* ST_CALLSITE[00585686]: CALL 0x00401fd2; direct=00401FD2 VisibleClassTy::VisHoleCreate */
        VisibleClassTy::VisHoleCreate
                  (g_visibleClass_00802A88,iVar6,iVar4,nullptr,
                   *(uint *)&param_1->field_0x24,(undefined *)0x5,500);
      }
      param_1->field_0231 = 1;
      /* ST_CALLSITE[00585699]: CALL dword ptr [EAX + 0xd8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)param_1 + 0xd8))();
      return;
    }
    uVar5 = (uint)(ushort)(param_1->field_0249 + sVar7 + param_1->field_0045);
  }
  else {
    if (iVar8 != 1) {
      if (iVar8 != 2) {
        return;
      }
      uVar5 = thunk_FUN_004ac910(this,'\b');
      if ((param_1->field_0255 != '\0') && (uVar5 == param_1->field_0256)) {
        /* ST_CALLSITE[00585231]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
        STT3DSprC::StartShow((STT3DSprC *)this,9,g_playSystem_00802A38->field_00E4);
        thunk_FUN_004ad0e0(this,9);
      }
      /* ST_CALLSITE[00585243]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      iVar4 = STT3DSprC::sub_004ACD30((STT3DSprC *)this,'\b');
      if (uVar5 == iVar4 - 1U) {
        /* ST_CALLSITE[00585251]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)this,8);
      }
      /* ST_CALLSITE[0058525A]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      iVar4 = STT3DSprC::sub_004ACD30((STT3DSprC *)this,'\n');
      if (uVar5 == iVar4 - 1U) {
        /* ST_CALLSITE[00585268]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)this,10);
      }
      if (param_1->field_0255 != '\0') {
        /* ST_CALLSITE[0058527B]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
        iVar4 = STT3DSprC::sub_004ACD30((STT3DSprC *)this,'\t');
        iVar6 = thunk_FUN_004ac910(this,'\t');
        if (iVar6 == iVar4 + -1) {
          /* ST_CALLSITE[00585294]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
          STT3DSprC::StopShow((STT3DSprC *)this,9);
          param_1->field_0255 = 0;
        }
      }
      /* ST_CALLSITE[005852A7]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      iVar4 = STT3DSprC::sub_004ACD30((STT3DSprC *)this,'\b');
      if ((uVar5 == iVar4 - 1U) && (param_1->field_0255 == '\0')) {
        thunk_FUN_00584ad0(param_1);
        return;
      }
      /* ST_CALLSITE[005852CD]: CALL dword ptr [EDX + 0xd8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)param_1 + 0xd8))();
      return;
    }
    iVar8 = g_playSystem_00802A38->field_00E4 - param_1->field_023D;
    if (iVar8 == 1) {
      thunk_FUN_00585890(param_1,iVar4,iVar6,param_1->field_0286);
    }
    iVar4 = PTR_00806724->entryCount + -1;
    iVar4 = iVar4 - (iVar4 * iVar8) / (DAT_007cb8e4 >> 1);
    if (iVar4 < 1) {
      param_1->field_0241 = 0;
      /* ST_CALLSITE[00585354]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
      STT3DSprC::sub_004ACE30((STT3DSprC *)this,0,0);
      thunk_FUN_004aceb0(this,'\x0e');
    }
    else {
      param_1->field_0241 = iVar4;
      /* ST_CALLSITE[0058533D]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
      STT3DSprC::sub_004ACE30
                ((STT3DSprC *)this,*(uint *)((int)PTR_00806724 + iVar4 * 4 + 0x30),
                 (int)PTR_00806724->field_002C);
    }
    uVar5 = (int)param_1->field_0045 - 5;
    if ((param_1->field_0045 < 0x44c) && (0x1b < (int)(param_1->field_0235 - uVar5))) {
      thunk_FUN_00584d10((AnonShape_00584D10_AA6E9D03 *)param_1);
      param_1->field_0235 = uVar5;
    }
    if ((local_14 < 5) &&
       (local_EAX_906 = thunk_FUN_004961b0(local_10,local_8,sVar7), local_EAX_906 == 0)) {
      if (((-1 < local_10) &&
          ((((local_10 < g_worldGrid.sizeX && (-1 < local_8)) && (local_8 < g_worldGrid.sizeY)) &&
           ((-1 < sVar7 && (sVar7 < g_worldGrid.sizeZ)))))) &&
         ((pSVar2 = STGridAt3D(g_worldGrid, local_10, local_8, sVar7).objects[0],
          pSVar2 != nullptr && (pSVar2->value_20 != 0xaa)))) {
        thunk_FUN_00584c50(param_1,&pSVar2->vtable);
      }
      param_1->field_0231 = 2;
      thunk_FUN_00584b10((AnonShape_00584B10_33997544 *)param_1);
    }
  }
  /* ST_CALLSITE[005856C1]: CALL 0x00403107; direct=00403107 sub_00416240 */
  sub_00416240(param_1,param_1->field_0041,param_1->field_0043,(ushort)uVar5);
  /* ST_CALLSITE[005856CA]: CALL dword ptr [EAX + 0xd8] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*(int *)param_1 + 0xd8))();
  return;
}


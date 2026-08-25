#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STMineSetC.
   Evidence: this_call_owners=[STMineSetC]; agreed_this_calls=1; incoming_this_accesses=71;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall STMineSetC::sub_00622BA0(STMineSetC *this)

{
  STMineSetC_field_02ADState SVar1;
  STMineSetC_sub_00626B50_param_1Enum SVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined4 local_8;

  local_8 = 0;
  this->field_02C2 = this->field_0276;
  this->field_02C6 = this->field_027A;
  this->field_02CA = this->field_027E;
  this->field_0041 = (short)this->field_02C2;
  this->field_0043 = (short)this->field_02C6;
  this->field_0045 = (short)this->field_02CA;
  SVar2 = thunk_FUN_004ab050();
  /* ST_CALLSITE[00622C05]: CALL 0x00402414; direct=00402414 STMineSetC::sub_00626B50 */
  sub_00626B50(this,SVar2);
  this->field_0056 = (short)this->field_02C6;
  iVar5 = this->field_02C2;
  this->field_0054 = (short)this->field_02C2;
  this->field_0058 = (short)this->field_02CA;
  sVar6 = STBiasedDiv16(iVar5, 0xc9); /* exact signed 16-bit grid-index division */
  iVar5 = this->field_02C6;
  this->field_0047 = sVar6;
  sVar7 = STBiasedDiv16(iVar5, 0xc9); /* exact signed 16-bit grid-index division */
  iVar5 = this->field_02CA;
  this->field_0049 = sVar7;
  sVar8 = STBiasedDiv16(iVar5, 200); /* exact signed 16-bit grid-index division */
  this->field_005D = sVar7;
  this->field_004B = sVar8;
  this->field_005B = sVar6;
  this->field_005F = sVar8;
  uVar3 = thunk_FUN_00626f10(this->field_0272);
  this->field_02AD = (STMineSetC_field_02ADState)uVar3;
  this->field_035F = g_playSystem_00802A38->field_00E4;
  if ((STMineSetC_field_02ADState)uVar3 == CASE_2) {
    this->field_0342 = 0xffffffff;
  }
  sVar6 = this->field_0047 * 0xc9 + 100;
  this->field_003C = this->field_0049 * 0xc9 + 100;
  sVar8 = this->field_004B * 200;
  this->field_003A = sVar6;
  this->field_0313 = 1;
  sVar7 = sVar8 + 0x32;
  this->field_003E = sVar7;
  this->field_028A = (short)(sVar8 + 100) + -0x32;
  this->field_008E = 1;
  iVar4 = FUN_006acf0d(this->field_02C2,this->field_02C6,this->field_02CA,(int)sVar6,(int)sVar6,
                       (int)sVar7);
  this->field_02F6 = iVar4;
  SVar1 = this->field_02AD;
  if (SVar1 == CASE_3) {
    this->field_0352 = 0;
  }
  else {
    this->field_0352 = 1;
  }
  if (SVar1 < CASE_3) {
    if (g_visibleClass_00802A88 != nullptr) {
      /* ST_CALLSITE[00622E15]: CALL 0x0040388c; direct=0040388C VisibleClassTy::sub_00558DC0 */
      VisibleClassTy::sub_00558DC0
                (g_visibleClass_00802A88,(int)this->field_0047,(int)this->field_0049,
                 (undefined *)(int)this->field_004B,(int *)this->field_0024,
                 *(uint *)(&DAT_007d02b4 + (uint)SVar1 * 4),(int *)this->field_0018,0xffffffff);
    }
  }
  else if ((SVar1 == CASE_3) && (g_visibleClass_00802A88 != nullptr)) {
    /* ST_CALLSITE[00622DC7]: CALL 0x0040388c; direct=0040388C VisibleClassTy::sub_00558DC0 */
    VisibleClassTy::sub_00558DC0
              (g_visibleClass_00802A88,(int)this->field_0047,(int)this->field_0049,
               (undefined *)(int)this->field_004B,(int *)this->field_0024,DAT_007d02c0,
               (int *)this->field_0018,0xffffffff);
    /* ST_CALLSITE[00622DDE]: CALL 0x00402b3f; direct=00402B3F STMineSetC::sub_0041D1A0 */
    sub_0041D1A0(this,*(int *)(&DAT_007d02b4 + (uint)this->field_02AD * 4));
  }
  sVar6 = this->field_0047;
  if ((((-1 < sVar6) && (sVar7 = this->field_0049, -1 < sVar7)) &&
      (sVar8 = this->field_004B, -1 < sVar8)) &&
     (((sVar6 < g_worldGrid.sizeX && (sVar7 < g_worldGrid.sizeY)) && (sVar8 < 5)))) {
    this->field_003A = (short)this->field_0282;
    this->field_003C = (short)this->field_0286;
    this->field_003E = (short)this->field_028A;
    if (this->field_0313 != '\0') {
      if (((-1 < sVar6) && (sVar6 < g_worldGrid.sizeX)) &&
         (((-1 < sVar7 &&
           (((sVar7 < g_worldGrid.sizeY && (-1 < sVar8)) && (sVar8 < g_worldGrid.sizeZ)))) &&
          (STGridAt3D(g_worldGrid, sVar6, sVar7, sVar8).objects[(byte)this->field_008E] != nullptr)))) {
        return 0;
      }
      /* ST_CALLSITE[00622F24]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
      iVar5 = DumpClassC::WritePtr
                        (sVar6,sVar7,sVar8,this->field_008E,
                         (RecoveredRecord_DumpClassC_00495EC0 *)this);
      if (iVar5 != 0) {
        return 0;
      }
      this->field_0314 = this->field_0314 + '\x01';
    }
    local_8 = 1;
  }
  return local_8;
}


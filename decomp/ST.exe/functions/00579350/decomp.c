#include "../../pseudocode_runtime.h"


void __fastcall FUN_00579350(AnonShape_00579350_2E014C47 *param_1)

{
  undefined1 *this;
  int iVar2;
  uint uVar3;
  int iVar1;
  int iVar4;
  uint local_EAX_315;
  uint uVar2;
  undefined4 uVar5;
  short sVar6;

  sVar6 = param_1->field_0041;
  sVar6 = STBiasedDiv16(sVar6, 0xc9); /* exact signed 16-bit grid-index division */
  param_1->field_0047 = sVar6;
  param_1->field_005B = sVar6;
  sVar6 = param_1->field_0043;
  sVar6 = STBiasedDiv16(sVar6, 0xc9); /* exact signed 16-bit grid-index division */
  param_1->field_0049 = sVar6;
  param_1->field_005D = sVar6;
  sVar6 = param_1->field_0045;
  sVar6 = STBiasedDiv16(sVar6, 200); /* exact signed 16-bit grid-index division */
  param_1->field_004B = sVar6;
  param_1->field_005F = sVar6;
  iVar2 = thunk_FUN_0041c710((AnonShape_0041C710_C4D46939 *)param_1);
  this = &param_1->field_0x1d5;
  if (iVar2 == 0) {
    iVar2 = 0;
    uVar3 = thunk_FUN_004ad650((STT3DSprC *)this);
    Library::Ourlib::ST3DSMAP::SprSetVisible(param_1->field_0211,uVar3,iVar2);
    iVar1 = thunk_FUN_0041caf0((AnonShape_0041CAF0_1630B9E0 *)param_1);
    if (iVar1 == 1) {
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 1;
    uVar3 = thunk_FUN_004ad650((STT3DSprC *)this);
    Library::Ourlib::ST3DSMAP::SprSetVisible(param_1->field_0211,uVar3,iVar2);
    iVar2 = 1;
  }
  iVar4 = thunk_FUN_004ad650((STT3DSprC *)this);
  FUN_006e6870(param_1->field_0211,iVar4,iVar2);
  if ((param_1->field_0279 == 0xf6) || (param_1->field_0279 == 0xf7)) {
    uVar2 = thunk_FUN_00496250((int)param_1->field_0041,(int)param_1->field_0043,
                               (int)param_1->field_0045);
    if ((int)uVar2 < 0) {
      if (0x81 < param_1->field_0045) {
        param_1->field_0045 = param_1->field_0045 + -1;
      }
    }
    else {
      param_1->field_0045 = param_1->field_0045 + 1;
    }
  }
  else {
    local_EAX_315 =
         thunk_FUN_00496250((int)param_1->field_0041,(int)param_1->field_0043,
                            (int)param_1->field_0045);
    if ((int)local_EAX_315 < 0) {
      if (0x27 < param_1->field_0045) {
        param_1->field_0045 = param_1->field_0045 + -2;
      }
    }
    else {
      param_1->field_0045 = param_1->field_0045 + 2;
    }
  }
  if (param_1->field_0239 == 1) {
    iVar2 = (int)param_1->field_0041 - (int)param_1->field_004E;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 < 8) {
      iVar2 = (int)param_1->field_0043 - (int)*(short *)&param_1->field_0x50;
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      if (iVar2 < 8) goto LAB_00579591;
    }
    iVar4 = param_1->field_0241 + param_1->field_0245;
    param_1->field_0241 = iVar4;
    iVar2 = param_1->field_0249 + param_1->field_024D;
    param_1->field_0249 = iVar2;
    param_1->field_0041 = (short)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + param_1->field_0251;
    param_1->field_0043 = (short)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8) + param_1->field_0255;
  }
  else {
    if ((uint)param_1->field_023D < 0x10) goto LAB_005795a9;
LAB_00579591:
    uVar5 = thunk_FUN_005797b0(param_1,&param_1->field_004E,(short *)&param_1->field_0x50,
                               (undefined2 *)&param_1->field_0x6c);
    param_1->field_0239 = uVar5;
    param_1->field_023D = 0;
  }
LAB_005795a9:
  if (2 < g_playSystem_00802A38->field_00E4 - param_1->field_0235) {
    param_1->field_0235 = g_playSystem_00802A38->field_00E4;
    if ((*(short *)&param_1->field_0x6c == 7) || (*(short *)&param_1->field_0x6c < 3)) {
      param_1->field_0231 = (param_1->field_0231 + 1) % 6;
    }
    else {
      iVar2 = param_1->field_0231 + -1;
      param_1->field_0231 = iVar2;
      if (iVar2 < 0) {
        param_1->field_0231 = 5;
      }
    }
  }
  uVar3 = (uint)*(short *)&param_1->field_0x6c;
  if (((param_1->field_0279 == 0xf7) || (param_1->field_0279 == 0xf6)) &&
     (uVar3 = uVar3 + 4 & 0x80000007, (int)uVar3 < 0)) {
    uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
  }
  uVar3 = (((0x18 - (int)(uVar3 * 0x2d) / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) % 0x18) / 3;
  /* ST_CALLSITE[00579685]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
  STT3DSprC::SetCurFase((STT3DSprC *)this,'\r',uVar3);
  /* ST_CALLSITE[0057968E]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
  STT3DSprC::ShowCurFase((STT3DSprC *)this,'\r');
  /* ST_CALLSITE[005796A4]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
  STT3DSprC::SetCurFase((STT3DSprC *)this,'\x0e',param_1->field_0231 + uVar3 * 6);
  /* ST_CALLSITE[005796AD]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
  STT3DSprC::ShowCurFase((STT3DSprC *)this,'\x0e');
  param_1->field_023D = param_1->field_023D + 1;
  /* ST_CALLSITE[005796C3]: CALL dword ptr [EDX + 0xd8] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(param_1->field_0000 + 0xd8))();
  return;
}


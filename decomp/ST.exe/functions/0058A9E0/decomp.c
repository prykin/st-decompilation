#include "../../pseudocode_runtime.h"


void __fastcall FUN_0058a9e0(RecoveredRecordView_0058A9E0_0338C9E5 *param_1)

{
  byte *puVar1;
  int iVar3;
  uint uVar4;
  int iVar2;
  int iVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  int local_c;

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

  iVar3 = thunk_FUN_0041c710((RecoveredRecordView_0041C710_A35B7121 *)param_1);
  puVar1 = &param_1->field_0x1d5;
  if (iVar3 == 0) {
    iVar3 = 0;

    uVar4 = thunk_FUN_004ad650((STT3DSprC *)puVar1);

    Library::Ourlib::ST3DSMAP::SprSetVisible(param_1->field_0211,uVar4,iVar3);

    iVar2 = thunk_FUN_0041caf0((RecoveredRecordView_0041CAF0_18493751 *)param_1);
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

  iVar5 = thunk_FUN_004ad650((STT3DSprC *)puVar1);
  FUN_006e6870(param_1->field_0211,iVar5,iVar3);
  iVar3 = param_1->field_02A5;
  if ((iVar3 == 0xf8) || (iVar3 == 0xf9)) {
    local_c = 8;
    iVar5 = 8;
  }
  else {
    iVar5 = 6;
    local_c = 6;
  }
  if (2 < g_playSystem_00802A38->field_00E4 - param_1->field_0245) {
    param_1->field_0245 = g_playSystem_00802A38->field_00E4;
    param_1->field_0235 = 0;
    iVar7 = (param_1->field_0231 + 1) % iVar5;
    param_1->field_0231 = iVar7;
    if (iVar7 != 0) {
      param_1->field_0235 = ((iVar5 - iVar7) * 0x6a0) / iVar5;
    }
  }
  if (param_1->field_0249 == 1) {
    if (param_1->field_0281 == 0) {
      iVar3 = (int)param_1->field_0041 - (int)param_1->field_004E;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if (iVar3 < 0x15) {
        iVar3 = (int)param_1->field_0043 - (int)*(short *)&param_1->field_0x50;
        if (iVar3 < 0) {
          iVar3 = -iVar3;
        }
        if (iVar3 < 0x15) {
          /* ST_CALLSITE[0058ABCE]: CALL 0x00401a05; direct=00401A05 STOctopusC::sub_0058B190 */
          iVar3 = STOctopusC::sub_0058B190
                            ((STOctopusC *)param_1,&param_1->field_004E,
                             (short *)&param_1->field_0x50,&param_1->field_0052,
                             (short *)&param_1->field_0x6c);
          param_1->field_0249 = iVar3;
          param_1->field_024D = 0;
        }
      }
      iVar3 = param_1->field_02A5;
      param_1->field_025D = param_1->field_025D + param_1->field_0251;
      param_1->field_0261 = param_1->field_0261 + param_1->field_0255;
      if ((iVar3 == 0xf8) || (iVar3 == 0xf9)) {
        param_1->field_025D =
             (param_1->field_0269 * param_1->field_0235) / param_1->field_0239 + param_1->field_025D
        ;
        param_1->field_0261 =
             (param_1->field_026D * param_1->field_0235) / param_1->field_0239 + param_1->field_0261
        ;
        iVar5 = local_c;
      }
      param_1->field_0041 =
           (short)(param_1->field_025D + (param_1->field_025D >> 0x1f & 0xffU) >> 8) +
           param_1->field_0275;
      param_1->field_0043 =
           (short)(param_1->field_0261 + (param_1->field_0261 >> 0x1f & 0xffU) >> 8) +
           param_1->field_0279;
    }
    iVar7 = param_1->field_0265 + param_1->field_0259;
    param_1->field_0265 = iVar7;
    if ((iVar3 == 0xf8) || (iVar3 == 0xf9)) {
      param_1->field_0265 =
           (param_1->field_0271 * param_1->field_0235) / param_1->field_0239 + iVar7;
    }
    sVar6 = (short)(param_1->field_0265 + (param_1->field_0265 >> 0x1f & 0xffU) >> 8) +
            param_1->field_027D;
    param_1->field_0045 = sVar6;
    if (param_1->field_0281 != 0) {
      iVar3 = (int)sVar6 - (int)param_1->field_0052;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if (iVar3 < 10) {
        param_1->field_0259 = 0;
        param_1->field_0281 = 0;
      }
    }
  }
  else if (0xc < (uint)param_1->field_024D) {
    /* ST_CALLSITE[0058AD40]: CALL 0x00401a05; direct=00401A05 STOctopusC::sub_0058B190 */
    iVar3 = STOctopusC::sub_0058B190
                      ((STOctopusC *)param_1,&param_1->field_004E,(short *)&param_1->field_0x50,
                       &param_1->field_0052,(short *)&param_1->field_0x6c);
    param_1->field_0249 = iVar3;
    param_1->field_024D = 0;
  }
  sVar6 = *(short *)&param_1->field_0x6c * 0x2d;
  *(short *)&param_1->field_0x6c = sVar6;
  if (param_1->field_0281 == 0) {
    iVar3 = (0x18 - (int)sVar6 / 0xf) % 0x18;
    uVar4 = (((iVar3 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * local_c + param_1->field_0231;
    uVar8 = (iVar3 / 3) * local_c + param_1->field_0231;
  }
  else {
    uVar4 = param_1->field_0231 + iVar5 * 8;
    uVar8 = uVar4;
  }
  puVar1 = &param_1->field_0x1d5;
  *(short *)&param_1->field_0x6c = sVar6 / 0x2d - (short)((int)sVar6 / -0x4c000000);
  /* ST_CALLSITE[0058AE17]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
  STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x0e',uVar4);
  /* ST_CALLSITE[0058AE21]: CALL 0x004052fe; direct=004052FE STT3DSprC::SetCurShad */
  STT3DSprC::SetCurShad((STT3DSprC *)puVar1,'\x0e',uVar8);
  /* ST_CALLSITE[0058AE2A]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
  STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\x0e');
  param_1->field_024D = param_1->field_024D + 1;
  /* ST_CALLSITE[0058AE40]: CALL dword ptr [EDX + 0xd8]; [STIndirectCallsiteApplier] exact slot 0xD8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  STStructuralVirtualCall<undefined4>(param_1, 0xD8);
  return;
}


#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_trade.cpp
   Diagnostic line evidence: 294 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall FUN_004ec0f0(AnonShape_004EC0F0_C371FA68 *param_1)

{
  int iVar1;
  int uVar2;
  uint uVar3;

  iVar1 = STT3DSprC::LoadSequence
                    ((STT3DSprC *)param_1->field_05FF,0xe,DAT_00806774,
                     *(char **)(&DAT_007cde6c + param_1->field_050C * 4),0x1d);
  if (iVar1 != 0) {
    RaiseInternalException
              (iVar1,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_trade.cpp",0x126);
  }
  uVar3 = 10;
  iVar1 = thunk_FUN_004ad650((STT3DSprC *)&param_1->field_0x1d5);
  uVar2 = thunk_FUN_004ad650((STT3DSprC *)param_1->field_05FF);
  FUN_006ea340(param_1->field_0211,uVar2,iVar1,uVar3);
  STT3DSprC::sub_004AD3C0
            ((STT3DSprC *)param_1->field_05FF,
             (float)param_1->field_04FC * _DAT_007904f8 * _DAT_007904f0,
             (float)param_1->field_0500 * _DAT_007904f8 * _DAT_007904f0,
             (float)param_1->field_0504 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
  iVar1 = thunk_FUN_004ab050();
  uVar3 = 0;
  switch(iVar1) {
  case 0:
    uVar3 = DAT_0079aa90;
    break;
  case 1:
    uVar3 = DAT_0079aa94;
    break;
  case 2:
    uVar3 = DAT_0079aa98;
    break;
  case 3:
    uVar3 = DAT_0079aa9c;
  }
  thunk_FUN_004ad460((void *)param_1->field_05FF,1);
  thunk_FUN_004abce0((void *)param_1->field_05FF,0xe,uVar3,uVar3,'\0');
  STT3DSprC::SetCurFase((STT3DSprC *)param_1->field_05FF,'\x0e',uVar3);
  STT3DSprC::StartShow((STT3DSprC *)param_1->field_05FF,0xe,g_playSystem_00802A38->field_00E4);
  return 0;
}


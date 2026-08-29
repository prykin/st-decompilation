#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Maps\generate.cpp
   CGenerate::SaveMap */

int __thiscall CGenerate::SaveMap(CGenerate *this)

{
  CGenerate *this_00;
  int local_EAX_42;
  int iVar3;
  char *pcVar4_mg0;
  int local_EAX_218;
  int local_EAX_254;
  byte *pbVar4;
  int iVar2;
  uint uVar5;
  char *pcVar7;
  char *pcVar8;
  uint *puVar9;
  char cVar10;
  uint *puVar11;
  InternalExceptionFrame local_54;
  CGenerate *local_10;
  AnonShape_006B5050_99986F91 *local_c;
  int local_8;

  local_8 = 1;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;

  local_EAX_42 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (local_EAX_42 != 0) {
    g_currentExceptionFrame = local_54.previous;

    iVar2 = ReportDebugMessage("E:\\__titans\\Maps\\generate.cpp",0xcd,0,local_EAX_42,
                               "%s","CGenerate::SaveMap");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return 0;
  }
  local_10->field_570B = 0x32;

  iVar3 = SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00693B20::thunk_FUN_00693d00
                    ((RecoveredReceiver_00693B20 *)&local_10->field_0x24e,local_10->field_0018,
                     DAT_00853de0);
  if (iVar3 == 0) {
    local_8 = 0;
  }
  pcVar4_mg0 = LoadResourceString(0x232b,g_hINSTANCE_00807618);
  uVar5 = 0xffffffff;
  do {
    pcVar7 = pcVar4_mg0;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = pcVar4_mg0 + 1;
    cVar10 = *pcVar4_mg0;
    pcVar4_mg0 = pcVar7;
  } while (cVar10 != '\0');
  uVar5 = ~uVar5;
  pcVar7 = pcVar7 + -uVar5;
  pcVar8 = &this_00->field_0x55fb;
  memmove(pcVar8, pcVar7, uVar5); /* compiler REP MOVS byte copy */

  cMf32::RecPut(this_00->field_0018,0,PTR_s_TITLE_MISSION_0079d838,&this_00->field_0x55fb,0x104,
                nullptr,'\0',nullptr);

  cMf32::RecPut(this_00->field_0018,0,PTR_s_TEXTURE_0079d83c,&this_00->field_0x53f3,0x104,
                nullptr,'\0',nullptr);

  local_EAX_218 =
       Library::Ourlib::MFSTMAP::AuxTMapRefreshAll((short *)this_00->field_000C,this_00->field_0008);
  if (local_EAX_218 != 0) {
    local_8 = 0;
  }
  this_00->field_000C[4] = 0x20;

  local_EAX_254 =
       Library::Ourlib::MFSTMAP::mfTMapSave
                 ((short *)this_00->field_000C,(int)this_00->field_0018,"3D_MAP",'\0');
  if (local_EAX_254 != 0) {
    local_8 = 0;
  }
  if (local_8 != 0) {
    /* ST_CALLSITE[006A0858]: CALL 0x00405277; direct=00405277 CGenerate::_saveObj */
    iVar3 = _saveObj(this_00);
    if (iVar3 == 0) {
      local_8 = 0;
    }
  }
  /* ST_CALLSITE[006A086F]: CALL 0x004041d3; direct=004041D3 thunk_FUN_006a2ed0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/AnonShape_006B5050_99986F91; signature=__cdecl;pointer:/SubmarineTitans/Recovered/PointerShapes/AnonShape_006B5050_99986F91;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_006A2ED0_9EFE711B */
  local_c = thunk_FUN_006a2ed0((RecoveredRecord_006A2ED0_9EFE711B *)this_00->field_000C);
  puVar11 = nullptr;
  cVar10 = '\0';
  puVar9 = nullptr;
  /* ST_CALLSITE[006A087E]: CALL 0x006b5050; direct=006B5050 FUN_006b5050; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/byte; signature=__stdcall;pointer:/byte;pointer:/SubmarineTitans/Recovered/PointerShapes/AnonShape_006B5050_99986F91 */
  pbVar4 = FUN_006b5050(local_c);

  cMf32::RecPut(this_00->field_0018,0xc,PTR_s_SMALL_MAP_0079d840,(byte *)local_c,(uint)pbVar4,puVar9
                ,cVar10,puVar11);
  if (local_c != nullptr) {
    FreeAndNull(&local_c);
  }
  g_currentExceptionFrame = local_54.previous;
  return local_8;
}


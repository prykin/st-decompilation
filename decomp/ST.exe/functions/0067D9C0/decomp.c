#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 267 | 274 | 277 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl SavePlrEdit(int param_1,char *param_2,AnonShape_0067D9C0_2E8A2257 *param_3,char param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  InternalExceptionFrame local_58;
  uint local_14;
  uint local_10;
  AllocationRecord_0065CD10 *local_c;
  AllocationRecord_0067D3B0 *local_8;

  local_8 = nullptr;
  local_c = nullptr;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  iVar2 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  if (iVar2 == 0) {
    if (((param_1 == 0) || (param_2 == nullptr)) || (param_3->field_0x18 != '\x02')) {
      RaiseInternalException
                (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_plr_d.cpp",0x10b);
    }
    local_c = EventDataPack((AllocationRecord_0065CD10 *)param_3->field_0106,&local_14);
    local_8 = PlrDataPack((AllocationRecord_0067D3B0 *)param_3,(undefined4 *)local_c,local_14,
                          &local_10);
    thunk_FUN_0065d0f0((int *)&local_c);
    Library::Ourlib::MFAOBJ::mfAObjSave(param_1,param_2,(byte *)local_8,local_10,param_4);
    thunk_FUN_0067d160((int *)&local_8);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\ai\\ai_plr_d.cpp",0x112,0,iVar2,"%s",
                             "SavePlrEdit");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  thunk_FUN_0065d0f0((int *)&local_c);
  thunk_FUN_0067d160((int *)&local_8);
  RaiseInternalException(iVar2,0,"E:\\__titans\\ai\\ai_plr_d.cpp",0x115);
  return iVar2;
}


#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_script.cpp
   Diagnostic line evidence: 255 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00680890 -> 006F13F0 @ 006808EB | 006809B0 -> 00680890 @ 006809CF; address of zeroed
   full register at 006809B9 | 006809F0 -> 00680890 @ 00680A54; address of
   /SubmarineTitans/Recovered/DArrayTy+0x8 (elementSize) */

undefined4 __cdecl FUN_00680890(byte param_1,byte *param_2,uint param_3,undefined4 *elementSize)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  char *text;
  char *pcVar5;
  uint *puVar6;
  uint uVar7;
  CHAR local_408 [1024];
  uint local_8;
  uint uVar4;

  local_8 = 0;

  pcVar3 = STPointerBoundaryCast<char *>(thunk_FUN_006803b0(param_1));
  if (*pcVar3 == '\0') {
    RaiseInternalException
              (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0xff);
  }
  puVar6 = &local_8;
  cVar1 = thunk_FUN_00680570();

  cMf32::RecPut(DAT_008489d0,param_1,pcVar3,param_2,param_3,elementSize,cVar1,puVar6);
  DAT_00848a0c = DAT_00848a0c + local_8;
  DAT_00848a10 = DAT_00848a10 + 1;
  uVar7 = local_8;
  bVar2 = thunk_FUN_00680570();
  uVar4 = (uint)bVar2;
  pcVar5 = "M_ANY " + (uint)param_1 * 10;
  text = LoadResourceString(0x1b5a,g_hINSTANCE_00807618);
  /* ST_CALLSITE[00680945]: CALL dword ptr [0x0085bde8] */
  wsprintfA(local_408,text,pcVar5,pcVar3,param_3,uVar4,uVar7);
  thunk_FUN_00674ef0(local_408);
  return 1;
}


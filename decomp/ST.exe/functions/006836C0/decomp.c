#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_script.cpp
   Diagnostic line evidence: 906 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl FUN_006836c0(DArrayTy *param_1,byte *param_2)

{
  byte bVar1;
  dword dVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;

  if ((param_1 == nullptr) || (param_2 == nullptr)) {
    RaiseInternalException
              (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x38a);
  }
  dVar2 = param_1->elementSize;
  iVar6 = 0;
  if (0 < (int)dVar2) {
    do {
      pbVar5 = param_2;
      if (iVar6 < (int)dVar2) {
        pbVar3 = *(byte **)(param_1->growCapacity + iVar6 * 4);
      }
      else {
        pbVar3 = nullptr;
      }
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00683729:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_0068372e;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00683729;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0068372e:
      if (iVar4 == 0) {
        return iVar6;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)dVar2);
  }
  iVar6 = Library::DKW::TBL::FUN_006b5aa0(param_1,(char *)param_2);
  return iVar6;
}


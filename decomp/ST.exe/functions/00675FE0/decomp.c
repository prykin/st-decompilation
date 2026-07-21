
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 280 | 281 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __cdecl _AddAllGrpExch(uint param_1)

{
  dword dVar1;
  code *pcVar2;
  int iVar3;
  DArrayTy *array;
  ushort *puVar4;
  STGameObjC *pSVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_48;
  
  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar3 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_48.previous;
    iVar6 = ReportDebugMessage(s_E____titans_ai_ai_mdef_cpp_007d2d58,0x118,0,iVar3,&DAT_007a4ccc,
                               s__AddAllGrpExch_007d2d8c);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_ai_ai_mdef_cpp_007d2d58,0x119);
    return;
  }
  if (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) {
    array = (DArrayTy *)STAllPlayersC::GetObjsList((char)param_1);
    if (array != (DArrayTy *)0x0) {
      dVar1 = array->count;
      if (dVar1 != 0) {
        uVar8 = 0;
        if (dVar1 != 0) {
          uVar7 = 0;
          if (dVar1 == 0) {
            puVar4 = (ushort *)0x0;
            goto LAB_00676053;
          }
          do {
            puVar4 = (ushort *)(array->elementSize * uVar7 + (int)array->data);
LAB_00676053:
            pSVar5 = STAllPlayersC::GetObjPtr(g_sTAllPlayers_007FA174,param_1,(uint)*puVar4,CASE_1);
            if (pSVar5 != (STGameObjC *)0x0) {
              iVar3 = (*pSVar5->vtable->vfunc_2C)();
              if (iVar3 == 0x78) {
                iVar3 = (*pSVar5->vtable->vfunc_2C)();
                if (iVar3 == 0x78) {
                  *(undefined4 *)&pSVar5[1].field_0x98 = 0xffffffff;
                }
              }
            }
            uVar8 = uVar8 + 1;
            uVar7 = uVar8 & 0xffff;
          } while (uVar7 < array->count);
        }
        STAllPlayersC::AddObjsToGroup
                  (g_sTAllPlayers_007FA174,param_1,0,(uint *)array,(undefined2 *)0x0);
      }
      if (array != (DArrayTy *)0x0) {
        DArrayDestroy(array);
      }
    }
  }
  g_currentExceptionFrame = local_48.previous;
  return;
}


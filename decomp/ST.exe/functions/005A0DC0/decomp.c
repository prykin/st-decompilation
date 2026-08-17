#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::ConnectProc */

void __thiscall FSGSTy::ConnectProc(FSGSTy *this,int param_1,int param_2)

{
  char cVar1;
  ushort *puVar2;
  FSGSTy *pFVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7_mg2;
  char *pcVar7_mg0;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  if (((this->array_00BC[0xc].field_01DF == '\x01') && (this->field_1AC0 != nullptr)) &&
     (-1 < (int)this->field_1ABC)) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar5 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    pFVar4 = local_8;
    if (iVar5 == 0) {
      puVar2 = local_8->field_1AC0;
      uVar9 = *(uint *)(puVar2 + 10);
      if (uVar9 == 0) {
        uVar9 = ((uint)puVar2[7] * *(int *)(puVar2 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(puVar2 + 4);
      }
      puVar6 = (undefined4 *)FUN_006b4fa0((int *)puVar2);
      for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar6 = 0xffffffff;
        puVar6 = puVar6 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar6 = 0xff;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      ccFntTy::SetSurf(pFVar4->array_00BC[0xc].field_01F3,(int)pFVar4->field_1AC0,0,0,0x16,0x1b8,
                       0xf0);
      if (param_1 < param_2) {
        iVar5 = (param_1 * 100) / param_2;
        pcVar7_mg2 = LoadResourceString(0x2571,g_hINSTANCE_00807618);
        /* ST_CALLSITE[005A0EB7]: CALL dword ptr [0x0085bde8] */
        wsprintfA((LPSTR)&DAT_0080f33a,"%s%d%%",pcVar7_mg2,iVar5);
      }
      else {
        pcVar7_mg0 = LoadResourceString(0x2570,g_hINSTANCE_00807618);
        uVar9 = 0xffffffff;
        do {
          pcVar10 = pcVar7_mg0;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar10 = pcVar7_mg0 + 1;
          cVar1 = *pcVar7_mg0;
          pcVar7_mg0 = pcVar10;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        pcVar10 = pcVar10 + -uVar9;
        pcVar11 = (char *)&DAT_0080f33a;
        memmove(pcVar11, pcVar10, uVar9); /* compiler REP MOVS byte copy */
      }
      ccFntTy::WrTxt(pFVar4->array_00BC[0xc].field_01F3,(char *)&DAT_0080f33a,-1,-1,2,-1,-1);
      FUN_006b35d0((int *)g_ddxContext_008075A8,pFVar4->field_1ABC);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x909,0,iVar5,"%s"
                               ,"FSGSTy::ConnectProc");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x909);
  }
  return;
}


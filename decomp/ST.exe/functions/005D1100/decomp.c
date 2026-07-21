#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::AddPlayerList */

void __thiscall
SettMapMTy::AddPlayerList(SettMapMTy *this,int param_1,uint param_2,int param_3,char *param_4)

{
  byte bVar1;
  DArrayTy *pDVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  SettMapMTy *this_00;
  int errorCode;
  AnonShape_005D00B0_9E7CC102 *pAVar6;
  void *pvVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;

  if (this->field_1F84 != (DArrayTy *)0x0) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    this_00 = local_8;
    if (errorCode == 0) {
      pDVar2 = local_8->field_1F84;
      if (param_2 < pDVar2->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar2, param_2) (runtime stride) */
        pAVar6 = (AnonShape_005D00B0_9E7CC102 *)(pDVar2->elementSize * param_2 + (int)pDVar2->data);
      }
      else {
        pAVar6 = (AnonShape_005D00B0_9E7CC102 *)0x0;
      }
      if (pAVar6 != (AnonShape_005D00B0_9E7CC102 *)0x0) {
        bVar1 = pAVar6->field_0x4;
        if (bVar1 == 1) {
          if (param_3 != 2) goto LAB_005d11ad;
          param_3 = 2;
        }
        else {
          if ((bVar1 < 2) || (3 < bVar1)) goto LAB_005d11ad;
          param_2 = param_2 + 1;
          thunk_FUN_005d00b0(local_8,pAVar6,param_2);
        }
        ChangePlayerList(this_00,param_1,param_2,param_3,'\0',param_4);
      }
LAB_005d11ad:
      if ((DAT_0080877e != '\0') && (this_00->field_1E26 == CASE_C)) {
        pDVar2 = this_00->field_1F84;
        uVar10 = 0;
        bVar5 = true;
        uVar3 = pDVar2->count;
        if (uVar3 != 0) {
          if (uVar3 == 0) {
            pvVar7 = (void *)0x0;
            goto LAB_005d11ee;
          }
          do {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar2, uVar10) (runtime stride) */
            pvVar7 = (void *)(pDVar2->elementSize * uVar10 + (int)pDVar2->data);
LAB_005d11ee:
            if ((((pvVar7 != (void *)0x0) && (DAT_0080874d == *(char *)((int)pvVar7 + 2))) &&
                (DAT_0080874e == *(char *)((int)pvVar7 + 3))) &&
               (*(int *)((int)pvVar7 + 6) == DAT_0080877f)) {
              bVar5 = false;
              break;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar3);
        }
        if ((bVar5) && (uVar10 = 0, uVar3 != 0)) {
          if (uVar3 == 0) {
            pvVar7 = (void *)0x0;
            goto LAB_005d1245;
          }
          while( true ) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar2, uVar10) (runtime stride) */
            pvVar7 = (void *)(pDVar2->elementSize * uVar10 + (int)pDVar2->data);
LAB_005d1245:
            if (((pvVar7 != (void *)0x0) && (DAT_0080874d == *(char *)((int)pvVar7 + 2))) &&
               (DAT_0080874e == *(char *)((int)pvVar7 + 3))) break;
            uVar10 = uVar10 + 1;
            if (uVar3 <= uVar10) {
              g_currentExceptionFrame = local_4c.previous;
              return;
            }
          }
          pcVar8 = &DAT_00807e1d;
          if (DAT_008067a0 == '\0') {
            pcVar8 = (char *)&DAT_00807ddd;
          }
          AddPlayerList(local_8,DAT_0080877f,uVar10,(DAT_0080874f != '\0') + 2,pcVar8);
        }
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar9 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x62f,0,errorCode,
                               "%s","SettMapMTy::AddPlayerList");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\settmobj.cpp",0x62f);
  }
  return;
}


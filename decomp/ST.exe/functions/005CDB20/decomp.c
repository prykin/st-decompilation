#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::AddPlList */

void __thiscall SettMapMTy::AddPlList(SettMapMTy *this,int param_1)

{
  DArrayTy *pDVar1;
  code *pcVar2;
  int errorCode;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  char *pcVar8;
  char *pcVar9;
  uint local_164 [4];
  char local_154 [260];
  InternalExceptionFrame local_50;
  SettMapMTy *local_c;
  int local_8;

  local_8 = 1;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x21b,0,errorCode,
                               "%s","SettMapMTy::AddPlList");
    if (iVar4 == 0) {
      RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\settmobj.cpp",0x21b);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_1 == 0) {
    if (local_c->field_2244 != '\0') {
      pDVar1 = local_c->field_1F84;
      cVar7 = '\0';
      uVar5 = 0;
      uVar6 = pDVar1->count;
      if (uVar6 != 0) {
        if (uVar6 == 0) {
          pcVar8 = (char *)0x0;
          goto LAB_005cdd03;
        }
        do {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, uVar5) (runtime stride) */
          pcVar8 = (char *)(pDVar1->elementSize * uVar5 + (int)pDVar1->data);
LAB_005cdd03:
          if (pcVar8 != (char *)0x0) {
            if (*(int *)(pcVar8 + 6) == DAT_0080877f) {
              local_8 = 0;
              break;
            }
            if ((*pcVar8 != '\0') && (pcVar8[4] == '\x01')) {
              cVar7 = cVar7 + '\x01';
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      if (((local_8 != 0) && (cVar7 != '\0')) && (local_164[0] = 0, uVar6 != 0)) {
        if (uVar6 == 0) {
          pcVar8 = (char *)0x0;
          goto LAB_005cdd57;
        }
        while( true ) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, local_164[0]) (runtime stride) */
          pcVar8 = (char *)(pDVar1->elementSize * local_164[0] + (int)pDVar1->data);
LAB_005cdd57:
          if (((pcVar8 != (char *)0x0) && (*pcVar8 != '\0')) && (pcVar8[4] == '\x01')) break;
          local_164[0] = local_164[0] + 1;
          if (uVar6 <= local_164[0]) {
            g_currentExceptionFrame = local_50.previous;
            return;
          }
        }
        local_164[1] = 3;
        local_164[2] = 2;
        pcVar8 = &DAT_00807e1d;
        if (DAT_008067a0 == '\0') {
          pcVar8 = (char *)&DAT_00807ddd;
        }
        uVar6 = 0xffffffff;
        do {
          pcVar9 = pcVar8;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar9 = pcVar8 + 1;
          cVar7 = *pcVar8;
          pcVar8 = pcVar9;
        } while (cVar7 != '\0');
        uVar6 = ~uVar6;
        pcVar8 = pcVar9 + -uVar6;
        pcVar9 = local_154;
        for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar9 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        }
        FUN_006b6500(g_int_00811764,1);
        FUN_00715360(g_int_00811764,1,'(',(char *)local_164,0x114,1,0xffffffff);
        FUN_006b6500(g_int_00811764,DAT_0080733c);
        local_c->field_2244 = 0;
      }
    }
  }
  else {
    uVar5 = 0;
    pDVar1 = local_c->field_1F84;
    uVar6 = pDVar1->count;
    if (uVar6 != 0) {
      if (uVar6 == 0) {
        pvVar3 = (void *)0x0;
        goto LAB_005cdb95;
      }
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, uVar5) (runtime stride) */
        pvVar3 = (void *)(pDVar1->elementSize * uVar5 + (int)pDVar1->data);
LAB_005cdb95:
        if (((pvVar3 != (void *)0x0) && (DAT_0080874d == *(char *)((int)pvVar3 + 2))) &&
           ((DAT_0080874e == *(char *)((int)pvVar3 + 3) &&
            (*(int *)((int)pvVar3 + 6) == DAT_0080877f)))) {
          local_8 = 0;
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar6);
    }
    if ((local_8 != 0) && (local_164[0] = 0, uVar6 != 0)) {
      if (uVar6 == 0) {
        pvVar3 = (void *)0x0;
        goto LAB_005cdbf4;
      }
      while( true ) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, local_164[0]) (runtime stride) */
        pvVar3 = (void *)(pDVar1->elementSize * local_164[0] + (int)pDVar1->data);
LAB_005cdbf4:
        if (((pvVar3 != (void *)0x0) && (DAT_0080874d == *(char *)((int)pvVar3 + 2))) &&
           (DAT_0080874e == *(char *)((int)pvVar3 + 3))) break;
        local_164[0] = local_164[0] + 1;
        if (uVar6 <= local_164[0]) {
          g_currentExceptionFrame = local_50.previous;
          return;
        }
      }
      local_164[2] = (DAT_0080874f != '\0') + 2;
      local_164[1] = 3;
      pcVar8 = &DAT_00807e1d;
      if (DAT_008067a0 == '\0') {
        pcVar8 = (char *)&DAT_00807ddd;
      }
      uVar6 = 0xffffffff;
      do {
        pcVar9 = pcVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar8 + 1;
        cVar7 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar7 != '\0');
      uVar6 = ~uVar6;
      pcVar8 = pcVar9 + -uVar6;
      pcVar9 = local_154;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      FUN_006b6500(g_int_00811764,1);
      FUN_00715360(g_int_00811764,1,'(',(char *)local_164,0x114,1,0xffffffff);
      FUN_006b6500(g_int_00811764,DAT_0080733c);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}


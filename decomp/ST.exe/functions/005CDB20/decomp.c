#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::AddPlList

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall SettMapMTy::AddPlList(SettMapMTy *this,int param_1)

{
  SettMapMTy_field_1F84DArray *pSVar1;
  code *pcVar2;
  int errorCode;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  char *pcVar7;
  char *pcVar8;
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
    iVar3 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x21b,0,errorCode,
                               "%s","SettMapMTy::AddPlList");
    if (iVar3 == 0) {
      RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\settmobj.cpp",0x21b);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_1 == 0) {
    if (local_c->field_2244 != '\0') {
      pSVar1 = local_c->field_1F84;
      cVar6 = '\0';
      uVar4 = 0;
      uVar5 = pSVar1->count;
      if (uVar5 != 0) {
        if (uVar5 == 0) {
          pcVar7 = (char *)0x0;
          goto LAB_005cdd03;
        }
        do {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          pcVar7 = &pSVar1->data->field_0000 + pSVar1->elementSize * uVar4;
LAB_005cdd03:
          if (pcVar7 != (char *)0x0) {
            if (*(int *)(pcVar7 + 6) == DAT_0080877f) {
              local_8 = 0;
              break;
            }
            if ((*pcVar7 != '\0') && (pcVar7[4] == '\x01')) {
              cVar6 = cVar6 + '\x01';
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      if (((local_8 != 0) && (cVar6 != '\0')) && (local_164[0] = 0, uVar5 != 0)) {
        if (uVar5 == 0) {
          pcVar7 = (char *)0x0;
          goto LAB_005cdd57;
        }
        while( true ) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          pcVar7 = &pSVar1->data->field_0000 + pSVar1->elementSize * local_164[0];
LAB_005cdd57:
          if (((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) && (pcVar7[4] == '\x01')) break;
          local_164[0] = local_164[0] + 1;
          if (uVar5 <= local_164[0]) {
            g_currentExceptionFrame = local_50.previous;
            return;
          }
        }
        local_164[1] = 3;
        local_164[2] = 2;
        pcVar7 = &DAT_00807e1d;
        if (DAT_008067a0 == '\0') {
          pcVar7 = (char *)&DAT_00807ddd;
        }
        uVar5 = 0xffffffff;
        do {
          pcVar8 = pcVar7;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar8 = pcVar7 + 1;
          cVar6 = *pcVar7;
          pcVar7 = pcVar8;
        } while (cVar6 != '\0');
        uVar5 = ~uVar5;
        pcVar7 = pcVar8 + -uVar5;
        pcVar8 = local_154;
        memmove(pcVar8, pcVar7, uVar5); /* compiler REP MOVS byte copy */
        FUN_006b6500(g_int_00811764,1);
        FUN_00715360(g_int_00811764,1,'(',(char *)local_164,0x114,1,0xffffffff);
        FUN_006b6500(g_int_00811764,DAT_0080733c);
        local_c->field_2244 = 0;
      }
    }
  }
  else {
    uVar4 = 0;
    pSVar1 = local_c->field_1F84;
    uVar5 = pSVar1->count;
    if (uVar5 != 0) {
      if (uVar5 == 0) {
        pcVar7 = (char *)0x0;
        goto LAB_005cdb95;
      }
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        pcVar7 = &pSVar1->data->field_0000 + pSVar1->elementSize * uVar4;
LAB_005cdb95:
        if (((pcVar7 != (char *)0x0) && (DAT_0080874d == pcVar7[2])) &&
           ((DAT_0080874e == pcVar7[3] && (*(int *)(pcVar7 + 6) == DAT_0080877f)))) {
          local_8 = 0;
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    if ((local_8 != 0) && (local_164[0] = 0, uVar5 != 0)) {
      if (uVar5 == 0) {
        pcVar7 = (char *)0x0;
        goto LAB_005cdbf4;
      }
      while( true ) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        pcVar7 = &pSVar1->data->field_0000 + pSVar1->elementSize * local_164[0];
LAB_005cdbf4:
        if (((pcVar7 != (char *)0x0) && (DAT_0080874d == pcVar7[2])) && (DAT_0080874e == pcVar7[3]))
        break;
        local_164[0] = local_164[0] + 1;
        if (uVar5 <= local_164[0]) {
          g_currentExceptionFrame = local_50.previous;
          return;
        }
      }
      local_164[2] = (DAT_0080874f != '\0') + 2;
      local_164[1] = 3;
      pcVar7 = &DAT_00807e1d;
      if (DAT_008067a0 == '\0') {
        pcVar7 = (char *)&DAT_00807ddd;
      }
      uVar5 = 0xffffffff;
      do {
        pcVar8 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar8 = pcVar7 + 1;
        cVar6 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar6 != '\0');
      uVar5 = ~uVar5;
      pcVar7 = pcVar8 + -uVar5;
      pcVar8 = local_154;
      memmove(pcVar8, pcVar7, uVar5); /* compiler REP MOVS byte copy */
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


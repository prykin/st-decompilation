#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::CheckPlList

   [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall SettMapMTy::CheckPlList(SettMapMTy *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  SettMapMTy *pSVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  SettMapMTy_field_1F84Element *element_1f84;
  char *pcVar8;
  SettMapMTy_field_1F84Element *element_1f84_2;
  char *pcVar9;
  SettMapMTy_field_1F84Element *element_1f84_3;
  int iVar10;
  SettMapMTy_field_1F84DArray *pSVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  InternalExceptionFrame local_5c;
  AnonShape_00413AF0_B6B4EE9A *local_18;
  uint local_14;
  uint local_10;
  SettMapMTy *local_c;
  char local_6;
  char local_5;

  if (this->field_1F84 != nullptr) {
    local_5c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_5c;
    local_c = this;
    iVar6 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
    pSVar3 = local_c;
    if (iVar6 == 0) {
      cVar5 = '\0';
      local_6 = '\0';
      cVar4 = cVar5;
      if (DAT_00808aaa == '\0') {
        pSVar11 = local_c->field_1F84;
        cVar4 = local_6;
        if (pSVar11->count != 0) {
          uVar12 = 0;
          local_6 = cVar5;
          if (pSVar11->count == 0) {
            pcVar9 = nullptr;
            goto LAB_005d01c2;
          }
          do {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar9 = &pSVar11->data->field_0000 + pSVar11->elementSize * uVar12;
LAB_005d01c2:
            if ((pcVar9 != nullptr) && (pcVar9[4] == '\x03')) {
              if (*(DArrayTy **)(pcVar9 + 0x50) != nullptr) {
                DArrayDestroy(*(DArrayTy **)(pcVar9 + 0x50));
              }
              DArrayRemoveAt((DArrayTy *)pSVar3->field_1F84,uVar12);
              uVar12 = uVar12 - 1;
            }
            pSVar11 = pSVar3->field_1F84;
            uVar12 = uVar12 + 1;
            cVar4 = local_6;
          } while (uVar12 < pSVar11->count);
        }
      }
      do {
        local_6 = cVar4;
        pSVar11 = pSVar3->field_1F84;
        bVar2 = false;
        uVar13 = 0;
        local_5 = '\0';
        uVar12 = pSVar11->count;
        if (uVar12 != 0) {
          if (uVar12 == 0) {
            pcVar9 = nullptr;
            goto LAB_005d021c;
          }
          do {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar9 = &pSVar11->data->field_0000 + pSVar11->elementSize * uVar13;
LAB_005d021c:
            if (pcVar9 != nullptr) {
              if (*pcVar9 == '\0') {
                if (pcVar9[4] == '\x01') {
                  if (local_6 == '\0') goto LAB_005d024d;
                  if (*(DArrayTy **)(pcVar9 + 0x50) != nullptr) {
                    DArrayDestroy(*(DArrayTy **)(pcVar9 + 0x50));
                  }
                  DArrayRemoveAt((DArrayTy *)pSVar3->field_1F84,uVar13);
                  bVar2 = true;
                  goto LAB_005d0277;
                }
              }
              else if (((pcVar9[4] == '\x02') && (pSVar3->field_1E26 != CASE_C)) &&
                      (pSVar3->field_1E26 != CASE_10)) {
                local_6 = '\0';
              }
              else {
LAB_005d024d:
                local_6 = '\x01';
              }
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar12);
          bVar2 = false;
        }
LAB_005d0277:
        cVar4 = local_6;
      } while (bVar2);
      if ((pSVar3->field_1E26 == CASE_C) || (pSVar3->field_1E26 == CASE_10)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        do {
          uVar13 = 1;
          local_5 = '\0';
          pSVar11 = local_c->field_1F84;
          uVar12 = pSVar11->count;
          if (1 < uVar12) {
            if (uVar12 < 2) {
              pcVar9 = nullptr;
              goto LAB_005d02c3;
            }
            do {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
              pcVar9 = &pSVar11->data->field_0000 + pSVar11->elementSize * uVar13;
LAB_005d02c3:
              if (uVar13 - 1 < uVar12) {
                element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar11, uVar13 - 1);
              }
              else {
                element_1f84 = nullptr;
              }
              if (((pcVar9 != nullptr) && (element_1f84 != nullptr)) &&
                 ((*pcVar9 != '\0' &&
                  (((element_1f84->field_0x0 == '\0' && (element_1f84->field_0x4 != '\x01')) && (uVar12 < 0x18))
                  )))) {
                sub_005D00B0(local_c,element_1f84,uVar13);
                local_5 = '\x01';
                break;
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar12);
          }
        } while (local_5 != '\0');
      }
      if ((local_c->field_1E26 != CASE_C) && (local_c->field_1E26 != CASE_10)) {
        pSVar11 = local_c->field_1F84;
        uVar12 = pSVar11->count;
        if (uVar12 != 0) {
          if (uVar12 - 1 < uVar12) {
            element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar11, uVar12 - 1);
          }
          else {
            element_1f84 = nullptr;
          }
          if (((element_1f84 != nullptr) && (element_1f84->field_0x0 == '\0')) &&
             ((element_1f84->field_0x4 != '\x01' && (uVar12 < 0x18)))) {
            sub_005D00B0(local_c,element_1f84,uVar12);
          }
        }
      }
      do {
        uVar13 = 1;
        local_5 = '\0';
        pSVar11 = local_c->field_1F84;
        uVar12 = pSVar11->count;
        if (1 < uVar12) {
          if (uVar12 < 2) {
            pcVar9 = nullptr;
            goto LAB_005d0391;
          }
          do {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar9 = &pSVar11->data->field_0000 + pSVar11->elementSize * uVar13;
LAB_005d0391:
            if (uVar13 - 1 < uVar12) {
              element_1f84_2 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar11, uVar13 - 1);
            }
            else {
              element_1f84_2 = nullptr;
            }
            if (((((pcVar9 != nullptr) && (element_1f84_2 != nullptr)) && (*pcVar9 == '\0')) &&
                ((pcVar9[4] != '\x01' && (element_1f84_2->field_0000 == '\0')))) && (element_1f84_2->field_0004 == '\x01')) {
              if (element_1f84_2->handle != nullptr) {
                DArrayDestroy(element_1f84_2->handle);
              }
              DArrayRemoveAt((DArrayTy *)local_c->field_1F84,uVar13 - 1);
              local_5 = '\x01';
              break;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar12);
        }
      } while (local_5 != '\0');
      local_5 = '\0';
      local_10 = 0;
      local_18 = (AnonShape_00413AF0_B6B4EE9A *)local_c->field_1F84;
      uVar12 = ((SettMapMTy_field_1F84DArray *)local_18)->count;
      if (uVar12 != 0) {
        do {
          if (local_10 < uVar12) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar9 = &((SettMapMTy_field_1F84DArray *)local_18)->data->field_0000 +
                     ((SettMapMTy_field_1F84DArray *)local_18)->elementSize * local_10;
          }
          else {
            pcVar9 = nullptr;
          }
          if (((pcVar9 != nullptr) && (*pcVar9 != '\0')) && (pcVar9[4] == '\x01')) {
            local_6 = '\0';
            local_14 = local_10 + 1;
            if (local_14 < uVar12) {
/* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
LAB_005d045a:
              pcVar8 = &((SettMapMTy_field_1F84DArray *)local_18)->data->field_0000 +
                       ((SettMapMTy_field_1F84DArray *)local_18)->elementSize * local_14;
              if (pcVar8 == nullptr) goto cf_continue_loop_005D0486;
              if (*pcVar8 == '\0') {
                if (pcVar8[4] == '\x03') {
                  local_6 = local_6 + '\x01';
                }
                if (pcVar8[4] != '\x02') goto cf_continue_loop_005D0486;
                if (*(DArrayTy **)(pcVar9 + 0x50) != nullptr) {
                  DArrayDestroy(*(DArrayTy **)(pcVar9 + 0x50));
                }
                pcVar14 = pcVar9;
                memmove(pcVar14, pcVar8, 0x60); /* compiler REP MOVS byte copy */
                pcVar9[1] = '\0';
                *pcVar9 = '\x01';
                DArrayRemoveAt((DArrayTy *)local_c->field_1F84,local_14);
                local_5 = '\x01';
              }
            }
LAB_005d048e:
            if ((local_5 == '\0') && (local_6 != '\0')) {
              while( true ) {
                pSVar11 = local_c->field_1F84;
                uVar12 = local_10 + 1;
                if (uVar12 < pSVar11->count) {
                  element_1f84_3 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar11, uVar12);
                }
                else {
                  element_1f84_3 = nullptr;
                }
                if ((element_1f84_3 == nullptr) || (element_1f84_3->field_0000 != '\0')) break;
                if (element_1f84_3->handle != nullptr) {
                  DArrayDestroy(element_1f84_3->handle);
                }
                DArrayRemoveAt((DArrayTy *)local_c->field_1F84,uVar12);
              }
            }
          }
          local_10 = local_10 + 1;
          local_18 = (AnonShape_00413AF0_B6B4EE9A *)local_c->field_1F84;
          uVar12 = ((SettMapMTy_field_1F84DArray *)local_18)->count;
        } while (local_10 < uVar12);
      }
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    g_currentExceptionFrame = local_5c.previous;
    iVar10 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x563,0,iVar6,
                                "%s","SettMapMTy::CheckPlList");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\Start\\settmobj.cpp",0x563);
  }
  return;
cf_continue_loop_005D0486:
  local_14 = local_14 + 1;
  if (uVar12 <= local_14) goto LAB_005d048e;
  goto LAB_005d045a;
}


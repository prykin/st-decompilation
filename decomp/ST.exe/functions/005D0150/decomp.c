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
  SettMapMTy_field_1F84Element *element_1f84_2;
  SettMapMTy_field_1F84Element *element_1f84_3;
  char *pcVar8;
  SettMapMTy_field_1F84Element *element_1f84_4;
  int iVar9;
  SettMapMTy_field_1F84DArray *pSVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  char *pcVar14;
  InternalExceptionFrame local_5c;
  AnonShape_00413AF0_B6B4EE9A *local_18;
  uint local_14;
  uint local_10;
  SettMapMTy *local_c;
  char local_6;
  char local_5;

  if (this->field_1F84 != (SettMapMTy_field_1F84DArray *)0x0) {
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
        pSVar10 = local_c->field_1F84;
        cVar4 = local_6;
        if (pSVar10->count != 0) {
          uVar11 = 0;
          local_6 = cVar5;
          if (pSVar10->count == 0) {
            pcVar8 = (char *)0x0;
            goto LAB_005d01c2;
          }
          do {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar8 = &pSVar10->data->field_0000 + pSVar10->elementSize * uVar11;
LAB_005d01c2:
            if ((pcVar8 != (char *)0x0) && (pcVar8[4] == '\x03')) {
              if (*(DArrayTy **)(pcVar8 + 0x50) != (DArrayTy *)0x0) {
                DArrayDestroy(*(DArrayTy **)(pcVar8 + 0x50));
              }
              DArrayRemoveAt((DArrayTy *)pSVar3->field_1F84,uVar11);
              uVar11 = uVar11 - 1;
            }
            pSVar10 = pSVar3->field_1F84;
            uVar11 = uVar11 + 1;
            cVar4 = local_6;
          } while (uVar11 < pSVar10->count);
        }
      }
      do {
        local_6 = cVar4;
        pSVar10 = pSVar3->field_1F84;
        bVar2 = false;
        uVar12 = 0;
        local_5 = '\0';
        uVar11 = pSVar10->count;
        if (uVar11 != 0) {
          if (uVar11 == 0) {
            pcVar8 = (char *)0x0;
            goto LAB_005d021c;
          }
          do {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar8 = &pSVar10->data->field_0000 + pSVar10->elementSize * uVar12;
LAB_005d021c:
            if (pcVar8 != (char *)0x0) {
              if (*pcVar8 == '\0') {
                if (pcVar8[4] == '\x01') {
                  if (local_6 == '\0') goto LAB_005d024d;
                  if (*(DArrayTy **)(pcVar8 + 0x50) != (DArrayTy *)0x0) {
                    DArrayDestroy(*(DArrayTy **)(pcVar8 + 0x50));
                  }
                  DArrayRemoveAt((DArrayTy *)pSVar3->field_1F84,uVar12);
                  bVar2 = true;
                  goto LAB_005d0277;
                }
              }
              else if (((pcVar8[4] == '\x02') && (pSVar3->field_1E26 != CASE_C)) &&
                      (pSVar3->field_1E26 != CASE_10)) {
                local_6 = '\0';
              }
              else {
LAB_005d024d:
                local_6 = '\x01';
              }
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar11);
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
          uVar12 = 1;
          local_5 = '\0';
          pSVar10 = local_c->field_1F84;
          uVar11 = pSVar10->count;
          if (1 < uVar11) {
            if (uVar11 < 2) {
              pcVar8 = (char *)0x0;
              goto LAB_005d02c3;
            }
            do {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
              pcVar8 = &pSVar10->data->field_0000 + pSVar10->elementSize * uVar12;
LAB_005d02c3:
              if (uVar12 - 1 < uVar11) {
                element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar10, uVar12 - 1);
              }
              else {
                element_1f84 = (SettMapMTy_field_1F84Element *)0x0;
              }
              if (((pcVar8 != (char *)0x0) && (element_1f84 != (SettMapMTy_field_1F84Element *)0x0)) &&
                 ((*pcVar8 != '\0' &&
                  (((element_1f84->field_0000 == '\0' && (element_1f84->field_0004 != '\x01')) &&
                   (uVar11 < 0x18)))))) {
                sub_005D00B0(local_c,(AnonShape_005D00B0_9E7CC102 *)element_1f84,uVar12);
                local_5 = '\x01';
                break;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar11);
          }
        } while (local_5 != '\0');
      }
      if ((local_c->field_1E26 != CASE_C) && (local_c->field_1E26 != CASE_10)) {
        pSVar10 = local_c->field_1F84;
        uVar11 = pSVar10->count;
        if (uVar11 != 0) {
          if (uVar11 - 1 < uVar11) {
            element_1f84_2 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar10, uVar11 - 1);
          }
          else {
            element_1f84_2 = (SettMapMTy_field_1F84Element *)0x0;
          }
          if (((element_1f84_2 != (SettMapMTy_field_1F84Element *)0x0) && (element_1f84_2->field_0000 == '\0')) &&
             ((element_1f84_2->field_0004 != '\x01' && (uVar11 < 0x18)))) {
            sub_005D00B0(local_c,(AnonShape_005D00B0_9E7CC102 *)element_1f84_2,uVar11);
          }
        }
      }
      do {
        uVar12 = 1;
        local_5 = '\0';
        pSVar10 = local_c->field_1F84;
        uVar11 = pSVar10->count;
        if (1 < uVar11) {
          if (uVar11 < 2) {
            pcVar8 = (char *)0x0;
            goto LAB_005d0391;
          }
          do {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar8 = &pSVar10->data->field_0000 + pSVar10->elementSize * uVar12;
LAB_005d0391:
            if (uVar12 - 1 < uVar11) {
              element_1f84_3 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar10, uVar12 - 1);
            }
            else {
              element_1f84_3 = (SettMapMTy_field_1F84Element *)0x0;
            }
            if (((((pcVar8 != (char *)0x0) && (element_1f84_3 != (SettMapMTy_field_1F84Element *)0x0)) &&
                 (*pcVar8 == '\0')) && ((pcVar8[4] != '\x01' && (element_1f84_3->field_0000 == '\0')))) &&
               (element_1f84_3->field_0004 == '\x01')) {
              if (element_1f84_3->handle != (DArrayTy *)0x0) {
                DArrayDestroy(element_1f84_3->handle);
              }
              DArrayRemoveAt((DArrayTy *)local_c->field_1F84,uVar12 - 1);
              local_5 = '\x01';
              break;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar11);
        }
      } while (local_5 != '\0');
      local_5 = '\0';
      local_10 = 0;
      local_18 = (AnonShape_00413AF0_B6B4EE9A *)local_c->field_1F84;
      uVar11 = ((SettMapMTy_field_1F84DArray *)local_18)->count;
      if (uVar11 != 0) {
        do {
          if (local_10 < uVar11) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar8 = &((SettMapMTy_field_1F84DArray *)local_18)->data->field_0000 +
                     ((SettMapMTy_field_1F84DArray *)local_18)->elementSize * local_10;
          }
          else {
            pcVar8 = (char *)0x0;
          }
          if (((pcVar8 != (char *)0x0) && (*pcVar8 != '\0')) && (pcVar8[4] == '\x01')) {
            local_6 = '\0';
            local_14 = local_10 + 1;
            if (local_14 < uVar11) {
/* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
LAB_005d045a:
              pcVar13 = &((SettMapMTy_field_1F84DArray *)local_18)->data->field_0000 +
                        ((SettMapMTy_field_1F84DArray *)local_18)->elementSize * local_14;
              if (pcVar13 == (char *)0x0) goto cf_continue_loop_005D0486;
              if (*pcVar13 == '\0') {
                if (pcVar13[4] == '\x03') {
                  local_6 = local_6 + '\x01';
                }
                if (pcVar13[4] != '\x02') goto cf_continue_loop_005D0486;
                if (*(DArrayTy **)(pcVar8 + 0x50) != (DArrayTy *)0x0) {
                  DArrayDestroy(*(DArrayTy **)(pcVar8 + 0x50));
                }
                pcVar14 = pcVar8;
                for (iVar6 = 0x18; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
                  pcVar13 = pcVar13 + 4;
                  pcVar14 = pcVar14 + 4;
                }
                pcVar8[1] = '\0';
                *pcVar8 = '\x01';
                DArrayRemoveAt((DArrayTy *)local_c->field_1F84,local_14);
                local_5 = '\x01';
              }
            }
LAB_005d048e:
            if ((local_5 == '\0') && (local_6 != '\0')) {
              while( true ) {
                pSVar10 = local_c->field_1F84;
                uVar11 = local_10 + 1;
                if (uVar11 < pSVar10->count) {
                  element_1f84_4 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar10, uVar11);
                }
                else {
                  element_1f84_4 = (SettMapMTy_field_1F84Element *)0x0;
                }
                if ((element_1f84_4 == (SettMapMTy_field_1F84Element *)0x0) || (element_1f84_4->field_0000 != '\0')) break;
                if (element_1f84_4->handle != (DArrayTy *)0x0) {
                  DArrayDestroy(element_1f84_4->handle);
                }
                DArrayRemoveAt((DArrayTy *)local_c->field_1F84,uVar11);
              }
            }
          }
          local_10 = local_10 + 1;
          local_18 = (AnonShape_00413AF0_B6B4EE9A *)local_c->field_1F84;
          uVar11 = ((SettMapMTy_field_1F84DArray *)local_18)->count;
        } while (local_10 < uVar11);
      }
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    g_currentExceptionFrame = local_5c.previous;
    iVar9 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x563,0,iVar6,"%s"
                               ,"SettMapMTy::CheckPlList");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\Start\\settmobj.cpp",0x563);
  }
  return;
cf_continue_loop_005D0486:
  local_14 = local_14 + 1;
  if (uVar11 <= local_14) goto LAB_005d048e;
  goto LAB_005d045a;
}



/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::CheckPlList
   
   [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

void __thiscall SettMapMTy::CheckPlList(SettMapMTy *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  SettMapMTy *pSVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  char *pcVar8;
  AnonShape_005D00B0_9E7CC102 *pAVar9;
  char *pcVar10;
  int iVar11;
  DArrayTy *pDVar12;
  undefined4 unaff_ESI;
  uint uVar13;
  uint uVar14;
  void *unaff_EDI;
  dword dVar15;
  char *pcVar16;
  InternalExceptionFrame local_5c;
  AnonShape_00413AF0_B6B4EE9A *local_18;
  uint local_14;
  uint local_10;
  SettMapMTy *local_c;
  char local_6;
  char local_5;
  
  if (this->field_1F84 != (DArrayTy *)0x0) {
    local_5c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_5c;
    local_c = this;
    iVar6 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pSVar3 = local_c;
    if (iVar6 == 0) {
      cVar5 = '\0';
      local_6 = '\0';
      cVar4 = cVar5;
      if (DAT_00808aaa == '\0') {
        pDVar12 = local_c->field_1F84;
        cVar4 = local_6;
        if (pDVar12->count != 0) {
          uVar13 = 0;
          local_6 = cVar5;
          if (pDVar12->count == 0) {
            pvVar7 = (void *)0x0;
            goto LAB_005d01c2;
          }
          do {
            pvVar7 = (void *)(pDVar12->elementSize * uVar13 + (int)pDVar12->data);
LAB_005d01c2:
            if ((pvVar7 != (void *)0x0) && (*(char *)((int)pvVar7 + 4) == '\x03')) {
              if (*(DArrayTy **)((int)pvVar7 + 0x50) != (DArrayTy *)0x0) {
                DArrayDestroy(*(DArrayTy **)((int)pvVar7 + 0x50));
              }
              FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)pSVar3->field_1F84,uVar13);
              uVar13 = uVar13 - 1;
            }
            pDVar12 = pSVar3->field_1F84;
            uVar13 = uVar13 + 1;
            cVar4 = local_6;
          } while (uVar13 < pDVar12->count);
        }
      }
      do {
        local_6 = cVar4;
        pDVar12 = pSVar3->field_1F84;
        bVar2 = false;
        uVar14 = 0;
        local_5 = '\0';
        uVar13 = pDVar12->count;
        if (uVar13 != 0) {
          if (uVar13 == 0) {
            pcVar8 = (char *)0x0;
            goto LAB_005d021c;
          }
          do {
            pcVar8 = (char *)(pDVar12->elementSize * uVar14 + (int)pDVar12->data);
LAB_005d021c:
            if (pcVar8 != (char *)0x0) {
              if (*pcVar8 == '\0') {
                if (pcVar8[4] == '\x01') {
                  if (local_6 == '\0') goto LAB_005d024d;
                  if (*(DArrayTy **)(pcVar8 + 0x50) != (DArrayTy *)0x0) {
                    DArrayDestroy(*(DArrayTy **)(pcVar8 + 0x50));
                  }
                  FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)pSVar3->field_1F84,uVar14);
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
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar13);
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
          uVar14 = 1;
          local_5 = '\0';
          pDVar12 = local_c->field_1F84;
          uVar13 = pDVar12->count;
          if (1 < uVar13) {
            if (uVar13 < 2) {
              pcVar8 = (char *)0x0;
              goto LAB_005d02c3;
            }
            do {
              pcVar8 = (char *)(pDVar12->elementSize * uVar14 + (int)pDVar12->data);
LAB_005d02c3:
              if (uVar14 - 1 < uVar13) {
                pAVar9 = (AnonShape_005D00B0_9E7CC102 *)
                         (pDVar12->elementSize * (uVar14 - 1) + (int)pDVar12->data);
              }
              else {
                pAVar9 = (AnonShape_005D00B0_9E7CC102 *)0x0;
              }
              if (((pcVar8 != (char *)0x0) && (pAVar9 != (AnonShape_005D00B0_9E7CC102 *)0x0)) &&
                 ((*pcVar8 != '\0' &&
                  (((*(char *)pAVar9 == '\0' && (pAVar9->field_0x4 != '\x01')) && (uVar13 < 0x18))))
                 )) {
                thunk_FUN_005d00b0(local_c,pAVar9,uVar14);
                local_5 = '\x01';
                break;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < uVar13);
          }
        } while (local_5 != '\0');
      }
      if ((local_c->field_1E26 != CASE_C) && (local_c->field_1E26 != CASE_10)) {
        pDVar12 = local_c->field_1F84;
        uVar13 = pDVar12->count;
        if (uVar13 != 0) {
          if (uVar13 - 1 < uVar13) {
            pAVar9 = (AnonShape_005D00B0_9E7CC102 *)
                     (pDVar12->elementSize * (uVar13 - 1) + (int)pDVar12->data);
          }
          else {
            pAVar9 = (AnonShape_005D00B0_9E7CC102 *)0x0;
          }
          if (((pAVar9 != (AnonShape_005D00B0_9E7CC102 *)0x0) && (*(char *)pAVar9 == '\0')) &&
             ((pAVar9->field_0x4 != '\x01' && (uVar13 < 0x18)))) {
            thunk_FUN_005d00b0(local_c,pAVar9,uVar13);
          }
        }
      }
      do {
        uVar14 = 1;
        local_5 = '\0';
        pDVar12 = local_c->field_1F84;
        uVar13 = pDVar12->count;
        if (1 < uVar13) {
          if (uVar13 < 2) {
            pcVar8 = (char *)0x0;
            goto LAB_005d0391;
          }
          do {
            pcVar8 = (char *)(pDVar12->elementSize * uVar14 + (int)pDVar12->data);
LAB_005d0391:
            if (uVar14 - 1 < uVar13) {
              pcVar10 = (char *)(pDVar12->elementSize * (uVar14 - 1) + (int)pDVar12->data);
            }
            else {
              pcVar10 = (char *)0x0;
            }
            if (((((pcVar8 != (char *)0x0) && (pcVar10 != (char *)0x0)) && (*pcVar8 == '\0')) &&
                ((pcVar8[4] != '\x01' && (*pcVar10 == '\0')))) && (pcVar10[4] == '\x01')) {
              if (*(DArrayTy **)(pcVar10 + 0x50) != (DArrayTy *)0x0) {
                DArrayDestroy(*(DArrayTy **)(pcVar10 + 0x50));
              }
              FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)local_c->field_1F84,uVar14 - 1);
              local_5 = '\x01';
              break;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar13);
        }
      } while (local_5 != '\0');
      local_5 = '\0';
      local_10 = 0;
      local_18 = (AnonShape_00413AF0_B6B4EE9A *)local_c->field_1F84;
      dVar15 = ((DArrayTy *)local_18)->count;
      if (dVar15 != 0) {
        do {
          if (local_10 < dVar15) {
            pcVar8 = (char *)(((DArrayTy *)local_18)->elementSize * local_10 +
                             (int)((DArrayTy *)local_18)->data);
          }
          else {
            pcVar8 = (char *)0x0;
          }
          if (((pcVar8 != (char *)0x0) && (*pcVar8 != '\0')) && (pcVar8[4] == '\x01')) {
            local_6 = '\0';
            local_14 = local_10 + 1;
            if (local_14 < dVar15) {
LAB_005d045a:
              pcVar10 = (char *)(((DArrayTy *)local_18)->elementSize * local_14 +
                                (int)((DArrayTy *)local_18)->data);
              if (pcVar10 == (char *)0x0) goto cf_continue_loop_005D0486;
              if (*pcVar10 == '\0') {
                if (pcVar10[4] == '\x03') {
                  local_6 = local_6 + '\x01';
                }
                if (pcVar10[4] != '\x02') goto cf_continue_loop_005D0486;
                if (*(DArrayTy **)(pcVar8 + 0x50) != (DArrayTy *)0x0) {
                  DArrayDestroy(*(DArrayTy **)(pcVar8 + 0x50));
                }
                pcVar16 = pcVar8;
                for (iVar6 = 0x18; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *(undefined4 *)pcVar16 = *(undefined4 *)pcVar10;
                  pcVar10 = pcVar10 + 4;
                  pcVar16 = pcVar16 + 4;
                }
                pcVar8[1] = '\0';
                *pcVar8 = '\x01';
                FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)local_c->field_1F84,local_14);
                local_5 = '\x01';
              }
            }
LAB_005d048e:
            if ((local_5 == '\0') && (local_6 != '\0')) {
              while( true ) {
                pDVar12 = local_c->field_1F84;
                uVar13 = local_10 + 1;
                if (uVar13 < pDVar12->count) {
                  pcVar8 = (char *)(pDVar12->elementSize * uVar13 + (int)pDVar12->data);
                }
                else {
                  pcVar8 = (char *)0x0;
                }
                if ((pcVar8 == (char *)0x0) || (*pcVar8 != '\0')) break;
                if (*(DArrayTy **)(pcVar8 + 0x50) != (DArrayTy *)0x0) {
                  DArrayDestroy(*(DArrayTy **)(pcVar8 + 0x50));
                }
                FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)local_c->field_1F84,uVar13);
              }
            }
          }
          local_10 = local_10 + 1;
          local_18 = (AnonShape_00413AF0_B6B4EE9A *)local_c->field_1F84;
          dVar15 = ((DArrayTy *)local_18)->count;
        } while (local_10 < dVar15);
      }
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    g_currentExceptionFrame = local_5c.previous;
    iVar11 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x563,0,iVar6,
                                &DAT_007a4ccc,s_SettMapMTy__CheckPlList_007cd3f4);
    if (iVar11 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar6,0,s_E____titans_Start_settmobj_cpp_007cd258,0x563);
  }
  return;
cf_continue_loop_005D0486:
  local_14 = local_14 + 1;
  if (dVar15 <= local_14) goto LAB_005d048e;
  goto LAB_005d045a;
}


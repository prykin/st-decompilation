
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::CheckPlList */

void __thiscall SettMapMTy::CheckPlList(SettMapMTy *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  SettMapMTy *pSVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  AnonShape_005D00B0_9E7CC102 *pAVar8;
  char *pcVar9;
  int iVar10;
  undefined4 unaff_ESI;
  uint uVar11;
  uint uVar12;
  void *unaff_EDI;
  char *pcVar13;
  InternalExceptionFrame local_5c;
  AnonShape_005D0150_383DDE8F *local_18;
  uint local_14;
  uint local_10;
  SettMapMTy *local_c;
  char local_6;
  char local_5;
  
  if (this->field_1F84 != 0) {
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
        iVar6 = local_c->field_1F84;
        cVar4 = local_6;
        if (*(int *)(iVar6 + 0xc) != 0) {
          uVar11 = 0;
          local_6 = cVar5;
          if (*(int *)(iVar6 + 0xc) == 0) {
            iVar6 = 0;
            goto LAB_005d01c2;
          }
          do {
            iVar6 = *(int *)(iVar6 + 8) * uVar11 + *(int *)(iVar6 + 0x1c);
LAB_005d01c2:
            if ((iVar6 != 0) && (*(char *)(iVar6 + 4) == '\x03')) {
              if (*(byte **)(iVar6 + 0x50) != (byte *)0x0) {
                FUN_006ae110(*(byte **)(iVar6 + 0x50));
              }
              FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)pSVar3->field_1F84,uVar11);
              uVar11 = uVar11 - 1;
            }
            iVar6 = pSVar3->field_1F84;
            uVar11 = uVar11 + 1;
            cVar4 = local_6;
          } while (uVar11 < *(uint *)(iVar6 + 0xc));
        }
      }
      do {
        local_6 = cVar4;
        iVar6 = pSVar3->field_1F84;
        bVar2 = false;
        uVar12 = 0;
        local_5 = '\0';
        uVar11 = *(uint *)(iVar6 + 0xc);
        if (uVar11 != 0) {
          if (uVar11 == 0) {
            pcVar7 = (char *)0x0;
            goto LAB_005d021c;
          }
          do {
            pcVar7 = (char *)(*(int *)(iVar6 + 8) * uVar12 + *(int *)(iVar6 + 0x1c));
LAB_005d021c:
            if (pcVar7 != (char *)0x0) {
              if (*pcVar7 == '\0') {
                if (pcVar7[4] == '\x01') {
                  if (local_6 == '\0') goto LAB_005d024d;
                  if (*(byte **)(pcVar7 + 0x50) != (byte *)0x0) {
                    FUN_006ae110(*(byte **)(pcVar7 + 0x50));
                  }
                  FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)pSVar3->field_1F84,uVar12);
                  bVar2 = true;
                  goto LAB_005d0277;
                }
              }
              else if (((pcVar7[4] == '\x02') && (pSVar3->field_1E26 != CASE_C)) &&
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
          iVar6 = local_c->field_1F84;
          uVar11 = *(uint *)(iVar6 + 0xc);
          if (1 < uVar11) {
            if (uVar11 < 2) {
              pcVar7 = (char *)0x0;
              goto LAB_005d02c3;
            }
            do {
              pcVar7 = (char *)(*(int *)(iVar6 + 8) * uVar12 + *(int *)(iVar6 + 0x1c));
LAB_005d02c3:
              if (uVar12 - 1 < uVar11) {
                pAVar8 = (AnonShape_005D00B0_9E7CC102 *)
                         (*(int *)(iVar6 + 8) * (uVar12 - 1) + *(int *)(iVar6 + 0x1c));
              }
              else {
                pAVar8 = (AnonShape_005D00B0_9E7CC102 *)0x0;
              }
              if (((pcVar7 != (char *)0x0) && (pAVar8 != (AnonShape_005D00B0_9E7CC102 *)0x0)) &&
                 ((*pcVar7 != '\0' &&
                  (((*(char *)pAVar8 == '\0' && (pAVar8->field_0x4 != '\x01')) && (uVar11 < 0x18))))
                 )) {
                thunk_FUN_005d00b0(local_c,pAVar8,uVar12);
                local_5 = '\x01';
                break;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar11);
          }
        } while (local_5 != '\0');
      }
      if ((local_c->field_1E26 != CASE_C) && (local_c->field_1E26 != CASE_10)) {
        iVar6 = local_c->field_1F84;
        uVar11 = *(uint *)(iVar6 + 0xc);
        if (uVar11 != 0) {
          if (uVar11 - 1 < uVar11) {
            pAVar8 = (AnonShape_005D00B0_9E7CC102 *)
                     (*(int *)(iVar6 + 8) * (uVar11 - 1) + *(int *)(iVar6 + 0x1c));
          }
          else {
            pAVar8 = (AnonShape_005D00B0_9E7CC102 *)0x0;
          }
          if (((pAVar8 != (AnonShape_005D00B0_9E7CC102 *)0x0) && (*(char *)pAVar8 == '\0')) &&
             ((pAVar8->field_0x4 != '\x01' && (uVar11 < 0x18)))) {
            thunk_FUN_005d00b0(local_c,pAVar8,uVar11);
          }
        }
      }
      do {
        uVar12 = 1;
        local_5 = '\0';
        iVar6 = local_c->field_1F84;
        uVar11 = *(uint *)(iVar6 + 0xc);
        if (1 < uVar11) {
          if (uVar11 < 2) {
            pcVar7 = (char *)0x0;
            goto LAB_005d0391;
          }
          do {
            pcVar7 = (char *)(*(int *)(iVar6 + 8) * uVar12 + *(int *)(iVar6 + 0x1c));
LAB_005d0391:
            if (uVar12 - 1 < uVar11) {
              pcVar9 = (char *)(*(int *)(iVar6 + 8) * (uVar12 - 1) + *(int *)(iVar6 + 0x1c));
            }
            else {
              pcVar9 = (char *)0x0;
            }
            if (((((pcVar7 != (char *)0x0) && (pcVar9 != (char *)0x0)) && (*pcVar7 == '\0')) &&
                ((pcVar7[4] != '\x01' && (*pcVar9 == '\0')))) && (pcVar9[4] == '\x01')) {
              if (*(byte **)(pcVar9 + 0x50) != (byte *)0x0) {
                FUN_006ae110(*(byte **)(pcVar9 + 0x50));
              }
              FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)local_c->field_1F84,uVar12 - 1);
              local_5 = '\x01';
              break;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar11);
        }
      } while (local_5 != '\0');
      local_5 = '\0';
      local_10 = 0;
      local_18 = (AnonShape_005D0150_383DDE8F *)local_c->field_1F84;
      uVar11 = local_18->field_000C;
      if (uVar11 != 0) {
        do {
          if (local_10 < uVar11) {
            pcVar7 = (char *)(local_18->field_0008 * local_10 + local_18->field_001C);
          }
          else {
            pcVar7 = (char *)0x0;
          }
          if (((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) && (pcVar7[4] == '\x01')) {
            local_6 = '\0';
            local_14 = local_10 + 1;
            if (local_14 < uVar11) {
LAB_005d045a:
              pcVar9 = (char *)(local_18->field_0008 * local_14 + local_18->field_001C);
              if (pcVar9 == (char *)0x0) goto cf_continue_loop_005D0486;
              if (*pcVar9 == '\0') {
                if (pcVar9[4] == '\x03') {
                  local_6 = local_6 + '\x01';
                }
                if (pcVar9[4] != '\x02') goto cf_continue_loop_005D0486;
                if (*(byte **)(pcVar7 + 0x50) != (byte *)0x0) {
                  FUN_006ae110(*(byte **)(pcVar7 + 0x50));
                }
                pcVar13 = pcVar7;
                for (iVar6 = 0x18; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *(undefined4 *)pcVar13 = *(undefined4 *)pcVar9;
                  pcVar9 = pcVar9 + 4;
                  pcVar13 = pcVar13 + 4;
                }
                pcVar7[1] = '\0';
                *pcVar7 = '\x01';
                FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)local_c->field_1F84,local_14);
                local_5 = '\x01';
              }
            }
LAB_005d048e:
            if ((local_5 == '\0') && (local_6 != '\0')) {
              while( true ) {
                iVar6 = local_c->field_1F84;
                uVar11 = local_10 + 1;
                if (uVar11 < *(uint *)(iVar6 + 0xc)) {
                  pcVar7 = (char *)(*(int *)(iVar6 + 8) * uVar11 + *(int *)(iVar6 + 0x1c));
                }
                else {
                  pcVar7 = (char *)0x0;
                }
                if ((pcVar7 == (char *)0x0) || (*pcVar7 != '\0')) break;
                if (*(byte **)(pcVar7 + 0x50) != (byte *)0x0) {
                  FUN_006ae110(*(byte **)(pcVar7 + 0x50));
                }
                FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)local_c->field_1F84,uVar11);
              }
            }
          }
          local_10 = local_10 + 1;
          local_18 = (AnonShape_005D0150_383DDE8F *)local_c->field_1F84;
          uVar11 = local_18->field_000C;
        } while (local_10 < uVar11);
      }
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    g_currentExceptionFrame = local_5c.previous;
    iVar10 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x563,0,iVar6,
                                &DAT_007a4ccc,s_SettMapMTy__CheckPlList_007cd3f4);
    if (iVar10 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar6,0,s_E____titans_Start_settmobj_cpp_007cd258,0x563);
  }
  return;
cf_continue_loop_005D0486:
  local_14 = local_14 + 1;
  if (uVar11 <= local_14) goto LAB_005d048e;
  goto LAB_005d045a;
}


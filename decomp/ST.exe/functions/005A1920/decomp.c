
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::SetBanner */

void __thiscall
FSGSTy::SetBanner(FSGSTy *this,char *param_1,undefined4 param_2,int param_3,uint param_4,
                 undefined4 *param_5)

{
  undefined1 *puVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  DWORD DVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  FSGSTy *pFVar12;
  undefined4 unaff_ESI;
  char *pcVar13;
  void *unaff_EDI;
  undefined4 *puVar14;
  undefined4 local_8e0;
  undefined1 local_860 [41];
  undefined1 auStack_837 [855];
  undefined4 local_4e0;
  undefined1 local_460 [41];
  undefined1 auStack_437 [855];
  InternalExceptionFrame local_e0;
  InternalExceptionFrame local_9c;
  InternalExceptionFrame local_58;
  int local_14;
  int local_10;
  FSGSTy *local_c;
  int *local_8;
  
  if (((param_5 != (undefined4 *)0x0) && (*(int *)(this + 0x1a97) != 0)) &&
     (this[0x65] == (FSGSTy)0x1)) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_c = this;
    iVar4 = __setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pFVar12 = local_c;
    if (iVar4 == 0) {
      if ((param_3 == 1) || (param_3 == 8)) {
        if (*(undefined4 **)(local_c + 0x1a9f) != (undefined4 *)0x0) {
          FUN_006c6fc0(*(undefined4 **)(local_c + 0x1a9f));
        }
        *(undefined4 *)(pFVar12 + 0x1a9f) = 0;
        if (*(int *)(pFVar12 + 0x1a9b) != 0) {
          FUN_006ab060((undefined4 *)(pFVar12 + 0x1a9b));
        }
      }
      if (param_3 == 1) {
        local_8 = (int *)0x0;
        local_9c.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_9c;
        iVar4 = __setjmp3(local_9c.jumpBuffer,0,unaff_EDI,unaff_ESI);
        if (iVar4 == 0) {
          piVar7 = FUN_006c7c50(param_5,param_4);
          pFVar12 = local_c;
          local_8 = piVar7;
          if (piVar7 != (int *)0x0) {
            puVar5 = &local_8e0;
            for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar5 = 0;
              puVar5 = puVar5 + 1;
            }
            FUN_006c7bb0((int)piVar7,(undefined1 *)&local_8e0,&local_14);
            iVar4 = 0x80;
            local_10 = 0x40;
            do {
              puVar1 = (undefined1 *)((int)&local_8e0 + iVar4 + 1);
              *(undefined1 *)(iVar4 + 0x2a + *(int *)(pFVar12 + 0x1a97)) =
                   *(undefined1 *)((int)&local_8e0 + iVar4);
              *(undefined1 *)(iVar4 + 0x29 + *(int *)(pFVar12 + 0x1a97)) = *puVar1;
              iVar9 = iVar4 + 2;
              iVar4 = iVar4 + 4;
              puVar1[*(int *)(pFVar12 + 0x1a97) + (0xa8 - (int)(local_860 + 1))] =
                   *(undefined1 *)((int)&local_8e0 + iVar9);
              local_10 = local_10 + -1;
            } while (local_10 != 0);
            FUN_006b0a20(DAT_0080759c,(int)local_860,0x20,0x40,0);
            piVar7 = local_8;
            FUN_006c7b90(local_8,0x4e,9);
            FUN_006c79a0(piVar7,*(undefined4 **)(pFVar12 + 0x1a97),0);
            FUN_006c7980(piVar7);
          }
          g_currentExceptionFrame = local_9c.previous;
        }
        else {
          g_currentExceptionFrame = local_9c.previous;
          pFVar12 = local_c;
          if (local_8 != (int *)0x0) {
            FUN_006c7980(local_8);
            pFVar12 = local_c;
          }
        }
      }
      else if (param_3 == 8) {
        *(undefined4 *)(pFVar12 + 0x1aa3) = 0;
        local_e0.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_e0;
        iVar4 = __setjmp3(local_e0.jumpBuffer,0,unaff_EDI,unaff_ESI);
        pFVar12 = local_c;
        if (iVar4 == 0) {
          puVar5 = (undefined4 *)FUN_006aac70(param_4);
          pFVar12 = local_c;
          *(undefined4 **)(local_c + 0x1a9b) = puVar5;
          if (puVar5 != (undefined4 *)0x0) {
            for (uVar10 = param_4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *puVar5 = *param_5;
              param_5 = param_5 + 1;
              puVar5 = puVar5 + 1;
            }
            for (uVar10 = param_4 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined1 *)puVar5 = *(undefined1 *)param_5;
              param_5 = (undefined4 *)((int)param_5 + 1);
              puVar5 = (undefined4 *)((int)puVar5 + 1);
            }
            puVar5 = FUN_006c7dc0(*(undefined4 *)(local_c + 0x1a9b));
            *(undefined4 **)(pFVar12 + 0x1a9f) = puVar5;
            if (puVar5 != (undefined4 *)0x0) {
              puVar14 = &local_4e0;
              for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar14 = 0;
                puVar14 = puVar14 + 1;
              }
              FUN_006c7d20((int)puVar5,(int)&local_4e0,&local_10);
              iVar4 = 0x80;
              local_8 = (int *)0x40;
              do {
                puVar1 = (undefined1 *)((int)&local_4e0 + iVar4 + 1);
                *(undefined1 *)(iVar4 + 0x2a + *(int *)(pFVar12 + 0x1a97)) =
                     *(undefined1 *)((int)&local_4e0 + iVar4);
                *(undefined1 *)(iVar4 + 0x29 + *(int *)(pFVar12 + 0x1a97)) = *puVar1;
                iVar9 = iVar4 + 2;
                iVar4 = iVar4 + 4;
                puVar1[*(int *)(pFVar12 + 0x1a97) + (0xa8 - (int)(local_460 + 1))] =
                     *(undefined1 *)((int)&local_4e0 + iVar9);
                local_8 = (int *)((int)local_8 + -1);
              } while (local_8 != (int *)0x0);
              FUN_006b0a20(DAT_0080759c,(int)local_460,0x20,0x40,0);
              FUN_006c7d00(*(undefined4 **)(pFVar12 + 0x1a9f),0x4e,9);
              FUN_006c7070(*(int **)(pFVar12 + 0x1a9f),*(undefined4 **)(pFVar12 + 0x1a97),0);
              iVar4 = FUN_006c7000(*(int *)(pFVar12 + 0x1a9f));
              *(int *)(pFVar12 + 0x1aa3) = iVar4;
              if (iVar4 < 1) {
                FUN_006c6fc0(*(undefined4 **)(pFVar12 + 0x1a9f));
                *(undefined4 *)(pFVar12 + 0x1a9f) = 0;
                FUN_006ab060((undefined4 *)(pFVar12 + 0x1a9b));
                *(undefined4 *)(pFVar12 + 0x1aa3) = 0;
                g_currentExceptionFrame = local_e0.previous;
              }
              else {
                DVar6 = timeGetTime();
                *(DWORD *)(pFVar12 + 0x1aa7) = DVar6;
                g_currentExceptionFrame = local_e0.previous;
              }
              goto LAB_005a1cfd;
            }
            FUN_006ab060((undefined4 *)(pFVar12 + 0x1a9b));
          }
          g_currentExceptionFrame = local_e0.previous;
        }
        else {
          g_currentExceptionFrame = local_e0.previous;
          if (*(undefined4 **)(local_c + 0x1a9f) != (undefined4 *)0x0) {
            FUN_006c6fc0(*(undefined4 **)(local_c + 0x1a9f));
          }
          *(undefined4 *)(pFVar12 + 0x1a9f) = 0;
          if (*(int *)(pFVar12 + 0x1a9b) != 0) {
            FUN_006ab060((undefined4 *)(pFVar12 + 0x1a9b));
          }
          *(undefined4 *)(pFVar12 + 0x1aa3) = 0;
        }
      }
LAB_005a1cfd:
      FUN_006b35d0(DAT_008075a8,*(uint *)(pFVar12 + 0x1a8f));
      if ((param_3 == 1) || (param_3 == 8)) {
        if (*(int *)(pFVar12 + 0x1aab) != 0) {
          FUN_006ab060((undefined4 *)(pFVar12 + 0x1aab));
        }
        uVar10 = 0xffffffff;
        pcVar8 = param_1;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar2 != '\0');
        pcVar8 = (char *)FUN_006aac70(~uVar10);
        *(char **)(pFVar12 + 0x1aab) = pcVar8;
        if (pcVar8 != (char *)0x0) {
          uVar10 = 0xffffffff;
          do {
            pcVar13 = param_1;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar13 = param_1 + 1;
            cVar2 = *param_1;
            param_1 = pcVar13;
          } while (cVar2 != '\0');
          uVar10 = ~uVar10;
          pcVar13 = pcVar13 + -uVar10;
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar8 = *(undefined4 *)pcVar13;
            pcVar13 = pcVar13 + 4;
            pcVar8 = pcVar8 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar8 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            pcVar8 = pcVar8 + 1;
          }
        }
        *(undefined4 *)(pFVar12 + 0x1aaf) = param_2;
      }
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x9b5,0,iVar4,&DAT_007a4ccc
                               ,s_FSGSTy__SetBanner_007cc45c);
    if (iVar9 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x9b5);
  }
  return;
}


#include "../../pseudocode_runtime.h"


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
  AnonShape_006C7D20_41F6C243 *pAVar6;
  DWORD DVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  FSGSTy *pFVar13;
  char *pcVar14;
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

  if (((param_5 != (undefined4 *)0x0) && (this->field_1A97 != (AnonPointee_FSGSTy_1A97 *)0x0)) &&
     (this->field_0065 == 1)) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_c = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
    pFVar13 = local_c;
    if (iVar4 == 0) {
      if ((param_3 == 1) || (param_3 == 8)) {
        if ((AnonShape_006C6FC0_B2C34C14 *)local_c->field_1A9F != (AnonShape_006C6FC0_B2C34C14 *)0x0
           ) {
          FUN_006c6fc0((AnonShape_006C6FC0_B2C34C14 *)local_c->field_1A9F);
        }
        pFVar13->field_1A9F = 0;
        if (pFVar13->field_1A9B != 0) {
          FreeAndNull((void **)&pFVar13->field_1A9B);
        }
      }
      if (param_3 == 1) {
        local_8 = (int *)0x0;
        local_9c.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_9c;
        iVar4 = Library::MSVCRT::__setjmp3(local_9c.jumpBuffer,0);
        if (iVar4 == 0) {
          piVar8 = Library::DKW::GPC::FUN_006c7c50(param_5,param_4);
          pFVar13 = local_c;
          local_8 = piVar8;
          if (piVar8 != (int *)0x0) {
            puVar5 = &local_8e0;
            for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar5 = 0;
              puVar5 = puVar5 + 1;
            }
            FUN_006c7bb0(piVar8,(undefined1 *)&local_8e0,&local_14);
            iVar4 = 0x80;
            local_10 = 0x40;
            do {
              puVar1 = (undefined1 *)((int)&local_8e0 + iVar4 + 1);
              (&pFVar13->field_1A97[1].field_0x12)[iVar4] = *(undefined1 *)((int)&local_8e0 + iVar4)
              ;
              (&pFVar13->field_1A97[1].field_0x11)[iVar4] = *puVar1;
              iVar10 = iVar4 + 2;
              iVar4 = iVar4 + 4;
              (puVar1 + (0xa8 - (int)(local_860 + 1)))[(int)pFVar13->field_1A97] =
                   *(undefined1 *)((int)&local_8e0 + iVar10);
              local_10 = local_10 + -1;
            } while (local_10 != 0);
            FUN_006b0a20(DAT_0080759c,(int)local_860,0x20,0x40,0);
            piVar8 = local_8;
            FUN_006c7b90(local_8,0x4e,9);
            Library::DKW::GPC::FUN_006c79a0(piVar8,(undefined4 *)pFVar13->field_1A97,0);
            FUN_006c7980(piVar8);
          }
          g_currentExceptionFrame = local_9c.previous;
        }
        else {
          g_currentExceptionFrame = local_9c.previous;
          pFVar13 = local_c;
          if (local_8 != (int *)0x0) {
            FUN_006c7980(local_8);
            pFVar13 = local_c;
          }
        }
      }
      else if (param_3 == 8) {
        pFVar13->field_1AA3 = 0;
        local_e0.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_e0;
        iVar4 = Library::MSVCRT::__setjmp3(local_e0.jumpBuffer,0);
        pFVar13 = local_c;
        if (iVar4 == 0) {
          puVar5 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(param_4);
          pFVar13 = local_c;
          local_c->field_1A9B = puVar5;
          if (puVar5 != (undefined4 *)0x0) {
            for (uVar11 = param_4 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *puVar5 = *param_5;
              param_5 = param_5 + 1;
              puVar5 = puVar5 + 1;
            }
            for (uVar11 = param_4 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
              *(undefined1 *)puVar5 = *(undefined1 *)param_5;
              param_5 = (undefined4 *)((int)param_5 + 1);
              puVar5 = (undefined4 *)((int)puVar5 + 1);
            }
            pAVar6 = (AnonShape_006C7D20_41F6C243 *)
                     Library::DKW::GPC::FUN_006c7dc0(local_c->field_1A9B);
            pFVar13->field_1A9F = pAVar6;
            if (pAVar6 != (AnonShape_006C7D20_41F6C243 *)0x0) {
              puVar5 = &local_4e0;
              for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar5 = 0;
                puVar5 = puVar5 + 1;
              }
              FUN_006c7d20(pAVar6,(int)&local_4e0,&local_10);
              iVar4 = 0x80;
              local_8 = (int *)0x40;
              do {
                puVar1 = (undefined1 *)((int)&local_4e0 + iVar4 + 1);
                (&pFVar13->field_1A97[1].field_0x12)[iVar4] =
                     *(undefined1 *)((int)&local_4e0 + iVar4);
                (&pFVar13->field_1A97[1].field_0x11)[iVar4] = *puVar1;
                iVar10 = iVar4 + 2;
                iVar4 = iVar4 + 4;
                (puVar1 + (0xa8 - (int)(local_460 + 1)))[(int)pFVar13->field_1A97] =
                     *(undefined1 *)((int)&local_4e0 + iVar10);
                local_8 = (int *)((int)local_8 + -1);
              } while (local_8 != (int *)0x0);
              FUN_006b0a20(DAT_0080759c,(int)local_460,0x20,0x40,0);
              FUN_006c7d00((undefined4 *)pFVar13->field_1A9F,0x4e,9);
              Library::DKW::GPC::FUN_006c7070
                        ((int *)pFVar13->field_1A9F,(undefined4 *)pFVar13->field_1A97,0);
              iVar4 = FUN_006c7000((AnonShape_006C7000_4A8D1200 *)pFVar13->field_1A9F);
              pFVar13->field_1AA3 = iVar4;
              if (iVar4 < 1) {
                FUN_006c6fc0((AnonShape_006C6FC0_B2C34C14 *)pFVar13->field_1A9F);
                pFVar13->field_1A9F = 0;
                FreeAndNull((void **)&pFVar13->field_1A9B);
                pFVar13->field_1AA3 = 0;
                g_currentExceptionFrame = local_e0.previous;
              }
              else {
                DVar7 = timeGetTime();
                pFVar13->field_1AA7 = DVar7;
                g_currentExceptionFrame = local_e0.previous;
              }
              goto LAB_005a1cfd;
            }
            FreeAndNull((void **)&pFVar13->field_1A9B);
          }
          g_currentExceptionFrame = local_e0.previous;
        }
        else {
          g_currentExceptionFrame = local_e0.previous;
          if ((AnonShape_006C6FC0_B2C34C14 *)local_c->field_1A9F !=
              (AnonShape_006C6FC0_B2C34C14 *)0x0) {
            FUN_006c6fc0((AnonShape_006C6FC0_B2C34C14 *)local_c->field_1A9F);
          }
          pFVar13->field_1A9F = 0;
          if (pFVar13->field_1A9B != 0) {
            FreeAndNull((void **)&pFVar13->field_1A9B);
          }
          pFVar13->field_1AA3 = 0;
        }
      }
LAB_005a1cfd:
      FUN_006b35d0(DAT_008075a8,pFVar13->field_1A8F);
      if ((param_3 == 1) || (param_3 == 8)) {
        if (pFVar13->field_1AAB != (LPCSTR)0x0) {
          FreeAndNull(&pFVar13->field_1AAB);
        }
        uVar11 = 0xffffffff;
        pcVar9 = param_1;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        pcVar9 = (char *)Library::DKW::LIB::FUN_006aac70(~uVar11);
        pFVar13->field_1AAB = pcVar9;
        if (pcVar9 != (char *)0x0) {
          uVar11 = 0xffffffff;
          do {
            pcVar14 = param_1;
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1;
            pcVar14 = param_1 + 1;
            cVar2 = *param_1;
            param_1 = pcVar14;
          } while (cVar2 != '\0');
          uVar11 = ~uVar11;
          pcVar14 = pcVar14 + -uVar11;
          for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar9 = *(undefined4 *)pcVar14;
            pcVar14 = pcVar14 + 4;
            pcVar9 = pcVar9 + 4;
          }
          for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *pcVar9 = *pcVar14;
            pcVar14 = pcVar14 + 1;
            pcVar9 = pcVar9 + 1;
          }
        }
        pFVar13->field_1AAF = param_2;
      }
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    iVar10 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x9b5,0,iVar4,
                                "%s","FSGSTy::SetBanner");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x9b5);
  }
  return;
}


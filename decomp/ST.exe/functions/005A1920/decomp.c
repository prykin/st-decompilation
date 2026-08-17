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
  int iVar5;
  int local_EAX_72;
  int local_EAX_205;
  byte *puVar6;
  AnonShape_006C7D20_41F6C243 *pAVar7;
  int local_EAX_485;
  DWORD DVar8;
  int iVar4;
  int *piVar9;
  char *pcVar10;
  int iVar10;
  uint uVar11;
  int iVar12;
  FSGSTy *pFVar14;
  char *pcVar15;
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
  char *pcVar15_mg0;
  char *pcVar10_mg0;

  if (((param_5 != nullptr) && (this->field_1A97 != nullptr)) &&
     (this->field_0065 == CASE_1)) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_c = this;
    local_EAX_72 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
    pFVar14 = local_c;
    if (local_EAX_72 == 0) {
      if ((param_3 == 1) || (param_3 == 8)) {
        if (local_c->field_1A9F != nullptr) {
          FUN_006c6fc0(local_c->field_1A9F);
        }
        pFVar14->field_1A9F = nullptr;
        if (pFVar14->field_1A9B != nullptr) {
          FreeAndNull(&pFVar14->field_1A9B);
        }
      }
      if (param_3 == 1) {
        local_8 = nullptr;
        local_9c.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_9c;
        iVar4 = Library::MSVCRT::__setjmp3(local_9c.jumpBuffer,0);
        if (iVar4 == 0) {
          piVar9 = Library::DKW::GPC::FUN_006c7c50(param_5,param_4);
          pFVar14 = local_c;
          local_8 = piVar9;
          if (piVar9 != nullptr) {
            memset(&local_8e0, 0, 0x400); /* compiler bulk-zero initialization */
            FUN_006c7bb0(piVar9,(undefined1 *)&local_8e0,&local_14);
            iVar12 = 0x80;
            local_10 = 0x40;
            do {
              puVar1 = (undefined1 *)((int)&local_8e0 + iVar12 + 1);
              (&pFVar14->field_1A97[1].field_0x12)[iVar12] =
                   *(undefined1 *)((int)&local_8e0 + iVar12);
              (&pFVar14->field_1A97[1].field_0x11)[iVar12] = *puVar1;
              iVar5 = iVar12 + 2;
              iVar12 = iVar12 + 4;
              (puVar1 + (0xa8 - (int)(local_860 + 1)))[(int)pFVar14->field_1A97] =
                   *(undefined1 *)((int)&local_8e0 + iVar5);
              local_10 = local_10 + -1;
            } while (local_10 != 0);
            FUN_006b0a20((AnonShape_GLOBAL_0080759C_9638EF10 *)g_dDXContext_0080759C,(int)local_860,
                         0x20,0x40,0);
            piVar9 = local_8;
            FUN_006c7b90(local_8,0x4e,9);
            Library::DKW::GPC::FUN_006c79a0(piVar9,(undefined4 *)pFVar14->field_1A97,0);
            FUN_006c7980(piVar9);
          }
          g_currentExceptionFrame = local_9c.previous;
        }
        else {
          g_currentExceptionFrame = local_9c.previous;
          pFVar14 = local_c;
          if (local_8 != nullptr) {
            FUN_006c7980(local_8);
            pFVar14 = local_c;
          }
        }
      }
      else if (param_3 == 8) {
        pFVar14->field_1AA3 = 0;
        local_e0.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_e0;
        local_EAX_205 = Library::MSVCRT::__setjmp3(local_e0.jumpBuffer,0);
        pFVar14 = local_c;
        if (local_EAX_205 == 0) {
          puVar6 = (byte *)(Library::DKW::LIB::MemAlloc(param_4));
          pFVar14 = local_c;
          local_c->field_1A9B = puVar6;
          if (puVar6 != nullptr) {
            memmove(puVar6, param_5, param_4); /* compiler REP MOVS byte copy */
            pAVar7 = (AnonShape_006C7D20_41F6C243 *)
                     Library::DKW::GPC::FUN_006c7dc0(local_c->field_1A9B);
            pFVar14->field_1A9F = pAVar7;
            if (pAVar7 != nullptr) {
              memset(&local_4e0, 0, 0x400); /* compiler bulk-zero initialization */
              FUN_006c7d20(pAVar7,(int)&local_4e0,&local_10);
              iVar12 = 0x80;
              local_8 = (int *)0x40;
              do {
                puVar1 = (undefined1 *)((int)&local_4e0 + iVar12 + 1);
                (&pFVar14->field_1A97[1].field_0x12)[iVar12] =
                     *(undefined1 *)((int)&local_4e0 + iVar12);
                (&pFVar14->field_1A97[1].field_0x11)[iVar12] = *puVar1;
                iVar5 = iVar12 + 2;
                iVar12 = iVar12 + 4;
                (puVar1 + (0xa8 - (int)(local_460 + 1)))[(int)pFVar14->field_1A97] =
                     *(undefined1 *)((int)&local_4e0 + iVar5);
                local_8 = (int *)((int)local_8 + -1);
              } while (local_8 != nullptr);
              FUN_006b0a20((AnonShape_GLOBAL_0080759C_9638EF10 *)g_dDXContext_0080759C,
                           (int)local_460,0x20,0x40,0);
              FUN_006c7d00(pFVar14->field_1A9F,0x4e,9);
              Library::DKW::GPC::FUN_006c7070
                        (pFVar14->field_1A9F,(undefined4 *)pFVar14->field_1A97,0);
              local_EAX_485 = FUN_006c7000(pFVar14->field_1A9F);
              pFVar14->field_1AA3 = local_EAX_485;
              if (local_EAX_485 < 1) {
                FUN_006c6fc0(pFVar14->field_1A9F);
                pFVar14->field_1A9F = nullptr;
                FreeAndNull(&pFVar14->field_1A9B);
                pFVar14->field_1AA3 = 0;
                g_currentExceptionFrame = local_e0.previous;
              }
              else {
                /* ST_CALLSITE[005A1B14]: CALL dword ptr [0x0085bedc] */
                DVar8 = timeGetTime();
                pFVar14->field_1AA7 = DVar8;
                g_currentExceptionFrame = local_e0.previous;
              }
              goto LAB_005a1cfd;
            }
            FreeAndNull(&pFVar14->field_1A9B);
          }
          g_currentExceptionFrame = local_e0.previous;
        }
        else {
          g_currentExceptionFrame = local_e0.previous;
          if (local_c->field_1A9F != nullptr) {
            FUN_006c6fc0(local_c->field_1A9F);
          }
          pFVar14->field_1A9F = nullptr;
          if (pFVar14->field_1A9B != nullptr) {
            FreeAndNull(&pFVar14->field_1A9B);
          }
          pFVar14->field_1AA3 = 0;
        }
      }
LAB_005a1cfd:
      FUN_006b35d0((int *)g_ddxContext_008075A8,pFVar14->field_1A8F);
      if ((param_3 == 1) || (param_3 == 8)) {
        if (pFVar14->field_1AAB != (LPCSTR)0x0) {
          FreeAndNull(&pFVar14->field_1AAB);
        }
        uVar11 = 0xffffffff;
        pcVar10_mg0 = param_1;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          cVar2 = *pcVar10_mg0;
          pcVar10_mg0 = pcVar10_mg0 + 1;
        } while (cVar2 != '\0');
        pcVar10 = Library::DKW::LIB::MemAlloc(~uVar11);
        pFVar14->field_1AAB = pcVar10;
        if (pcVar10 != nullptr) {
          uVar11 = 0xffffffff;
          do {
            pcVar15_mg0 = param_1;
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1;
            pcVar15_mg0 = param_1 + 1;
            cVar2 = *param_1;
            param_1 = pcVar15_mg0;
          } while (cVar2 != '\0');
          uVar11 = ~uVar11;
          pcVar15 = pcVar15_mg0 + -uVar11;
          memmove(pcVar10, pcVar15, uVar11); /* compiler REP MOVS byte copy */
        }
        pFVar14->field_1AAF = param_2;
      }
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    iVar10 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x9b5,0,local_EAX_72,
                                "%s","FSGSTy::SetBanner");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_72,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x9b5);
  }
  return;
}


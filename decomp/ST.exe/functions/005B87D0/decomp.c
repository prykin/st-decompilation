#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::SetPanel */

undefined4 __thiscall
MMsgTy::SetPanel(MMsgTy *this,UINT param_1,int param_2,int param_3,UINT param_4)

{
  StartSystemTy *pSVar1;
  code *pcVar2;
  MMObjTy *this_00;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  UINT *pUVar11;
  UINT *pUVar12;
  int iVar14;
  int iVar15;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint local_478 [256];
  InternalExceptionFrame local_78;
  int local_34 [8];
  MMObjTy *local_14;
  UINT *local_10;
  uint local_c;
  uint local_8;

  local_c = local_c & 0xffffff00;
  if ((this->field_0065 == '\x02') && (this->field_1CA9 == '\0')) {
    local_78.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_78;
    local_14 = (MMObjTy *)this;
    iVar4 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0);
    this_00 = local_14;
    if (iVar4 == 0) {
      MMObjTy::CloseButtons(local_14);
      HidePanel((MMsgTy *)this_00,0,0,1);
      if (param_1 == 0) {
        *(undefined4 *)&this_00[0x20].field_0x70 = 0;
      }
      else {
        *(UINT *)&this_00[0x20].field_0x70 = param_1;
        if (param_3 == 0) {
          uVar22 = 0xffffffff;
          local_8 = *(uint *)&this_00[0x21].field_0x45;
          uVar21 = 7;
          iVar18 = -1;
          iVar15 = -1;
          iVar14 = 1;
          uVar10 = 0xffffffff;
          cVar16 = CASE_FFFFFFFE;
          iVar9 = 0x39;
          iVar4 = 0x158;
          puVar8 = (uint *)LoadResourceString(param_1,HINSTANCE_00807618);
          puVar7 = ccFntTy::CreateTypeSSpr
                             (PTR_0081176c->field_0030,puVar8,iVar4,iVar9,cVar16,uVar10,iVar14,
                              iVar15,iVar18);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(local_8 + 8))(puVar7,uVar21,uVar22);
          *(undefined4 *)&this_00[0x21].field_0x4d = 0;
        }
        else {
          pcVar5 = LoadResourceString(param_4,HINSTANCE_00807618);
          pcVar6 = LoadResourceString(param_1,HINSTANCE_00807618);
          wsprintfA((LPSTR)local_478,"%s\n(%s=%li)",pcVar6,pcVar5,param_3);
          iVar4 = *(int *)&this_00[0x21].field_0x45;
          uVar22 = 0xffffffff;
          uVar21 = 7;
          puVar7 = ccFntTy::CreateTypeSSpr
                             (PTR_0081176c->field_0030,local_478,0x158,0x39,CASE_FFFFFFFE,0xffffffff
                              ,1,-1,-1);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(iVar4 + 8))(puVar7,uVar21,uVar22);
          *(undefined4 *)&this_00[0x21].field_0x4d = 0;
        }
      }
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_0x9a != '\0') {
        do {
          uVar10 = local_8 & 0xff;
          local_10 = (UINT *)(uVar10 * 0x27 + param_2);
          if (*local_10 == 0) {
            puVar7 = (undefined4 *)(uVar10 * 0x1fb + 0xbc + (int)this_00);
            memset(puVar7, 0, 0x26); /* compiler bulk-zero initialization */
            puVar7 = (undefined4 *)((byte *)puVar7 + 0x24);
            *(undefined1 *)((int)puVar7 + 2) = 0;
          }
          else {
            uVar22 = 0xffffffff;
            uVar21 = 7;
            iVar20 = -1;
            iVar19 = -1;
            iVar18 = 1;
            uVar17 = 0xffffffff;
            cVar16 = CASE_FFFFFFFE;
            iVar15 = 0x1e;
            iVar14 = 0x7d;
            iVar4 = *(int *)((int)this_00 + uVar10 * 0x1fb + 0x174);
            iVar9 = uVar10 * 0x1fb;
            puVar8 = (uint *)LoadResourceString(*local_10,HINSTANCE_00807618);
            puVar7 = ccFntTy::CreateTypeSSpr
                               (PTR_0081176c->field_0030,puVar8,iVar14,iVar15,cVar16,uVar17,iVar18,
                                iVar19,iVar20);
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(iVar4 + 8))(puVar7,uVar21,uVar22);
            pUVar12 = (UINT *)((int)this_00 + iVar9 + 0xbc);
            if ((*local_10 == *(UINT *)((int)this_00 + iVar9 + 0xbc)) && ((char)local_10[1] == '\0')
               ) {
              *(int *)((int)this_00 + iVar9 + 0x17c) = *(int *)((int)this_00 + iVar9 + 0x180) + -3;
              pUVar11 = local_10;
              for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
                *pUVar12 = *pUVar11;
                pUVar11 = pUVar11 + 1;
                pUVar12 = pUVar12 + 1;
              }
              *(short *)pUVar12 = (short)*pUVar11;
              *(undefined1 *)((int)pUVar12 + 2) = *(undefined1 *)((int)pUVar11 + 2);
            }
            else {
              *(undefined4 *)((int)this_00 + iVar9 + 0x17c) = 0;
              pUVar11 = local_10;
              for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
                *pUVar12 = *pUVar11;
                pUVar11 = pUVar11 + 1;
                pUVar12 = pUVar12 + 1;
              }
              *(short *)pUVar12 = (short)*pUVar11;
              *(undefined1 *)((int)pUVar12 + 2) = *(undefined1 *)((int)pUVar11 + 2);
            }
          }
          bVar3 = (char)local_8 + 1;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_8 = CONCAT31(local_8._1_3_,bVar3);
        } while (bVar3 < (byte)this_00->field_0x9a);
      }
      bVar3 = 0;
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_0x9a != '\0') {
        do {
          uVar10 = local_8 & 0xff;
          *(undefined4 *)((int)this_00 + uVar10 * 0x1fb + 0x127) =
               *(undefined4 *)&this_00->field_0x61;
          *(uint *)((int)this_00 + uVar10 * 0x1fb + 0x123) = ((local_c & 0xff) + 1) * 100;
          if (*(int *)((int)this_00 + uVar10 * 0x1fb + 0xbc) != 0) {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_c = CONCAT31(local_c._1_3_,(char)local_c + '\x01');
          }
          bVar3 = bVar3 + 1;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_8 = CONCAT31(local_8._1_3_,bVar3);
        } while (bVar3 < (byte)this_00->field_0x9a);
      }
      memset(&this_00[0x20].field_0x22, 0, 0x1a); /* compiler bulk-zero initialization */
      *(undefined4 *)&this_00[0x20].field_0x3c = 0x1010101;
      *(undefined4 *)&this_00[0x20].field_0x40 = 0x1010101;
      *(undefined4 *)&this_00[0x20].field_0x44 = 0x1010101;
      this_00[0x20].field_0x48 = 1;
      this_00->field_0x65 = 3;
      thunk_FUN_005b6730(this_00,5,'\0',-1);
      iVar4 = *(int *)&this_00[0x20].field_0x4b;
      if (iVar4 != 0) {
        pSVar1 = this_00->field_000C;
        memset(local_34, 0, 0x20); /* compiler bulk-zero initialization */
        local_34[3] = 2;
        local_34[4] = 0x6940;
        local_34[2] = iVar4;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)pSVar1->vtable->field_0018)(local_34);
      }
      g_currentExceptionFrame = local_78.previous;
      return 1;
    }
    g_currentExceptionFrame = local_78.previous;
    iVar9 = ReportDebugMessage("E:\\__titans\\Start\\mmsg_obj.cpp",0x181,0,iVar4,"%s"
                               ,"MMsgTy::SetPanel");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\mmsg_obj.cpp",0x181);
  }
  return 0;
}


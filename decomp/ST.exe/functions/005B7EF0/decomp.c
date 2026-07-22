#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::SetMessage */

undefined4 __thiscall
MMsgTy::SetMessage(MMsgTy *this,UINT param_1,char param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,int param_6,UINT param_7)

{
  code *pcVar1;
  MMsgTy *this_00;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int iVar8;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint local_478 [256];
  InternalExceptionFrame local_78;
  int local_34 [8];
  MMsgTy *local_14;
  int local_10;
  uint local_c;
  uint local_8;

  local_c = local_c & 0xffffff00;
  if ((param_1 != 0) && (this->field_1CA9 == '\0')) {
    local_78.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_78;
    local_14 = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0);
    this_00 = local_14;
    if (iVar3 == 0) {
      iVar3 = local_14->field_1CAB;
      if (iVar3 != 0) {
        memset(local_34, 0, 0x20); /* compiler bulk-zero initialization */
        local_34[3] = 2;
        local_34[4] = 0x6940;
        local_34[2] = iVar3;
        (*this_00->field_000C->vtable->vfunc_18)(local_34);
      }
      this_00->field_1CA9 = 1;
      puVar6 = &this_00->field_1CD0;
      puVar11 = (undefined4 *)&this_00->field_0x1a60;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar11 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar11 = puVar11 + 1;
      }
      *(undefined2 *)puVar11 = *(undefined2 *)puVar6;
      *(undefined1 *)((int)puVar11 + 2) = *(undefined1 *)((int)puVar6 + 2);
      this_00->field_1A5F = this_00->field_0065;
      this_00->field_002D = 0x21;
      memset(&this_00->field_0x1c82, 0, 0x1a); /* compiler bulk-zero initialization */
      iVar3 = 0;
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_009A != 0) {
        do {
          uVar10 = local_8 & 0xff;
          if ((&this_00->field_0066)[uVar10] != 0) {
            FUN_006e6080(this_00,2,(&this_00->field_0066)[uVar10],(undefined4 *)&this_00->field_0x1d
                        );
            *(ushort *)(&this_00->field_0x1c82 + uVar10 * 2) =
                 (-(ushort)(this_00->field_0031 != 0) & 2) - 1;
          }
          puVar6 = (undefined4 *)(&this_00->field_0xbc + uVar10 * 0x1fb);
          puVar11 = (undefined4 *)(&this_00->field_0x1a87 + uVar10 * 0x27);
          for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar11 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar11 = puVar11 + 1;
          }
          *(undefined2 *)puVar11 = *(undefined2 *)puVar6;
          *(undefined1 *)((int)puVar11 + 2) = *(undefined1 *)((int)puVar6 + 2);
          bVar2 = (char)local_8 + 1;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_8 = CONCAT31(local_8._1_3_,bVar2);
        } while (bVar2 < this_00->field_009A);
      }
      this_00->field_1CD0 = param_1;
      if (param_6 == 0) {
        uVar18 = 0xffffffff;
        local_10 = this_00->field_1D88;
        uVar17 = 7;
        iVar15 = -1;
        iVar14 = -1;
        iVar12 = 1;
        uVar10 = 0xffffffff;
        cVar13 = CASE_FFFFFFFE;
        iVar8 = 0x39;
        iVar3 = 0x158;
        puVar7 = (uint *)LoadResourceString(param_1,g_module_00807618);
        puVar6 = ccFntTy::CreateTypeSSpr
                           (g_startSystem_0081176C->field_0030,puVar7,iVar3,iVar8,cVar13,uVar10,
                            iVar12,iVar14,iVar15);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(local_10 + 8))(puVar6,uVar17,uVar18);
      }
      else {
        pcVar4 = LoadResourceString(param_7,g_module_00807618);
        pcVar5 = LoadResourceString(param_1,g_module_00807618);
        wsprintfA((LPSTR)local_478,"%s\n(%s=%li)",pcVar5,pcVar4,param_6);
        iVar3 = this_00->field_1D88;
        uVar18 = 0xffffffff;
        uVar17 = 7;
        puVar6 = ccFntTy::CreateTypeSSpr
                           (g_startSystem_0081176C->field_0030,local_478,0x158,0x39,CASE_FFFFFFFE,
                            0xffffffff,1,-1,-1);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(iVar3 + 8))(puVar6,uVar17,uVar18);
      }
      bVar2 = 0;
      this_00->field_1D90 = 0;
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_009A != 0) {
        do {
          uVar10 = local_8 & 0xff;
          bVar2 = bVar2 + 1;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_8 = CONCAT31(local_8._1_3_,bVar2);
          *(undefined4 *)(&this_00->field_0xbc + uVar10 * 0x1fb) = 0;
          (&this_00->field_0xe1)[uVar10 * 0x1fb] = 1;
        } while (bVar2 < this_00->field_009A);
      }
      if (param_2 == '\0') {
        this_00->field_04B2 = 0x24b8;
        this_00->field_04D7 = 1;
        iVar3 = 8;
        if (param_3 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)&this_00->field_0x4b7;
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
        }
        else {
          puVar6 = (undefined4 *)&this_00->field_0x4b7;
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *param_3;
            param_3 = param_3 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        uVar18 = 0xffffffff;
        uVar17 = 7;
        iVar16 = -1;
        iVar3 = this_00->field_056A;
        iVar15 = -1;
        iVar14 = 1;
        uVar10 = 0xffffffff;
        cVar13 = CASE_FFFFFFFE;
        iVar12 = 0x1e;
        iVar8 = 0x7d;
        puVar7 = (uint *)LoadResourceString(this_00->field_04B2,g_module_00807618);
        puVar6 = ccFntTy::CreateTypeSSpr
                           (g_startSystem_0081176C->field_0030,puVar7,iVar8,iVar12,cVar13,uVar10,
                            iVar14,iVar15,iVar16);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(iVar3 + 8))(puVar6,uVar17,uVar18);
        this_00->field_0572 = 0;
      }
      else {
        if (param_2 == '\x01') {
          this_00->field_04B2 = 0x24b9;
          this_00->field_04D7 = 1;
          iVar3 = 8;
          if (param_3 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)&this_00->field_0x4b7;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
          }
          else {
            puVar6 = (undefined4 *)&this_00->field_0x4b7;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar6 = *param_3;
              param_3 = param_3 + 1;
              puVar6 = puVar6 + 1;
            }
          }
          uVar18 = 0xffffffff;
          uVar17 = 7;
          iVar16 = -1;
          iVar3 = this_00->field_056A;
          iVar15 = -1;
          iVar14 = 1;
          uVar10 = 0xffffffff;
          cVar13 = CASE_FFFFFFFE;
          iVar12 = 0x1e;
          iVar8 = 0x7d;
          puVar7 = (uint *)LoadResourceString(this_00->field_04B2,g_module_00807618);
          puVar6 = ccFntTy::CreateTypeSSpr
                             (g_startSystem_0081176C->field_0030,puVar7,iVar8,iVar12,cVar13,uVar10,
                              iVar14,iVar15,iVar16);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(iVar3 + 8))(puVar6,uVar17,uVar18);
          this_00->field_0572 = 0;
          this_00->field_02B7 = 0x24ba;
          this_00->field_02DC = 1;
          param_5 = param_4;
        }
        else {
          if (param_2 != '\x02') goto LAB_005b8415;
          this_00->field_06AD = 0x24b9;
          this_00->field_06D2 = 1;
          iVar3 = 8;
          if (param_3 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)&this_00->field_0x6b2;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
          }
          else {
            puVar6 = (undefined4 *)&this_00->field_0x6b2;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar6 = *param_3;
              param_3 = param_3 + 1;
              puVar6 = puVar6 + 1;
            }
          }
          uVar18 = 0xffffffff;
          uVar17 = 7;
          iVar16 = -1;
          iVar3 = this_00->field_0765;
          iVar15 = -1;
          iVar14 = 1;
          uVar10 = 0xffffffff;
          cVar13 = CASE_FFFFFFFE;
          iVar12 = 0x1e;
          iVar8 = 0x7d;
          puVar7 = (uint *)LoadResourceString(this_00->field_06AD,g_module_00807618);
          puVar6 = ccFntTy::CreateTypeSSpr
                             (g_startSystem_0081176C->field_0030,puVar7,iVar8,iVar12,cVar13,uVar10,
                              iVar14,iVar15,iVar16);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(iVar3 + 8))(puVar6,uVar17,uVar18);
          this_00->field_076D = 0;
          this_00->field_04B2 = 0x24ba;
          this_00->field_04D7 = 1;
          iVar3 = 8;
          if (param_4 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)&this_00->field_0x4b7;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
          }
          else {
            puVar6 = (undefined4 *)&this_00->field_0x4b7;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar6 = *param_4;
              param_4 = param_4 + 1;
              puVar6 = puVar6 + 1;
            }
          }
          uVar18 = 0xffffffff;
          uVar17 = 7;
          iVar16 = -1;
          iVar3 = this_00->field_056A;
          iVar15 = -1;
          iVar14 = 1;
          uVar10 = 0xffffffff;
          cVar13 = CASE_FFFFFFFE;
          iVar12 = 0x1e;
          iVar8 = 0x7d;
          puVar7 = (uint *)LoadResourceString(this_00->field_04B2,g_module_00807618);
          puVar6 = ccFntTy::CreateTypeSSpr
                             (g_startSystem_0081176C->field_0030,puVar7,iVar8,iVar12,cVar13,uVar10,
                              iVar14,iVar15,iVar16);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(iVar3 + 8))(puVar6,uVar17,uVar18);
          this_00->field_0572 = 0;
          this_00->field_02B7 = 0x24bb;
          this_00->field_02DC = 1;
        }
        iVar3 = 8;
        if (param_5 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)&this_00->field_0x2bc;
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
        }
        else {
          puVar6 = (undefined4 *)&this_00->field_0x2bc;
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *param_5;
            param_5 = param_5 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        uVar18 = 0xffffffff;
        uVar17 = 7;
        iVar16 = -1;
        iVar3 = this_00->field_036F;
        iVar15 = -1;
        iVar14 = 1;
        uVar10 = 0xffffffff;
        cVar13 = CASE_FFFFFFFE;
        iVar12 = 0x1e;
        iVar8 = 0x7d;
        puVar7 = (uint *)LoadResourceString(this_00->field_02B7,g_module_00807618);
        puVar6 = ccFntTy::CreateTypeSSpr
                           (g_startSystem_0081176C->field_0030,puVar7,iVar8,iVar12,cVar13,uVar10,
                            iVar14,iVar15,iVar16);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(iVar3 + 8))(puVar6,uVar17,uVar18);
        this_00->field_0377 = 0;
      }
LAB_005b8415:
      MMObjTy::CloseButtons((MMObjTy *)this_00);
      bVar2 = 0;
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_009A != 0) {
        do {
          uVar10 = local_8 & 0xff;
          *(undefined4 *)((int)&this_00->field_0127 + uVar10 * 0x1fb) = this_00->field_0061;
          *(uint *)((int)&this_00->field_0123 + uVar10 * 0x1fb) = ((local_c & 0xff) + 1) * 100;
          if (*(int *)(&this_00->field_0x1a87 + uVar10 * 0x27) != 0) {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_c = CONCAT31(local_c._1_3_,(char)local_c + '\x01');
          }
          bVar2 = bVar2 + 1;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_8 = CONCAT31(local_8._1_3_,bVar2);
        } while (bVar2 < this_00->field_009A);
      }
      if (this_00->field_0065 == '\x02') {
        this_00->field_0065 = 3;
        this_00->field_1C9C = 0x1010101;
        this_00->field_1CA0 = 0x1010101;
        this_00->field_1CA4 = 0x1010101;
        this_00->field_1CA8 = 1;
        thunk_FUN_005b6730(this_00,5,'\0',-1);
        this_00->field_1CAA = 0;
      }
      else {
        this_00->field_0065 = 4;
        this_00->field_1C9C = 0x1010101;
        this_00->field_1CA0 = 0x1010101;
        this_00->field_1CA4 = 0x1010101;
        this_00->field_1CA8 = 1;
        thunk_FUN_005b6730(this_00,6,'\x01',-1);
        this_00->field_1CAA = 1;
        if (this_00->field_1D8C != 0xffffffff) {
          FUN_006b3af0((int *)this_00->field_1DD0,this_00->field_1D8C);
        }
        local_8 = local_8 & 0xffffff00;
        if (this_00->field_009A != 0) {
          do {
            iVar3 = (local_8 & 0xff) * 0x1fb;
            uVar10 = *(uint *)((int)&this_00->field_0178 + (local_8 & 0xff) * 0x1fb);
            if (uVar10 != 0xffffffff) {
              FUN_006b3af0(*(int **)((int)&this_00->field_01BC + iVar3),uVar10);
            }
            if (((&this_00->field_00E2)[iVar3] != '\0') &&
               (uVar10 = *(uint *)((int)&this_00->field_0209 + iVar3), uVar10 != 0xffffffff)) {
              FUN_006b3af0(*(int **)((int)&this_00->field_024D + iVar3),uVar10);
            }
            bVar2 = (char)local_8 + 1;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_8 = CONCAT31(local_8._1_3_,bVar2);
          } while (bVar2 < this_00->field_009A);
          g_currentExceptionFrame = local_78.previous;
          return 1;
        }
      }
      g_currentExceptionFrame = local_78.previous;
      return 1;
    }
    g_currentExceptionFrame = local_78.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\Start\\mmsg_obj.cpp",0x14e,0,iVar3,"%s"
                               ,"MMsgTy::SetMessage");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\mmsg_obj.cpp",0x14e);
  }
  return 0;
}


#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\camp_obj.cpp
   CampaignTy::NoneCampaign
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall NoneCampaign(CampaignTy * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=00591DCE RET | 005920E0 RET | 00592174 RET | 005921BC RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall CampaignTy::NoneCampaign(CampaignTy *this)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  CampaignTy *this_00;
  DWORD DVar6;
  int iVar6;
  uint uVar7;
  DWORD *pDVar8;
  int *piVar9;
  int iVar11;
  uint *puVar10;
  int iVar12;
  uint *puVar13;
  int iVar14;
  undefined4 local_284 [112];
  InternalExceptionFrame local_c4;
  undefined4 local_80 [4];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 *local_38;
  uint local_34;
  undefined4 local_28;
  undefined2 local_1e;
  undefined2 local_1c;
  CampaignTy *local_c;
  int local_8;

  local_8 = 1;
  local_c = this;
  /* ST_CALLSITE[00591C08]: CALL dword ptr [0x0085bedc] */
  DVar6 = timeGetTime();
  this->field_0061 = DVar6;
  local_c4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_c4;
  iVar6 = Library::MSVCRT::__setjmp3(local_c4.jumpBuffer,0);
  this_00 = local_c;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_c4.previous;
    iVar11 = ReportDebugMessage("E:\\__titans\\Start\\camp_obj.cpp",0x117,0,iVar6,
                                "%s","CampaignTy::NoneCampaign");
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\Start\\camp_obj.cpp",0x117);
    return;
  }
  /* ST_CALLSITE[00591C48]: CALL 0x0040261c; direct=0040261C CampaignTy::LightPalette */
  LightPalette(local_c);
  /* ST_CALLSITE[00591C4F]: CALL 0x00404f4d; direct=00404F4D CampaignTy::AnimationCampaign */
  AnimationCampaign(this_00);
  cVar1 = this_00->field_0065;
  if (cVar1 == '\x01') {
    iVar14 = 0;
    if (this_00->field_009A != '\0') {
      puVar13 = &this_00->field_00BB[0].field_014A.field_001C;
      do {
        if (((*(int *)((int)puVar13 + -0x165) != 0) && (*(char *)((int)puVar13 + -0x13f) != '\0'))
           && (puVar13[9] <= this_00->field_0061 - puVar13[10])) {
          puVar13[10] = this_00->field_0061;
          uVar7 = puVar13[-5];
          puVar13[-5] = uVar7 + 1;
          if ((int)puVar13[-4] <= (int)(uVar7 + 1)) {
            puVar13[-5] = 0;
          }
          if (puVar13[-6] != 0xffffffff) {
            Library::DKW::DDX::FUN_006b3730
                      ((uint *)puVar13[0xb],puVar13[-6],puVar13[-5],*puVar13,puVar13[1]);
          }
        }
        iVar14 = iVar14 + 1;
        puVar13 = (uint *)((int)puVar13 + 0x1fb);
      } while (iVar14 < (int)(uint)(byte)this_00->field_009A);
    }
  }
  else if (cVar1 == '\x03') {
    iVar14 = 0;
    uVar7 = (uint)(byte)this_00->field_009A;
    if (uVar7 != 0) {
      do {
        if (this_00->field_00BB[iVar14].field_0001 != 0) {
          if (this_00->field_0061 - this_00->field_00BB[iVar14].field_0028.field_0044 <
              (uint)this_00->field_00BB[iVar14].field_0028.field_0040) {
            iVar14 = 0;
            local_8 = 0;
            if (uVar7 != 0) {
              pDVar8 = &this_00->field_00BB[0].field_014A.field_0044;
              do {
                if (*(char *)((int)pDVar8 + -0x167) != '\0') {
                  *pDVar8 = this_00->field_0061;
                }
                iVar14 = iVar14 + 1;
                pDVar8 = (DWORD *)((int)pDVar8 + 0x1fb);
              } while (iVar14 < (int)(uint)(byte)this_00->field_009A);
            }
          }
          else {
            iVar12 = this_00->field_00BB[iVar14].field_0028.field_0008;
            if (iVar12 < this_00->field_00BB[iVar14].field_0028.field_000C + -1) {
              if ((iVar12 == 0) &&
                 (uVar7 = this_00->field_00BB[iVar14].field_0028.field_0004, uVar7 != 0xffffffff)) {
                Library::DKW::DDX::FUN_006b34d0
                          ((uint *)this_00->field_00BB[iVar14].field_0028.field_0048,uVar7,
                           0xfffffffe,this_00->field_00BB[iVar14].field_0028.field_001C,
                           this_00->field_00BB[iVar14].field_0028.field_0020);
              }
              this_00->field_00BB[iVar14].field_0028.field_0008 =
                   this_00->field_00BB[iVar14].field_0028.field_0008 + 1;
              uVar7 = this_00->field_00BB[iVar14].field_0028.field_0004;
              if (uVar7 != 0xffffffff) {
                Library::DKW::DDX::FUN_006b3730
                          ((uint *)this_00->field_00BB[iVar14].field_0028.field_0048,uVar7,
                           this_00->field_00BB[iVar14].field_0028.field_0008,
                           this_00->field_00BB[iVar14].field_0028.field_001C,
                           this_00->field_00BB[iVar14].field_0028.field_0020);
              }
              local_8 = 0;
            }
            else {
              iVar12 = this_00->field_00BB[iVar14].field_00B9.field_0008;
              if (iVar12 < this_00->field_00BB[iVar14].field_00B9.field_000C + -3) {
                if (iVar12 == 0) {
                  uVar7 = this_00->field_00BB[iVar14].field_00B9.field_0004;
                  if (uVar7 != 0xffffffff) {
                    Library::DKW::DDX::FUN_006b34d0
                              ((uint *)this_00->field_00BB[iVar14].field_00B9.field_0048,uVar7,
                               0xfffffffe,this_00->field_00BB[iVar14].field_00B9.field_001C,
                               this_00->field_00BB[iVar14].field_00B9.field_0020);
                  }
                  if ((this_00->field_00BB[iVar14].field_0027 != '\0') &&
                     (uVar7 = this_00->field_00BB[iVar14].field_014A.field_0004, uVar7 != 0xffffffff
                     )) {
                    Library::DKW::DDX::FUN_006b34d0
                              ((uint *)this_00->field_00BB[iVar14].field_014A.field_0048,uVar7,
                               0xfffffffe,this_00->field_00BB[iVar14].field_014A.field_001C,
                               this_00->field_00BB[iVar14].field_014A.field_0020);
                  }
                }
                this_00->field_00BB[iVar14].field_00B9.field_0008 =
                     this_00->field_00BB[iVar14].field_00B9.field_0008 + 1;
                uVar7 = this_00->field_00BB[iVar14].field_00B9.field_0004;
                if (uVar7 != 0xffffffff) {
                  Library::DKW::DDX::FUN_006b3730
                            ((uint *)this_00->field_00BB[iVar14].field_00B9.field_0048,uVar7,
                             this_00->field_00BB[iVar14].field_00B9.field_0008,
                             this_00->field_00BB[iVar14].field_00B9.field_001C,
                             this_00->field_00BB[iVar14].field_00B9.field_0020);
                }
                thunk_FUN_005b6730(this_00,0x1e,'\x01',-1);
                local_8 = 0;
              }
            }
          }
        }
        iVar14 = iVar14 + 1;
        uVar7 = (uint)(byte)this_00->field_009A;
      } while (iVar14 < (int)uVar7);
    }
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x01')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      iVar12 = 1;
      memset(local_80, 0, 0x58); /* compiler bulk-zero initialization */
      iVar14 = 0;
      memset(local_284, 0, 0x1c0); /* compiler bulk-zero initialization */
      puVar10 = local_284 + 1;
      iVar14 = 3;
      piVar9 = (int *)&this_00->field_00BB[1].field_01DB;
      do {
        iVar3 = piVar9[0x19];
        puVar10[-1] = iVar12;
        iVar4 = *piVar9;
        *puVar10 = 0;
        puVar10[2] = iVar3 + iVar4;
        puVar10[4] = piVar9[2];
        iVar12 = iVar12 + 1;
        puVar10[3] = piVar9[0x1a] + piVar9[1];
        puVar10[5] = piVar9[3];
        puVar10 = puVar10 + 0x1c;
        iVar14 = iVar14 + -1;
        piVar9 = (int *)((int)piVar9 + 0x1fb);
      } while (iVar14 != 0);
      local_70 = this_00->field_0008;
      local_34 = (uint)DAT_0080874e;
      local_38 = local_284;
      local_6c = 2;
      local_4c = 2;
      local_80[0] = 1;
      local_68 = 0x68ff;
      local_48 = 0x697f;
      local_50 = local_70;
      /* ST_CALLSITE[0059208E]: CALL dword ptr [EAX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*STField<int *>(this_00,0xC) + 8))(5,this_00->field_0066,0,local_80,0);
      iVar14 = this_00->field_00BB[0xc].field_01DC;
      if (*(int *)(iVar14 + 0x2e6) != 0) {
        memset(&local_28, 0, 0x1a); /* compiler bulk-zero initialization */
        local_1c = 1;
        local_1e = 1;
        STPiece<2,2>(local_28) = 1;
        /* ST_CALLSITE[005920C5]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
        MMsgTy::StatePanel(*(MMsgTy **)(iVar14 + 0x2e6),(int)&local_28);
      }
      this_00->field_0065 = 1;
      g_currentExceptionFrame = local_c4.previous;
      return;
    }
  }
  else if (cVar1 == '\x04') {
    iVar14 = 0;
    if (this_00->field_009A != '\0') {
      puVar13 = &this_00->field_00BB[0].field_00B9.field_0004;
      do {
        if (this_00->field_0061 - *(int *)((int)puVar13 + -0x51) < *(uint *)((int)puVar13 + -0x55))
        {
LAB_00591d08:
          local_8 = 0;
        }
        else {
          if (*(char *)((int)puVar13 + -0xbd) != '\0') {
            if (*puVar13 != 0xffffffff) {
              FUN_006b3af0((int *)puVar13[0x11],*puVar13);
            }
            if ((*(char *)((int)puVar13 + -0x96) != '\0') &&
               (STField<uint>(puVar13,0x91) != 0xffffffff)) {
              FUN_006b3af0(STField<int *>(puVar13,0xd5),STField<uint>(puVar13,0x91));
            }
            *(undefined1 *)((int)puVar13 + -0xbd) = 0;
          }
          if (0 < *(int *)((int)puVar13 + -0x8d)) {
            uVar7 = *(int *)((int)puVar13 + -0x8d) - 1;
            *(uint *)((int)puVar13 + -0x8d) = uVar7;
            if (*(uint *)((int)puVar13 + -0x91) != 0xffffffff) {
              Library::DKW::DDX::FUN_006b3730
                        (*(uint **)((int)puVar13 + -0x4d),*(uint *)((int)puVar13 + -0x91),uVar7,
                         *(uint *)((int)puVar13 + -0x79),*(uint *)((int)puVar13 + -0x75));
            }
            goto LAB_00591d08;
          }
        }
        iVar14 = iVar14 + 1;
        puVar13 = (uint *)((int)puVar13 + 0x1fb);
      } while (iVar14 < (int)(uint)(byte)this_00->field_009A);
    }
    iVar14 = 0;
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x02')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      this_00->field_0065 = 2;
      if (this_00->field_009A != '\0') {
        puVar13 = &this_00->field_00BB[0].field_0028.field_0004;
        do {
          if (*puVar13 != 0xffffffff) {
            FUN_006b3af0((int *)puVar13[0x11],*puVar13);
          }
          iVar14 = iVar14 + 1;
          puVar13 = (uint *)((int)puVar13 + 0x1fb);
        } while (iVar14 < (int)(uint)(byte)this_00->field_009A);
      }
      bVar2 = this_00->field_00BB[0xc].field_01DB;
      if (*(int *)&this_00->field_00BB[bVar2].field_0x16 != 0) {
        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,(undefined4 *)&this_00->field_00BB[bVar2].field_0x6);
        g_currentExceptionFrame = local_c4.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_c4.previous;
  return;
}


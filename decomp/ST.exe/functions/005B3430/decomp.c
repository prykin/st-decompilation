#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::NoneMainMenu
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall NoneMainMenu(MainMenuTy * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=005B35FF RET | 005B38C9 RET | 005B3950 RET | 005B3996 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall MainMenuTy::NoneMainMenu(MainMenuTy *this)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  MainMenuTy *this_00;
  DWORD DVar5;
  int iVar4;
  uint uVar6;
  int *piVar7;
  int uVar6_mg7;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  InternalExceptionFrame local_54;
  MainMenuTy *local_10;
  uint *local_c;
  int local_8;

  local_8 = 1;
  local_10 = this;
  /* ST_CALLSITE[005B3445]: CALL dword ptr [0x0085bedc] */
  DVar5 = timeGetTime();
  this->field_0061 = DVar5;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;

  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;

    iVar7 = ReportDebugMessage("E:\\__titans\\Start\\main_obj.cpp",0xd2,0,iVar4,"%s",
                               "MainMenuTy::NoneMainMenu");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\main_obj.cpp",0xd2);
    return;
  }
  /* ST_CALLSITE[005B347C]: CALL 0x00403eef; direct=00403EEF MainMenuTy::LightPalette */
  LightPalette(local_10);
  /* ST_CALLSITE[005B3483]: CALL 0x00403922; direct=00403922 MainMenuTy::AnimationMainMenu */
  AnimationMainMenu(this_00);
  cVar1 = this_00->field_0065;
  if (cVar1 == '\x01') {
    iVar8 = 0;
    if (this_00->field_009A != 0) {
      puVar9 = &this_00->field_00BB[0].field_014A.field_001C;
      do {
        if ((*(char *)((int)puVar9 + -0x13f) != '\0') &&
           (puVar9[9] <= this_00->field_0061 - puVar9[10])) {
          puVar9[10] = this_00->field_0061;
          uVar6 = puVar9[-5];
          puVar9[-5] = uVar6 + 1;
          if ((int)puVar9[-4] <= (int)(uVar6 + 1)) {
            puVar9[-5] = 0;
          }
          if (puVar9[-6] != 0xffffffff) {

            Library::DKW::DDX::FUN_006b3730
                      ((uint *)puVar9[0xb],puVar9[-6],puVar9[-5],*puVar9,puVar9[1]);
          }
        }
        iVar8 = iVar8 + 1;
        puVar9 = (uint *)((int)puVar9 + 0x1fb);
      } while (iVar8 < (int)(uint)this_00->field_009A);
    }
  }
  else if (cVar1 == '\x03') {
    iVar8 = 0;
    uVar6 = (uint)this_00->field_009A;
    if (uVar6 != 0) {
      do {
        if (this_00->field_00BB[iVar8].field_0001 != 0) {
          if (this_00->field_0061 - this_00->field_00BB[iVar8].field_0028.field_0044 <
              (uint)this_00->field_00BB[iVar8].field_0028.field_0040) {
            iVar8 = 0;
            local_8 = 0;
            if (uVar6 != 0) {
              piVar7 = &this_00->field_00BB[0].field_014A.field_0044;
              do {
                if (*(char *)((int)piVar7 + -0x167) != '\0') {
                  *piVar7 = this_00->field_0061;
                }
                iVar8 = iVar8 + 1;
                piVar7 = (int *)((int)piVar7 + 0x1fb);
              } while (iVar8 < (int)(uint)this_00->field_009A);
            }
          }
          else {
            iVar3 = this_00->field_00BB[iVar8].field_0028.field_0008;
            if (iVar3 < this_00->field_00BB[iVar8].field_0028.field_000C + -1) {
              if ((iVar3 == 0) &&
                 (uVar6 = this_00->field_00BB[iVar8].field_0028.field_0004, uVar6 != 0xffffffff)) {

                Library::DKW::DDX::FUN_006b34d0
                          ((uint *)this_00->field_00BB[iVar8].field_0028.field_0048,uVar6,0xfffffffe
                           ,this_00->field_00BB[iVar8].field_0028.field_001C,
                           this_00->field_00BB[iVar8].field_0028.field_0020);
              }
              this_00->field_00BB[iVar8].field_0028.field_0008 =
                   this_00->field_00BB[iVar8].field_0028.field_0008 + 1;
              uVar6 = this_00->field_00BB[iVar8].field_0028.field_0004;
              if (uVar6 != 0xffffffff) {

                Library::DKW::DDX::FUN_006b3730
                          ((uint *)this_00->field_00BB[iVar8].field_0028.field_0048,uVar6,
                           this_00->field_00BB[iVar8].field_0028.field_0008,
                           this_00->field_00BB[iVar8].field_0028.field_001C,
                           this_00->field_00BB[iVar8].field_0028.field_0020);
              }
              local_8 = 0;
            }
            else {
              iVar3 = this_00->field_00BB[iVar8].field_00B9.field_0008;
              if (iVar3 < this_00->field_00BB[iVar8].field_00B9.field_000C + -3) {
                if (iVar3 == 0) {
                  uVar6 = this_00->field_00BB[iVar8].field_00B9.field_0004;
                  if (uVar6 != 0xffffffff) {

                    Library::DKW::DDX::FUN_006b34d0
                              ((uint *)this_00->field_00BB[iVar8].field_00B9.field_0048,uVar6,
                               0xfffffffe,this_00->field_00BB[iVar8].field_00B9.field_001C,
                               this_00->field_00BB[iVar8].field_00B9.field_0020);
                  }
                  if ((this_00->field_00BB[iVar8].field_0027 != '\0') &&
                     (uVar6 = this_00->field_00BB[iVar8].field_014A.field_0004, uVar6 != 0xffffffff)
                     ) {

                    Library::DKW::DDX::FUN_006b34d0
                              ((uint *)this_00->field_00BB[iVar8].field_014A.field_0048,uVar6,
                               0xfffffffe,this_00->field_00BB[iVar8].field_014A.field_001C,
                               this_00->field_00BB[iVar8].field_014A.field_0020);
                  }
                }
                this_00->field_00BB[iVar8].field_00B9.field_0008 =
                     this_00->field_00BB[iVar8].field_00B9.field_0008 + 1;
                uVar6 = this_00->field_00BB[iVar8].field_00B9.field_0004;
                if (uVar6 != 0xffffffff) {

                  Library::DKW::DDX::FUN_006b3730
                            ((uint *)this_00->field_00BB[iVar8].field_00B9.field_0048,uVar6,
                             this_00->field_00BB[iVar8].field_00B9.field_0008,
                             this_00->field_00BB[iVar8].field_00B9.field_001C,
                             this_00->field_00BB[iVar8].field_00B9.field_0020);
                }
                thunk_FUN_005b6730(this_00,0x1e,'\x01',-1);
                local_8 = 0;
              }
            }
          }
        }
        iVar8 = iVar8 + 1;
        uVar6 = (uint)this_00->field_009A;
      } while (iVar8 < (int)uVar6);
    }
    if (((this_00->field_1EE3 != '\0') && (g_startSystem_0081176C->field_02E6 != nullptr)) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x01')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      if (this_00->field_009A != 0) {
        local_c = this_00->field_0066;
        puVar10 = (undefined4 *)&this_00->field_0xa3;
        iVar8 = 0x68ff;
        do {
          if (*local_c == 0) {
            /* ST_CALLSITE[005B3861]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
            uVar6_mg7 = MMObjTy::CreateSprBut
                                  ((MMObjTy *)this_00,1,(uint)(this_00->field_1EDF != 0),
                                   puVar10[0x17] + puVar10[-2],puVar10[0x18] + puVar10[-1],*puVar10,
                                   puVar10[1],iVar8,iVar8 + 0x80);
            *local_c = uVar6_mg7;
          }
          local_c = local_c + 1;
          iVar3 = iVar8 + -0x68fe;
          puVar10 = (undefined4 *)((int)puVar10 + 0x1fb);
          iVar8 = iVar8 + 1;
        } while (iVar3 < (int)(uint)this_00->field_009A);
      }
      iVar8 = this_00->field_00BB[0xc].field_01F0;
      this_00->field_0065 = 1;
      if (iVar8 != 0) {

        FUN_006e3db0((AppClassTy *)&DAT_00807620,
                     (RecoveredRecord_006E3DB0_0F66DDCF *)&this_00->field_00BB[0xc].field_0x1e0);
        this_00->field_00BB[0xc].field_01F0 = 0;
        g_currentExceptionFrame = local_54.previous;
        return;
      }
    }
  }
  else if (cVar1 == '\x04') {
    iVar8 = 0;
    if (this_00->field_009A != 0) {
      puVar9 = &this_00->field_00BB[0].field_00B9.field_0004;
      do {
        if (this_00->field_0061 - *(int *)((int)puVar9 + -0x51) < *(uint *)((int)puVar9 + -0x55)) {
LAB_005b353c:
          local_8 = 0;
        }
        else {
          if (*(char *)((int)puVar9 + -0xbd) != '\0') {
            if (*puVar9 != 0xffffffff) {
              FUN_006b3af0((int *)puVar9[0x11],*puVar9);
            }
            if ((*(char *)((int)puVar9 + -0x96) != '\0') &&
               (STField<uint>(puVar9,0x91) != 0xffffffff)) {
              FUN_006b3af0(STField<int *>(puVar9,0xd5),STField<uint>(puVar9,0x91));
            }
            *(undefined1 *)((int)puVar9 + -0xbd) = 0;
          }
          if (0 < *(int *)((int)puVar9 + -0x8d)) {
            uVar6 = *(int *)((int)puVar9 + -0x8d) - 1;
            *(uint *)((int)puVar9 + -0x8d) = uVar6;
            if (*(uint *)((int)puVar9 + -0x91) != 0xffffffff) {

              Library::DKW::DDX::FUN_006b3730
                        (*(uint **)((int)puVar9 + -0x4d),*(uint *)((int)puVar9 + -0x91),uVar6,
                         *(uint *)((int)puVar9 + -0x79),*(uint *)((int)puVar9 + -0x75));
            }
            goto LAB_005b353c;
          }
        }
        iVar8 = iVar8 + 1;
        puVar9 = (uint *)((int)puVar9 + 0x1fb);
      } while (iVar8 < (int)(uint)this_00->field_009A);
    }
    iVar8 = 0;
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x02')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      this_00->field_0065 = 2;
      if (this_00->field_009A != 0) {
        puVar9 = &this_00->field_00BB[0].field_0028.field_0004;
        do {
          if (*puVar9 != 0xffffffff) {
            FUN_006b3af0((int *)puVar9[0x11],*puVar9);
          }
          iVar8 = iVar8 + 1;
          puVar9 = (uint *)((int)puVar9 + 0x1fb);
        } while (iVar8 < (int)(uint)this_00->field_009A);
      }
      bVar2 = this_00->field_00BB[0xc].field_01DB;
      if (this_00->field_00BB[bVar2].field_0016 != 0) {

        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,(undefined4 *)&this_00->field_00BB[bVar2].field_0x6);
        g_currentExceptionFrame = local_54.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_54.previous;
  return;
}


#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::NoneMTask

   [STSwitchEnumApplier] Switch target field_006D uses
   /SubmarineTitans/Recovered/Enums/MTaskTy_field_006DState. Cases: CASE_1=1;CASE_3=3;CASE_5=5 */

void __thiscall MTaskTy::NoneMTask(MTaskTy *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  MTaskTy *this_00;
  int iVar4;
  tagBITMAPINFO *ptVar5;
  DArrayTy *pDVar6;
  uint uVar7;
  int iVar8;
  uint uVar8;
  uint uVar9;
  int iVar10;
  AnonShape_005E10A0_819783CC *pAVar11;
  SpriteClassTy *this_01;
  uint *puVar12;
  uint uVar13;
  InternalExceptionFrame local_50;
  MTaskTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\Start\\task_obj.cpp",0x19c,0,iVar4,"%s"
                               ,"MTaskTy::NoneMTask");
    if (iVar8 == 0) {
      RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\task_obj.cpp",0x19c);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((local_c->field_006D == CASE_3) || (local_c->field_006D == CASE_5)) {
    /* ST_CALLSITE[005E0B05]: CALL 0x00405c18; direct=00405C18 MTaskTy::PlayScript */
    PlayScript(local_c);
  }
  pDVar6 = this_00->field_0647;
  if (pDVar6 != nullptr) {
    uVar9 = 0;
    if (pDVar6->count != 0) {
      if (pDVar6->count == 0) {
        pAVar11 = nullptr;
        goto LAB_005e0b38;
      }
      do {
        pAVar11 = DArrayAt<AnonShape_005E10A0_819783CC>(pDVar6, uVar9);
LAB_005e0b38:
        if (((-1 < *(int *)pAVar11) && (pAVar11->field_003A != 0)) && (pAVar11->field_0031 != 0)) {
          if ((*(uint *)&pAVar11->field_0x1c - 3 < *(uint *)&pAVar11->field_0x10) &&
             (*(uint *)&pAVar11->field_0x28 <
              (uint)(this_00->field_0069 - *(int *)&pAVar11->field_0x24))) {
            if (*(uint *)&pAVar11->field_0x10 < *(uint *)&pAVar11->field_0x1c) {
              /* ST_CALLSITE[005E0B85]: CALL 0x00405a51; direct=00405A51 MTaskTy::PrepareTSurf */
              PrepareTSurf(this_00,*(AnonShape_005E11D0_D0F8BE03 **)&pAVar11->field_0x4,
                           pAVar11->field_0x35,pAVar11->field_0x38);
              FUN_00714b30((void *)pAVar11->field_0031,*(int *)&pAVar11->field_0x10 + -1);
              ptVar5 = (tagBITMAPINFO *)FUN_007140e0((void *)pAVar11->field_0031,1,'\0');
              if (ptVar5 != nullptr) {
                FUN_006b5440(*(ushort **)&pAVar11->field_0x4,0,*(int *)&pAVar11->field_0x14,
                             *(int *)&pAVar11->field_0x18,ptVar5,0,0xff);
              }
              FUN_006b35d0((int *)g_ddxContext_008075A8,*(uint *)pAVar11);
              *(int *)&pAVar11->field_0x10 = *(int *)&pAVar11->field_0x10 + 1;
              *(undefined4 *)&pAVar11->field_0x24 = this_00->field_0069;
            }
            else {
              /* ST_CALLSITE[005E0BE3]: CALL 0x0040555b; direct=0040555B MTaskTy::TTaskItemClose */
              TTaskItemClose(this_00,pAVar11);
            }
          }
          if (*(uint *)&pAVar11->field_0x10 < *(int *)&pAVar11->field_0x1c - 3U) {
            /* ST_CALLSITE[005E0C03]: CALL 0x00405a51; direct=00405A51 MTaskTy::PrepareTSurf */
            PrepareTSurf(this_00,*(AnonShape_005E11D0_D0F8BE03 **)&pAVar11->field_0x4,
                         pAVar11->field_0x35,pAVar11->field_0x38);
            ptVar5 = (tagBITMAPINFO *)FUN_007140e0((void *)pAVar11->field_0031,1,'\0');
            if (ptVar5 != nullptr) {
              FUN_006b5440(*(ushort **)&pAVar11->field_0x4,0,*(int *)&pAVar11->field_0x14,
                           *(int *)&pAVar11->field_0x18,ptVar5,0,0xff);
            }
            FUN_006b35d0((int *)g_ddxContext_008075A8,*(uint *)pAVar11);
            uVar8 = *(int *)&pAVar11->field_0x10 + 1;
            *(uint *)&pAVar11->field_0x10 = uVar8;
            if ((pAVar11->field_0x30 != '\0') && (uVar8 % 3 != 0)) {
              thunk_FUN_005b6730(this_00,0x1e,'\x01',-1);
            }
          }
        }
        pDVar6 = this_00->field_0647;
        uVar9 = uVar9 + 1;
      } while (uVar9 < pDVar6->count);
    }
  }
  pDVar6 = this_00->field_064F;
  if (pDVar6 != nullptr) {
    uVar9 = 0;
    if (pDVar6->count != 0) {
      if (pDVar6->count == 0) {
        pAVar11 = nullptr;
        goto LAB_005e0ca3;
      }
      do {
        pAVar11 = DArrayAt<AnonShape_005E10A0_819783CC>(pDVar6, uVar9);
LAB_005e0ca3:
        if (((-1 < (int)*(uint *)pAVar11) && (*(int *)&pAVar11->field_0x10 != 0)) &&
           (*(uint *)&pAVar11->field_0x28 <
            (uint)(this_00->field_0069 - *(int *)&pAVar11->field_0x24))) {
          uVar8 = *(int *)&pAVar11->field_0x10 + 1;
          *(uint *)&pAVar11->field_0x10 = uVar8;
          *(undefined4 *)&pAVar11->field_0x24 = this_00->field_0069;
          if (uVar8 < 3) {
            FUN_006b35d0((int *)g_ddxContext_008075A8,*(uint *)pAVar11);
          }
          else {
            /* ST_CALLSITE[005E0CDC]: CALL 0x0040555b; direct=0040555B MTaskTy::TTaskItemClose */
            TTaskItemClose(this_00,pAVar11);
          }
        }
        pDVar6 = this_00->field_064F;
        uVar9 = uVar9 + 1;
      } while (uVar9 < pDVar6->count);
    }
  }
  pDVar6 = this_00->field_064B;
  if (pDVar6 != nullptr) {
    local_8 = 0;
    if (pDVar6->count != 0) {
      if (pDVar6->count == 0) {
        this_01 = nullptr;
        goto LAB_005e0d20;
      }
      do {
        this_01 = DArrayAt<SpriteClassTy>(pDVar6, local_8);
LAB_005e0d20:
        uVar8 = local_8;
        uVar9 = this_01->field_0004;
        if (uVar9 != 0xffffffff) {
          switch(*(undefined1 *)&this_01[1].vtable) {
          case 1:
            if ((uint)this_01->field_0040 <= (uint)(this_00->field_0069 - this_01->field_0044)) {
              uVar7 = this_01->field_0008 + 1;
              this_01->field_0008 = uVar7;
              this_01->field_0044 = this_00->field_0069;
              if (uVar7 == this_01->field_000C) {
                SpriteClassTy::CloseSprite(this_01);
              }
              else {
                Library::DKW::DDX::FUN_006b3730
                          ((uint *)this_01->field_0048,uVar9,uVar7,this_01->field_001C,
                           this_01->field_0020);
              }
            }
            break;
          case 2:
            if ((uint)this_01->field_0040 <= (uint)(this_00->field_0069 - this_01->field_0044)) {
              iVar10 = this_01->field_0008 + 1;
              this_01->field_0008 = iVar10;
              if (iVar10 == this_01->field_000C) {
                this_01->field_0008 = 0;
              }
              this_01->field_0044 = this_00->field_0069;
              Library::DKW::DDX::FUN_006b3730
                        ((uint *)this_01->field_0048,uVar9,this_01->field_0008,this_01->field_001C,
                         this_01->field_0020);
            }
            break;
          case 3:
            iVar10 = *(int *)((int)&this_01[1].vtable + 1);
            if (iVar10 != *(int *)((int)&this_01[1].field_0004 + 1)) {
              iVar2 = *(int *)((int)&this_01[1].field_0008 + 1);
              this_01->field_001C = *(undefined4 *)(iVar2 + iVar10 * 8);
              iVar1 = this_01->field_0044;
              this_01->field_0020 = *(undefined4 *)(iVar2 + iVar10 * 8 + 4);
              uVar8 = this_01->field_0040;
              *(int *)((int)&this_01[1].vtable + 1) = iVar10 + 1;
              if (uVar8 <= (uint)(this_00->field_0069 - iVar1)) {
                iVar10 = this_01->field_0008 + 1;
                this_01->field_0008 = iVar10;
                if (iVar10 == this_01->field_000C) {
                  this_01->field_0008 = 0;
                }
                this_01->field_0044 = this_00->field_0069;
              }
              uVar8 = this_01->field_0020;
              uVar7 = this_01->field_001C;
              uVar13 = this_01->field_0008;
              puVar12 = (uint *)this_01->field_0048;
              goto LAB_005e0edd;
            }
            SpriteClassTy::CloseSprite(this_01);
            if (*(int *)((int)&this_01[1].field_0008 + 1) != 0) {
              FreeAndNull((void *)((int)&this_01[1].field_0008 + 1));
            }
            break;
          case 4:
            iVar10 = *(int *)((int)&this_01[1].vtable + 1);
            iVar2 = *(int *)((int)&this_01[1].field_0008 + 1);
            this_01->field_001C = *(undefined4 *)(iVar2 + iVar10 * 8);
            uVar3 = *(undefined4 *)(iVar2 + iVar10 * 8 + 4);
            *(int *)((int)&this_01[1].vtable + 1) = iVar10 + 1;
            this_01->field_0020 = uVar3;
            if (iVar10 + 1 == *(int *)((int)&this_01[1].field_0004 + 1)) {
              *(undefined4 *)((int)&this_01[1].vtable + 1) = 0;
            }
            if ((uint)this_01->field_0040 <= (uint)(this_00->field_0069 - this_01->field_0044)) {
              iVar10 = this_01->field_0008 + 1;
              this_01->field_0008 = iVar10;
              if (iVar10 == this_01->field_000C) {
                this_01->field_0008 = 0;
              }
              this_01->field_0044 = this_00->field_0069;
            }
            uVar8 = this_01->field_0020;
            uVar7 = this_01->field_001C;
            uVar13 = this_01->field_0008;
            puVar12 = (uint *)this_01->field_0048;
LAB_005e0edd:
            Library::DKW::DDX::FUN_006b3730(puVar12,uVar9,uVar13,uVar7,uVar8);
            uVar8 = local_8;
          }
        }
        pDVar6 = this_00->field_064B;
        local_8 = uVar8 + 1;
      } while (local_8 < pDVar6->count);
    }
  }
  this_00->field_0069 = this_00->field_0069 + 1;
  g_currentExceptionFrame = local_50.previous;
  return;
}


#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::NoneMTask */

void __thiscall MTaskTy::NoneMTask(MTaskTy *this)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  MTaskTy *this_00;
  int iVar4;
  DArrayTy *pDVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  AnonShape_005E10A0_819783CC *pAVar10;
  SpriteClassTy *this_01;
  uint *puVar11;
  uint uVar12;
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
    iVar7 = ReportDebugMessage(s_E____titans_Start_task_obj_cpp_007cd994,0x19c,0,iVar4,&DAT_007a4ccc
                               ,s_MTaskTy__NoneMTask_007cdaa0);
    if (iVar7 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Start_task_obj_cpp_007cd994,0x19c);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((local_c->field_006D == '\x03') || (local_c->field_006D == '\x05')) {
    PlayScript(local_c);
  }
  pDVar5 = this_00->field_0647;
  if (pDVar5 != (DArrayTy *)0x0) {
    uVar9 = 0;
    if (pDVar5->count != 0) {
      if (pDVar5->count == 0) {
        pAVar10 = (AnonShape_005E10A0_819783CC *)0x0;
        goto LAB_005e0b38;
      }
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar5, uVar9) (runtime stride) */
        pAVar10 = (AnonShape_005E10A0_819783CC *)(pDVar5->elementSize * uVar9 + (int)pDVar5->data);
LAB_005e0b38:
        if (((-1 < *(int *)pAVar10) && (pAVar10->field_003A != 0)) && (pAVar10->field_0031 != 0)) {
          if ((*(uint *)&pAVar10->field_0x1c - 3 < *(uint *)&pAVar10->field_0x10) &&
             (*(uint *)&pAVar10->field_0x28 <
              (uint)(this_00->field_0069 - *(int *)&pAVar10->field_0x24))) {
            if (*(uint *)&pAVar10->field_0x10 < *(uint *)&pAVar10->field_0x1c) {
              PrepareTSurf(this_00,*(AnonShape_005E11D0_D0F8BE03 **)&pAVar10->field_0x4,
                           pAVar10->field_0x35,pAVar10->field_0x38);
              FUN_00714b30((void *)pAVar10->field_0031,*(int *)&pAVar10->field_0x10 + -1);
              iVar4 = FUN_007140e0((void *)pAVar10->field_0031,1,'\0');
              if (iVar4 != 0) {
                FUN_006b5440(*(int *)&pAVar10->field_0x4,0,*(int *)&pAVar10->field_0x14,
                             *(int *)&pAVar10->field_0x18,iVar4,0,0xff);
              }
              FUN_006b35d0(DAT_008075a8,*(uint *)pAVar10);
              *(int *)&pAVar10->field_0x10 = *(int *)&pAVar10->field_0x10 + 1;
              *(undefined4 *)&pAVar10->field_0x24 = this_00->field_0069;
            }
            else {
              TTaskItemClose(this_00,pAVar10);
            }
          }
          if (*(uint *)&pAVar10->field_0x10 < *(int *)&pAVar10->field_0x1c - 3U) {
            PrepareTSurf(this_00,*(AnonShape_005E11D0_D0F8BE03 **)&pAVar10->field_0x4,
                         pAVar10->field_0x35,pAVar10->field_0x38);
            iVar4 = FUN_007140e0((void *)pAVar10->field_0031,1,'\0');
            if (iVar4 != 0) {
              FUN_006b5440(*(int *)&pAVar10->field_0x4,0,*(int *)&pAVar10->field_0x14,
                           *(int *)&pAVar10->field_0x18,iVar4,0,0xff);
            }
            FUN_006b35d0(DAT_008075a8,*(uint *)pAVar10);
            uVar8 = *(int *)&pAVar10->field_0x10 + 1;
            *(uint *)&pAVar10->field_0x10 = uVar8;
            if ((pAVar10->field_0x30 != '\0') && (uVar8 % 3 != 0)) {
              thunk_FUN_005b6730(this_00,0x1e,'\x01',-1);
            }
          }
        }
        pDVar5 = this_00->field_0647;
        uVar9 = uVar9 + 1;
      } while (uVar9 < pDVar5->count);
    }
  }
  pDVar5 = this_00->field_064F;
  if (pDVar5 != (DArrayTy *)0x0) {
    uVar9 = 0;
    if (pDVar5->count != 0) {
      if (pDVar5->count == 0) {
        pAVar10 = (AnonShape_005E10A0_819783CC *)0x0;
        goto LAB_005e0ca3;
      }
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar5, uVar9) (runtime stride) */
        pAVar10 = (AnonShape_005E10A0_819783CC *)(pDVar5->elementSize * uVar9 + (int)pDVar5->data);
LAB_005e0ca3:
        if (((-1 < (int)*(uint *)pAVar10) && (*(int *)&pAVar10->field_0x10 != 0)) &&
           (*(uint *)&pAVar10->field_0x28 <
            (uint)(this_00->field_0069 - *(int *)&pAVar10->field_0x24))) {
          uVar8 = *(int *)&pAVar10->field_0x10 + 1;
          *(uint *)&pAVar10->field_0x10 = uVar8;
          *(undefined4 *)&pAVar10->field_0x24 = this_00->field_0069;
          if (uVar8 < 3) {
            FUN_006b35d0(DAT_008075a8,*(uint *)pAVar10);
          }
          else {
            TTaskItemClose(this_00,pAVar10);
          }
        }
        pDVar5 = this_00->field_064F;
        uVar9 = uVar9 + 1;
      } while (uVar9 < pDVar5->count);
    }
  }
  pDVar5 = this_00->field_064B;
  if (pDVar5 != (DArrayTy *)0x0) {
    local_8 = 0;
    if (pDVar5->count != 0) {
      if (pDVar5->count == 0) {
        this_01 = (SpriteClassTy *)0x0;
        goto LAB_005e0d20;
      }
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar5, local_8) (runtime stride) */
        this_01 = (SpriteClassTy *)(pDVar5->elementSize * local_8 + (int)pDVar5->data);
LAB_005e0d20:
        uVar8 = local_8;
        uVar9 = this_01->field_0004;
        if (uVar9 != 0xffffffff) {
          switch(*(undefined1 *)&this_01[1].vtable) {
          case 1:
            if ((uint)this_01->field_0040 <= (uint)(this_00->field_0069 - this_01->field_0044)) {
              uVar6 = this_01->field_0008 + 1;
              this_01->field_0008 = uVar6;
              this_01->field_0044 = this_00->field_0069;
              if (uVar6 == this_01->field_000C) {
                SpriteClassTy::CloseSprite(this_01);
              }
              else {
                Library::DKW::DDX::FUN_006b3730
                          ((uint *)this_01->field_0048,uVar9,uVar6,this_01->field_001C,
                           this_01->field_0020);
              }
            }
            break;
          case 2:
            if ((uint)this_01->field_0040 <= (uint)(this_00->field_0069 - this_01->field_0044)) {
              iVar4 = this_01->field_0008 + 1;
              this_01->field_0008 = iVar4;
              if (iVar4 == this_01->field_000C) {
                this_01->field_0008 = 0;
              }
              this_01->field_0044 = this_00->field_0069;
              Library::DKW::DDX::FUN_006b3730
                        ((uint *)this_01->field_0048,uVar9,this_01->field_0008,this_01->field_001C,
                         this_01->field_0020);
            }
            break;
          case 3:
            iVar4 = *(int *)((int)&this_01[1].vtable + 1);
            if (iVar4 != *(int *)((int)&this_01[1].field_0004 + 1)) {
              iVar7 = *(int *)((int)&this_01[1].field_0008 + 1);
              this_01->field_001C = *(undefined4 *)(iVar7 + iVar4 * 8);
              iVar1 = this_01->field_0044;
              this_01->field_0020 = *(undefined4 *)(iVar7 + iVar4 * 8 + 4);
              uVar8 = this_01->field_0040;
              *(int *)((int)&this_01[1].vtable + 1) = iVar4 + 1;
              if (uVar8 <= (uint)(this_00->field_0069 - iVar1)) {
                iVar4 = this_01->field_0008 + 1;
                this_01->field_0008 = iVar4;
                if (iVar4 == this_01->field_000C) {
                  this_01->field_0008 = 0;
                }
                this_01->field_0044 = this_00->field_0069;
              }
              uVar8 = this_01->field_0020;
              uVar6 = this_01->field_001C;
              uVar12 = this_01->field_0008;
              puVar11 = (uint *)this_01->field_0048;
              goto LAB_005e0edd;
            }
            SpriteClassTy::CloseSprite(this_01);
            if (*(int *)((int)&this_01[1].field_0008 + 1) != 0) {
              FreeAndNull((void **)((int)&this_01[1].field_0008 + 1));
            }
            break;
          case 4:
            iVar4 = *(int *)((int)&this_01[1].vtable + 1);
            iVar7 = *(int *)((int)&this_01[1].field_0008 + 1);
            this_01->field_001C = *(undefined4 *)(iVar7 + iVar4 * 8);
            uVar2 = *(undefined4 *)(iVar7 + iVar4 * 8 + 4);
            *(int *)((int)&this_01[1].vtable + 1) = iVar4 + 1;
            this_01->field_0020 = uVar2;
            if (iVar4 + 1 == *(int *)((int)&this_01[1].field_0004 + 1)) {
              *(undefined4 *)((int)&this_01[1].vtable + 1) = 0;
            }
            if ((uint)this_01->field_0040 <= (uint)(this_00->field_0069 - this_01->field_0044)) {
              iVar4 = this_01->field_0008 + 1;
              this_01->field_0008 = iVar4;
              if (iVar4 == this_01->field_000C) {
                this_01->field_0008 = 0;
              }
              this_01->field_0044 = this_00->field_0069;
            }
            uVar8 = this_01->field_0020;
            uVar6 = this_01->field_001C;
            uVar12 = this_01->field_0008;
            puVar11 = (uint *)this_01->field_0048;
LAB_005e0edd:
            Library::DKW::DDX::FUN_006b3730(puVar11,uVar9,uVar12,uVar6,uVar8);
            uVar8 = local_8;
          }
        }
        pDVar5 = this_00->field_064B;
        local_8 = uVar8 + 1;
      } while (local_8 < pDVar5->count);
    }
  }
  this_00->field_0069 = this_00->field_0069 + 1;
  g_currentExceptionFrame = local_50.previous;
  return;
}


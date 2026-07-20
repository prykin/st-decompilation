
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
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  uint *puVar9;
  SpriteClassTy *this_01;
  void *unaff_EDI;
  uint uVar10;
  InternalExceptionFrame local_50;
  MTaskTy *local_c;
  uint local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Start_task_obj_cpp_007cd994,0x19c,0,iVar4,&DAT_007a4ccc
                               ,s_MTaskTy__NoneMTask_007cdaa0);
    if (iVar6 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Start_task_obj_cpp_007cd994,0x19c);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((local_c->field_006D == '\x03') || (local_c->field_006D == '\x05')) {
    PlayScript(local_c);
  }
  iVar4 = this_00->field_0647;
  if (iVar4 != 0) {
    uVar8 = 0;
    if (*(int *)(iVar4 + 0xc) != 0) {
      if (*(int *)(iVar4 + 0xc) == 0) {
        puVar9 = (uint *)0x0;
        goto LAB_005e0b38;
      }
      do {
        puVar9 = (uint *)(*(int *)(iVar4 + 8) * uVar8 + *(int *)(iVar4 + 0x1c));
LAB_005e0b38:
        if (((-1 < (int)*puVar9) && (*(int *)((int)puVar9 + 0x3a) != 0)) &&
           (*(int *)((int)puVar9 + 0x31) != 0)) {
          if ((puVar9[7] - 3 < puVar9[4]) && (puVar9[10] < this_00->field_0069 - puVar9[9])) {
            if (puVar9[4] < puVar9[7]) {
              PrepareTSurf(this_00,puVar9[1],*(char *)((int)puVar9 + 0x35),(char)puVar9[0xe]);
              FUN_00714b30(*(void **)((int)puVar9 + 0x31),puVar9[4] - 1);
              iVar4 = FUN_007140e0(*(void **)((int)puVar9 + 0x31),1,'\0');
              if (iVar4 != 0) {
                FUN_006b5440(puVar9[1],0,puVar9[5],puVar9[6],iVar4,0,0xff);
              }
              FUN_006b35d0(DAT_008075a8,*puVar9);
              puVar9[4] = puVar9[4] + 1;
              puVar9[9] = this_00->field_0069;
            }
            else {
              TTaskItemClose(this_00,puVar9);
            }
          }
          if (puVar9[4] < puVar9[7] - 3) {
            PrepareTSurf(this_00,puVar9[1],*(char *)((int)puVar9 + 0x35),(char)puVar9[0xe]);
            iVar4 = FUN_007140e0(*(void **)((int)puVar9 + 0x31),1,'\0');
            if (iVar4 != 0) {
              FUN_006b5440(puVar9[1],0,puVar9[5],puVar9[6],iVar4,0,0xff);
            }
            FUN_006b35d0(DAT_008075a8,*puVar9);
            uVar7 = puVar9[4];
            puVar9[4] = uVar7 + 1;
            if (((char)puVar9[0xc] != '\0') && ((uVar7 + 1) % 3 != 0)) {
              thunk_FUN_005b6730(this_00,0x1e,'\x01',-1);
            }
          }
        }
        iVar4 = this_00->field_0647;
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)(iVar4 + 0xc));
    }
  }
  iVar4 = this_00->field_064F;
  if (iVar4 != 0) {
    uVar8 = 0;
    if (*(int *)(iVar4 + 0xc) != 0) {
      if (*(int *)(iVar4 + 0xc) == 0) {
        puVar9 = (uint *)0x0;
        goto LAB_005e0ca3;
      }
      do {
        puVar9 = (uint *)(*(int *)(iVar4 + 8) * uVar8 + *(int *)(iVar4 + 0x1c));
LAB_005e0ca3:
        if (((-1 < (int)*puVar9) && (puVar9[4] != 0)) &&
           (puVar9[10] < this_00->field_0069 - puVar9[9])) {
          uVar7 = puVar9[4] + 1;
          puVar9[4] = uVar7;
          puVar9[9] = this_00->field_0069;
          if (uVar7 < 3) {
            FUN_006b35d0(DAT_008075a8,*puVar9);
          }
          else {
            TTaskItemClose(this_00,puVar9);
          }
        }
        iVar4 = this_00->field_064F;
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)(iVar4 + 0xc));
    }
  }
  iVar4 = this_00->field_064B;
  if (iVar4 != 0) {
    local_8 = 0;
    if (*(int *)(iVar4 + 0xc) != 0) {
      if (*(int *)(iVar4 + 0xc) == 0) {
        this_01 = (SpriteClassTy *)0x0;
        goto LAB_005e0d20;
      }
      do {
        this_01 = (SpriteClassTy *)(*(int *)(iVar4 + 8) * local_8 + *(int *)(iVar4 + 0x1c));
LAB_005e0d20:
        uVar7 = local_8;
        uVar8 = this_01->field_0004;
        if (uVar8 != 0xffffffff) {
          switch(*(undefined1 *)&this_01[1].vtable) {
          case 1:
            if ((uint)this_01->field_0040 <= (uint)(this_00->field_0069 - this_01->field_0044)) {
              uVar5 = this_01->field_0008 + 1;
              this_01->field_0008 = uVar5;
              this_01->field_0044 = this_00->field_0069;
              if (uVar5 == this_01->field_000C) {
                SpriteClassTy::CloseSprite(this_01);
              }
              else {
                Library::DKW::DDX::FUN_006b3730
                          ((uint *)this_01->field_0048,uVar8,uVar5,this_01->field_001C,
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
                        ((uint *)this_01->field_0048,uVar8,this_01->field_0008,this_01->field_001C,
                         this_01->field_0020);
            }
            break;
          case 3:
            iVar4 = *(int *)((int)&this_01[1].vtable + 1);
            if (iVar4 != *(int *)((int)&this_01[1].field_0004 + 1)) {
              iVar6 = *(int *)((int)&this_01[1].field_0008 + 1);
              this_01->field_001C = *(undefined4 *)(iVar6 + iVar4 * 8);
              iVar1 = this_01->field_0044;
              this_01->field_0020 = *(undefined4 *)(iVar6 + iVar4 * 8 + 4);
              uVar7 = this_01->field_0040;
              *(int *)((int)&this_01[1].vtable + 1) = iVar4 + 1;
              if (uVar7 <= (uint)(this_00->field_0069 - iVar1)) {
                iVar4 = this_01->field_0008 + 1;
                this_01->field_0008 = iVar4;
                if (iVar4 == this_01->field_000C) {
                  this_01->field_0008 = 0;
                }
                this_01->field_0044 = this_00->field_0069;
              }
              uVar7 = this_01->field_0020;
              uVar5 = this_01->field_001C;
              uVar10 = this_01->field_0008;
              puVar9 = (uint *)this_01->field_0048;
              goto LAB_005e0edd;
            }
            SpriteClassTy::CloseSprite(this_01);
            if (*(int *)((int)&this_01[1].field_0008 + 1) != 0) {
              FUN_006ab060((LPVOID *)((int)&this_01[1].field_0008 + 1));
            }
            break;
          case 4:
            iVar4 = *(int *)((int)&this_01[1].vtable + 1);
            iVar6 = *(int *)((int)&this_01[1].field_0008 + 1);
            this_01->field_001C = *(undefined4 *)(iVar6 + iVar4 * 8);
            uVar2 = *(undefined4 *)(iVar6 + iVar4 * 8 + 4);
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
            uVar7 = this_01->field_0020;
            uVar5 = this_01->field_001C;
            uVar10 = this_01->field_0008;
            puVar9 = (uint *)this_01->field_0048;
LAB_005e0edd:
            Library::DKW::DDX::FUN_006b3730(puVar9,uVar8,uVar10,uVar5,uVar7);
            uVar7 = local_8;
          }
        }
        iVar4 = this_00->field_064B;
        local_8 = uVar7 + 1;
      } while (local_8 < *(uint *)(iVar4 + 0xc));
    }
  }
  this_00->field_0069 = this_00->field_0069 + 1;
  g_currentExceptionFrame = local_50.previous;
  return;
}


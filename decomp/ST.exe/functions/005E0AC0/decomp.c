
/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::NoneMTask */

void __thiscall MTaskTy::NoneMTask(MTaskTy *this)

{
  undefined4 uVar1;
  code *pcVar2;
  MTaskTy *this_00;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  uint *puVar8;
  SpriteClassTy *this_01;
  void *unaff_EDI;
  uint uVar9;
  InternalExceptionFrame local_50;
  MTaskTy *local_c;
  uint local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = __setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Start_task_obj_cpp_007cd994,0x19c,0,iVar3,&DAT_007a4ccc
                               ,s_MTaskTy__NoneMTask_007cdaa0);
    if (iVar5 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Start_task_obj_cpp_007cd994,0x19c);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((local_c[0x6d] == (MTaskTy)0x3) || (local_c[0x6d] == (MTaskTy)0x5)) {
    PlayScript(local_c);
  }
  iVar3 = *(int *)(this_00 + 0x647);
  if (iVar3 != 0) {
    uVar7 = 0;
    if (*(int *)(iVar3 + 0xc) != 0) {
      if (*(int *)(iVar3 + 0xc) == 0) {
        puVar8 = (uint *)0x0;
        goto LAB_005e0b38;
      }
      do {
        puVar8 = (uint *)(*(int *)(iVar3 + 8) * uVar7 + *(int *)(iVar3 + 0x1c));
LAB_005e0b38:
        if (((-1 < (int)*puVar8) && (*(int *)((int)puVar8 + 0x3a) != 0)) &&
           (*(int *)((int)puVar8 + 0x31) != 0)) {
          if ((puVar8[7] - 3 < puVar8[4]) && (puVar8[10] < *(int *)(this_00 + 0x69) - puVar8[9])) {
            if (puVar8[4] < puVar8[7]) {
              PrepareTSurf(this_00,puVar8[1],*(char *)((int)puVar8 + 0x35),(char)puVar8[0xe]);
              FUN_00714b30(*(void **)((int)puVar8 + 0x31),puVar8[4] - 1);
              iVar3 = FUN_007140e0(*(void **)((int)puVar8 + 0x31),1,'\0');
              if (iVar3 != 0) {
                FUN_006b5440(puVar8[1],0,puVar8[5],puVar8[6],iVar3,0,0xff);
              }
              FUN_006b35d0(DAT_008075a8,*puVar8);
              puVar8[4] = puVar8[4] + 1;
              puVar8[9] = *(uint *)(this_00 + 0x69);
            }
            else {
              TTaskItemClose(this_00,puVar8);
            }
          }
          if (puVar8[4] < puVar8[7] - 3) {
            PrepareTSurf(this_00,puVar8[1],*(char *)((int)puVar8 + 0x35),(char)puVar8[0xe]);
            iVar3 = FUN_007140e0(*(void **)((int)puVar8 + 0x31),1,'\0');
            if (iVar3 != 0) {
              FUN_006b5440(puVar8[1],0,puVar8[5],puVar8[6],iVar3,0,0xff);
            }
            FUN_006b35d0(DAT_008075a8,*puVar8);
            uVar6 = puVar8[4];
            puVar8[4] = uVar6 + 1;
            if (((char)puVar8[0xc] != '\0') && ((uVar6 + 1) % 3 != 0)) {
              thunk_FUN_005b6730(this_00,0x1e,'\x01',-1);
            }
          }
        }
        iVar3 = *(int *)(this_00 + 0x647);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(iVar3 + 0xc));
    }
  }
  iVar3 = *(int *)(this_00 + 0x64f);
  if (iVar3 != 0) {
    uVar7 = 0;
    if (*(int *)(iVar3 + 0xc) != 0) {
      if (*(int *)(iVar3 + 0xc) == 0) {
        puVar8 = (uint *)0x0;
        goto LAB_005e0ca3;
      }
      do {
        puVar8 = (uint *)(*(int *)(iVar3 + 8) * uVar7 + *(int *)(iVar3 + 0x1c));
LAB_005e0ca3:
        if (((-1 < (int)*puVar8) && (puVar8[4] != 0)) &&
           (puVar8[10] < *(int *)(this_00 + 0x69) - puVar8[9])) {
          uVar6 = puVar8[4] + 1;
          puVar8[4] = uVar6;
          puVar8[9] = *(uint *)(this_00 + 0x69);
          if (uVar6 < 3) {
            FUN_006b35d0(DAT_008075a8,*puVar8);
          }
          else {
            TTaskItemClose(this_00,puVar8);
          }
        }
        iVar3 = *(int *)(this_00 + 0x64f);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(iVar3 + 0xc));
    }
  }
  iVar3 = *(int *)(this_00 + 0x64b);
  if (iVar3 != 0) {
    local_8 = 0;
    if (*(int *)(iVar3 + 0xc) != 0) {
      if (*(int *)(iVar3 + 0xc) == 0) {
        this_01 = (SpriteClassTy *)0x0;
        goto LAB_005e0d20;
      }
      do {
        this_01 = (SpriteClassTy *)(*(int *)(iVar3 + 8) * local_8 + *(int *)(iVar3 + 0x1c));
LAB_005e0d20:
        uVar6 = local_8;
        uVar7 = *(uint *)(this_01 + 4);
        if (uVar7 != 0xffffffff) {
          switch(this_01[0x91]) {
          case (SpriteClassTy)0x1:
            if (*(uint *)(this_01 + 0x40) <=
                (uint)(*(int *)(this_00 + 0x69) - *(int *)(this_01 + 0x44))) {
              uVar4 = *(int *)(this_01 + 8) + 1;
              *(uint *)(this_01 + 8) = uVar4;
              *(undefined4 *)(this_01 + 0x44) = *(undefined4 *)(this_00 + 0x69);
              if (uVar4 == *(uint *)(this_01 + 0xc)) {
                SpriteClassTy::CloseSprite(this_01);
              }
              else {
                FUN_006b3730(*(uint **)(this_01 + 0x48),uVar7,uVar4,*(uint *)(this_01 + 0x1c),
                             *(uint *)(this_01 + 0x20));
              }
            }
            break;
          case (SpriteClassTy)0x2:
            if (*(uint *)(this_01 + 0x40) <=
                (uint)(*(int *)(this_00 + 0x69) - *(int *)(this_01 + 0x44))) {
              iVar3 = *(int *)(this_01 + 8);
              *(int *)(this_01 + 8) = iVar3 + 1;
              if (iVar3 + 1 == *(int *)(this_01 + 0xc)) {
                *(undefined4 *)(this_01 + 8) = 0;
              }
              *(undefined4 *)(this_01 + 0x44) = *(undefined4 *)(this_00 + 0x69);
              FUN_006b3730(*(uint **)(this_01 + 0x48),uVar7,*(uint *)(this_01 + 8),
                           *(uint *)(this_01 + 0x1c),*(uint *)(this_01 + 0x20));
            }
            break;
          case (SpriteClassTy)0x3:
            iVar3 = *(int *)(this_01 + 0x92);
            if (iVar3 != *(int *)(this_01 + 0x96)) {
              *(undefined4 *)(this_01 + 0x1c) =
                   *(undefined4 *)(*(int *)(this_01 + 0x9a) + iVar3 * 8);
              *(undefined4 *)(this_01 + 0x20) =
                   *(undefined4 *)(*(int *)(this_01 + 0x9a) + iVar3 * 8 + 4);
              *(int *)(this_01 + 0x92) = iVar3 + 1;
              if (*(uint *)(this_01 + 0x40) <=
                  (uint)(*(int *)(this_00 + 0x69) - *(int *)(this_01 + 0x44))) {
                iVar3 = *(int *)(this_01 + 8);
                *(int *)(this_01 + 8) = iVar3 + 1;
                if (iVar3 + 1 == *(int *)(this_01 + 0xc)) {
                  *(undefined4 *)(this_01 + 8) = 0;
                }
                *(undefined4 *)(this_01 + 0x44) = *(undefined4 *)(this_00 + 0x69);
              }
              uVar6 = *(uint *)(this_01 + 0x20);
              uVar4 = *(uint *)(this_01 + 0x1c);
              uVar9 = *(uint *)(this_01 + 8);
              puVar8 = *(uint **)(this_01 + 0x48);
              goto LAB_005e0edd;
            }
            SpriteClassTy::CloseSprite(this_01);
            if (*(int *)(this_01 + 0x9a) != 0) {
              FUN_006ab060((undefined4 *)(this_01 + 0x9a));
            }
            break;
          case (SpriteClassTy)0x4:
            iVar3 = *(int *)(this_01 + 0x92);
            *(undefined4 *)(this_01 + 0x1c) = *(undefined4 *)(*(int *)(this_01 + 0x9a) + iVar3 * 8);
            uVar1 = *(undefined4 *)(*(int *)(this_01 + 0x9a) + iVar3 * 8 + 4);
            *(int *)(this_01 + 0x92) = iVar3 + 1;
            *(undefined4 *)(this_01 + 0x20) = uVar1;
            if (iVar3 + 1 == *(int *)(this_01 + 0x96)) {
              *(undefined4 *)(this_01 + 0x92) = 0;
            }
            if (*(uint *)(this_01 + 0x40) <=
                (uint)(*(int *)(this_00 + 0x69) - *(int *)(this_01 + 0x44))) {
              iVar3 = *(int *)(this_01 + 8);
              *(int *)(this_01 + 8) = iVar3 + 1;
              if (iVar3 + 1 == *(int *)(this_01 + 0xc)) {
                *(undefined4 *)(this_01 + 8) = 0;
              }
              *(undefined4 *)(this_01 + 0x44) = *(undefined4 *)(this_00 + 0x69);
            }
            uVar6 = *(uint *)(this_01 + 0x20);
            uVar4 = *(uint *)(this_01 + 0x1c);
            uVar9 = *(uint *)(this_01 + 8);
            puVar8 = *(uint **)(this_01 + 0x48);
LAB_005e0edd:
            FUN_006b3730(puVar8,uVar7,uVar9,uVar4,uVar6);
            uVar6 = local_8;
          }
        }
        iVar3 = *(int *)(this_00 + 0x64b);
        local_8 = uVar6 + 1;
      } while (local_8 < *(uint *)(iVar3 + 0xc));
    }
  }
  *(int *)(this_00 + 0x69) = *(int *)(this_00 + 0x69) + 1;
  g_currentExceptionFrame = local_50.previous;
  return;
}


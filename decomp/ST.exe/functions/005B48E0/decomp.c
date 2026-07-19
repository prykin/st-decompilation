
/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::AnimationMainMenu */

void __thiscall MainMenuTy::AnimationMainMenu(MainMenuTy *this)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  BITMAPINFO *pBVar5;
  int iVar6;
  MainMenuTy *pMVar7;
  undefined4 unaff_ESI;
  int *piVar8;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  int local_10;
  int local_c;
  MainMenuTy *local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pMVar7 = local_8;
  if (iVar3 == 0) {
    if (local_8->field_1ACF != 0) {
      piVar8 = &local_8->field_1AA7;
      iVar3 = 10;
      do {
        piVar1 = (int *)*piVar8;
        if (piVar1 != (int *)0x0) {
          FUN_006b5f80(DAT_008075a8,*piVar1,piVar1[1],piVar1[2],piVar1[3]);
          Library::DKW::FLC::FUN_006c4ac0((int *)*piVar8);
        }
        piVar8 = piVar8 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    pMVar7->field_1ACF = (uint)(pMVar7->field_1ACF == 0);
    local_10 = 0;
    local_c = 0x244;
    do {
      iVar3 = *(int *)(local_c + DAT_0081176c);
      if (iVar3 != 0) {
        piVar8 = (int *)(local_10 + 0x25c + DAT_0081176c);
        if (*(char *)(local_10 + 0x270 + DAT_0081176c) == '\0') {
          uVar4 = piVar8[2];
        }
        else {
          uVar4 = piVar8[3];
        }
        if (uVar4 <= (uint)(pMVar7->field_0061 - piVar8[4])) {
          pBVar5 = (BITMAPINFO *)FUN_0070b3a0(iVar3,(int)*(short *)(iVar3 + 0x29));
          FUN_006b5f80(DAT_008075a8,*piVar8,piVar8[1],(int)*(short *)(iVar3 + 0x2c),
                       (int)*(short *)(iVar3 + 0x2e));
          PutDDX(*piVar8,piVar8[1],'\x01',pBVar5);
          if ((char)piVar8[5] != '\0') {
            *(undefined1 *)(piVar8 + 5) = 0;
          }
          piVar8[4] = local_8->field_0061;
          switch(*(undefined2 *)((int)piVar8 + 0x15)) {
          case 0:
            *(short *)(iVar3 + 0x29) = *(short *)(iVar3 + 0x29) + 1;
            if (*(short *)(iVar3 + 0x23) <= *(short *)(iVar3 + 0x29)) {
              *(undefined2 *)(iVar3 + 0x29) = 0;
              *(undefined1 *)(piVar8 + 5) = 1;
            }
            break;
          case 1:
            *(short *)(iVar3 + 0x29) = *(short *)(iVar3 + 0x29) + -1;
            if (*(short *)(iVar3 + 0x29) < 0) {
              *(short *)(iVar3 + 0x29) = *(short *)(iVar3 + 0x23) + -1;
              *(undefined1 *)(piVar8 + 5) = 1;
            }
            break;
          case 2:
            *(short *)(iVar3 + 0x29) = *(short *)(iVar3 + 0x29) + 1;
            if (*(short *)(iVar3 + 0x23) <= *(short *)(iVar3 + 0x29)) {
              *(short *)(iVar3 + 0x29) = *(short *)(iVar3 + 0x23) + -1;
              *(undefined1 *)(piVar8 + 5) = 1;
              *(undefined2 *)((int)piVar8 + 0x15) = 3;
            }
            break;
          case 3:
            *(short *)(iVar3 + 0x29) = *(short *)(iVar3 + 0x29) + -1;
            if (*(short *)(iVar3 + 0x29) < 0) {
              *(undefined2 *)(iVar3 + 0x29) = 0;
              *(undefined1 *)(piVar8 + 5) = 1;
              *(undefined2 *)((int)piVar8 + 0x15) = 2;
            }
          }
        }
      }
      local_c = local_c + 4;
      local_10 = local_10 + 0x17;
      pMVar7 = local_8;
    } while (local_c < 0x25c);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar6 = ReportDebugMessage(s_E____titans_Start_main_obj_cpp_007cc8e8,0x1ba,0,iVar3,&DAT_007a4ccc,
                             s_MainMenuTy__AnimationMainMenu_007cc9f8);
  if (iVar6 == 0) {
    RaiseInternalException(iVar3,0,s_E____titans_Start_main_obj_cpp_007cc8e8,0x1ba);
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


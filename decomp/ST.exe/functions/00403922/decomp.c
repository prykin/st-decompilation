
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
  MainMenuTy *pMVar8;
  void *unaff_EDI;
  undefined4 uStack_54;
  undefined4 auStack_50 [16];
  int iStack_10;
  int iStack_c;
  MainMenuTy *pMStack_8;
  
  uStack_54 = DAT_00858df8;
  DAT_00858df8 = &uStack_54;
  pMStack_8 = this;
  iVar3 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
  pMVar7 = pMStack_8;
  if (iVar3 == 0) {
    if (*(int *)(pMStack_8 + 0x1acf) != 0) {
      pMVar8 = pMStack_8 + 0x1aa7;
      iVar3 = 10;
      do {
        piVar1 = *(int **)pMVar8;
        if (piVar1 != (int *)0x0) {
          FUN_006b5f80(DAT_008075a8,*piVar1,piVar1[1],piVar1[2],piVar1[3]);
          FUN_006c4ac0(*(int **)pMVar8);
        }
        pMVar8 = pMVar8 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(uint *)(pMVar7 + 0x1acf) = (uint)(*(int *)(pMVar7 + 0x1acf) == 0);
    iStack_10 = 0;
    iStack_c = 0x244;
    do {
      iVar3 = *(int *)(iStack_c + DAT_0081176c);
      if (iVar3 != 0) {
        piVar1 = (int *)(iStack_10 + 0x25c + DAT_0081176c);
        if (*(char *)(iStack_10 + 0x270 + DAT_0081176c) == '\0') {
          uVar4 = piVar1[2];
        }
        else {
          uVar4 = piVar1[3];
        }
        if (uVar4 <= (uint)(*(int *)(pMVar7 + 0x61) - piVar1[4])) {
          pBVar5 = (BITMAPINFO *)FUN_0070b3a0(iVar3,(int)*(short *)(iVar3 + 0x29));
          FUN_006b5f80(DAT_008075a8,*piVar1,piVar1[1],(int)*(short *)(iVar3 + 0x2c),
                       (int)*(short *)(iVar3 + 0x2e));
          thunk_FUN_005403c0(*piVar1,piVar1[1],'\x01',pBVar5);
          if ((char)piVar1[5] != '\0') {
            *(undefined1 *)(piVar1 + 5) = 0;
          }
          piVar1[4] = *(int *)(pMStack_8 + 0x61);
          switch(*(undefined2 *)((int)piVar1 + 0x15)) {
          case 0:
            *(short *)(iVar3 + 0x29) = *(short *)(iVar3 + 0x29) + 1;
            if (*(short *)(iVar3 + 0x23) <= *(short *)(iVar3 + 0x29)) {
              *(undefined2 *)(iVar3 + 0x29) = 0;
              *(undefined1 *)(piVar1 + 5) = 1;
            }
            break;
          case 1:
            *(short *)(iVar3 + 0x29) = *(short *)(iVar3 + 0x29) + -1;
            if (*(short *)(iVar3 + 0x29) < 0) {
              *(short *)(iVar3 + 0x29) = *(short *)(iVar3 + 0x23) + -1;
              *(undefined1 *)(piVar1 + 5) = 1;
            }
            break;
          case 2:
            *(short *)(iVar3 + 0x29) = *(short *)(iVar3 + 0x29) + 1;
            if (*(short *)(iVar3 + 0x23) <= *(short *)(iVar3 + 0x29)) {
              *(short *)(iVar3 + 0x29) = *(short *)(iVar3 + 0x23) + -1;
              *(undefined1 *)(piVar1 + 5) = 1;
              *(undefined2 *)((int)piVar1 + 0x15) = 3;
            }
            break;
          case 3:
            *(short *)(iVar3 + 0x29) = *(short *)(iVar3 + 0x29) + -1;
            if (*(short *)(iVar3 + 0x29) < 0) {
              *(undefined2 *)(iVar3 + 0x29) = 0;
              *(undefined1 *)(piVar1 + 5) = 1;
              *(undefined2 *)((int)piVar1 + 0x15) = 2;
            }
          }
        }
      }
      iStack_c = iStack_c + 4;
      iStack_10 = iStack_10 + 0x17;
      pMVar7 = pMStack_8;
    } while (iStack_c < 0x25c);
    DAT_00858df8 = (undefined4 *)uStack_54;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_54;
  iVar6 = FUN_006ad4d0(s_E____titans_Start_main_obj_cpp_007cc8e8,0x1ba,0,iVar3,&DAT_007a4ccc);
  if (iVar6 == 0) {
    FUN_006a5e40(iVar3,0,0x7cc8e8,0x1ba);
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


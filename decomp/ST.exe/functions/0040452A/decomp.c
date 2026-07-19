
void __thiscall CampaignTy::DoneCampaign(CampaignTy *this)

{
  code *pcVar1;
  MMObjTy *pMVar2;
  int iVar3;
  undefined4 unaff_ESI;
  MMObjTy *pMVar4;
  void *unaff_EDI;
  int iVar5;
  InternalExceptionFrame IStack_4c;
  MMObjTy *pMStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pMStack_8 = (MMObjTy *)this;
  iVar3 = __setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pMVar4 = pMStack_8;
  if (iVar3 == 0) {
    MMObjTy::DoneMMObj(pMStack_8);
    if (DAT_00802a30 != 0) {
      if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
        FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
      }
      else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
      }
    }
    thunk_FUN_0055dbf0(DAT_0080759c,10,2);
    thunk_FUN_00568bc0(&g_sound,1);
    if (*(uint *)(DAT_0081176c + 0x2c) != 0) {
      cMf32::RecMemFree(DAT_00806780,(uint *)(DAT_0081176c + 0x2c));
    }
    if (*(MMsgTy **)(*(int *)(pMVar4 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
      MMsgTy::HideSprites(*(MMsgTy **)(*(int *)(pMVar4 + 0x1a5b) + 0x2e6));
      *(undefined4 *)(*(int *)(*(int *)(pMVar4 + 0x1a5b) + 0x2e6) + 0x1cab) = 0;
    }
    pMVar4 = pMVar4 + 0x1b13;
    iVar3 = 3;
    do {
      iVar5 = 0xf;
      do {
        if (*(undefined4 **)pMVar4 != (undefined4 *)0x0) {
          FUN_006c4a70(*(undefined4 **)pMVar4);
          *(undefined4 *)pMVar4 = 0;
        }
        if (*(int *)(pMVar4 + -0xb4) != 0) {
          cMf32::RecMemFree(DAT_00806780,(uint *)(pMVar4 + -0xb4));
        }
        pMVar2 = pMStack_8;
        pMVar4 = pMVar4 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = 4;
    pMVar4 = pMStack_8 + 0x1bd7;
    do {
      if (*(undefined4 **)pMVar4 != (undefined4 *)0x0) {
        FUN_006c4a70(*(undefined4 **)pMVar4);
        *(undefined4 *)pMVar4 = 0;
      }
      if (*(int *)(pMVar4 + -0x10) != 0) {
        cMf32::RecMemFree(DAT_00806780,(uint *)(pMVar4 + -0x10));
      }
      pMVar4 = pMVar4 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (*(int *)(pMVar2 + 0x4d) != 0) {
      FUN_006e3b50((undefined4 *)(pMVar2 + 0x3d));
    }
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Start_camp_obj_cpp_007cbcd4,0x9d,0,iVar3,&DAT_007a4ccc,
                             s_CampaignTy__DoneCampaign_007cbdd0);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_camp_obj_cpp_007cbcd4,0x9d);
  return;
}


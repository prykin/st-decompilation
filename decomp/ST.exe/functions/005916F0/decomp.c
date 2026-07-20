
/* Recovered from embedded debug metadata:
   E:\__titans\Start\camp_obj.cpp
   CampaignTy::DoneCampaign */

void __thiscall CampaignTy::DoneCampaign(CampaignTy *this)

{
  MMsgTy *this_00;
  code *pcVar1;
  MMObjTy *pMVar2;
  int iVar3;
  undefined4 unaff_ESI;
  undefined4 *puVar4;
  void *unaff_EDI;
  int iVar5;
  InternalExceptionFrame local_4c;
  MMObjTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = (MMObjTy *)this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    MMObjTy::DoneMMObj(local_8);
    if (PTR_00802a30 != (CursorClassTy *)0x0) {
      if (PTR_00802a30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)PTR_00802a30->field_00AD);
      }
      else if (PTR_00802a30->field_001C != 0xffffffff) {
        FUN_006b3af0((int *)PTR_00802a30->field_0060,PTR_00802a30->field_001C);
      }
    }
    DarkScreen(DAT_0080759c,10,2);
    thunk_FUN_00568bc0(&g_sound,1);
    if (PTR_0081176c->field_002C != 0) {
      cMf32::RecMemFree(g_cMf32_00806780,&PTR_0081176c->field_002C);
    }
    this_00 = *(MMsgTy **)(*(int *)&pMVar2[0x1d].field_0xa4 + 0x2e6);
    if (this_00 != (MMsgTy *)0x0) {
      MMsgTy::HideSprites(this_00);
      *(undefined4 *)(*(int *)(*(int *)&pMVar2[0x1d].field_0xa4 + 0x2e6) + 0x1cab) = 0;
    }
    puVar4 = (undefined4 *)&pMVar2[0x1e].field_0x79;
    iVar3 = 3;
    do {
      iVar5 = 0xf;
      do {
        if ((undefined4 *)*puVar4 != (undefined4 *)0x0) {
          FUN_006c4a70((undefined4 *)*puVar4);
          *puVar4 = 0;
        }
        if (puVar4[-0x2d] != 0) {
          cMf32::RecMemFree(g_cMf32_00806780,puVar4 + -0x2d);
        }
        pMVar2 = local_8;
        puVar4 = puVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = 4;
    puVar4 = (undefined4 *)&local_8[0x1f].field_0x5a;
    do {
      if ((undefined4 *)*puVar4 != (undefined4 *)0x0) {
        FUN_006c4a70((undefined4 *)*puVar4);
        *puVar4 = 0;
      }
      if (puVar4[-4] != 0) {
        cMf32::RecMemFree(g_cMf32_00806780,puVar4 + -4);
      }
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (*(int *)&pMVar2->field_0x4d != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&pMVar2->field_0x3d);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
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


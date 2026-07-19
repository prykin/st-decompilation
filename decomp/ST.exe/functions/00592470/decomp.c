
/* Recovered from embedded debug metadata:
   E:\__titans\Start\camp_obj.cpp
   CampaignTy::CloseButtons */

void __thiscall CampaignTy::CloseButtons(CampaignTy *this)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  undefined4 unaff_ESI;
  MMObjTy *pMVar4;
  MMObjTy *this_00;
  void *unaff_EDI;
  int iVar5;
  InternalExceptionFrame local_4c;
  MMObjTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = (MMObjTy *)this;
  iVar2 = __setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar2 == 0) {
    MMObjTy::CloseButtons(local_8);
    iVar2 = 0;
    if (this_00[0x9a] != (MMObjTy)0x0) {
      iVar5 = 0x96;
      pMVar4 = this_00 + 0x123;
      do {
        DVar3 = timeGetTime();
        *(DWORD *)(pMVar4 + 4) = DVar3;
        *(int *)pMVar4 = iVar5;
        pMVar4[-0x68] = (MMObjTy)0x1;
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + 0x96;
        pMVar4 = pMVar4 + 0x1fb;
        this_00 = local_8;
      } while (iVar2 < (int)(uint)(byte)local_8[0x9a]);
    }
    this_00[0x65] = (MMObjTy)0x4;
    thunk_FUN_005b6730(this_00,2,'\x01',-1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Start_camp_obj_cpp_007cbcd4,0x13c,0,iVar2,&DAT_007a4ccc,
                             s_CampaignTy__CloseButtons_007cbe5c);
  if (iVar5 == 0) {
    RaiseInternalException(iVar2,0,s_E____titans_Start_camp_obj_cpp_007cbcd4,0x13c);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


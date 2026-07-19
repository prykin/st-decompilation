
/* Recovered from embedded debug metadata:
   E:\__titans\Start\camp_obj.cpp
   CampaignTy::CloseButtons */

void __thiscall CampaignTy::CloseButtons(CampaignTy *this)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  undefined4 unaff_ESI;
  int *piVar4;
  CampaignTy *this_00;
  void *unaff_EDI;
  int iVar5;
  InternalExceptionFrame local_4c;
  CampaignTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar2 == 0) {
    MMObjTy::CloseButtons((MMObjTy *)local_8);
    iVar2 = 0;
    if (this_00->field_009A != '\0') {
      iVar5 = 0x96;
      piVar4 = &this_00->field_0123;
      do {
        DVar3 = timeGetTime();
        piVar4[1] = DVar3;
        *piVar4 = iVar5;
        *(undefined1 *)(piVar4 + -0x1a) = 1;
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + 0x96;
        piVar4 = (int *)((int)piVar4 + 0x1fb);
        this_00 = local_8;
      } while (iVar2 < (int)(uint)(byte)local_8->field_009A);
    }
    this_00->field_0065 = 4;
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


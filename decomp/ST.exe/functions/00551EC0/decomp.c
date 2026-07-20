
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::PaintIndicators */

void __thiscall TradePanelTy::PaintIndicators(TradePanelTy *this)

{
  undefined1 *puVar1;
  ushort uVar2;
  code *pcVar3;
  TradePanelTy *pTVar4;
  int iVar5;
  LPSTR text;
  ushort *puVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  InternalExceptionFrame local_54;
  TradePanelTy *local_10;
  int local_c;
  int local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pTVar4 = local_10;
  if (iVar5 == 0) {
    puVar1 = &local_10->field_0x18d;
    wsprintfA(puVar1,&DAT_007c28fc,
              (uint)*(ushort *)(&local_10->field_0x1bc + (uint)(byte)local_10->field_01D0 * 2));
    ccFntTy::SetSurf(pTVar4->field_01DD,pTVar4->field_0068,0,0x67,0x36,0x23,0xc);
    ccFntTy::WrStr(pTVar4->field_01DD,(uint *)puVar1,-1,-1,-(uint)(pTVar4->field_01D0 != '\0') & 2);
    if (pTVar4->field_01BB == '\0') {
      local_8 = 0;
      iVar5 = 0xb4;
      local_c = 2;
      do {
        puVar11 = (undefined4 *)0x0;
        iVar10 = 0;
        iVar9 = 1;
        bVar8 = 0;
        uVar7 = 0xffffffff;
        text = thunk_FUN_00571240(s_BKG_AMOUNTRC_007c874c,0);
        puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                           (DAT_00806794,CASE_1,text,uVar7,bVar8,iVar9,iVar10,puVar11);
        DibPut((undefined4 *)pTVar4->field_0068,iVar5 + -3,0x45,'\x01',(byte *)puVar6);
        bVar8 = pTVar4->field_01D0;
        uVar2 = *(ushort *)((int)&pTVar4->field_01AB + (local_8 + (uint)bVar8 * 2) * 4 + 2);
        if (uVar2 == 0) {
          iVar9 = 0;
        }
        else if ((DAT_0080874e == '\x03') && (bVar8 == 0)) {
          iVar9 = (uint)*(ushort *)&pTVar4->field_0x1bc * (uint)uVar2;
        }
        else {
          iVar9 = (int)((ulonglong)*(ushort *)(&pTVar4->field_0x1bc + (uint)bVar8 * 2) /
                       (ulonglong)(longlong)(int)(uint)uVar2);
        }
        wsprintfA(puVar1,&DAT_007c28fc,iVar9);
        ccFntTy::SetSurf(pTVar4->field_01DD,pTVar4->field_0068,0,iVar5,0x48,0x23,0xc);
        ccFntTy::WrStr(pTVar4->field_01DD,(uint *)puVar1,-1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 5);
        local_8 = local_8 + 1;
        iVar5 = iVar5 + 0x39;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar9 = ReportDebugMessage(s_E____titans_Andrey_tradecen_cpp_007c8624,0x111,0,iVar5,&DAT_007a4ccc,
                             s_TradePanelTy__PaintIndicators_007c8728);
  if (iVar9 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  RaiseInternalException(iVar5,0,s_E____titans_Andrey_tradecen_cpp_007c8624,0x111);
  return;
}


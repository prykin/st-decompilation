
void __thiscall STTorpC::RestoreTorpData(STTorpC *this,int param_1)

{
  code *pcVar1;
  STTorpC *pSVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_ESI;
  undefined4 *puVar6;
  void *unaff_EDI;
  STTorpC *pSVar7;
  InternalExceptionFrame IStack_50;
  STTorpC *pSStack_c;
  int iStack_8;
  
  iStack_8 = param_1;
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  pSStack_c = this;
  iVar3 = __setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = pSStack_c;
  if (iVar3 == 0) {
    puVar6 = (undefined4 *)(iStack_8 + 0x14);
    pSVar7 = pSStack_c + 0x245;
    for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pSVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      pSVar7 = pSVar7 + 4;
    }
    *(undefined4 *)(pSStack_c + 0x231) = *(undefined4 *)(iStack_8 + 0x58);
    *(undefined4 *)(pSStack_c + 0x235) = *(undefined4 *)(iStack_8 + 0x5c);
    *(undefined4 *)(pSStack_c + 0x239) = *(undefined4 *)(iStack_8 + 0x60);
    *(undefined4 *)(pSStack_c + 0x23d) = *(undefined4 *)(iStack_8 + 100);
    uVar4 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)(iStack_8 + 0x68) + iStack_8));
    *(undefined4 *)(pSVar2 + 0x241) = uVar4;
    g_currentExceptionFrame = IStack_50.previous;
    return;
  }
  g_currentExceptionFrame = IStack_50.previous;
  iVar5 = ReportDebugMessage(s_E____titans_nick_to_torp_cpp_007d25c0,0x4e5,0,iVar3,&DAT_007a4ccc,
                             s_STTorpC__RestoreTorpData_007d2654);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_nick_to_torp_cpp_007d25c0,0x4e6);
  return;
}


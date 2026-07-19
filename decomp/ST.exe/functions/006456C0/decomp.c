
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_torp.cpp
   STTorpC::RestoreTorpData */

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
  undefined4 *puVar7;
  InternalExceptionFrame local_50;
  STTorpC *local_c;
  int local_8;
  
  local_8 = param_1;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_c;
  if (iVar3 == 0) {
    puVar6 = (undefined4 *)(local_8 + 0x14);
    puVar7 = (undefined4 *)&local_c->field_0x245;
    for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    *(undefined4 *)&local_c->field_0x231 = *(undefined4 *)(local_8 + 0x58);
    local_c->field_0235 = *(undefined4 *)(local_8 + 0x5c);
    local_c->field_0239 = *(undefined4 *)(local_8 + 0x60);
    local_c->field_023D = *(undefined4 *)(local_8 + 100);
    uVar4 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)(local_8 + 0x68) + local_8));
    pSVar2->field_0241 = uVar4;
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
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


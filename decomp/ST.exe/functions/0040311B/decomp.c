
void __thiscall CPanelTy::OutText(CPanelTy *this,int *param_1,undefined4 param_2)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_50;
  CPanelTy *pCStack_c;
  uint uStack_8;
  
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  pCStack_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pCVar2 = pCStack_c;
  if (iVar3 == 0) {
    puVar4 = ccFntTy::FormIndentSarr
                       (*(ccFntTy **)(pCStack_c + 0x1d0),*param_1,(uint *)s________________007c21d8,
                        (uint *)&DAT_007c21ec,*(int *)(pCStack_c + 0x104),0,0xffffffff,(char *)0x0,1
                       );
    if ((byte *)*param_1 != (byte *)0x0) {
      FUN_006b5570((byte *)*param_1);
    }
    if (puVar4 == (uint *)0x0) {
      puVar4 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
      *param_1 = (int)puVar4;
    }
    else {
      *param_1 = (int)puVar4;
    }
    iVar3 = *(int *)(pCVar2 + 0x1b0);
    uStack_8 = *(uint *)(iVar3 + 0x14);
    if (uStack_8 == 0) {
      uStack_8 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(iVar3 + 8);
    }
    puVar5 = (undefined4 *)FUN_006b4fa0(iVar3);
    for (uVar7 = uStack_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar7 = uStack_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    ccFntTy::WrSarr(*(ccFntTy **)(pCVar2 + 0x1d0),*param_1,0,-1,0,0,0);
    FUN_006b5570((byte *)*param_1);
    *(undefined4 *)(pCVar2 + 0x243) = *(undefined4 *)(pCVar2 + 0x9a0);
    *(undefined4 *)(pCVar2 + 0x247) = param_2;
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(pCVar2 + 0x178));
    g_currentExceptionFrame = IStack_50.previous;
    return;
  }
  g_currentExceptionFrame = IStack_50.previous;
  iVar6 = ReportDebugMessage(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x32f,0,iVar3,&DAT_007a4ccc,
                             s_CPanelTy__OutText__str_arr__time_007c21b0);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x32f);
  return;
}



/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helpstr.cpp
   HelpStringTy::GetMessage */

undefined4 __thiscall HelpStringTy::GetMessage(HelpStringTy *this,int param_1)

{
  code *pcVar1;
  HelpStringTy *this_00;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  ccFntTy *this_01;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  HelpStringTy *pHVar8;
  InternalExceptionFrame local_4c;
  HelpStringTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar2 == 0) {
    switch(*(undefined4 *)(param_1 + 0x10)) {
    case 0:
      if ((*(int *)(local_8 + 0x12e) != 0) &&
         (iVar2 = FUN_006e51b0(*(int *)(local_8 + 0x10)),
         *(uint *)(this_00 + 0x126) <= (uint)(iVar2 - *(int *)(this_00 + 0x122)))) {
        pHVar8 = this_00 + 0x18;
        for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined4 *)pHVar8 = 0;
          pHVar8 = pHVar8 + 4;
        }
        OutStr(this_00);
        this_00[0x11c] = (HelpStringTy)0x0;
        *(undefined4 *)(this_00 + 0x12e) = 0;
      }
      break;
    case 2:
      puVar3 = ccFntTy::operator(DAT_00802a28,0x19d,*(int *)(DAT_00802a28 + 0x30));
      *(undefined4 **)(this_00 + 0x11e) = puVar3;
      puVar3[0x16] = 0;
      puVar3[0x17] = 0;
      puVar3 = (undefined4 *)(DAT_0080679c + 0x28);
      iVar2 = 1;
      uVar4 = FUN_006b4fe0(DAT_0080679c);
      iVar2 = FUN_006b50c0((DAT_00806730 - ((-(uint)(DAT_0080874e != '\x03') & 0xfffffff6) + 0x1e))
                           + -0x87,0x12,(uint)*(ushort *)(DAT_0080679c + 0xe),uVar4,puVar3,iVar2);
      *(int *)(this_00 + 0x12a) = iVar2;
      uVar4 = *(uint *)(iVar2 + 0x14);
      if (uVar4 == 0) {
        uVar4 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar2 + 8);
      }
      puVar3 = (undefined4 *)FUN_006b4fa0(iVar2);
      for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar3 = 0;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      DAT_00801694 = this_00;
      break;
    case 3:
      DAT_00801694 = (HelpStringTy *)0x0;
      if (*(uint **)(local_8 + 0x11e) != (uint *)0x0) {
        ccFntTy::operator(this_01,*(uint **)(local_8 + 0x11e));
        *(undefined4 *)(this_00 + 0x11e) = 0;
      }
      if (*(int *)(this_00 + 0x12a) != 0) {
        FUN_006ab060((undefined4 *)(this_00 + 0x12a));
      }
      break;
    case 5:
      OutStr(local_8);
    }
    g_currentExceptionFrame = local_4c.previous;
    uVar5 = FUN_006e5fd0();
    return uVar5;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = ReportDebugMessage(s_E____titans_Andrey_helpstr_cpp_007c3e4c,0x4d,0,iVar2,&DAT_007a4ccc,
                             s_HelpStringTy__GetMessage_007c3e90);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Andrey_helpstr_cpp_007c3e4c,0x4d);
  return 0xffff;
}


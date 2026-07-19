
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helpstr.cpp
   HelpStringTy::GetMessage */

undefined4 __thiscall HelpStringTy::GetMessage(HelpStringTy *this,int param_1)

{
  code *pcVar1;
  HelpStringTy *this_00;
  int iVar2;
  ccFntTy *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  ccFntTy *this_01;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
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
      if ((local_8->field_012E != 0) &&
         (iVar2 = FUN_006e51b0(local_8->field_0010),
         (uint)this_00->field_0126 <= (uint)(iVar2 - this_00->field_0122))) {
        puVar5 = (undefined4 *)&this_00->field_0018;
        for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        OutStr(this_00);
        this_00->field_011C = 0;
        this_00->field_012E = 0;
      }
      break;
    case 2:
      pcVar3 = (ccFntTy *)ccFntTy::operator(DAT_00802a28,0x19d,*(int *)&DAT_00802a28->field_0x30);
      this_00->field_011E = pcVar3;
      pcVar3->field_0058 = 0;
      pcVar3->field_005C = 0;
      puVar5 = (undefined4 *)(DAT_0080679c + 0x28);
      iVar2 = 1;
      uVar4 = FUN_006b4fe0(DAT_0080679c);
      iVar2 = FUN_006b50c0((DAT_00806730 - ((-(uint)(DAT_0080874e != '\x03') & 0xfffffff6) + 0x1e))
                           + -0x87,0x12,(uint)*(ushort *)(DAT_0080679c + 0xe),uVar4,puVar5,iVar2);
      this_00->field_012A = iVar2;
      uVar4 = *(uint *)(iVar2 + 0x14);
      if (uVar4 == 0) {
        uVar4 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar2 + 8);
      }
      puVar5 = (undefined4 *)FUN_006b4fa0(iVar2);
      for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      DAT_00801694 = this_00;
      break;
    case 3:
      DAT_00801694 = (HelpStringTy *)0x0;
      if (local_8->field_011E != (ccFntTy *)0x0) {
        ccFntTy::operator(this_01,(uint *)local_8->field_011E);
        this_00->field_011E = (ccFntTy *)0x0;
      }
      if (this_00->field_012A != 0) {
        FUN_006ab060(&this_00->field_012A);
      }
      break;
    case 5:
      OutStr(local_8);
    }
    g_currentExceptionFrame = local_4c.previous;
    uVar6 = FUN_006e5fd0();
    return uVar6;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar7 = ReportDebugMessage(s_E____titans_Andrey_helpstr_cpp_007c3e4c,0x4d,0,iVar2,&DAT_007a4ccc,
                             s_HelpStringTy__GetMessage_007c3e90);
  if (iVar7 != 0) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Andrey_helpstr_cpp_007c3e4c,0x4d);
  return 0xffff;
}


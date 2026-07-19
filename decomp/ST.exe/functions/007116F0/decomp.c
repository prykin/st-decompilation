
/* Recovered from embedded debug metadata:
   E:\Ourlib\mfcfnt.cpp
   ccFntTy::WrCh */

int __thiscall ccFntTy::WrCh(ccFntTy *this,byte *param_1,uint param_2)

{
  code *pcVar1;
  ccFntTy *this_00;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar9;
  byte bVar10;
  InternalExceptionFrame local_4c;
  ccFntTy *local_8;
  
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar2 == 0) {
    if (((local_8->field_00A0 != 0) && (local_8->field_00A8 != 0)) &&
       (local_8->field_00AC != *(int *)(local_8->field_00A8 + 0xac))) {
      FUN_00710790((int)local_8);
    }
    uVar8 = ((int)*(short *)this_00->field_009A <= (int)param_2) - 1 & param_2;
    if ((this_00->field_0072 == 0) || (this_00->field_0076 == 0)) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x65b);
    }
    uVar3 = FUN_00710fb0(this_00,param_1);
    iVar2 = this_00->field_009A;
    bVar10 = *(byte *)(iVar2 + 0x42);
    iVar9 = (uVar3 & 0xffff) * 10;
    iVar4 = (int)*(short *)(iVar9 + 0x6c + iVar2);
    iVar7 = (int)*(short *)(iVar9 + 0x6a + iVar2);
    iVar5 = (int)*(short *)(iVar9 + 0x68 + iVar2);
    iVar6 = (int)*(short *)(iVar9 + 0x66 + iVar2);
    iVar2 = FUN_006b4fa0((&this_00->field_0004)[uVar8]);
    Library::DKW::WGR::FUN_006b5110
              (this_00->field_0072,this_00->field_0076,this_00->field_0060 + this_00->field_0050,
               this_00->field_0064 + this_00->field_0054,(&this_00->field_0004)[uVar8],iVar2,iVar6,
               iVar5,iVar7,iVar4,bVar10);
    this_00->field_0050 =
         this_00->field_0050 +
         (int)*(short *)(this_00->field_009A + 0x6a + iVar9) + this_00->field_0058;
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E__Ourlib_mfcfnt_cpp_007f0190,0x666,0,iVar2,&DAT_007a4ccc,
                             s_ccFntTy__WrCh_007f0278);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E__Ourlib_mfcfnt_cpp_007f0190,0x668);
  return iVar2;
}


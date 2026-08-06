#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/helpstr.cpp

// 0051F8F0 HelpStringTy::OutStr
#line 4 "decomp/ST.exe/functions/0051F8F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helpstr.cpp
   HelpStringTy::OutStr

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_0051F8F0(HelpStringTy *this)

{
  ushort *puVar1;
  HelpStringTy *pHVar3;
  int iVar4;
  byte *puVar5;
  int iVar6;
  uint uVar8;
  InternalExceptionFrame local_4c;
  HelpStringTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar4 == 0) {
    iVar4 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffff6) + 0x1e;
    st::fn_006B5F80((int *)g_ddxContext_008075A8,iVar4,DAT_00806734 + -0x1a,
                 (g_nWidth_00806730 - iVar4) + -0x87,0x12);
    pHVar3 = local_8;
    puVar1 = local_8->field_012A;
    uVar8 = *(uint *)(puVar1 + 10);
    if (uVar8 == 0) {
      uVar8 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(puVar1 + 4);
    }
    puVar5 = (byte *)st::fn_006B4FA0((int *)puVar1);
    memset(puVar5, 0, uVar8); /* compiler bulk-zero initialization */
    if (pHVar3->field_0018 != '\0') {
      st::fn_00710A90(pHVar3->field_011E,(int)pHVar3->field_012A,0,0,0,0,0);
      st::fn_007119C0(pHVar3->field_011E,(uint *)&pHVar3->field_0018,0,-1,
                     (uint)(byte)pHVar3->field_011D);
    }
    st::fn_00403738((-(uint)(DAT_0080874e != '\x03') & 0xfffffff6) + 0x1e,DAT_00806734 + -0x1a,'\x01',
           (BITMAPINFO *)pHVar3->field_012A);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helpstr.cpp",0x1b,0,iVar4,"%s",
                             "HelpStringTy::OutStr");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,"E:\\__titans\\Andrey\\helpstr.cpp",0x1b);
  return;
}

// 0051FBA0 HelpStringTy::GetMessage
#line 4 "decomp/ST.exe/functions/0051FBA0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helpstr.cpp
   HelpStringTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0051FBA0; family_names=HelpStringTy::GetMessage; ret4=2;
   direct_offsets={10:2,14:1,18:1,1c:0} */

int __thiscall st::fn_0051FBA0(HelpStringTy *this,STMessage *message)

{
  HelpStringTy *this_00;
  int iVar2;
  ccFntTy *pcVar3;
  int uVar4;
  ushort *puVar4;
  byte *puVar5;
  DWORD DVar6;
  int iVar7;
  uint uVar9;
  InternalExceptionFrame local_4c;
  HelpStringTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    switch(message->id) {
    case MESS_ID_NONE:
      if ((local_8->field_012E != 0) &&
         (DVar6 = st::fn_006E51B0(local_8->field_0010),
         this_00->field_0126 <= DVar6 - this_00->field_0122)) {
        memset(&this_00->field_0018, 0, 0x104); /* compiler bulk-zero initialization */
        st::fn_004015FA(this_00);
        this_00->field_011C = 0;
        this_00->field_012E = 0;
      }
      break;
    case MESS_ID_CREATE:
      pcVar3 = (ccFntTy *)st::fn_0070DF00(0x19d,(ccFntTy *)g_interSystem_00802A28->field_0030);
      this_00->field_011E = pcVar3;
      pcVar3->field_0058 = 0;
      pcVar3->field_005C = 0;
      puVar5 = (byte *)(DAT_0080679c + 0x28);
      iVar2 = 1;
      uVar4 = st::fn_006B4FE0(DAT_0080679c);
      puVar4 = (ushort *)
               st::fn_006B50C0((g_nWidth_00806730 -
                            ((-(uint)(DAT_0080874e != '\x03') & 0xfffffff6) + 0x1e)) + -0x87,0x12,
                            (uint)*(ushort *)(DAT_0080679c + 0xe),uVar4,puVar5,iVar2);
      this_00->field_012A = puVar4;
      uVar9 = *(uint *)(puVar4 + 10);
      if (uVar9 == 0) {
        uVar9 = ((uint)puVar4[7] * *(int *)(puVar4 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(puVar4 + 4);
      }
      puVar5 = (byte *)st::fn_006B4FA0((int *)puVar4);
      memset(puVar5, 0, uVar9); /* compiler bulk-zero initialization */
      DAT_00801694 = this_00;
      break;
    case MESS_SHARED_0003:
      DAT_00801694 = nullptr;
      if (local_8->field_011E != nullptr) {
        st::fn_00710560((uint *)local_8->field_011E);
        this_00->field_011E = nullptr;
      }
      if (this_00->field_012A != nullptr) {
        st::fn_006AB060(&this_00->field_012A);
      }
      break;
    case MESS_SHARED_0005:
      st::fn_004015FA(local_8);
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar2 = st::fn_006E5FD0(this_00,message);
    return iVar2;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar7 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helpstr.cpp",0x4d,0,iVar2,"%s",
                             "HelpStringTy::GetMessage");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,"E:\\__titans\\Andrey\\helpstr.cpp",0x4d);
  return 0xffff;
}


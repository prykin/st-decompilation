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
  int iVar6;
  byte *puVar7;
  int iVar5;
  uint uVar9;
  InternalExceptionFrame local_4c;
  HelpStringTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar4 == 0) {
    iVar6 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffff6) + 0x1e;
    st::fn_006B5F80((int *)g_ddxContext_008075A8,iVar6,DAT_00806734 + -0x1a,
                 (g_nWidth_00806730 - iVar6) + -0x87,0x12);
    pHVar3 = local_8;
    puVar1 = local_8->field_012A;
    uVar9 = *(uint *)(puVar1 + 10);
    if (uVar9 == 0) {
      uVar9 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(puVar1 + 4);
    }
    puVar7 = (byte *)st::fn_006B4FA0((int *)puVar1);
    memset(puVar7, 0, uVar9); /* compiler bulk-zero initialization */
    if (pHVar3->field_0018 != '\0') {
      st::fn_00710A90(pHVar3->field_011E,(int)pHVar3->field_012A,0,0,0,0,0);
      st::fn_007119C0(pHVar3->field_011E,&pHVar3->field_0018,0,-1,(uint)(byte)pHVar3->field_011D);
    }
    st::fn_00403738((-(uint)(DAT_0080874e != '\x03') & 0xfffffff6) + 0x1e,DAT_00806734 + -0x1a,'\x01',
           (BITMAPINFO *)pHVar3->field_012A);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helpstr.cpp"),0x1b,0,iVar4,st::mutable_c_string("%s"),
                             "HelpStringTy::OutStr");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\helpstr.cpp"),0x1b);
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
  int local_EAX_36;
  ccFntTy *pcVar2;
  int uVar4;
  ushort *puVar3;
  byte *puVar4;
  DWORD DVar5;
  int iVar2;
  int iVar6;
  int iVar7;
  uint uVar9;
  char *pcVar10;
  InternalExceptionFrame local_4c;
  HelpStringTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  local_EAX_36 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (local_EAX_36 == 0) {
    switch(message->id) {
    case MESS_ID_NONE:
      if ((local_8->field_012E != 0) &&
         (DVar5 = st::fn_006E51B0(local_8->field_0010),
         this_00->field_0126 <= DVar5 - this_00->field_0122)) {
        pcVar10 = &this_00->field_0018;
        for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined4 *)pcVar10 = 0;
          pcVar10 = pcVar10 + 4;
        }
        st::fn_004015FA(this_00);
        this_00->field_011C = 0;
        this_00->field_012E = 0;
      }
      break;
    case MESS_ID_CREATE:
      pcVar2 = (ccFntTy *)st::fn_0070DF00(0x19d,(ccFntTy *)g_interSystem_00802A28->field_0030);
      this_00->field_011E = pcVar2;
      pcVar2->field_0058 = 0;
      pcVar2->field_005C = 0;
      puVar3 = PTR_0080679c + 0x14;
      iVar7 = 1;
      uVar4 = st::fn_006B4FE0((int)PTR_0080679c);
      puVar3 = (ushort *)
               st::fn_006B50C0((g_nWidth_00806730 -
                            ((-(uint)(DAT_0080874e != '\x03') & 0xfffffff6) + 0x1e)) + -0x87,0x12,
                            (uint)PTR_0080679c[7],uVar4,(undefined4 *)puVar3,iVar7);
      this_00->field_012A = puVar3;
      uVar9 = *(uint *)(puVar3 + 10);
      if (uVar9 == 0) {
        uVar9 = ((uint)puVar3[7] * *(int *)(puVar3 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(puVar3 + 4);
      }
      puVar4 = (byte *)st::fn_006B4FA0((int *)puVar3);
      memset(puVar4, 0, uVar9); /* compiler bulk-zero initialization */
      DAT_00801694 = st::machine_word_boundary_cast<undefined4>(this_00);
      break;
    case MESS_SHARED_0003:
      DAT_00801694 = static_cast<undefined4>(0);
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
  iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helpstr.cpp"),0x4d,0,local_EAX_36,
                             st::mutable_c_string("%s"),"HelpStringTy::GetMessage");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(local_EAX_36,0,st::mutable_c_string("E:\\__titans\\Andrey\\helpstr.cpp"),0x4d);
  return 0xffff;
}


#include "st/generated.hpp"
// Generated translation unit: source/original/Artem/TLO_bcomm.cpp

// 004BE500 TLOBaseTy::SetActivity
#line 4 "decomp/ST.exe/functions/004BE500/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_bcomm.cpp
   TLOBaseTy::SetActivity */

void __thiscall st::fn_004BE500(TLOBaseTy *this,int param_1)

{
  int iVar1;
  TLOBaseTyVTable *pTVar2;
  TLOBaseTy *this_00;
  dword dVar4;
  int iVar4;
  int local_EAX_123;
  int uVar5;
  int iVar5;
  InternalExceptionFrame local_4c;
  TLOBaseTy *local_8;

  local_8 = this;
  /* ST_CALLSITE[004BE514]: CALL dword ptr [EAX + 0xf8] */
  if ((param_1 != 0) && (dVar4 = this->slot_F8(), dVar4 == 0)) {
    return;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 == 0) {
    iVar1 = local_8->field_021D;
    st::fn_00404E8A(local_8,param_1);
    if ((((this_00->field_021D != 0) && (iVar1 == 0)) &&
        /* ST_CALLSITE[004BE57B]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        (local_EAX_123 = st::fn_004049B7((char)this_00->field_023D),
        *(int *)(&DAT_00795c00 + ((uint)(byte)local_EAX_123 + this_00->field_0235 * 3) * 4) != 0))
       && (this_00->field_0024 == (byte *)(uint)(byte)this_00->field_0010->field_112D)) {
      pTVar2 = this_00->vtable;
      /* ST_CALLSITE[004BE5BF]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      uVar5 = st::fn_004049B7((char)this_00->field_023D);
      /* ST_CALLSITE[004BE5E3]: CALL dword ptr [EDI + 0x90] */
      (*pTVar2->vfunc_90)(this_00,4,
                          (short)*(undefined4 *)
                                  (&DAT_00795c00 + ((uint)(byte)uVar5 + this_00->field_0235 * 3) * 4
                                  ));
    }
    if (*(int *)(&DAT_00794d94 + this_00->field_0235 * 4) != 0) {
      /* ST_CALLSITE[004BE5FC]: CALL 0x00404edf; direct=00404EDF TLOBaseTy::sub_004C2F70 */
      st::fn_00404EDF(this_00);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Artem\\TLO_bcomm.cpp"),0x2f,0,iVar4,st::mutable_c_string("%s"),
                             "TLOBaseTy::SetActivity");
  if (iVar5 == 0) {
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Artem\\TLO_bcomm.cpp"),0x30);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}


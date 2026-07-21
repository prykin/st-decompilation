
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_bcomm.cpp
   TLOBaseTy::SetActivity */

void __thiscall TLOBaseTy::SetActivity(TLOBaseTy *this,int param_1)

{
  TLOBaseTyVTable *pTVar1;
  code *pcVar2;
  TLOBaseTy *pTVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  TLOBaseTy *local_8;
  
  local_8 = this;
  if ((param_1 != 0) && (iVar4 = (*this->vtable->vfunc_F8)(), iVar4 == 0)) {
    return;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pTVar3 = local_8;
  if (iVar4 == 0) {
    iVar4 = local_8->field_021D;
    thunk_FUN_0041dd00(local_8,param_1);
    if ((((pTVar3->field_021D != 0) && (iVar4 == 0)) &&
        (uVar5 = GetPlayerRaceId(pTVar3->field_023D),
        *(int *)(&DAT_00795c00 + ((uVar5 & 0xff) + pTVar3->field_0235 * 3) * 4) != 0)) &&
       (*(uint *)&pTVar3->field_0x24 == (uint)*(byte *)(pTVar3->field_0010 + 0x112d))) {
      pTVar1 = pTVar3->vtable;
      uVar5 = GetPlayerRaceId(pTVar3->field_023D);
      (*pTVar1->vfunc_90)(4,*(undefined4 *)
                             (&DAT_00795c00 + ((uVar5 & 0xff) + pTVar3->field_0235 * 3) * 4));
    }
    if (*(int *)(&DAT_00794d94 + pTVar3->field_0235 * 4) != 0) {
      thunk_FUN_004c2f70((AnonShape_004C2F70_6CAAACC0 *)pTVar3);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = ReportDebugMessage(s_E____titans_Artem_TLO_bcomm_cpp_007ac8a8,0x2f,0,iVar4,&DAT_007a4ccc,
                             s_TLOBaseTy__SetActivity_007ac8d0);
  if (iVar6 == 0) {
    RaiseInternalException(iVar4,0,s_E____titans_Artem_TLO_bcomm_cpp_007ac8a8,0x30);
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


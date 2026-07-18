
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_bcomm.cpp
   TLOBaseTy::SetActivity */

void __thiscall TLOBaseTy::SetActivity(TLOBaseTy *this,int param_1)

{
  code *pcVar1;
  TLOBaseTy *pTVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  TLOBaseTy *local_8;
  
  local_8 = this;
  if ((param_1 != 0) && (iVar3 = (**(code **)(*(int *)this + 0xf8))(), iVar3 == 0)) {
    return;
  }
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  pTVar2 = local_8;
  if (iVar3 == 0) {
    iVar3 = *(int *)(local_8 + 0x21d);
    thunk_FUN_0041dd00(local_8,param_1);
    if ((((*(int *)(pTVar2 + 0x21d) != 0) && (iVar3 == 0)) &&
        (uVar4 = thunk_FUN_004406c0((char)pTVar2[0x23d]),
        *(int *)(&DAT_00795c00 + ((uVar4 & 0xff) + *(int *)(pTVar2 + 0x235) * 3) * 4) != 0)) &&
       (*(uint *)(pTVar2 + 0x24) == (uint)*(byte *)(*(int *)(pTVar2 + 0x10) + 0x112d))) {
      iVar3 = *(int *)pTVar2;
      uVar4 = thunk_FUN_004406c0((char)pTVar2[0x23d]);
      (**(code **)(iVar3 + 0x90))
                (4,*(undefined4 *)
                    (&DAT_00795c00 + ((uVar4 & 0xff) + *(int *)(pTVar2 + 0x235) * 3) * 4));
    }
    if (*(int *)(&DAT_00794d94 + *(int *)(pTVar2 + 0x235) * 4) != 0) {
      thunk_FUN_004c2f70((int)pTVar2);
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar5 = FUN_006ad4d0(s_E____titans_Artem_TLO_bcomm_cpp_007ac8a8,0x2f,0,iVar3,&DAT_007a4ccc);
  if (iVar5 == 0) {
    FUN_006a5e40(iVar3,0,0x7ac8a8,0x30);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


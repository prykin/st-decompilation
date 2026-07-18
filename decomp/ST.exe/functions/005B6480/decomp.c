
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmenuobj.cpp
   MMObjTy::CloseButtons */

void __thiscall MMObjTy::CloseButtons(MMObjTy *this)

{
  code *pcVar1;
  MMObjTy *pMVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  MMObjTy *pMVar5;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  MMObjTy *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = this;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    iVar3 = 0xd;
    pMVar5 = local_8 + 0x66;
    do {
      if (*(uint *)pMVar5 != 0) {
        FUN_006e56b0(*(void **)(pMVar2 + 0xc),*(uint *)pMVar5);
      }
      *(uint *)pMVar5 = 0;
      pMVar5 = pMVar5 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Start_mmenuobj_cpp_007cca38,0x104,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7cca38,0x104);
  return;
}


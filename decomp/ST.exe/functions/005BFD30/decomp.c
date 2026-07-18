
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::PaintMainScore */

void __thiscall MReportTy::PaintMainScore(MReportTy *this,int param_1,uint param_2,int param_3)

{
  code *pcVar1;
  MReportTy *pMVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *local_54;
  undefined4 local_50 [16];
  int local_10;
  MReportTy *local_c;
  uint local_8;
  
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  local_c = this;
  iVar3 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  pMVar2 = local_c;
  if (iVar3 == 0) {
    if ((param_2 != 0) && (uVar4 = (uint)(param_1 * 0x28) / param_2, uVar4 != 0)) {
      iVar3 = 0x177;
      local_10 = param_3 * 0x26 + 0x38;
      local_8 = uVar4;
      do {
        thunk_FUN_00540760(*(undefined4 **)(pMVar2 + 0x73),iVar3,local_10,'\x06',
                           *(byte **)(pMVar2 + 0x6f));
        iVar3 = iVar3 + 6;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
    wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007cd004,param_1);
    iVar3 = param_3 * 0x26 + 0x30;
    FUN_006b4170(*(int *)(pMVar2 + 0x73),0,0x280,iVar3,0x50,0x1c,0);
    FUN_006b5ee0(*(int *)(pMVar2 + 0x73),0,0x280,iVar3,0x50,0x1c,0x18,0xd);
    ccFntTy::SetSurf(*(ccFntTy **)(pMVar2 + 0x8b),*(int *)(pMVar2 + 0x73),0,0x280,iVar3,0x50,0x1c);
    ccFntTy::WrStr(*(ccFntTy **)(pMVar2 + 0x8b),&DAT_0080f33a,-1,-1,8);
    DAT_00858df8 = local_54;
    return;
  }
  DAT_00858df8 = local_54;
  iVar5 = FUN_006ad4d0(s_E____titans_Start_rpt_obj_cpp_007ccec8,0x208,0,iVar3,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7ccec8,0x208);
  return;
}


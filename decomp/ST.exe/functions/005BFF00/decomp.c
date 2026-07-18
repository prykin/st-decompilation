
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::PaintObjScore */

void __thiscall
MReportTy::PaintObjScore(MReportTy *this,int param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  code *pcVar2;
  MReportTy *pMVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *local_50;
  undefined4 local_4c [16];
  MReportTy *local_c;
  uint local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  local_c = this;
  iVar4 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  pMVar3 = local_c;
  if (iVar4 == 0) {
    if (param_1 != -1) {
      cVar1 = *(char *)((int)&DAT_0080c83a + (byte)local_c[0x69] + 3);
      local_8 = CONCAT31(local_8._1_3_,cVar1);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c28fc,param_1);
      ccFntTy::SetSurf(*(ccFntTy **)(pMVar3 + 0x8b),*(int *)(pMVar3 + 0x73),0,param_3 + 8,
                       param_4 + 5,0x36,0x14);
      if (cVar1 == -1) {
        uVar5 = 8;
      }
      else {
        uVar5 = local_8 & 0xff;
      }
      ccFntTy::WrStr(*(ccFntTy **)(pMVar3 + 0x8b),&DAT_0080f33a,-1,-1,uVar5);
    }
    cVar1 = DAT_0080c846;
    local_8 = CONCAT31(local_8._1_3_,DAT_0080c846);
    wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c28fc,param_2);
    ccFntTy::SetSurf(*(ccFntTy **)(pMVar3 + 0x8b),*(int *)(pMVar3 + 0x73),0,param_3 + 0x4c,
                     param_4 + 5,0x36,0x14);
    if (cVar1 == -1) {
      uVar5 = 8;
    }
    else {
      uVar5 = local_8 & 0xff;
    }
    ccFntTy::WrStr(*(ccFntTy **)(pMVar3 + 0x8b),&DAT_0080f33a,-1,-1,uVar5);
    DAT_00858df8 = local_50;
    return;
  }
  DAT_00858df8 = local_50;
  iVar6 = FUN_006ad4d0(s_E____titans_Start_rpt_obj_cpp_007ccec8,0x21c,0,iVar4,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar4,0,0x7ccec8,0x21c);
  return;
}


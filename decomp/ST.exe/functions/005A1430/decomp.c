
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::Download */

void __thiscall FSGSTy::Download(FSGSTy *this,undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  FSGSTy *pFVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;
  
  if (((this[0x1a5f] == (FSGSTy)0x1) && (*(int *)(this + 0x1ac0) != 0)) &&
     (-1 < *(int *)(this + 0x1abc))) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pFVar2 = local_8;
    if (iVar3 == 0) {
      iVar3 = *(int *)(local_8 + 0x1ac0);
      uVar9 = *(uint *)(iVar3 + 0x14);
      if (uVar9 == 0) {
        uVar9 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar3 + 8);
      }
      puVar4 = (undefined4 *)FUN_006b4fa0(iVar3);
      for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar4 = 0xffffffff;
        puVar4 = puVar4 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar4 = 0xff;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      ccFntTy::SetSurf(*(ccFntTy **)(pFVar2 + 0x1a73),*(int *)(pFVar2 + 0x1ac0),0,0,0x16,0x1b8,0xf0)
      ;
      uVar5 = FUN_006b0140(0x25bb,DAT_00807618);
      uVar6 = FUN_006b0140(0x25ba,DAT_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,s__s__d_____d__s__007cc434,uVar6,param_1,param_2,uVar5);
      ccFntTy::WrTxt(*(ccFntTy **)(pFVar2 + 0x1a73),&DAT_0080f33a,-2,-1,2,-1,-1);
      FUN_006b35d0(DAT_008075a8,*(uint *)(pFVar2 + 0x1abc));
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x941,0,iVar3,&DAT_007a4ccc
                               ,s_FSGSTy__Download_007cc420);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x941);
  }
  return;
}


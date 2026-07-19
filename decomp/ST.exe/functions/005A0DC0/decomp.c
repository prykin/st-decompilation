
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::ConnectProc */

void __thiscall FSGSTy::ConnectProc(FSGSTy *this,int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  FSGSTy *pFVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  uint uVar10;
  void *unaff_EDI;
  char *pcVar11;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;
  
  if (((this[0x1a5f] == (FSGSTy)0x1) && (*(int *)(this + 0x1ac0) != 0)) &&
     (-1 < *(int *)(this + 0x1abc))) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar4 = __setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pFVar3 = local_8;
    if (iVar4 == 0) {
      iVar4 = *(int *)(local_8 + 0x1ac0);
      uVar10 = *(uint *)(iVar4 + 0x14);
      if (uVar10 == 0) {
        uVar10 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(iVar4 + 8);
      }
      puVar5 = (undefined4 *)FUN_006b4fa0(iVar4);
      for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar5 = 0xffffffff;
        puVar5 = puVar5 + 1;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)puVar5 = 0xff;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      ccFntTy::SetSurf(*(ccFntTy **)(pFVar3 + 0x1a73),*(int *)(pFVar3 + 0x1ac0),0,0,0x16,0x1b8,0xf0)
      ;
      if (param_1 < param_2) {
        iVar4 = (param_1 * 100) / param_2;
        uVar6 = FUN_006b0140(0x2571,DAT_00807618);
        wsprintfA((LPSTR)&DAT_0080f33a,s__s_d___007cc3ec,uVar6,iVar4);
      }
      else {
        pcVar7 = (char *)FUN_006b0140(0x2570,DAT_00807618);
        uVar10 = 0xffffffff;
        do {
          pcVar11 = pcVar7;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar11 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar11;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar7 = pcVar11 + -uVar10;
        pcVar11 = (char *)&DAT_0080f33a;
        for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar11 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar11 = pcVar11 + 1;
        }
      }
      ccFntTy::WrTxt(*(ccFntTy **)(pFVar3 + 0x1a73),&DAT_0080f33a,-1,-1,2,-1,-1);
      FUN_006b35d0(DAT_008075a8,*(uint *)(pFVar3 + 0x1abc));
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar8 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x909,0,iVar4,&DAT_007a4ccc
                               ,s_FSGSTy__ConnectProc_007cc3d4);
    if (iVar8 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x909);
  }
  return;
}


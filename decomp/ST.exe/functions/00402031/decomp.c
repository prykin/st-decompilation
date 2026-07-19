
void __thiscall FSGSTy::PaintLadder(FSGSTy *this,int param_1)

{
  code *pcVar1;
  FSGSTy *pFVar2;
  StartServTy *pSVar3;
  int iVar4;
  uint uVar5;
  tm *ptVar6;
  int iVar7;
  StartServTy *this_00;
  uint uVar8;
  StartServTy *this_01;
  undefined4 unaff_ESI;
  int *piVar9;
  void *unaff_EDI;
  uint *puVar10;
  InternalExceptionFrame IStack_8c;
  StartServTy aSStack_48 [52];
  int iStack_14;
  FSGSTy *pFStack_10;
  uint uStack_c;
  StartServTy *pSStack_8;
  
  iStack_14 = *(int *)(this + 0x1edb);
  if (((*(int *)(this + 0x1e8e) != 0) && (*(int *)(this + 0x1e92) != 0)) && (iStack_14 != 0)) {
    IStack_8c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &IStack_8c;
    pFStack_10 = this;
    iVar4 = Library::MSVCRT::__setjmp3(IStack_8c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar4 == 0) {
      FUN_006b5f80(DAT_008075a8,0x22,0x5e,0x2e1,0x175);
      pFVar2 = pFStack_10;
      thunk_FUN_00540620(0x18a,0x90,0x168,0x32,100,(byte *)0x19,'\x01',
                         *(BITMAPINFO **)(pFStack_10 + 0x1e92));
      wsprintfA((LPSTR)aSStack_48,s__6d____6d_007cc2a4,*(int *)(pFVar2 + 0x1edf),
                *(int *)(pFVar2 + 0x1ee3) + -1 + *(int *)(pFVar2 + 0x1edf));
      StartServTy::WrTextDDX
                (aSStack_48,0,0x18b,0x91,0x62,0x17,(uint *)aSStack_48,0xffffffff,0xffffffff,
                 *(void **)(pFVar2 + 0x1a7f),0);
      thunk_FUN_00540620(0x22,0xd6,0,0x78,0x2e1,(byte *)0xfd,'\x01',
                         *(BITMAPINFO **)(pFVar2 + 0x1e92));
      if (*(int *)(pFVar2 + 0x1ee3) != 0) {
        pSStack_8 = (StartServTy *)0xdb;
        piVar9 = (int *)(iStack_14 + 0xc);
        uStack_c = 0;
        do {
          wsprintfA((LPSTR)aSStack_48,&DAT_007c28fc,*(int *)(pFVar2 + 0x1edf) + uStack_c);
          StartServTy::WrTextDDX
                    (aSStack_48,0,0x23,(int)pSStack_8,0x2b,0x10,(uint *)aSStack_48,0xffffffff,
                     0xffffffff,*(void **)(pFVar2 + 0x1a7f),0);
          StartServTy::WrTextDDX
                    (pSStack_8,0,0x50,(int)pSStack_8,0xe9,0x10,(uint *)(piVar9 + 2),0,0xffffffff,
                     *(void **)(pFVar2 + 0x1a73),2);
          iVar4 = -1;
          puVar10 = (uint *)(piVar9 + 2);
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            uVar5 = *puVar10;
            puVar10 = (uint *)((int)puVar10 + 1);
          } while ((char)uVar5 != '\0');
          if (iVar4 != -2) {
            wsprintfA((LPSTR)aSStack_48,&DAT_007c28fc,piVar9[1]);
            pSVar3 = pSStack_8;
            StartServTy::WrTextDDX
                      (*(StartServTy **)(pFVar2 + 0x1a7f),0,0x13b,(int)pSStack_8,0x44,0x10,
                       (uint *)aSStack_48,0xffffffff,0xffffffff,*(StartServTy **)(pFVar2 + 0x1a7f),0
                      );
            wsprintfA((LPSTR)aSStack_48,s__6d____6d____6d_007cc290,piVar9[-2],piVar9[-1],*piVar9);
            StartServTy::WrTextDDX
                      (*(StartServTy **)(pFVar2 + 0x1a7f),0,0x181,(int)pSVar3,0x8f,0x10,
                       (uint *)aSStack_48,0xffffffff,0xffffffff,*(StartServTy **)(pFVar2 + 0x1a7f),0
                      );
            wsprintfA((LPSTR)aSStack_48,&DAT_007c28fc,*piVar9 + piVar9[-1] + piVar9[-2]);
            StartServTy::WrTextDDX
                      (this_00,0,0x212,(int)pSVar3,0x44,0x10,(uint *)aSStack_48,0xffffffff,
                       0xffffffff,*(void **)(pFVar2 + 0x1a7f),0);
            uVar8 = *piVar9 + piVar9[-2] + piVar9[-1];
            uVar5 = 0;
            if (uVar8 != 0) {
              uVar5 = (uint)(piVar9[-2] * 100) / uVar8;
            }
            wsprintfA((LPSTR)aSStack_48,&DAT_007c1aa4,uVar5);
            StartServTy::WrTextDDX
                      (this_01,0,600,(int)pSVar3,0x30,0x10,(uint *)aSStack_48,0xffffffff,0xffffffff,
                       *(void **)(pFVar2 + 0x1a7f),0);
            ptVar6 = Library::MSVCRT::_gmtime((time_t *)(piVar9 + -3));
            wsprintfA((LPSTR)aSStack_48,s__2d____2d____4d_007cc27c,ptVar6->tm_mday,
                      ptVar6->tm_mon + 1,ptVar6->tm_year + 0x76c);
            StartServTy::WrTextDDX
                      (*(StartServTy **)(pFVar2 + 0x1a7f),0,0x28a,(int)pSVar3,0x76,0x10,
                       (uint *)aSStack_48,0xffffffff,0xffffffff,*(StartServTy **)(pFVar2 + 0x1a7f),0
                      );
            pSStack_8 = pSVar3;
          }
          uStack_c = uStack_c + 1;
          piVar9 = piVar9 + 9;
          pSStack_8 = pSStack_8 + 0x10;
        } while (uStack_c < *(uint *)(pFVar2 + 0x1ee3));
      }
      g_currentExceptionFrame = IStack_8c.previous;
      return;
    }
    g_currentExceptionFrame = IStack_8c.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x49b,0,iVar4,&DAT_007a4ccc
                               ,s_FSGSTy__PaintLadder_007cc264);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x49b);
  }
  return;
}



/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::PaintLadder */

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
  undefined4 *local_8c;
  undefined4 local_88 [16];
  StartServTy local_48 [52];
  int local_14;
  FSGSTy *local_10;
  uint local_c;
  StartServTy *local_8;
  
  local_14 = *(int *)(this + 0x1edb);
  if (((*(int *)(this + 0x1e8e) != 0) && (*(int *)(this + 0x1e92) != 0)) && (local_14 != 0)) {
    local_8c = DAT_00858df8;
    DAT_00858df8 = &local_8c;
    local_10 = this;
    iVar4 = __setjmp3(local_88,0,unaff_EDI,unaff_ESI);
    if (iVar4 == 0) {
      FUN_006b5f80(DAT_008075a8,0x22,0x5e,0x2e1,0x175);
      pFVar2 = local_10;
      thunk_FUN_00540620(0x18a,0x90,0x168,0x32,100,(byte *)0x19,'\x01',
                         *(BITMAPINFO **)(local_10 + 0x1e92));
      wsprintfA((LPSTR)local_48,s__6d____6d_007cc2a4,*(int *)(pFVar2 + 0x1edf),
                *(int *)(pFVar2 + 0x1ee3) + -1 + *(int *)(pFVar2 + 0x1edf));
      StartServTy::WrTextDDX
                (local_48,0,0x18b,0x91,0x62,0x17,(uint *)local_48,0xffffffff,0xffffffff,
                 *(void **)(pFVar2 + 0x1a7f),0);
      thunk_FUN_00540620(0x22,0xd6,0,0x78,0x2e1,(byte *)0xfd,'\x01',
                         *(BITMAPINFO **)(pFVar2 + 0x1e92));
      if (*(int *)(pFVar2 + 0x1ee3) != 0) {
        local_8 = (StartServTy *)0xdb;
        piVar9 = (int *)(local_14 + 0xc);
        local_c = 0;
        do {
          wsprintfA((LPSTR)local_48,&DAT_007c28fc,*(int *)(pFVar2 + 0x1edf) + local_c);
          StartServTy::WrTextDDX
                    (local_48,0,0x23,(int)local_8,0x2b,0x10,(uint *)local_48,0xffffffff,0xffffffff,
                     *(void **)(pFVar2 + 0x1a7f),0);
          StartServTy::WrTextDDX
                    (local_8,0,0x50,(int)local_8,0xe9,0x10,(uint *)(piVar9 + 2),0,0xffffffff,
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
            wsprintfA((LPSTR)local_48,&DAT_007c28fc,piVar9[1]);
            pSVar3 = local_8;
            StartServTy::WrTextDDX
                      (*(StartServTy **)(pFVar2 + 0x1a7f),0,0x13b,(int)local_8,0x44,0x10,
                       (uint *)local_48,0xffffffff,0xffffffff,*(StartServTy **)(pFVar2 + 0x1a7f),0);
            wsprintfA((LPSTR)local_48,s__6d____6d____6d_007cc290,piVar9[-2],piVar9[-1],*piVar9);
            StartServTy::WrTextDDX
                      (*(StartServTy **)(pFVar2 + 0x1a7f),0,0x181,(int)pSVar3,0x8f,0x10,
                       (uint *)local_48,0xffffffff,0xffffffff,*(StartServTy **)(pFVar2 + 0x1a7f),0);
            wsprintfA((LPSTR)local_48,&DAT_007c28fc,*piVar9 + piVar9[-1] + piVar9[-2]);
            StartServTy::WrTextDDX
                      (this_00,0,0x212,(int)pSVar3,0x44,0x10,(uint *)local_48,0xffffffff,0xffffffff,
                       *(void **)(pFVar2 + 0x1a7f),0);
            uVar8 = *piVar9 + piVar9[-2] + piVar9[-1];
            uVar5 = 0;
            if (uVar8 != 0) {
              uVar5 = (uint)(piVar9[-2] * 100) / uVar8;
            }
            wsprintfA((LPSTR)local_48,&DAT_007c1aa4,uVar5);
            StartServTy::WrTextDDX
                      (this_01,0,600,(int)pSVar3,0x30,0x10,(uint *)local_48,0xffffffff,0xffffffff,
                       *(void **)(pFVar2 + 0x1a7f),0);
            ptVar6 = _gmtime((time_t *)(piVar9 + -3));
            wsprintfA((LPSTR)local_48,s__2d____2d____4d_007cc27c,ptVar6->tm_mday,ptVar6->tm_mon + 1,
                      ptVar6->tm_year + 0x76c);
            StartServTy::WrTextDDX
                      (*(StartServTy **)(pFVar2 + 0x1a7f),0,0x28a,(int)pSVar3,0x76,0x10,
                       (uint *)local_48,0xffffffff,0xffffffff,*(StartServTy **)(pFVar2 + 0x1a7f),0);
            local_8 = pSVar3;
          }
          local_c = local_c + 1;
          piVar9 = piVar9 + 9;
          local_8 = local_8 + 0x10;
        } while (local_c < *(uint *)(pFVar2 + 0x1ee3));
      }
      DAT_00858df8 = local_8c;
      return;
    }
    DAT_00858df8 = local_8c;
    iVar7 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x49b,0,iVar4,&DAT_007a4ccc);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7cbf70,0x49b);
  }
  return;
}



void __thiscall
STGroupBoatC::GetDepotForAttack
          (STGroupBoatC *this,uint param_1,undefined1 *param_2,short *param_3,short *param_4,
          short *param_5,short *param_6)

{
  code *pcVar1;
  int iVar2;
  void *this_00;
  int *this_01;
  int iVar3;
  uint uVar4;
  undefined4 unaff_ESI;
  STGroupBoatC *pSVar5;
  void *unaff_EDI;
  undefined4 uStack_68;
  undefined4 auStack_64 [16];
  undefined1 uStack_24;
  char cStack_23;
  short sStack_22;
  undefined2 uStack_20;
  int iStack_1c;
  int iStack_18;
  STGroupBoatC *pSStack_14;
  short sStack_10;
  short sStack_e;
  short sStack_c;
  short sStack_a;
  short sStack_8;
  short sStack_6;
  
  iStack_18 = 1000000;
  uStack_68 = DAT_00858df8;
  DAT_00858df8 = &uStack_68;
  pSStack_14 = this;
  iVar2 = __setjmp3(auStack_64,0,unaff_EDI,unaff_ESI);
  pSVar5 = pSStack_14;
  if (iVar2 == 0) {
    *param_3 = -1;
    if ((*(int *)(pSStack_14 + 0x1e6) != 2) || (iVar2 = *(int *)(pSStack_14 + 0x20e), iVar2 == 0)) {
      iVar2 = FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x1708);
    }
    this_00 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)iVar2 >> 8),pSVar5[0x24]),param_1,1);
    thunk_FUN_004162b0(this_00,&sStack_10,&sStack_e,&sStack_c);
    uVar4 = 0;
    iStack_1c = *(int *)(*(int *)(pSVar5 + 0x20e) + 0xc);
    iVar2 = iStack_18;
    if (0 < iStack_1c) {
      do {
        FUN_006acc70(*(int *)(pSVar5 + 0x20e),uVar4,(undefined4 *)&uStack_24);
        if (sStack_22 != -1) {
          this_01 = (int *)thunk_FUN_0042b620(CONCAT22(sStack_22,CONCAT11(cStack_23,uStack_24)),
                                              CONCAT22(uStack_20,sStack_22),(int)cStack_23);
          iVar3 = (**(code **)(*this_01 + 0x2c))();
          if ((iVar3 == 0x3b) ||
             (iVar3 = (**(code **)(*this_01 + 0x2c))(), pSVar5 = pSStack_14, iVar3 == 0x60)) {
            thunk_FUN_004162b0(this_01,&sStack_8,&sStack_6,&sStack_a);
            iVar3 = FUN_006aadd0((int)sStack_10,(int)sStack_e,(int)sStack_c,(int)sStack_8,
                                 (int)sStack_6,(int)sStack_a);
            pSVar5 = pSStack_14;
            if (iVar3 < iVar2) {
              *param_2 = uStack_24;
              *param_3 = sStack_22;
              *param_4 = sStack_8;
              *param_5 = sStack_6;
              *param_6 = sStack_a;
              iVar2 = iVar3;
              iStack_18 = iVar3;
            }
          }
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < iStack_1c);
    }
    DAT_00858df8 = (undefined4 *)uStack_68;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_68;
  if (iVar2 != -0x5001fff7) {
    iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x171b,0,iVar2,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7abe3c,0x171c);
  }
  return;
}


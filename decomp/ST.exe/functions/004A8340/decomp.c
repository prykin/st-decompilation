
void FUN_004a8340(uint param_1,undefined1 *param_2,short *param_3,short *param_4,short *param_5,
                 short *param_6)

{
  code *pcVar1;
  int iVar2;
  void *this;
  int *this_00;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_68;
  undefined4 local_64 [16];
  undefined1 local_24;
  char cStack_23;
  short sStack_22;
  undefined2 uStack_20;
  int local_1c;
  int local_18;
  int local_14;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  local_18 = 1000000;
  local_68 = DAT_00858df8;
  DAT_00858df8 = &local_68;
  iVar2 = __setjmp3(local_64,0,unaff_EDI,unaff_ESI);
  iVar3 = local_14;
  if (iVar2 == 0) {
    *param_3 = -1;
    if ((*(int *)(local_14 + 0x1e6) != 2) || (iVar2 = *(int *)(local_14 + 0x20e), iVar2 == 0)) {
      iVar2 = FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x1708);
    }
    this = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)iVar2 >> 8),
                                               *(undefined1 *)(iVar3 + 0x24)),param_1,1);
    thunk_FUN_004162b0(this,&local_10,&local_e,&local_c);
    uVar5 = 0;
    local_1c = *(int *)(*(int *)(iVar3 + 0x20e) + 0xc);
    iVar2 = local_18;
    if (0 < local_1c) {
      do {
        FUN_006acc70(*(int *)(iVar3 + 0x20e),uVar5,(undefined4 *)&local_24);
        if (sStack_22 != -1) {
          this_00 = (int *)thunk_FUN_0042b620(CONCAT22(sStack_22,CONCAT11(cStack_23,local_24)),
                                              CONCAT22(uStack_20,sStack_22),(int)cStack_23);
          iVar3 = (**(code **)(*this_00 + 0x2c))();
          if ((iVar3 == 0x3b) ||
             (iVar4 = (**(code **)(*this_00 + 0x2c))(), iVar3 = local_14, iVar4 == 0x60)) {
            thunk_FUN_004162b0(this_00,&local_8,&local_6,&local_a);
            iVar4 = FUN_006aadd0((int)local_10,(int)local_e,(int)local_c,(int)local_8,(int)local_6,
                                 (int)local_a);
            iVar3 = local_14;
            if (iVar4 < iVar2) {
              *param_2 = local_24;
              *param_3 = sStack_22;
              *param_4 = local_8;
              *param_5 = local_6;
              *param_6 = local_a;
              iVar2 = iVar4;
              local_18 = iVar4;
            }
          }
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < local_1c);
    }
    DAT_00858df8 = (undefined4 *)local_68;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_68;
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


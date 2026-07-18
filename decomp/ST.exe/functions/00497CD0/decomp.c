
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::InitWay */

undefined4 __thiscall
STGroupBoatC::InitWay(STGroupBoatC *this,int param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  uint uVar7;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  STGroupBoatC *local_c;
  uint local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  local_c = this;
  iVar3 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_c;
  if (iVar3 == 0) {
    uVar7 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      do {
        FUN_006acc70(param_1,uVar7,&local_8);
        uVar4 = thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar2[0x24]),local_8,1)
        ;
        *(undefined4 *)(uVar4 + 0xfd) = 0;
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(param_1 + 0xc));
    }
    Way3DGrpDistribTgt(pSVar2,param_1,param_2,param_3,param_4);
    DAT_00858df8 = (undefined4 *)local_50;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  iVar5 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x6e,0,iVar3,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  FUN_006a5e40(iVar3,0,0x7abe3c,0x6f);
  return 0xffffffff;
}


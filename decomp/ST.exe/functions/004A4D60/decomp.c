
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::ChangeMDNotify */

void __thiscall STGroupBoatC::ChangeMDNotify(STGroupBoatC *this,int param_1,short param_2)

{
  code *pcVar1;
  STGroupBoatC *this_00;
  int iVar2;
  int iVar3;
  short *psVar4;
  undefined4 unaff_ESI;
  uint uVar5;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  STGroupBoatC *local_c;
  short local_8 [2];
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  local_c = this;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_50;
    if (iVar2 != -0x5001fff7) {
      iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1294,0,iVar2,&DAT_007a4ccc);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FUN_006a5e40(iVar2,0,0x7abe3c,0x1295);
    }
    return;
  }
  if (param_1 == 1) {
    if (*(int *)(local_c + 0x29b) != 1) {
      DAT_00858df8 = (undefined4 *)local_50;
      return;
    }
    if (*(int *)(local_c + 0x29f) == 0) {
      DAT_00858df8 = (undefined4 *)local_50;
      return;
    }
    iVar2 = *(int *)(*(int *)(local_c + 0x29f) + 0xc);
    uVar5 = 0;
    if (0 < iVar2) {
      do {
        FUN_006acc70(*(int *)(this_00 + 0x29f),uVar5,(undefined4 *)local_8);
        if (local_8[0] == -1) break;
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < iVar2);
    }
    psVar4 = &param_2;
LAB_004a4e27:
    FUN_006ae140(*(uint **)(this_00 + 0x29f),uVar5,(undefined4 *)psVar4);
  }
  else {
    if (*(int *)(local_c + 0x29f) == 0) {
      DAT_00858df8 = (undefined4 *)local_50;
      return;
    }
    iVar2 = *(int *)(*(int *)(local_c + 0x29f) + 0xc);
    uVar5 = 0;
    if (0 < iVar2) {
      do {
        FUN_006acc70(*(int *)(this_00 + 0x29f),uVar5,(undefined4 *)local_8);
        if (local_8[0] == param_2) {
          local_8[0] = -1;
          local_8[1] = 0;
          psVar4 = local_8;
          goto LAB_004a4e27;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < iVar2);
    }
  }
  DistributeDock(this_00,0,*(int *)(this_00 + 0x29f),*(int *)(this_00 + 0x29));
  DAT_00858df8 = (undefined4 *)local_50;
  return;
}


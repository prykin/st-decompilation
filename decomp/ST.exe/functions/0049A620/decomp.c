
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpMove */

undefined4 __thiscall STGroupBoatC::GrpMove(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupC *this_00;
  int iVar2;
  uint *puVar3;
  void *this_01;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  STGroupC *pSVar8;
  undefined4 local_64;
  undefined4 local_60 [16];
  undefined4 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  STGroupC *local_14;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = *(uint *)(*(int *)(this + 0x29) + 0xc);
  uVar7 = 0;
  local_64 = DAT_00858df8;
  DAT_00858df8 = &local_64;
  local_14 = (STGroupC *)this;
  iVar2 = __setjmp3(local_60,0,unaff_EDI,unaff_ESI);
  this_00 = local_14;
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_64;
    iVar4 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x642,0,iVar2,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    FUN_006a5e40(iVar2,0,0x7abe3c,0x643);
    return 0xffffffff;
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    pSVar8 = local_14 + 0x89;
    for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pSVar8 = 0;
      pSVar8 = pSVar8 + 4;
    }
    *(int *)(local_14 + 0x3d) = (int)*(short *)(local_14 + 0xdd);
    *(int *)(local_14 + 0x45) = (int)*(short *)(local_14 + 0xe1);
    *(undefined4 *)(local_14 + 0x65) = 0;
    *(int *)(local_14 + 0x41) = (int)*(short *)(local_14 + 0xdf);
    *(undefined4 *)(local_14 + 0x30e) = *(undefined4 *)(local_14 + 0xe3);
    puVar3 = STGroupC::GetGroupContent(local_14,(int)unaff_EDI);
    InitWay((STGroupBoatC *)this_00,(int)puVar3,*(int *)(this_00 + 0x3d),*(int *)(this_00 + 0x41),
            *(int *)(this_00 + 0x45));
    FUN_006ae110((byte *)puVar3);
    local_20 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_1c = 0xffff;
    local_1a = 0xffff;
    local_18 = 0xffff;
    if (local_10 != 0) {
      uVar6 = 0;
      do {
        FUN_006acc70(*(int *)(this_00 + 0x29),uVar6,&local_c);
        if ((short)local_c != -1) {
          this_01 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),
                                                        this_00[0x24]),local_c,1);
          if (this_01 == (void *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0x629);
          }
          thunk_FUN_0045ef00(this_01,1,&local_20);
        }
        uVar7 = uVar7 + 1;
        uVar6 = uVar7 & 0xffff;
      } while (uVar6 < local_10);
    }
    local_8 = 2;
  }
  if (param_1 == 2) {
    if (*(uint *)(DAT_00802a38 + 0xe4) % 3 == 0) {
      uVar6 = 0;
      local_8 = 0;
      uVar7 = 0;
      if (local_10 != 0) {
        do {
          FUN_006acc70(*(int *)(this_00 + 0x29),uVar7,&local_c);
          if ((short)local_c != -1) {
            uVar7 = thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_00 >> 8),this_00[0x24]),
                                       local_c,1);
            if (uVar7 == 0) {
              FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0x638);
            }
            iVar2 = thunk_FUN_0045ff30(uVar7);
            if (iVar2 != 0) goto LAB_0049a832;
            iVar2 = thunk_FUN_0045ff10(uVar7);
            if (iVar2 == 1) goto LAB_0049a832;
            iVar2 = thunk_FUN_0045ff10(uVar7);
            if (iVar2 == 0) goto LAB_0049a832;
          }
          uVar6 = uVar6 + 1;
          uVar7 = uVar6 & 0xffff;
          if (local_10 <= uVar7) {
            DAT_00858df8 = (undefined4 *)local_64;
            return local_8;
          }
        } while( true );
      }
    }
    else {
LAB_0049a832:
      local_8 = 2;
    }
  }
  DAT_00858df8 = (undefined4 *)local_64;
  return local_8;
}


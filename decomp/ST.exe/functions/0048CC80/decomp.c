
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::_AddDefenceShots */

void __thiscall STBoatC::_AddDefenceShots(STBoatC *this,char param_1,short param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  STBoatC *pSVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_64;
  undefined4 local_60 [16];
  int local_20;
  short local_1c;
  int local_1a;
  undefined4 local_16;
  STBoatC *local_10;
  uint local_c;
  undefined4 local_8;
  
  local_8 = 200;
  local_64 = DAT_00858df8;
  DAT_00858df8 = &local_64;
  local_10 = this;
  iVar5 = __setjmp3(local_60,0,unaff_EDI,unaff_ESI);
  pSVar3 = local_10;
  if (iVar5 != 0) {
    DAT_00858df8 = (undefined4 *)local_64;
    if (iVar5 != -0x5001fff7) {
      iVar7 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4b84,0,iVar5,&DAT_007a4ccc);
      if (iVar7 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FUN_006a5e40(iVar5,0,0x7a9d3c,0x4b85);
    }
    return;
  }
  if (*(int *)(local_10 + 0x47b) == 0) {
    puVar6 = FUN_006ae290((uint *)0x0,10,0xe,5);
    *(uint **)(pSVar3 + 0x47b) = puVar6;
  }
  uVar1 = (*(uint **)(pSVar3 + 0x47b))[3];
  uVar4 = uVar1;
  if (uVar1 != 0) {
    while (local_c = uVar4, uVar1 = uVar1 - 1, -1 < (int)uVar1) {
      FUN_006acc70(*(int *)(pSVar3 + 0x47b),uVar1,&local_20);
      uVar4 = uVar1;
      if (((local_1c != -1) && (uVar4 = local_c, local_20 == param_1)) && (local_1c == param_2)) {
        local_1a = local_1a + param_3;
        local_16 = local_8;
        FUN_006ae140(*(uint **)(pSVar3 + 0x47b),uVar1,&local_20);
        FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a9d3c,0x4b76);
        uVar4 = local_c;
      }
    }
    local_20 = (int)param_1;
    local_1c = param_2;
    local_1a = param_3;
    local_16 = local_8;
    FUN_006ae140(*(uint **)(pSVar3 + 0x47b),local_c,&local_20);
    DAT_00858df8 = (undefined4 *)local_64;
    return;
  }
  local_20 = (int)param_1;
  local_1c = param_2;
  local_1a = param_3;
  local_16 = local_8;
  FUN_006ae1c0(*(uint **)(pSVar3 + 0x47b),&local_20);
  DAT_00858df8 = (undefined4 *)local_64;
  return;
}


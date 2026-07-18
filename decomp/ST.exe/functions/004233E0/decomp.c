
uint * __fastcall FUN_004233e0(int param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  uint uVar7;
  void *unaff_EDI;
  uint uVar8;
  undefined4 local_5c;
  undefined4 local_58 [16];
  uint local_18;
  uint local_14;
  int local_10;
  uint *local_c;
  short local_6;
  
  local_18 = *(uint *)(*(int *)(param_1 + 0x29) + 0xc);
  uVar7 = 0;
  local_c = (uint *)0x0;
  local_14 = 0;
  local_5c = DAT_00858df8;
  DAT_00858df8 = &local_5c;
  local_10 = param_1;
  iVar3 = __setjmp3(local_58,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    local_c = FUN_006ae290((uint *)0x0,(uint)*(ushort *)(local_10 + 0x27),2,1);
    uVar2 = local_18;
    if (local_18 != 0) {
      uVar6 = 0;
      uVar8 = local_14;
      do {
        FUN_006acc70(*(int *)(local_10 + 0x29),uVar6,(undefined4 *)&local_6);
        if (local_6 != -1) {
          FUN_006ae140(local_c,uVar8 & 0xffff,(undefined4 *)&local_6);
          uVar8 = uVar8 + 1;
          local_14 = uVar8;
        }
        uVar7 = uVar7 + 1;
        uVar6 = uVar7 & 0xffff;
      } while (uVar6 < uVar2);
    }
    DAT_00858df8 = (undefined4 *)local_5c;
    return local_c;
  }
  DAT_00858df8 = (undefined4 *)local_5c;
  iVar4 = FUN_006ad4d0(s_E____titans_wlad_tc_grp_cpp_007a50a4,0x52,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    puVar5 = (uint *)(*pcVar1)();
    return puVar5;
  }
  FUN_006a5e40(iVar3,0,0x7a50a4,0x53);
  return local_c;
}


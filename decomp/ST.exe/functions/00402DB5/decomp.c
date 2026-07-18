
uint * __fastcall thunk_FUN_004233e0(int param_1)

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
  undefined4 uStack_5c;
  undefined4 auStack_58 [16];
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  uint *puStack_c;
  short sStack_6;
  
  uStack_18 = *(uint *)(*(int *)(param_1 + 0x29) + 0xc);
  uVar7 = 0;
  puStack_c = (uint *)0x0;
  uStack_14 = 0;
  uStack_5c = DAT_00858df8;
  DAT_00858df8 = &uStack_5c;
  iStack_10 = param_1;
  iVar3 = __setjmp3(auStack_58,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    puStack_c = FUN_006ae290((uint *)0x0,(uint)*(ushort *)(iStack_10 + 0x27),2,1);
    uVar2 = uStack_18;
    if (uStack_18 != 0) {
      uVar6 = 0;
      uVar8 = uStack_14;
      do {
        FUN_006acc70(*(int *)(iStack_10 + 0x29),uVar6,(undefined4 *)&sStack_6);
        if (sStack_6 != -1) {
          FUN_006ae140(puStack_c,uVar8 & 0xffff,(undefined4 *)&sStack_6);
          uVar8 = uVar8 + 1;
          uStack_14 = uVar8;
        }
        uVar7 = uVar7 + 1;
        uVar6 = uVar7 & 0xffff;
      } while (uVar6 < uVar2);
    }
    DAT_00858df8 = (undefined4 *)uStack_5c;
    return puStack_c;
  }
  DAT_00858df8 = (undefined4 *)uStack_5c;
  iVar4 = FUN_006ad4d0(s_E____titans_wlad_tc_grp_cpp_007a50a4,0x52,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    puVar5 = (uint *)(*pcVar1)();
    return puVar5;
  }
  FUN_006a5e40(iVar3,0,0x7a50a4,0x53);
  return puStack_c;
}


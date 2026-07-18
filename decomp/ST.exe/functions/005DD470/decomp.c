
void FUN_005dd470(int param_1)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_74;
  undefined4 local_70 [16];
  undefined4 local_30 [4];
  undefined4 local_20;
  int local_1c;
  int local_10;
  int local_c;
  int local_8;
  
  puVar4 = local_30;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_74 = DAT_00858df8;
  DAT_00858df8 = &local_74;
  iVar6 = __setjmp3(local_70,0,unaff_EDI,unaff_ESI);
  if (iVar6 != 0) {
    DAT_00858df8 = (undefined4 *)local_74;
    iVar5 = FUN_006ad4d0(s_E____titans_Start_startsys_cpp_007cd718,0x349,0,iVar6,&DAT_007a4ccc);
    if (iVar5 == 0) {
      FUN_006a5e40(iVar6,0,0x7cd718,0x349);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = *(int *)(param_1 + 0x10);
  if (iVar6 == 0x633f) {
    if ((((*(int *)(local_8 + 0x67e) != 0) && (DAT_0080c4fa != 0)) &&
        (-1 < *(int *)(local_8 + 0x558))) &&
       ((param_1 != 0 && (iVar6 = *(int *)(param_1 + 0x1c), iVar6 != 0)))) {
      iVar5 = *(int *)(local_8 + 0x34);
      local_10 = iVar6;
      if (*(int *)(iVar5 + 0xa0) != 0) {
        FUN_00710790(iVar5);
      }
      iVar2 = *(int *)(local_8 + 0x67e);
      local_c = *(int *)(iVar5 + 0x8a);
      FUN_006b4170(iVar2,0,0,0,*(int *)(iVar2 + 4),*(int *)(iVar2 + 8),0xff);
      uVar7 = (uint)*(ushort *)(param_1 + 0x16);
      iVar5 = DAT_0080c4fa;
      uVar8 = uVar7;
      if ((int)uVar7 < (int)(uVar7 + *(int *)(iVar6 + 0x1e0))) {
        do {
          if ((int)uVar8 < *(int *)(iVar5 + 8)) {
            puVar9 = *(uint **)(*(int *)(iVar5 + 0x14) + uVar8 * 4);
          }
          else {
            puVar9 = (uint *)0x0;
          }
          if (puVar9 != (uint *)0x0) {
            FUN_00710a90(*(int *)(local_8 + 0x67e),0,0,(uVar8 - uVar7) * local_c,
                         *(int *)(*(int *)(local_8 + 0x67e) + 4),local_c);
            FUN_007119c0(puVar9,0,-1,0);
            iVar5 = DAT_0080c4fa;
          }
          uVar8 = uVar8 + 1;
          uVar7 = (uint)*(ushort *)(param_1 + 0x16);
        } while ((int)uVar8 < (int)(uVar7 + *(int *)(local_10 + 0x1e0)));
      }
      FUN_006b35d0(DAT_008075a8,*(uint *)(local_8 + 0x558));
    }
  }
  else {
    if (iVar6 == 0xc0a0) {
      iVar6 = *(int *)(local_8 + 0x682);
      uVar8 = *(uint *)(iVar6 + 0x14);
      if (uVar8 == 0) {
        uVar8 = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar6 + 8);
      }
      puVar4 = (undefined4 *)FUN_006b4fa0(iVar6);
      for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar4 = 0xffffffff;
        puVar4 = puVar4 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar4 = 0xff;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      FUN_00710a90(*(int *)(local_8 + 0x682),0,0,0,0,0);
      if (*(undefined4 **)(param_1 + 0x14) != (undefined4 *)0x0) {
        FUN_007119c0((uint *)**(undefined4 **)(param_1 + 0x14),0,-1,2);
      }
      uVar1 = *(ushort *)(param_1 + 0x18);
      if ((uVar1 != 0xffff) || (*(short *)(param_1 + 0x1a) != -1)) {
        FUN_006b5b10(*(int *)(local_8 + 0x682),0,(uint)uVar1,*(ushort *)(param_1 + 0x1a) + 2,
                     (uint)uVar1,
                     (*(int *)(*(int *)(local_8 + 0x682) + 8) - (uint)*(ushort *)(param_1 + 0x1a)) +
                     -5,9,0xd);
      }
      FUN_006b35d0(DAT_008075a8,*(uint *)(local_8 + 0x554));
      DAT_00858df8 = (undefined4 *)local_74;
      return;
    }
    if ((iVar6 == 0xc0a1) && (*(int *)(local_8 + 0x54c) != 0)) {
      local_20 = 0x21;
      FUN_006e5970(2,*(int *)(local_8 + 0x54c),(int)local_30);
      if (local_1c == 0) {
        local_20 = 0x20;
        local_1c = 1;
        FUN_006e5970(2,*(int *)(local_8 + 0x54c),(int)local_30);
        DAT_00858df8 = (undefined4 *)local_74;
        return;
      }
    }
  }
  DAT_00858df8 = (undefined4 *)local_74;
  return;
}


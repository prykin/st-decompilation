
void thunk_FUN_0053e3f0(char *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                       UINT param_6,undefined4 param_7,undefined4 param_8)

{
  code *pcVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  LPSTR pCVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  int *piStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar2 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    piStack_8[0xf] = piStack_8[0xf] + (DAT_00806730 + -800) / 2;
    puVar3 = FUN_006f1ce0(1,param_1,(int *)0x0,1);
    *(ushort **)((int)piStack_8 + 0x185) = puVar3;
    puVar4 = FUN_0070df00(0x19d,*(int *)(DAT_00802a28 + 0x28));
    *(undefined4 **)((int)piStack_8 + 0x189) = puVar4;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    iVar2 = piStack_8[0x1a];
    uVar8 = *(uint *)(iVar2 + 0x14);
    if (uVar8 == 0) {
      uVar8 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar2 + 8);
    }
    puVar4 = (undefined4 *)FUN_006b4fa0(iVar2);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar4 = 0xff;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    thunk_FUN_00540760((undefined4 *)piStack_8[0x1a],0,0,'\x01',*(byte **)((int)piStack_8 + 0x185));
    FUN_00710a90(piStack_8[0x1a],0,param_2,param_3,param_4,param_5);
    uVar15 = 0;
    iVar13 = -1;
    iVar2 = -2;
    puVar5 = (uint *)FUN_006b0140(param_6,DAT_00807618);
    FUN_007119c0(puVar5,iVar2,iVar13,uVar15);
    uVar16 = 1;
    iVar2 = *piStack_8;
    uVar14 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0xc000;
    uVar15 = 0xbfff;
    pCVar6 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    iVar2 = (**(code **)(iVar2 + 4))
                      (0,1,param_7,param_8,0,1,1,pCVar6,uVar15,uVar9,uVar10,uVar11,uVar12,uVar14,
                       uVar16);
    piStack_8[0x5f] = iVar2;
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar13 = FUN_006ad4d0(s_E____titans_Andrey_specpan_cpp_007c7870,0xeb,0,iVar2,&DAT_007a4ccc);
  if (iVar13 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c7870,0xeb);
  return;
}


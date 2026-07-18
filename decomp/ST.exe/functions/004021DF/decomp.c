
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall thunk_FUN_00609d60(void *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar8;
  byte *pbVar9;
  undefined4 uStack_54;
  undefined4 auStack_50 [16];
  undefined4 uStack_10;
  uint *puStack_c;
  uint uStack_8;
  
  iVar4 = *(int *)((int)this + 0x234);
  uStack_10 = 0;
  if (iVar4 == 0) {
    return 0;
  }
  if (param_1 < *(uint *)(iVar4 + 0xc)) {
    puStack_c = (uint *)(*(int *)(iVar4 + 8) * param_1 + *(int *)(iVar4 + 0x1c));
  }
  else {
    puStack_c = (uint *)0x0;
  }
  if ((puStack_c != (uint *)0x0) && (puStack_c[1] != 0xffffffff)) {
    uStack_54 = DAT_00858df8;
    DAT_00858df8 = &uStack_54;
    iVar4 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
    puVar3 = puStack_c;
    if (iVar4 != 0) {
      DAT_00858df8 = (undefined4 *)uStack_54;
      iVar6 = FUN_006ad4d0(s_E____titans_nick_to_field_cpp_007cf850,0x248,0,iVar4,&DAT_007a4ccc);
      if (iVar6 != 0) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return uVar7;
      }
      FUN_006a5e40(iVar4,0,0x7cf850,0x24a);
      return 0xffff;
    }
    uVar1 = *puStack_c;
    if (uVar1 < 4) {
      pbVar9 = (&PTR_s_pics_g_007cf6d0)[uVar1];
      piVar8 = DAT_00806764;
    }
    else {
      pbVar9 = (&PTR_s_pics_g_007cf6d0)[uVar1];
      piVar8 = DAT_00806774;
    }
    puVar5 = FUN_00709af0(piVar8,0x1d,pbVar9,0xffffffff,0,1,0,(undefined4 *)0x0);
    FUN_006e8660(DAT_00807598,(int *)&uStack_8,1,0,*(uint *)((int)puVar5 + 9),
                 *(uint *)((int)puVar5 + 0xd),*(int *)(&DAT_007cf6f0 + *puVar3 * 8) / 2,
                 *(int *)(&DAT_007cf6f4 + *puVar3 * 8) / 2 - 0xe,0);
    FUN_006e98e0(DAT_00807598,uStack_8,0,*(undefined4 *)puVar5,*(int *)((int)puVar5 + 0x21),1);
    FUN_006ea270(DAT_00807598,uStack_8,0,0);
    FUN_006ea5e0(DAT_00807598,uStack_8,0,0);
    FUN_006ea960(DAT_00807598,uStack_8,(float)(int)puVar3[3] * _DAT_007904f8 * _DAT_007904f0,
                 (float)(int)puVar3[4] * _DAT_007904f8 * _DAT_007904f0,
                 (float)(int)puVar3[5] * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    FUN_006eaaa0(DAT_00807598,uStack_8,0);
    puVar3[1] = 1;
    puVar3[0xf] = uStack_8;
    DAT_00858df8 = (undefined4 *)uStack_54;
  }
  return uStack_10;
}


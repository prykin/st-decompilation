
undefined4 thunk_FUN_0061db80(void)

{
  code *pcVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  void *pvStack_c;
  uint uStack_8;
  
  uStack_50 = DAT_00858df8;
  DAT_00858df8 = &uStack_50;
  iVar2 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    puVar3 = FUN_00709af0(DAT_00806774,0,(&PTR_s_light01_007d0164)[*(int *)((int)pvStack_c + 0x3c)],
                          0xffffffff,0,1,0,(undefined4 *)0x0);
    thunk_FUN_0061d9c0(pvStack_c,(undefined4 *)puVar3,(int *)&uStack_8,0);
    puVar4 = (undefined4 *)FUN_006aac70(*(int *)((int)pvStack_c + 0x93) << 4);
    *(undefined4 **)((int)pvStack_c + 0x57) = puVar4;
    for (iVar2 = (*(uint *)((int)pvStack_c + 0x93) & 0xfffffff) << 2; iVar2 != 0; iVar2 = iVar2 + -1
        ) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    iVar2 = 0;
    if (0 < *(int *)((int)pvStack_c + 0x93)) {
      do {
        *(undefined4 *)(*(int *)((int)pvStack_c + 0x57) + iVar2 * 4) = 0xffffffff;
        iVar6 = iVar2 + *(int *)((int)pvStack_c + 0x93) * 3;
        iVar2 = iVar2 + 1;
        *(undefined4 *)(*(int *)((int)pvStack_c + 0x57) + iVar6 * 4) = 0xffffffff;
      } while (iVar2 < *(int *)((int)pvStack_c + 0x93));
    }
    **(undefined4 **)((int)pvStack_c + 0x57) = 0;
    *(undefined4 *)(*(int *)((int)pvStack_c + 0x57) + *(int *)((int)pvStack_c + 0x93) * 0xc) = 0;
    puVar5 = FUN_006ae290((uint *)0x0,uStack_8,0x30,10);
    *(uint **)((int)pvStack_c + 0xa3) = puVar5;
    DAT_00858df8 = (undefined4 *)uStack_50;
    return 1;
  }
  DAT_00858df8 = (undefined4 *)uStack_50;
  iVar6 = FUN_006ad4d0(s_E____titans_nick_to_light_Cpp_007d01b0,0x13b,0,iVar2,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return uVar7;
  }
  FUN_006a5e40(iVar2,0,0x7d01b0,0x13d);
  return 0xffff;
}



uint * STGroupBoatC::Way3DGrpGetDistrPoint
                 (void *param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,
                 int param_7,int param_8)

{
  code *pcVar1;
  ushort uVar2;
  uint *puVar3;
  int iVar4;
  undefined4 unaff_ESI;
  int iVar5;
  void *unaff_EDI;
  undefined4 uStack_58;
  undefined4 auStack_54 [16];
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  int iStack_c;
  uint *puStack_8;
  
  uVar2 = *(ushort *)(param_2 + 0xc);
  iVar4 = 0;
  iStack_c = 0;
  *(ushort *)((int)param_1 + 0x27) = uVar2;
  if (uVar2 == 0) {
    return (uint *)0x0;
  }
  puVar3 = FUN_006ae290((uint *)0x0,(uint)uVar2,6,1);
  puStack_8 = puVar3;
  uVar2 = thunk_FUN_004233c0((int)param_1);
  DAT_007f4d4c = (uint)uVar2;
  if ((DAT_007f4d4c < 2) && (*(short *)((int)param_1 + 0x27) == 1)) {
    uStack_14 = (undefined2)param_6;
    uStack_12 = (undefined2)param_7;
    uStack_10 = (undefined2)param_8;
    FUN_006ae1c0(puVar3,(undefined4 *)&uStack_14);
    goto LAB_004157f0;
  }
  uStack_58 = DAT_00858df8;
  DAT_00858df8 = &uStack_58;
  iVar4 = __setjmp3(auStack_54,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    if (*(int *)((int)param_1 + 0x4d) != 0) {
      iVar4 = FUN_006db910(param_3,param_4,param_6,param_7);
      iVar4 = ((iVar4 * 4 + 0x2d) / 0x5a) * 0x5a;
      iVar4 = (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2;
      *(int *)((int)param_1 + 0x55) = iVar4;
      if (iVar4 == 0x168) {
        *(undefined4 *)((int)param_1 + 0x55) = 0;
      }
      *(uint *)((int)param_1 + 0x49) = *(uint *)((int)param_1 + 0x49) | 1;
    }
    iVar4 = thunk_FUN_00413af0(param_1,param_2,param_6,param_7,param_8);
    if (iVar4 == 0) {
      iVar4 = 0;
      if (0 < DAT_007f4d40) {
        iVar5 = 0;
        do {
          uStack_14 = *(undefined2 *)(iVar5 + 0xc + (int)DAT_007f4d04);
          uStack_12 = *(undefined2 *)(iVar5 + 0x10 + (int)DAT_007f4d04);
          uStack_10 = *(undefined2 *)(iVar5 + 0x14 + (int)DAT_007f4d04);
          FUN_006ae140(puStack_8,*(uint *)(iVar5 + 0x18 + (int)DAT_007f4d04),
                       (undefined4 *)&uStack_14);
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + 0x1c;
        } while (iVar4 < DAT_007f4d40);
      }
      iVar4 = 0;
      if (0 < DAT_007f4cf8) {
        do {
          iVar5 = (uint)*(ushort *)((int)param_1 + 0x27) - iVar4;
          uStack_14 = *(undefined2 *)(DAT_007f4d04 + iVar5 * 7 + -4);
          uStack_12 = *(undefined2 *)(DAT_007f4d04 + iVar5 * 7 + -3);
          uStack_10 = *(undefined2 *)(DAT_007f4d04 + iVar5 * 7 + -2);
          FUN_006ae140(puStack_8,DAT_007f4d04[iVar5 * 7 + -1],(undefined4 *)&uStack_14);
          iVar4 = iVar4 + 1;
        } while (iVar4 < DAT_007f4cf8);
        DAT_00858df8 = (undefined4 *)uStack_58;
        iVar4 = iStack_c;
        goto LAB_004157e1;
      }
    }
    else {
      iVar4 = 0;
      uStack_10 = (undefined2)param_8;
      uStack_14 = (undefined2)param_6;
      uStack_12 = (undefined2)param_7;
      if (*(short *)((int)param_1 + 0x27) != 0) {
        do {
          FUN_006ae1c0(puStack_8,(undefined4 *)&uStack_14);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)(uint)*(ushort *)((int)param_1 + 0x27));
      }
    }
    DAT_00858df8 = (undefined4 *)uStack_58;
    iVar4 = iStack_c;
  }
  else {
    DAT_00858df8 = (undefined4 *)uStack_58;
    iStack_c = iVar4;
    iVar5 = FUN_006ad4d0(s_E____titans_wlad_Grpway3d_cpp_007a4ca8,0xeae,0,iVar4,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uint *)(*pcVar1)();
      return puVar3;
    }
  }
LAB_004157e1:
  FUN_006a5e90(DAT_007f4d04);
  puVar3 = puStack_8;
LAB_004157f0:
  if (iVar4 != 0) {
    FUN_006ae110((byte *)puVar3);
    puStack_8 = (uint *)0x0;
    FUN_006a5e40(iVar4,DAT_007ed77c,0x7a4ca8,0xeb8);
    return (uint *)0x0;
  }
  return puVar3;
}


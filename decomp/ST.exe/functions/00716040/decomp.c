
undefined4 __thiscall
FUN_00716040(void *this,undefined4 param_1,undefined1 param_2,uint param_3,char *param_4,
            uint param_5,int param_6)

{
  char cVar1;
  code *pcVar2;
  void *pvVar3;
  int iVar4;
  char *pcVar5;
  short *psVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar11;
  undefined4 local_50;
  undefined4 local_4c [16];
  void *local_c;
  undefined4 local_8;
  
  local_8 = 0;
  if (*(int *)((int)this + 4) == -1) {
    return 0;
  }
  if (*(char *)((int)this + 0x4c) == -0x80) {
    return 0;
  }
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  local_c = this;
  iVar4 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  pvVar3 = local_c;
  if (iVar4 == 0) {
    *(undefined4 *)((int)local_c + 0x4d) = 0;
    if (*(int *)((int)local_c + 0x61) == 0) {
      switch(*(undefined1 *)((int)local_c + 0x4c)) {
      case 7:
      case 0x81:
        if (*(int *)((int)local_c + 0x51) != 0) {
          FUN_00725e30((int *)((int)local_c + 0x51));
        }
        break;
      case 8:
        if (*(int *)((int)local_c + 0x59) != 0) {
          FUN_00726260((undefined4 *)((int)local_c + 0x59));
        }
        break;
      case 0x1e:
        if (*(int *)((int)local_c + 0x55) != 0) {
          FUN_00726bd0((int *)((int)local_c + 0x55));
        }
      }
    }
    switch(param_2) {
    case 7:
    case 0x81:
      pcVar5 = FUN_00725c60(param_1,param_4,0,param_6);
      *(char **)((int)pvVar3 + 0x51) = pcVar5;
      if (pcVar5 == (char *)0x0) {
        FUN_006a5e40(0,DAT_007ed77c,0x7f0454,0xe4);
      }
      iVar4 = *(int *)((int)pvVar3 + 0x51);
      FUN_006b2930(*(int **)((int)pvVar3 + 0x48),*(uint *)((int)pvVar3 + 4),0,
                   (undefined4 *)(int)*(short *)(iVar4 + 0x23),(int *)(iVar4 + 0x2d),0x8000000,
                   (int)*(short *)(iVar4 + 0x29),(int)*(short *)(iVar4 + 0x2b));
      iVar4 = *(int *)((int)pvVar3 + 0x51);
      *(int *)((int)pvVar3 + 0xc) = (int)*(short *)(iVar4 + 0x23);
      *(int *)((int)pvVar3 + 0x24) = (int)*(short *)(iVar4 + 0x29);
      *(int *)((int)pvVar3 + 0x28) = (int)*(short *)(iVar4 + 0x2b);
      break;
    case 8:
      psVar6 = FUN_00725f50(param_1,param_4,param_3,0,param_6);
      *(short **)((int)pvVar3 + 0x59) = psVar6;
      if (psVar6 == (short *)0x0) {
        FUN_006a5e40(0,DAT_007ed77c,0x7f0454,0xf8);
      }
      psVar6 = *(short **)((int)pvVar3 + 0x59);
      FUN_006b2930(*(int **)((int)pvVar3 + 0x48),*(uint *)((int)pvVar3 + 4),(int)*psVar6,
                   (undefined4 *)(int)psVar6[1],(int *)(psVar6 + 6),0x4000000,(int)psVar6[2],
                   (int)psVar6[3]);
      psVar6 = *(short **)((int)pvVar3 + 0x59);
      *(int *)((int)pvVar3 + 0xc) = (int)psVar6[1];
      *(int *)((int)pvVar3 + 0x18) = (int)*psVar6;
      *(int *)((int)pvVar3 + 0x24) = (int)psVar6[2];
      *(int *)((int)pvVar3 + 0x28) = (int)psVar6[3];
      *(uint *)((int)pvVar3 + 0x4d) = param_3;
      break;
    case 0x1e:
      psVar6 = FUN_00726a80(param_1,param_4,0,param_6);
      *(short **)((int)pvVar3 + 0x55) = psVar6;
      if (psVar6 == (short *)0x0) {
        FUN_006a5e40(0,DAT_007ed77c,0x7f0454,0xee);
      }
      psVar6 = *(short **)((int)pvVar3 + 0x55);
      FUN_006b2930(*(int **)((int)pvVar3 + 0x48),*(uint *)((int)pvVar3 + 4),0,
                   (undefined4 *)(int)*psVar6,(int *)(psVar6 + 5),0x8000000,(int)psVar6[3],
                   (int)psVar6[4]);
      psVar6 = *(short **)((int)pvVar3 + 0x55);
      *(int *)((int)pvVar3 + 0xc) = (int)*psVar6;
      *(int *)((int)pvVar3 + 0x24) = (int)psVar6[3];
      *(int *)((int)pvVar3 + 0x28) = (int)psVar6[4];
    }
    *(undefined1 *)((int)pvVar3 + 0x4c) = param_2;
    iVar4 = *(int *)((int)pvVar3 + 0xc);
    if (iVar4 < 1) {
      iVar8 = iVar4 + -1;
    }
    else {
      iVar8 = 0;
    }
    *(int *)((int)pvVar3 + 0x10) = iVar8;
    *(int *)((int)pvVar3 + 0x14) = iVar4 + -1;
    uVar9 = 0xffffffff;
    do {
      pcVar5 = param_4;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar5 = param_4 + 1;
      cVar1 = *param_4;
      param_4 = pcVar5;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    pcVar5 = pcVar5 + -uVar9;
    pcVar11 = (char *)((int)pvVar3 + 0x65);
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar11 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar11 = pcVar11 + 1;
    }
    if (param_5 != 0xffffffff) {
      FUN_006b3020(*(int *)((int)pvVar3 + 0x48),*(uint *)((int)pvVar3 + 4),param_5);
      *(uint *)((int)pvVar3 + 0x5d) = param_5;
    }
    *(undefined4 *)((int)pvVar3 + 0x61) = 0;
    DAT_00858df8 = (undefined4 *)local_50;
  }
  else {
    DAT_00858df8 = (undefined4 *)local_50;
    local_8 = 0xfffffffc;
    if (param_6 != 0) {
      iVar8 = FUN_006ad4d0(s_E__Ourlib_Sprite_cpp_007f0454,0x115,0,iVar4,&DAT_007a4ccc);
      if (iVar8 != 0) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return uVar7;
      }
      FUN_006a5e40(iVar4,0,0x7f0454,0x117);
      return 0xfffffffc;
    }
  }
  return local_8;
}


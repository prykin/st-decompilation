
void FUN_00591940(void)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  LPSTR pCVar4;
  BITMAPINFO *pBVar5;
  undefined4 unaff_ESI;
  int *piVar6;
  void *unaff_EDI;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  void *pvVar11;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar7 = FUN_006ad4d0(s_E____titans_Start_camp_obj_cpp_007cbcd4,0xb5,0,iVar2,&DAT_007a4ccc);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7cbcd4,0xb5);
    return;
  }
  FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
  thunk_FUN_005403c0(0,0,'\x01',*(BITMAPINFO **)(DAT_0081176c + 0x2c));
  iVar7 = local_8;
  pvVar11 = *(void **)(DAT_0081176c + 0x30);
  uVar9 = 0xffffffff;
  uVar8 = 0xfffffffe;
  puVar3 = (uint *)FUN_006b0140((-(uint)(*(int *)(local_8 + 0x1ffc) != 0) & 0xfffffca8) + 0x26b1,
                                DAT_00807618);
  thunk_FUN_00540890(0,0xe9,0x14,0x14c,0x18,puVar3,uVar8,uVar9,pvVar11,iVar2);
  if (*(int *)(DAT_0081176c + 0x28) == 0) {
    iVar2 = 0;
    bVar10 = 0;
    pCVar4 = FUN_006f2c00(s_CMPG_BKG_007cbe10,1,(uint)DAT_0080874e);
    pBVar5 = (BITMAPINFO *)FUN_0070a9f0(DAT_00806780,pCVar4,bVar10,iVar2);
    thunk_FUN_005403c0(0xa5,0x37,'\x01',pBVar5);
  }
  else {
    piVar6 = (int *)(iVar7 + 0x1b13);
    iVar2 = 3;
    do {
      iVar7 = 0xf;
      do {
        if (*piVar6 != 0) {
          FUN_006c4aa0(*piVar6);
        }
        piVar6 = piVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 4;
    piVar6 = (int *)(local_8 + 0x1bd7);
    do {
      if (*piVar6 != 0) {
        FUN_006c4aa0(*piVar6);
      }
      piVar6 = piVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 0;
    if (*(char *)(local_8 + 0x9a) != '\0') {
      puVar3 = (uint *)(local_8 + 0xff);
      do {
        if (puVar3[-6] != 0xffffffff) {
          FUN_006b3730((uint *)puVar3[0xb],puVar3[-6],puVar3[-5],*puVar3,puVar3[1]);
        }
        if ((*(char *)(local_8 + 0x65) == '\x01') && (*(uint *)((int)puVar3 + 0x79) != 0xffffffff))
        {
          FUN_006b3730(*(uint **)((int)puVar3 + 0xbd),*(uint *)((int)puVar3 + 0x79),
                       *(uint *)((int)puVar3 + 0x7d),*(uint *)((int)puVar3 + 0x91),
                       *(uint *)((int)puVar3 + 0x95));
        }
        iVar2 = iVar2 + 1;
        puVar3 = (uint *)((int)puVar3 + 0x1fb);
      } while (iVar2 < (int)(uint)*(byte *)(local_8 + 0x9a));
      DAT_00858df8 = (undefined4 *)local_4c;
      return;
    }
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  return;
}


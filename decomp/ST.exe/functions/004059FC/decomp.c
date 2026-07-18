
void thunk_FUN_005e7fe0(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  ushort *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 unaff_ESI;
  void *this;
  void *unaff_EDI;
  byte *pbVar9;
  byte abStack_1a8 [260];
  undefined4 **ppuStack_a4;
  undefined4 auStack_a0 [16];
  undefined4 **ppuStack_60;
  undefined4 auStack_5c [16];
  undefined1 uStack_1c;
  undefined4 uStack_1b;
  undefined4 *puStack_10;
  int iStack_c;
  void *pvStack_8;
  
  iStack_c = 0;
  ppuStack_60 = DAT_00858df8;
  DAT_00858df8 = &ppuStack_60;
  iVar3 = __setjmp3(auStack_5c,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = ppuStack_60;
    iVar8 = FUN_006ad4d0(s_E____titans_Start_wait_obj_cpp_007cdd5c,0x15e,0,iVar3,&DAT_007a4ccc);
    if (iVar8 == 0) {
      FUN_006a5e40(iVar3,0,0x7cdd5c,0x15e);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar4 = FUN_0070a5a0(DAT_00806780,1,s_MM_MAPB_007cc790,0,1);
  thunk_FUN_00540760(*(undefined4 **)(DAT_0081176c + 0x2f0),0,0,'\x01',(byte *)puVar4);
  iVar3 = *(int *)(DAT_0081176c + 0x544);
  FUN_006b4170(iVar3,0,0,0,*(int *)(iVar3 + 4),*(int *)(iVar3 + 8),0xff);
  if (*(byte **)(DAT_0081176c + 0x548) != (byte *)0x0) {
    FUN_006b5570(*(byte **)(DAT_0081176c + 0x548));
  }
  puVar5 = FUN_006b54f0((uint *)0x0,10,10);
  this = pvStack_8;
  *(uint **)(DAT_0081176c + 0x548) = puVar5;
  if (*(int *)((int)pvStack_8 + 0x1a8f) == -1) {
    uVar6 = FUN_006b0140(0x252c,DAT_00807618);
    uVar7 = FUN_006b0140(0x252a,DAT_00807618);
    wsprintfA((LPSTR)&DAT_0080f33a,s__s___s__007c85fc,uVar7,uVar6);
    iVar3 = 0;
    puVar5 = &DAT_0080f33a;
  }
  else {
    if ((*(byte *)((int)pvStack_8 + 0x1a93) < 2) || (3 < *(byte *)((int)pvStack_8 + 0x1a93)))
    goto LAB_005e829d;
    wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c6ee4,&DAT_00807680,PTR_s_CUSTOM__0079c244);
    uStack_1c = *(undefined1 *)((int)this + 0x1a93);
    uStack_1b = *(undefined4 *)((int)this + 0x1a8f);
    iVar3 = FUN_00725910((char *)&DAT_0080f33a,s___DKD_007cce44,0,&LAB_00404e49,&uStack_1c,0);
    if (iVar3 == -0x70) {
      ppuStack_a4 = DAT_00858df8;
      DAT_00858df8 = &ppuStack_a4;
      iVar3 = __setjmp3(auStack_a0,0,unaff_EDI,unaff_ESI);
      if (iVar3 == 0) {
        puStack_10 = FUN_006f0ec0(0x345,&DAT_0080ed16,0,0,0);
      }
      puVar1 = puStack_10;
      this = pvStack_8;
      DAT_00858df8 = ppuStack_a4;
      if (puStack_10 != (undefined4 *)0x0) {
        thunk_FUN_005dc050((int)puStack_10,(*(char *)((int)pvStack_8 + 0x1a93) != '\x02') + '\x04');
        iStack_c = 1;
        FUN_0072e730(&DAT_0080ed16,(byte *)0x0,(byte *)0x0,abStack_1a8,(byte *)0x0);
        pbVar9 = abStack_1a8;
        uVar6 = FUN_006b0140(0x252a,DAT_00807618);
        wsprintfA((LPSTR)&DAT_0080f33a,s__s___s__007c85fc,uVar6,pbVar9);
        thunk_FUN_005e7c00(&DAT_0080f33a,0);
        FUN_006f1170(puVar1);
      }
      goto LAB_005e829d;
    }
    uVar6 = FUN_006b0140(0x252b,DAT_00807618);
    uVar7 = FUN_006b0140(0x252a,DAT_00807618);
    wsprintfA((LPSTR)&DAT_0080f33a,s__s___s__007c85fc,uVar7,uVar6);
    thunk_FUN_005e7c00(&DAT_0080f33a,0);
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x252d,DAT_00807618);
  }
  thunk_FUN_005e7c00(puVar5,iVar3);
LAB_005e829d:
  DAT_008087be = *(undefined4 *)((int)this + 0x1a8f);
  if (iStack_c == 0) {
    *(undefined4 *)((int)this + 0x2d) = 0x28;
    *(undefined2 *)((int)this + 0x31) = 1;
    puVar1 = (undefined4 *)((int)this + 0x1d);
    *(undefined2 *)((int)this + 0x33) = *(undefined2 *)(*(int *)(DAT_0081176c + 0x548) + 8);
    FUN_006e6080(this,2,*(undefined4 *)(DAT_0081176c + 0x389),puVar1);
    *(undefined4 *)((int)this + 0x2d) = 0x22;
    *(undefined2 *)((int)this + 0x33) = 0;
    *(undefined2 *)((int)this + 0x31) = 0;
    FUN_006e6080(this,2,*(undefined4 *)(DAT_0081176c + 0x389),puVar1);
    *(undefined4 *)((int)this + 0x2d) = 0x20;
    *(undefined4 *)((int)this + 0x31) = 0;
    FUN_006e6080(this,2,*(undefined4 *)(DAT_0081176c + 0x389),puVar1);
  }
  if (-1 < (int)*(uint *)(DAT_0081176c + 0x2ec)) {
    FUN_006b35d0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x2ec));
  }
  if (-1 < (int)*(uint *)(DAT_0081176c + 0x540)) {
    FUN_006b35d0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x540));
  }
  DAT_00858df8 = ppuStack_60;
  return;
}


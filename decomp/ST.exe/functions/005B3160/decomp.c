
void FUN_005b3160(void)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  LPCSTR pCVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  int *piVar7;
  void *unaff_EDI;
  uint uVar8;
  uint uVar9;
  void *pvVar10;
  undefined4 uVar11;
  undefined4 *local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
    thunk_FUN_005403c0(0,0,'\x01',*(BITMAPINFO **)(DAT_0081176c + 0x2c));
    if (*(char *)(local_8 + 0x1ee3) == '\0') {
      uVar11 = 0;
      pvVar10 = *(void **)(DAT_0081176c + 0x30);
      uVar9 = 0xffffffff;
      uVar8 = 0xfffffffe;
      puVar3 = (uint *)FUN_006b0140(0x26ac,DAT_00807618);
      thunk_FUN_00540890(0,0xe9,0x14,0x14c,0x18,puVar3,uVar8,uVar9,pvVar10,uVar11);
      uVar9 = DAT_00807dd5 >> 0x10 & 0xff;
      uVar6 = DAT_00807dd5 & 0xffff;
      uVar8 = DAT_00807dd5 >> 0x18;
      pCVar4 = (LPCSTR)FUN_006b0140(0x2329,DAT_00807618);
      wsprintfA((LPSTR)(*(int *)(local_8 + 0x1a5b) + 0x3c),pCVar4,uVar8,uVar9,uVar6);
      thunk_FUN_00540890(0,0,0x240,800,0x18,(uint *)(*(int *)(local_8 + 0x1a5b) + 0x3c),0xfffffffe,
                         0xffffffff,*(void **)(DAT_0081176c + 0x34),0);
    }
    else if (*(char *)(local_8 + 0x1ee3) == '\x01') {
      pvVar10 = *(void **)(DAT_0081176c + 0x30);
      uVar9 = 0xffffffff;
      uVar8 = 0xfffffffe;
      puVar3 = (uint *)FUN_006b0140(0x26b0,DAT_00807618);
      thunk_FUN_00540890(0,0xe9,0x14,0x14c,0x18,puVar3,uVar8,uVar9,pvVar10,iVar2);
    }
    piVar7 = (int *)(local_8 + 0x1aa7);
    iVar2 = 10;
    do {
      if (*piVar7 != 0) {
        FUN_006c4aa0(*piVar7);
      }
      piVar7 = piVar7 + 1;
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
    }
    DAT_00858df8 = local_4c;
    return;
  }
  DAT_00858df8 = local_4c;
  iVar5 = FUN_006ad4d0(s_E____titans_Start_main_obj_cpp_007cc8e8,0x7e,0,iVar2,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cc8e8,0x7e);
  return;
}


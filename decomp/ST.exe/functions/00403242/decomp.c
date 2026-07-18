
void thunk_FUN_0053ac00(void)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  byte *pbVar4;
  UINT UVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  char *pcVar10;
  void *unaff_EDI;
  size_t _Count;
  char *pcVar11;
  int iVar12;
  int iVar13;
  undefined4 uStack_58;
  undefined4 auStack_54 [16];
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  uStack_58 = DAT_00858df8;
  DAT_00858df8 = &uStack_58;
  iVar3 = __setjmp3(auStack_54,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_58;
    iVar7 = FUN_006ad4d0(s_E____titans_Andrey_playpan_cpp_007c7574,0x11f,0,iVar3,&DAT_007a4ccc);
    if (iVar7 == 0) {
      FUN_006a5e40(iVar3,0,0x7c7574,0x11f);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  thunk_FUN_00540760(*(undefined4 **)(iStack_14 + 0x68),0x1d,0x13,'\x01',
                     *(byte **)(iStack_14 + 0x1cd));
  iStack_c = 0x1b;
  iStack_10 = 8;
  iVar3 = 0;
  do {
    iVar7 = iStack_c;
    uVar8 = iVar3 + *(int *)(iStack_14 + 0x1c9);
    if (uVar8 < DAT_00808aaf) {
      iStack_8 = iVar3;
      pbVar4 = (byte *)FUN_0070b3a0(*(int *)(iStack_14 + 0x1d1),
                                    (byte)(&DAT_00808af4)[uVar8 * 0x9c] + 9);
      thunk_FUN_00540760(*(undefined4 **)(iStack_14 + 0x68),0x22,iVar7,'\x01',pbVar4);
      FUN_00710a90(*(int *)(iStack_14 + 0x68),0,0x37,iVar7,0x10,0xc);
      cVar1 = (&DAT_008087e8)
              [(uint)(byte)(&DAT_00808af4)[(iVar3 + *(int *)(iStack_14 + 0x1c9)) * 0x9c] * 0x51];
      if (cVar1 == '\x01') {
        UVar5 = 0x2742;
      }
      else if (cVar1 == '\x02') {
        UVar5 = 0x2743;
      }
      else if (cVar1 == '\x03') {
        UVar5 = 0x2745;
      }
      else {
        UVar5 = 10000;
      }
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar12 = -1;
      puVar6 = (uint *)FUN_006b0140(UVar5,DAT_00807618);
      FUN_007119c0(puVar6,iVar12,iVar13,uVar8);
      FUN_00710a90(*(int *)(iStack_14 + 0x68),0,0x68,iVar7,0x10e,0xc);
      iVar7 = FUN_00711110(*(void **)(iStack_14 + 0x1dd),
                           &DAT_00808ab0 + (iVar3 + *(int *)(iStack_14 + 0x1c9)) * 0x27);
      if (iVar7 < 0x10e) {
        uVar8 = 0xffffffff;
        pcVar10 = (char *)(&DAT_00808ab0 + (iVar3 + *(int *)(iStack_14 + 0x1c9)) * 0x27);
        do {
          pcVar11 = pcVar10;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar11 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar10 = pcVar11 + -uVar8;
        pcVar11 = (char *)&DAT_0080f33a;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar8 = uVar8 & 3; iVar3 = iStack_8, uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
      }
      else {
        uVar8 = 0xffffffff;
        pcVar10 = (char *)(&DAT_00808ab0 + (iVar3 + *(int *)(iStack_14 + 0x1c9)) * 0x27);
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        iStack_8 = ~uVar8 - 1;
        _Count = 0x14;
        do {
          _Count = _Count + 1;
          _strncpy((char *)&DAT_0080f33a,
                   (char *)(&DAT_00808ab0 + (iVar3 + *(int *)(iStack_14 + 0x1c9)) * 0x27),_Count);
          iVar7 = FUN_00711110(*(void **)(iStack_14 + 0x1dd),&DAT_0080f33a);
          if (0x10d < iVar7) break;
        } while ((int)_Count < iStack_8);
      }
      FUN_007119c0(&DAT_0080f33a,5,-1,(DAT_0080874e != '\x03') - 1 & 5);
    }
    iVar3 = iVar3 + 1;
    iStack_c = iStack_c + 0xf;
    iStack_10 = iStack_10 + -1;
    if (iStack_10 == 0) {
      iStack_8 = iVar3;
      FUN_006b3640(DAT_008075a8,*(uint *)(iStack_14 + 0x60),0xffffffff,*(uint *)(iStack_14 + 0x3c),
                   *(uint *)(iStack_14 + 0x44));
      DAT_00858df8 = (undefined4 *)uStack_58;
      return;
    }
  } while( true );
}



void thunk_FUN_005b9b10(char param_1,char param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  code *pcVar3;
  void *this;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar11;
  char cVar12;
  int iVar13;
  undefined4 auStack_454 [256];
  undefined4 *puStack_54;
  undefined4 auStack_50 [16];
  uint uStack_10;
  int iStack_c;
  uint uStack_8;
  
  puStack_54 = DAT_00858df8;
  DAT_00858df8 = &puStack_54;
  iVar4 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    if (DAT_008067a0 != '\0') {
      CFsgsConnection::CloseGame((CFsgsConnection *)&DAT_00802a90);
      CFsgsConnection::CancelConnection((CFsgsConnection *)&DAT_00802a90);
      DAT_00802a99 = 0;
      DAT_008067a0 = '\0';
    }
    puVar5 = FUN_006b54f0((uint *)0x0,1,10);
    *(uint **)(uStack_10 + 0x1c92) = puVar5;
    FUN_006b5aa0((int)puVar5,(char *)&DAT_00807ddd);
    if (DAT_00802a30 != (void *)0x0) {
      if (*(int *)((int)DAT_00802a30 + 0xa9) == 0) {
        FUN_006b8b10(*(int **)((int)DAT_00802a30 + 0xad));
      }
      else if (*(uint *)((int)DAT_00802a30 + 0x1c) != 0xffffffff) {
        FUN_006b3af0(*(int **)((int)DAT_00802a30 + 0x60),*(uint *)((int)DAT_00802a30 + 0x1c));
      }
    }
    uVar6 = FUN_0070a9f0(DAT_00806780,s_LOADSINGLE_007cc79c,0,1);
    *(undefined4 *)(DAT_0081176c + 0x2c) = uVar6;
    iVar4 = *(int *)(DAT_0081176c + 0x2c);
    *(int *)(uStack_10 + 0x5d) = iVar4;
    FUN_006bc360(iVar4,auStack_454,(int *)0x0);
    *(undefined4 *)(*(int *)(uStack_10 + 0x1a5b) + 0x140) = 0x1f;
    FUN_00718780((int)auStack_454,0,0x100,0x8b,0x15,
                 (undefined4 *)(*(int *)(uStack_10 + 0x1a5b) + 0x144));
    if (param_2 != '\0') {
      thunk_FUN_0055dbf0(DAT_0080759c,1,0);
    }
    *(undefined1 *)(uStack_10 + 0x1a71) = 0;
    thunk_FUN_005dac60();
    if ((param_1 == '\x01') && (iVar4 = thunk_FUN_005daa90(), iVar4 != 0)) {
      param_1 = '\0';
    }
    thunk_FUN_005baac0(param_1,'\x01');
    *(undefined1 *)(uStack_10 + 0x1a60) = *(undefined1 *)(uStack_10 + 0x1a5f);
    if (*(int *)(*(int *)(uStack_10 + 0x1a5b) + 0x2e6) != 0) {
      thunk_FUN_005b7210();
      *(undefined4 *)(*(int *)(*(int *)(uStack_10 + 0x1a5b) + 0x2e6) + 0x1cab) =
           *(undefined4 *)(uStack_10 + 8);
    }
    FUN_007158a0(DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)(uStack_10 + 0x1a77) + 4))(DAT_00806784,7,0,s_MM_SLDUP_007cc04c,0xffffffff)
    ;
    *(undefined4 *)(uStack_10 + 0x1a93) = 0x289;
    *(undefined4 *)(uStack_10 + 0x1a97) = 0x6a;
    *(undefined4 *)(uStack_10 + 0x1a7f) = 0;
    FUN_007158a0(DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)(uStack_10 + 0x1b08) + 4))(DAT_00806784,7,0,s_MM_SLDDN_007cc040,0xffffffff)
    ;
    *(undefined4 *)(uStack_10 + 0x1b24) = 0x289;
    *(undefined4 *)(uStack_10 + 0x1b28) = 0x176;
    *(undefined4 *)(uStack_10 + 0x1b10) = 0;
    FUN_007158a0(DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)(uStack_10 + 0x1b99) + 4))(DAT_00806784,7,0,s_MM_SLDT_007cc034,0xffffffff);
    iVar4 = 1;
    *(undefined4 *)(uStack_10 + 0x1bb5) = 0x28e;
    *(undefined4 *)(uStack_10 + 0x1bb9) = 0x8a;
    puVar8 = (undefined4 *)(*(int *)(uStack_10 + 0x5d) + 0x28);
    *(undefined4 *)(uStack_10 + 0x1ba1) = 0;
    uVar7 = FUN_006b4fe0(*(int *)(uStack_10 + 0x5d));
    iVar4 = FUN_006b50c0(0x208,0x143,(uint)*(ushort *)(*(int *)(uStack_10 + 0x5d) + 0xe),uVar7,
                         puVar8,iVar4);
    *(int *)(uStack_10 + 0x1c82) = iVar4;
    uVar7 = *(uint *)(iVar4 + 0x14);
    if (uVar7 == 0) {
      uVar7 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar4 + 8);
    }
    puVar8 = (undefined4 *)FUN_006b4fa0(iVar4);
    for (uVar10 = uVar7 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    puVar5 = (uint *)(uStack_10 + 0x1c2a);
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar8 = 0;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    uVar7 = 0x67;
    do {
      FUN_006b2330((uint)DAT_008075a8,puVar5,0x31,0x40597f,
                   *(uint *)(*(int *)(uStack_10 + 0x1c82) + 4),0x13,uStack_10);
      FUN_006b3640(DAT_008075a8,*puVar5,0xffffffff,0x7a,uVar7);
      uVar7 = uVar7 + 0x13;
      puVar5 = puVar5 + 1;
    } while ((int)uVar7 < 0x209);
    iVar4 = 1;
    puVar8 = (undefined4 *)(*(int *)(uStack_10 + 0x5d) + 0x28);
    uVar7 = FUN_006b4fe0(*(int *)(uStack_10 + 0x5d));
    iVar4 = FUN_006b50c0(0x22e,0x2e,(uint)*(ushort *)(*(int *)(uStack_10 + 0x5d) + 0xe),uVar7,puVar8
                         ,iVar4);
    *(int *)(uStack_10 + 0x1c8e) = iVar4;
    uVar7 = *(uint *)(iVar4 + 0x14);
    if (uVar7 == 0) {
      uVar7 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar4 + 8);
    }
    puVar8 = (undefined4 *)FUN_006b4fa0(iVar4);
    for (uVar10 = uVar7 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar8 = 0xff;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    FUN_00710a90(*(int *)(uStack_10 + 0x1c8e),0,3,1,0x22c,0x14);
    uVar6 = 2;
    iVar13 = -1;
    iVar4 = -2;
    puVar5 = (uint *)FUN_006b0140(0x26b5,DAT_00807618);
    FUN_007119c0(puVar5,iVar4,iVar13,uVar6);
    uVar7 = *(uint *)(uStack_10 + 0x1c8e);
    puVar5 = (uint *)(uStack_10 + 0x1c8a);
    FUN_006b2330((uint)DAT_008075a8,puVar5,0x31,0x4023f6,*(uint *)(uVar7 + 4),*(uint *)(uVar7 + 8),
                 uVar7);
    FUN_006b3640(DAT_008075a8,*puVar5,0xffffffff,0x79,0x197);
    thunk_FUN_005bba90('\x01');
    FUN_006b2330((uint)DAT_008075a8,&uStack_8,0x32,0x403c74,0x22e,0x145,uStack_10);
    FUN_006b3640(DAT_008075a8,uStack_8,0xffffffff,0x79,0x51);
    puVar9 = (undefined1 *)FUN_0072e530(0x33);
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = (undefined1 *)0x0;
    }
    else {
      puVar9[2] = 1;
      *puVar9 = 0;
      *(undefined4 *)(puVar9 + 3) = 0xffffffff;
      puVar9[1] = 2;
      *(undefined4 *)(puVar9 + 7) = 0;
      *(undefined4 *)(puVar9 + 0xb) = 0;
      *(undefined4 *)(puVar9 + 0xf) = 0;
      *(undefined4 *)(puVar9 + 0x1b) = 1;
      *(undefined4 *)(puVar9 + 0x13) = 1;
      *(undefined4 *)(puVar9 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar9 + 0x27) = 0;
      *(undefined4 *)(puVar9 + 0x23) = 0;
      *(undefined4 *)(puVar9 + 0x2f) = 1;
      *(undefined4 *)(puVar9 + 0x2b) = 1;
    }
    *(undefined1 **)(uStack_10 + 0x1c96) = puVar9;
    if (puVar9 != (undefined1 *)0x0) {
      uVar10 = 0;
      cVar12 = '\x01';
      uVar7 = 0x10;
      iVar13 = 1;
      iVar4 = FUN_006bf9f0(DAT_008075a8,0x79,0x51,0x22e,0x145);
      uVar7 = thunk_FUN_005aacb0(2,0x79,0x51,iVar4,iVar13,uVar7,cVar12,uVar10);
      if (uVar7 != 0) {
        iVar4 = *(int *)(uStack_10 + 0x1c96);
        *(undefined1 *)(iVar4 + 2) = 1;
        *(undefined4 *)(iVar4 + 0x17) = *(undefined4 *)(iVar4 + 0x13);
        uVar7 = *(uint *)(*(int *)(uStack_10 + 0x1c96) + 3);
        if (-1 < (int)uVar7) {
          FUN_006b3af0(DAT_008075a8,uVar7);
        }
        if (*(uint *)(uStack_10 + 0x1a7b) != 0xffffffff) {
          FUN_006b3af0(*(int **)(uStack_10 + 0x1abf),*(uint *)(uStack_10 + 0x1a7b));
        }
        if (*(uint *)(uStack_10 + 0x1b0c) != 0xffffffff) {
          FUN_006b3af0(*(int **)(uStack_10 + 0x1b50),*(uint *)(uStack_10 + 0x1b0c));
        }
        if (*(uint *)(uStack_10 + 0x1b9d) != 0xffffffff) {
          FUN_006b3af0(*(int **)(uStack_10 + 0x1be1),*(uint *)(uStack_10 + 0x1b9d));
        }
        puVar11 = (uint *)(uStack_10 + 0x1c2a);
        iStack_c = 0x16;
        do {
          FUN_006b3af0(DAT_008075a8,*puVar11);
          puVar11 = puVar11 + 1;
          iStack_c = iStack_c + -1;
        } while (iStack_c != 0);
        iStack_c = 0;
      }
    }
    if (uStack_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,uStack_8);
      uStack_8 = 0xffffffff;
    }
    if (*(char *)(uStack_10 + 0x1a5f) == '\0') {
      FUN_006b2330((uint)DAT_008075a8,&uStack_8,0x32,0x402f13,0x22e,0x2e,
                   *(int *)(uStack_10 + 0x1a5b) + 0x140);
      FUN_006b3640(DAT_008075a8,uStack_8,0xffffffff,0x79,0x197);
      puVar9 = (undefined1 *)FUN_0072e530(0x33);
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = (undefined1 *)0x0;
      }
      else {
        puVar9[2] = 1;
        *puVar9 = 0;
        *(undefined4 *)(puVar9 + 3) = 0xffffffff;
        puVar9[1] = 2;
        *(undefined4 *)(puVar9 + 7) = 0;
        *(undefined4 *)(puVar9 + 0xb) = 0;
        *(undefined4 *)(puVar9 + 0xf) = 0;
        *(undefined4 *)(puVar9 + 0x1b) = 1;
        *(undefined4 *)(puVar9 + 0x13) = 1;
        *(undefined4 *)(puVar9 + 0x17) = 0xffffffff;
        *(undefined4 *)(puVar9 + 0x27) = 0;
        *(undefined4 *)(puVar9 + 0x23) = 0;
        *(undefined4 *)(puVar9 + 0x2f) = 1;
        *(undefined4 *)(puVar9 + 0x2b) = 1;
      }
      *(undefined1 **)(uStack_10 + 0x1c9a) = puVar9;
      if (puVar9 != (undefined1 *)0x0) {
        uVar10 = 0;
        cVar12 = '\x01';
        uVar7 = 0x10;
        iVar13 = 1;
        iVar4 = FUN_006bf9f0(DAT_008075a8,0x79,0x197,0x22e,0x2e);
        uVar7 = thunk_FUN_005aacb0(1,0x79,0x197,iVar4,iVar13,uVar7,cVar12,uVar10);
        if (uVar7 != 0) {
          iVar4 = *(int *)(uStack_10 + 0x1c9a);
          *(undefined1 *)(iVar4 + 2) = 1;
          *(undefined4 *)(iVar4 + 0x17) = *(undefined4 *)(iVar4 + 0x13);
          uVar7 = *(uint *)(*(int *)(uStack_10 + 0x1c9a) + 3);
          if (-1 < (int)uVar7) {
            FUN_006b3af0(DAT_008075a8,uVar7);
          }
          FUN_006b3af0(DAT_008075a8,*puVar5);
        }
      }
      if (uStack_8 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,uStack_8);
        uStack_8 = 0xffffffff;
      }
    }
    else {
      FUN_006b3af0(DAT_008075a8,*puVar5);
    }
    this = DAT_00802a30;
    if (DAT_00802a30 != (void *)0x0) {
      uVar6 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
      uVar1 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
      *(undefined1 *)((int)DAT_00802a30 + 0x493) = 1;
      *(undefined2 *)((int)this + 0x494) = 0xffff;
      thunk_FUN_0054bf40(0,uVar1,uVar6);
      thunk_FUN_00543c90(this,*(int *)((int)this + 0xc5),*(int *)((int)this + 0xc9));
      *(undefined1 *)((int)this + 0xd2) = 0;
      *(undefined4 *)((int)this + 0x4df) = 0xffffffff;
    }
    if (param_2 != '\0') {
      thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,*(int *)(uStack_10 + 0x5d),10,2);
    }
    pcVar2 = *(char **)(uStack_10 + 0x1c96);
    if (((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) && (-1 < (int)*(uint *)(pcVar2 + 3))) {
      FUN_006b3430(DAT_008075a8,*(uint *)(pcVar2 + 3));
    }
    pcVar2 = *(char **)(uStack_10 + 0x1c9a);
    if (((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) && (-1 < (int)*(uint *)(pcVar2 + 3))) {
      FUN_006b3430(DAT_008075a8,*(uint *)(pcVar2 + 3));
    }
    DAT_00858df8 = puStack_54;
    return;
  }
  DAT_00858df8 = puStack_54;
  iVar13 = FUN_006ad4d0(s_E____titans_Start_prov_obj_cpp_007ccd28,0xac,0,iVar4,&DAT_007a4ccc);
  if (iVar13 == 0) {
    FUN_006a5e40(iVar4,0,0x7ccd28,0xac);
    return;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


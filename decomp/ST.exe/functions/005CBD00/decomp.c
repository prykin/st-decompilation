
void FUN_005cbd00(char param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char cVar9;
  int iVar10;
  undefined4 local_50;
  undefined4 local_4c [16];
  int local_c;
  uint local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    DAT_00808783 = 3;
    DAT_00808754 = FUN_006e51b0(0x807620);
    if (DAT_0080877e == '\0') {
      DAT_00809958 = 0xffffffff;
      *(undefined4 *)(local_c + 0x2121) = 0xffffffff;
    }
    else {
      DAT_00809958 = 0;
      *(undefined4 *)(local_c + 0x2121) = 0;
      DAT_00808aa8 = DAT_0080734b;
    }
    piVar3 = (int *)(*(int *)(local_c + 0x1a5b) + 0x69a);
    DAT_00808aab = DAT_00809958;
    if (*piVar3 != 0) {
      FUN_006ab060(piVar3);
    }
    puVar4 = FUN_006ae290((uint *)0x0,0x20,0xc,10);
    *(uint **)(local_c + 0x2237) = puVar4;
    iVar10 = 1;
    iVar2 = *(int *)(DAT_0081176c + 0x2f0);
    *(int *)(local_c + 0x5d) = iVar2;
    puVar6 = (undefined4 *)(iVar2 + 0x28);
    uVar5 = FUN_006b4fe0(iVar2);
    iVar2 = FUN_006b50c0(0xfa,0x16,(uint)*(ushort *)(*(int *)(local_c + 0x5d) + 0xe),uVar5,puVar6,
                         iVar10);
    *(int *)(local_c + 0x2204) = iVar2;
    uVar5 = *(uint *)(iVar2 + 0x14);
    if (uVar5 == 0) {
      uVar5 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar2 + 8);
    }
    puVar6 = (undefined4 *)FUN_006b4fa0(iVar2);
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar6 = 0xff;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    uVar5 = *(uint *)(local_c + 0x2204);
    puVar4 = (uint *)(local_c + 0x2200);
    FUN_006b2330((uint)DAT_008075a8,puVar4,0x31,0x404acf,*(uint *)(uVar5 + 4),*(uint *)(uVar5 + 8),
                 uVar5);
    FUN_006b3640(DAT_008075a8,*puVar4,0xffffffff,200,0x1dc);
    FUN_006b3af0(DAT_008075a8,*puVar4);
    thunk_FUN_005c29b0(param_1);
    if (((((param_1 == '\r') || (param_1 == '\x0e')) || (param_1 == '\x0f')) || (param_1 == '\x10'))
       && (*(int *)(local_c + 0x1e27) == 0x11)) {
      FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403b61,400,0x62,
                   *(int *)(local_c + 0x1a5b) + 0x140);
      FUN_006b3640(DAT_008075a8,local_8,0xffffffff,200,0x1f1);
      if (*(uint *)(DAT_0081176c + 0x560) != 0xffffffff) {
        FUN_006b34d0(*(uint **)(DAT_0081176c + 0x5a4),*(uint *)(DAT_0081176c + 0x560),0xfffffffe,
                     *(uint *)(DAT_0081176c + 0x578),*(uint *)(DAT_0081176c + 0x57c));
      }
      if (*(uint *)(DAT_0081176c + 0x5f1) != 0xffffffff) {
        FUN_006b34d0(*(uint **)(DAT_0081176c + 0x635),*(uint *)(DAT_0081176c + 0x5f1),0xfffffffe,
                     *(uint *)(DAT_0081176c + 0x609),*(uint *)(DAT_0081176c + 0x60d));
      }
      puVar7 = (undefined1 *)FUN_0072e530(0x33);
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = (undefined1 *)0x0;
      }
      else {
        puVar7[2] = 1;
        *puVar7 = 0;
        *(undefined4 *)(puVar7 + 3) = 0xffffffff;
        puVar7[1] = 2;
        *(undefined4 *)(puVar7 + 7) = 0;
        *(undefined4 *)(puVar7 + 0xb) = 0;
        *(undefined4 *)(puVar7 + 0xf) = 0;
        *(undefined4 *)(puVar7 + 0x1b) = 1;
        *(undefined4 *)(puVar7 + 0x13) = 1;
        *(undefined4 *)(puVar7 + 0x17) = 0xffffffff;
        *(undefined4 *)(puVar7 + 0x27) = 0;
        *(undefined4 *)(puVar7 + 0x23) = 0;
        *(undefined4 *)(puVar7 + 0x2f) = 1;
        *(undefined4 *)(puVar7 + 0x2b) = 1;
      }
      *(undefined1 **)(local_c + 0x21f8) = puVar7;
      if (puVar7 != (undefined1 *)0x0) {
        uVar8 = 0;
        cVar9 = '\x01';
        uVar5 = 0x10;
        iVar10 = 1;
        iVar2 = FUN_006bf9f0(DAT_008075a8,200,0x1f1,400,0x62);
        uVar5 = thunk_FUN_005aacb0(1,200,0x1f1,iVar2,iVar10,uVar5,cVar9,uVar8);
        if (uVar5 != 0) {
          iVar2 = *(int *)(local_c + 0x21f8);
          *(undefined1 *)(iVar2 + 2) = 1;
          *(undefined4 *)(iVar2 + 0x17) = *(undefined4 *)(iVar2 + 0x13);
          uVar5 = *(uint *)(*(int *)(local_c + 0x21f8) + 3);
          if (-1 < (int)uVar5) {
            FUN_006b3430(DAT_008075a8,uVar5);
          }
          if (*(uint *)(DAT_0081176c + 0x560) != 0xffffffff) {
            FUN_006b3af0(*(int **)(DAT_0081176c + 0x5a4),*(uint *)(DAT_0081176c + 0x560));
          }
          if (*(uint *)(DAT_0081176c + 0x5f1) != 0xffffffff) {
            FUN_006b3af0(*(int **)(DAT_0081176c + 0x635),*(uint *)(DAT_0081176c + 0x5f1));
          }
          FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x558));
          FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x554));
        }
      }
      if (local_8 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,local_8);
        local_8 = 0xffffffff;
      }
    }
    else {
      if (*(uint *)(DAT_0081176c + 0x560) != 0xffffffff) {
        FUN_006b34d0(*(uint **)(DAT_0081176c + 0x5a4),*(uint *)(DAT_0081176c + 0x560),0xfffffffe,
                     *(uint *)(DAT_0081176c + 0x578),*(uint *)(DAT_0081176c + 0x57c));
      }
      if (*(uint *)(DAT_0081176c + 0x5f1) != 0xffffffff) {
        FUN_006b34d0(*(uint **)(DAT_0081176c + 0x635),*(uint *)(DAT_0081176c + 0x5f1),0xfffffffe,
                     *(uint *)(DAT_0081176c + 0x609),*(uint *)(DAT_0081176c + 0x60d));
      }
      FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x558));
      FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x554));
    }
    FUN_006b6500(DAT_00811764,DAT_0080733c);
    DAT_00858df8 = (undefined4 *)local_50;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  iVar10 = FUN_006ad4d0(s_E____titans_Start_settmobj_cpp_007cd258,0x4f,0,iVar2,&DAT_007a4ccc);
  if (iVar10 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cd258,0x4f);
  return;
}


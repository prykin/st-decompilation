
void thunk_FUN_004f7800(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int *piVar7;
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  void *pvStack_c;
  int iStack_8;
  
  uStack_50 = DAT_00858df8;
  DAT_00858df8 = &uStack_50;
  iVar2 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    puVar5 = (undefined4 *)((int)pvStack_c + 0x18);
    *(undefined4 *)((int)pvStack_c + 0x28) = 0x4404;
    FUN_006e6000(pvStack_c,0xf,0,puVar5);
    piVar7 = (int *)((int)pvStack_c + 0x217);
    iStack_8 = 4;
    do {
      if (*piVar7 != 0) {
        FUN_006ab060(piVar7);
      }
      piVar7 = piVar7 + 1;
      iStack_8 = iStack_8 + -1;
    } while (iStack_8 != 0);
    puVar4 = puVar5;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)((int)pvStack_c + 0x28) = 0x14;
    *(undefined4 *)((int)pvStack_c + 0x2c) = *(undefined4 *)((int)pvStack_c + 8);
    FUN_006e6000(pvStack_c,3,1,puVar5);
    if (*(uint *)((int)pvStack_c + 0x95c) != 0) {
      FUN_006e56b0(*(void **)((int)pvStack_c + 0xc),*(uint *)((int)pvStack_c + 0x95c));
    }
    *(undefined4 *)((int)pvStack_c + 0x95c) = 0;
    puVar6 = (uint *)((int)pvStack_c + 0x308);
    iVar2 = 2;
    do {
      if (*(uint *)((int)puVar6 + -10) != 0) {
        FUN_006e56b0(*(void **)((int)pvStack_c + 0xc),*(uint *)((int)puVar6 + -10));
      }
      *(undefined4 *)((int)puVar6 + -10) = 0;
      if (*puVar6 != 0) {
        FUN_006e56b0(*(void **)((int)pvStack_c + 0xc),*puVar6);
      }
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar6 = (uint *)((int)pvStack_c + 0x310);
    iVar2 = 3;
    do {
      if (*puVar6 != 0) {
        FUN_006e56b0(*(void **)((int)pvStack_c + 0xc),*puVar6);
      }
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (*(uint *)((int)pvStack_c + 0x9d0) != 0) {
      FUN_006e56b0(*(void **)((int)pvStack_c + 0xc),*(uint *)((int)pvStack_c + 0x9d0));
    }
    *(undefined4 *)((int)pvStack_c + 0x9d0) = 0;
    puVar6 = (uint *)((int)pvStack_c + 0x9a4);
    iVar2 = 7;
    do {
      if (*puVar6 != 0) {
        FUN_006e56b0(*(void **)((int)pvStack_c + 0xc),*puVar6);
        *puVar6 = 0;
      }
      puVar6 = puVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar6 = (uint *)((int)pvStack_c + 0x9c0);
    iVar2 = 2;
    do {
      if (*puVar6 != 0) {
        FUN_006e56b0(*(void **)((int)pvStack_c + 0xc),*puVar6);
        *puVar6 = 0;
      }
      puVar6 = puVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar6 = (uint *)((int)pvStack_c + 0xa15);
    iVar2 = 6;
    do {
      if (*puVar6 != 0) {
        FUN_006e56b0(*(void **)((int)pvStack_c + 0xc),*puVar6);
        *puVar6 = 0;
      }
      puVar6 = puVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar6 = (uint *)((int)pvStack_c + 0xb1f);
    iVar2 = 6;
    do {
      if (*puVar6 != 0) {
        FUN_006e56b0(*(void **)((int)pvStack_c + 0xc),*puVar6);
        *puVar6 = 0;
      }
      puVar6 = puVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (*(uint *)((int)pvStack_c + 0xb37) != 0) {
      FUN_006e56b0(*(void **)((int)pvStack_c + 0xc),*(uint *)((int)pvStack_c + 0xb37));
    }
    *(undefined4 *)((int)pvStack_c + 0xb37) = 0;
    puVar6 = (uint *)((int)pvStack_c + 0x960);
    iVar2 = 4;
    do {
      if (*puVar6 != 0) {
        FUN_006e56b0(*(void **)((int)pvStack_c + 0xc),*puVar6);
        *puVar6 = 0;
      }
      puVar6 = puVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (*(uint *)((int)pvStack_c + 0x970) != 0) {
      FUN_006e56b0(*(void **)((int)pvStack_c + 0xc),*(uint *)((int)pvStack_c + 0x970));
    }
    puVar6 = (uint *)((int)pvStack_c + 0x148);
    *(undefined4 *)((int)pvStack_c + 0x970) = 0;
    DAT_00801688 = 0;
    iVar2 = 0xb;
    do {
      if (-1 < (int)*puVar6) {
        FUN_006b3bb0(DAT_008075a8,*puVar6);
      }
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (-1 < (int)*(uint *)((int)pvStack_c + 0x174)) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)((int)pvStack_c + 0x174));
    }
    *(undefined4 *)((int)pvStack_c + 0x174) = 0xffffffff;
    if (-1 < (int)*(uint *)((int)pvStack_c + 0x178)) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)((int)pvStack_c + 0x178));
    }
    *(undefined4 *)((int)pvStack_c + 0x178) = 0xffffffff;
    if (-1 < (int)*(uint *)((int)pvStack_c + 0x17c)) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)((int)pvStack_c + 0x17c));
    }
    *(undefined4 *)((int)pvStack_c + 0x17c) = 0xffffffff;
    FUN_006f20e0((uint *)((int)pvStack_c + 0xb43));
    FUN_006f20e0((uint *)((int)pvStack_c + 0xb47));
    puVar6 = (uint *)((int)pvStack_c + 0x9d9);
    iVar2 = 0xf;
    do {
      FUN_006f20e0(puVar6);
      puVar6 = puVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if ((DAT_00807598 != (void *)0x0) && (*(int **)((int)pvStack_c + 0xdb3) != (int *)0x0)) {
      FUN_006e6580(DAT_00807598,*(int **)((int)pvStack_c + 0xdb3));
    }
    *(undefined4 *)((int)pvStack_c + 0xdb3) = 0;
    if (DAT_00807598 != (void *)0x0) {
      FUN_006e6500(DAT_00807598,(undefined4 *)0x0);
    }
    piVar7 = (int *)((int)pvStack_c + 0x227);
    iVar2 = 4;
    do {
      if (*piVar7 != 0) {
        FUN_006ab060(piVar7);
      }
      piVar7 = piVar7 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    FUN_006f20e0((uint *)((int)pvStack_c + 0x994));
    puVar5 = (undefined4 *)((int)pvStack_c + 0xdbf);
    iVar2 = 2;
    do {
      *(undefined4 *)((int)puVar5 + -0x3f7) = 0;
      *puVar5 = 0;
      FUN_006f20e0(puVar5 + -2);
      puVar5 = puVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar6 = (uint *)((int)pvStack_c + 0x974);
    iVar2 = 8;
    do {
      FUN_006f20e0(puVar6);
      puVar6 = puVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    FUN_006f20e0((uint *)((int)pvStack_c + 0x954));
    FUN_006f20e0((uint *)((int)pvStack_c + 0x958));
    FUN_006f20e0((uint *)((int)pvStack_c + 0x286));
    FUN_006f20e0((uint *)((int)pvStack_c + 0x28a));
    *(undefined4 *)((int)pvStack_c + 0x77c) = 0;
    *(undefined4 *)((int)pvStack_c + 0x2de) = 0;
    *(undefined4 *)((int)pvStack_c + 0x2da) = 0;
    *(undefined4 *)((int)pvStack_c + 0xb1b) = 0;
    *(undefined4 *)((int)pvStack_c + 0x9d5) = 0;
    *(undefined4 *)((int)pvStack_c + 0xb17) = 0;
    *(undefined4 *)((int)pvStack_c + 0x2d6) = 0;
    *(undefined4 *)((int)pvStack_c + 0x2d2) = 0;
    *(undefined4 *)((int)pvStack_c + 0x2ce) = 0;
    *(undefined4 *)((int)pvStack_c + 0x2ca) = 0;
    *(undefined4 *)((int)pvStack_c + 0x2c6) = 0;
    *(undefined4 *)((int)pvStack_c + 0x2c2) = 0;
    *(undefined4 *)((int)pvStack_c + 0x2be) = 0;
    *(undefined4 *)((int)pvStack_c + 0x2ba) = 0;
    *(undefined4 *)((int)pvStack_c + 0x2b2) = 0;
    *(undefined4 *)((int)pvStack_c + 0x2b6) = 0;
    *(undefined4 *)((int)pvStack_c + 0x2a2) = 0;
    *(undefined4 *)((int)pvStack_c + 0x29e) = 0;
    *(undefined4 *)((int)pvStack_c + 0x29a) = 0;
    *(undefined4 *)((int)pvStack_c + 0x296) = 0;
    *(undefined4 *)((int)pvStack_c + 0x292) = 0;
    *(undefined4 *)((int)pvStack_c + 0x28e) = 0;
    if (*(byte **)((int)pvStack_c + 0x24b) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)pvStack_c + 0x24b));
    }
    *(undefined4 *)((int)pvStack_c + 0x24b) = 0;
    if (*(byte **)((int)pvStack_c + 0xb4b) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)pvStack_c + 0xb4b));
    }
    *(undefined4 *)((int)pvStack_c + 0xb4b) = 0;
    if (*(byte **)((int)pvStack_c + 0xb95) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)pvStack_c + 0xb95));
    }
    *(undefined4 *)((int)pvStack_c + 0xb95) = 0;
    if (*(uint **)((int)pvStack_c + 0x1cc) != (uint *)0x0) {
      FUN_00710560(*(uint **)((int)pvStack_c + 0x1cc));
      *(undefined4 *)((int)pvStack_c + 0x1cc) = 0;
    }
    if (*(uint **)((int)pvStack_c + 0x1d0) != (uint *)0x0) {
      FUN_00710560(*(uint **)((int)pvStack_c + 0x1d0));
      *(undefined4 *)((int)pvStack_c + 0x1d0) = 0;
    }
    if (*(uint **)((int)pvStack_c + 0x1d4) != (uint *)0x0) {
      FUN_00710560(*(uint **)((int)pvStack_c + 0x1d4));
      *(undefined4 *)((int)pvStack_c + 0x1d4) = 0;
    }
    if (*(uint **)((int)pvStack_c + 0x1c8) != (uint *)0x0) {
      FUN_00710560(*(uint **)((int)pvStack_c + 0x1c8));
      *(undefined4 *)((int)pvStack_c + 0x1c8) = 0;
    }
    if (*(uint **)((int)pvStack_c + 0x1c4) != (uint *)0x0) {
      FUN_00710560(*(uint **)((int)pvStack_c + 0x1c4));
      *(undefined4 *)((int)pvStack_c + 0x1c4) = 0;
    }
    if (*(uint **)((int)pvStack_c + 0x1c0) != (uint *)0x0) {
      FUN_00710560(*(uint **)((int)pvStack_c + 0x1c0));
      *(undefined4 *)((int)pvStack_c + 0x1c0) = 0;
    }
    if (*(uint **)((int)pvStack_c + 0x1bc) != (uint *)0x0) {
      FUN_00710560(*(uint **)((int)pvStack_c + 0x1bc));
      *(undefined4 *)((int)pvStack_c + 0x1bc) = 0;
    }
    if (*(uint **)((int)pvStack_c + 0x1b8) != (uint *)0x0) {
      FUN_00710560(*(uint **)((int)pvStack_c + 0x1b8));
      *(undefined4 *)((int)pvStack_c + 0x1b8) = 0;
    }
    if (*(int *)((int)pvStack_c + 0x1ac) != 0) {
      FUN_006ab060((undefined4 *)((int)pvStack_c + 0x1ac));
    }
    if (*(int *)((int)pvStack_c + 0x1b0) != 0) {
      FUN_006ab060((undefined4 *)((int)pvStack_c + 0x1b0));
    }
    if (*(int *)((int)pvStack_c + 0x1b4) != 0) {
      FUN_006ab060((undefined4 *)((int)pvStack_c + 0x1b4));
    }
    piVar7 = (int *)((int)pvStack_c + 0x180);
    iStack_8 = 0xb;
    do {
      if (*piVar7 != 0) {
        FUN_006ab060(piVar7);
      }
      piVar7 = piVar7 + 1;
      iStack_8 = iStack_8 + -1;
    } while (iStack_8 != 0);
    if (*(int **)((int)pvStack_c + 0x1d8) != (int *)0x0) {
      FUN_00714060(*(int **)((int)pvStack_c + 0x1d8));
      FUN_0072e2b0(*(undefined4 **)((int)pvStack_c + 0x1d8));
      *(undefined4 *)((int)pvStack_c + 0x1d8) = 0;
    }
    if (*(int *)((int)pvStack_c + 0x25b) != 0) {
      FUN_0070b600((int *)((int)pvStack_c + 0x25b));
    }
    DAT_00858df8 = (undefined4 *)uStack_50;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_50;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x213,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c1bd8,0x213);
  return;
}


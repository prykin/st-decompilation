
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall STTeamLissagC::InitVisibelSystem(STTeamLissagC *this)

{
  code *pcVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  STTeamLissagC *pSVar5;
  undefined4 unaff_ESI;
  int *piVar6;
  void *unaff_EDI;
  byte *pbVar7;
  undefined4 uStack_68;
  undefined4 auStack_64 [16];
  int iStack_24;
  int iStack_20;
  uint uStack_1c;
  STTeamLissagC *pSStack_18;
  ushort *puStack_14;
  ushort *puStack_10;
  uint uStack_c;
  ushort *puStack_8;
  
  uStack_68 = DAT_00858df8;
  DAT_00858df8 = &uStack_68;
  pSStack_18 = this;
  iVar2 = __setjmp3(auStack_64,0,unaff_EDI,unaff_ESI);
  pSVar5 = pSStack_18;
  if (iVar2 == 0) {
    if (*(int *)(pSStack_18 + 0x11) == 3) {
      iVar2 = *(int *)(pSStack_18 + 0x25);
      if (iVar2 < 4) {
        pbVar7 = (&PTR_s_pics_g_007d1bb4)[iVar2];
        piVar6 = DAT_00806764;
      }
      else {
        pbVar7 = (&PTR_s_pics_g_007d1bb4)[iVar2];
        piVar6 = DAT_00806774;
      }
      puStack_10 = FUN_00709af0(piVar6,0x1d,pbVar7,0xffffffff,0,1,0,(undefined4 *)0x0);
      iVar2 = *(int *)(pSVar5 + 0x29);
      if (iVar2 < 4) {
        puStack_14 = FUN_00709af0(DAT_00806764,0x1d,(&PTR_s_pics_g_007d1bb4)[iVar2],0xffffffff,0,1,0
                                  ,(undefined4 *)0x0);
        puVar3 = puStack_8;
      }
      else {
        puStack_14 = FUN_00709af0(DAT_00806774,0x1d,(&PTR_s_pics_g_007d1bb4)[iVar2],0xffffffff,0,1,0
                                  ,(undefined4 *)0x0);
        puVar3 = puStack_8;
      }
    }
    else {
      iVar2 = *(int *)(pSStack_18 + 0xd);
      if (iVar2 < 4) {
        pbVar7 = (&PTR_s_pics_g_007d1bb4)[iVar2];
        piVar6 = DAT_00806764;
      }
      else {
        pbVar7 = (&PTR_s_pics_g_007d1bb4)[iVar2];
        piVar6 = DAT_00806774;
      }
      puVar3 = FUN_00709af0(piVar6,0x1d,pbVar7,0xffffffff,0,1,0,(undefined4 *)0x0);
      puStack_8 = puVar3;
      if (*(int *)(pSVar5 + 0x11) == 1) {
        puStack_10 = FUN_00709af0(DAT_00806774,0x1d,PTR_s_starR_007d1bcc,0xffffffff,0,1,0,
                                  (undefined4 *)0x0);
      }
      if (*(int *)(pSVar5 + 0x11) == 4) {
        puStack_10 = FUN_00709af0(DAT_00806774,0x1d,PTR_s_starF_007d1bd0,0xffffffff,0,1,0,
                                  (undefined4 *)0x0);
        puStack_14 = puVar3;
      }
    }
    if (*(int *)pSVar5 != 0) {
      iStack_20 = *(int *)(pSVar5 + 0x19);
      iStack_24 = *(int *)(*(int *)pSVar5 + 0xc);
      uStack_1c = 0;
      if (0 < iStack_24) {
        do {
          iVar2 = *(int *)pSVar5;
          if (uStack_1c < *(uint *)(iVar2 + 0xc)) {
            piVar6 = (int *)(*(int *)(iVar2 + 8) * uStack_1c + *(int *)(iVar2 + 0x1c));
          }
          else {
            piVar6 = (int *)0x0;
          }
          if (piVar6 != (int *)0x0) {
            if (*(int *)(pSVar5 + 0x11) == 3) {
              if (*(int *)(pSVar5 + 0x25) == *piVar6) {
                puStack_8 = puStack_10;
                *(undefined4 *)((int)piVar6 + 0x1d) = *(undefined4 *)puStack_10;
                puVar3 = puStack_10;
              }
              else {
                puStack_8 = puStack_14;
                puVar3 = puStack_14;
              }
            }
            if ((*(int *)(pSVar5 + 0x11) == 1) && (iStack_20 <= (int)uStack_1c)) {
              puStack_8 = puStack_10;
              *(undefined4 *)((int)piVar6 + 0x1d) = *(undefined4 *)puStack_10;
              puVar3 = puStack_10;
            }
            if ((*(int *)(pSVar5 + 0x11) == 4) &&
               (((int)uStack_1c < *(int *)(pSVar5 + 0x1d) ||
                (puVar3 = puStack_10, puStack_8 = puStack_10,
                *(int *)(pSVar5 + 0x1d) * 2 <= (int)uStack_1c)))) {
              puVar3 = puStack_14;
              puStack_8 = puStack_14;
            }
            FUN_006e8660(DAT_00807598,(int *)&uStack_c,1,0,*(uint *)((int)puVar3 + 9),
                         *(uint *)((int)puVar3 + 0xd),(int)*(uint *)((int)puVar3 + 9) / 2,
                         (int)*(uint *)((int)puVar3 + 0xd) / 2 - 0xe,0);
            FUN_006e98e0(DAT_00807598,uStack_c,0,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),
                         1);
            FUN_006ea270(DAT_00807598,uStack_c,0,0);
            FUN_006ea5e0(DAT_00807598,uStack_c,0,0);
            FUN_006ea960(DAT_00807598,uStack_c,
                         (float)*(int *)((int)piVar6 + 0xd) * _DAT_007904f8 * _DAT_007904f0,
                         (float)*(int *)((int)piVar6 + 0x11) * _DAT_007904f8 * _DAT_007904f0,
                         (float)*(int *)((int)piVar6 + 0x15) * _DAT_007904f8 * _DAT_007904f0 +
                         _DAT_007904fc);
            piVar6[1] = uStack_c;
            *(undefined1 *)(piVar6 + 3) = 0;
            pSVar5 = pSStack_18;
            if (*(int *)(pSStack_18 + 0x15) != 0) {
              *(undefined4 *)((int)piVar6 + 0x1d) = *(undefined4 *)puVar3;
            }
          }
          uStack_1c = uStack_1c + 1;
        } while ((int)uStack_1c < iStack_24);
      }
    }
    DAT_00858df8 = (undefined4 *)uStack_68;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_68;
  iVar4 = FUN_006ad4d0(s_E____titans_nick_to_supp_cpp_007d1d3c,0x1bd,0,iVar2,&DAT_007a4ccc);
  if (iVar4 == 0) {
    FUN_006a5e40(iVar2,0,0x7d1d3c,0x1bf);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


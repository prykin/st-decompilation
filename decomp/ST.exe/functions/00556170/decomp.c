
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556170(int param_1)

{
  code *pcVar1;
  int iVar2;
  byte *pbVar3;
  ushort *puVar4;
  uint *puVar5;
  undefined4 unaff_ESI;
  short *psVar6;
  void *unaff_EDI;
  int *piVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 local_54;
  undefined4 local_50 [16];
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar2 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    *(undefined4 *)(local_c + 0x1c) = *(undefined4 *)(param_1 + 0x18);
    if (*(char *)(param_1 + 0x1c) == '\0') {
      puVar5 = FUN_006ae290((uint *)0x0,0x32,0x3c,0x32);
      *(uint **)(local_c + 0x24) = puVar5;
    }
    else {
      iVar2 = FUN_006b0060((uint *)0x0,(uint *)(param_1 + 0x5c));
      *(int *)(local_c + 0x24) = iVar2;
      *(undefined4 *)(iVar2 + 4) = 0;
      while( true ) {
        iVar2 = *(int *)(local_c + 0x24);
        uVar8 = *(uint *)(iVar2 + 4);
        if (uVar8 < *(uint *)(iVar2 + 0xc)) {
          psVar6 = (short *)(*(int *)(iVar2 + 8) * uVar8 + *(int *)(iVar2 + 0x1c));
          *(uint *)(iVar2 + 4) = uVar8 + 1;
        }
        else {
          psVar6 = (short *)0x0;
        }
        if (psVar6 == (short *)0x0) break;
        piVar7 = DAT_00806764;
        if (*(int *)(&DAT_007c900c + *psVar6 * 0x18) != 1) {
          piVar7 = DAT_00806774;
        }
        puVar11 = (undefined4 *)0x0;
        iVar10 = 0;
        iVar2 = 1;
        bVar9 = 0;
        uVar8 = 0xffffffff;
        pbVar3 = thunk_FUN_00555840((int)*psVar6);
        puVar4 = FUN_00709af0(piVar7,0x1d,pbVar3,uVar8,bVar9,iVar2,iVar10,puVar11);
        psVar6[0x1b] = *puVar4;
        iVar2 = *psVar6 * 0x18;
        FUN_006e8660(DAT_00807598,(int *)&local_8,1,0,*(uint *)(&DAT_007c9000 + iVar2),
                     *(uint *)(&DAT_007c9004 + iVar2),*(uint *)(&DAT_007c8ff8 + iVar2),
                     *(uint *)(&DAT_007c8ffc + iVar2),0);
        *(uint *)(psVar6 + 0x19) = local_8;
        FUN_006e98e0(DAT_00807598,local_8,0,(int)psVar6[0x1b],*(int *)((int)puVar4 + 0x21),1);
        FUN_006ea270(DAT_00807598,*(uint *)(psVar6 + 0x19),0,(int)psVar6[0x11]);
        iVar2 = *(int *)(psVar6 + 0xb);
        if (-1 < iVar2) {
          if (psVar6[0xd] == -1) {
            FUN_006ea3e0(DAT_00807598,*(uint *)(psVar6 + 0x19),iVar2);
          }
          else if (psVar6[0xd] == 1) {
            FUN_006ea460(DAT_00807598,*(uint *)(psVar6 + 0x19),iVar2);
          }
        }
        FUN_006ea4e0(DAT_00807598,*(uint *)(psVar6 + 0x19),1,
                     *(int *)(&DAT_007c9000 + *psVar6 * 0x18) / 2,
                     *(int *)(&DAT_007c9004 + *psVar6 * 0x18) / 2);
        local_10 = (int)psVar6[1];
        FUN_006ea960(DAT_00807598,*(uint *)(psVar6 + 0x19),
                     (float)local_10 * _DAT_007904f8 * _DAT_007904f0,
                     (float)(int)psVar6[2] * _DAT_007904f8 * _DAT_007904f0,
                     (float)(int)psVar6[3] * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
        FUN_006eaaa0(DAT_00807598,*(uint *)(psVar6 + 0x19),0);
        *(undefined4 *)(psVar6 + 0x12) = *(undefined4 *)(local_c + 0x20);
      }
    }
    DAT_00858df8 = (undefined4 *)local_54;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_54;
  iVar10 = FUN_006ad4d0(s_E____titans_grig_traks_cpp_007c9104,0x11b,0,iVar2,&DAT_007a4ccc);
  if (iVar10 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c9104,0x11c);
  return;
}



void __thiscall thunk_FUN_00515e30(void *this,int *param_1,char param_2,int param_3,int param_4)

{
  char cVar1;
  code *pcVar2;
  void *this_00;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  char *pcVar7;
  void *unaff_EDI;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uStack_88;
  undefined4 auStack_84 [16];
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined1 uStack_34;
  int iStack_33;
  int iStack_2f;
  undefined4 uStack_28;
  uint uStack_24;
  void *pvStack_20;
  uint uStack_1c;
  int iStack_18;
  int iStack_14;
  int *piStack_10;
  int *piStack_c;
  char cStack_5;
  
  uStack_28 = *(undefined4 *)(*(int *)((int)this + 0x24c) + 8);
  iStack_18 = *(int *)(*(int *)((int)this + 0x24c) + 4);
  iStack_14 = 1;
  uStack_88 = DAT_00858df8;
  DAT_00858df8 = &uStack_88;
  pvStack_20 = this;
  iVar3 = __setjmp3(auStack_84,0,unaff_EDI,unaff_ESI);
  this_00 = pvStack_20;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_88;
    iVar10 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x460,0,iVar3,&DAT_007a4ccc);
    if (iVar10 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7c383c,0x460);
    return;
  }
  if (DAT_007e68a0 != '\0') {
    pcVar7 = &DAT_007e68a0;
    piStack_10 = &DAT_007e68a5;
    do {
      if (((*pcVar7 == param_2) && (piStack_10[-1] == param_3)) && (*piStack_10 == param_4)) {
        piStack_c = (int *)((int)piStack_10 + 5);
        uStack_1c = 1;
LAB_00515ee1:
        if ((*(char *)((int)piStack_c + -1) != '\0') && (uVar8 = 0, *piStack_c != 0)) {
          if (iStack_14 != 0) {
            thunk_FUN_00511ab0(this_00,*param_1,0xf);
            FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0,*param_1,0x19c,0xf);
            uVar11 = 3;
            iVar10 = -1;
            iVar3 = -1;
            puVar4 = (uint *)FUN_006b0140(0x55f6,DAT_00807618);
            FUN_007119c0(puVar4,iVar3,iVar10,uVar11);
            iStack_14 = 0;
            *param_1 = *param_1 + 0xf;
          }
          thunk_FUN_00540760(*(undefined4 **)((int)this_00 + 0x218),0x50,*param_1 + 1,'\x01',
                             *(byte **)((int)this_00 + 0x24c));
          uStack_24 = *(uint *)sizeHelp_exref;
          if (uStack_24 != 0) {
            cStack_5 = *(char *)((int)piStack_c + -1);
            piVar5 = (int *)(*(int *)((int)this_00 + 0x1c7) + 9);
            do {
              if (((*(char *)((int)piVar5 + -1) == cStack_5) && (*piVar5 == *piStack_c)) &&
                 (piVar5[1] == piStack_c[1])) {
                FUN_00710a90(*(int *)((int)this_00 + 0x218),0,iStack_18 + 0x5f,*param_1,
                             0x13d - iStack_18,0xf);
                pcVar7 = (char *)FUN_006b0140(*(UINT *)(uVar8 * 0x11 +
                                                       *(int *)((int)this_00 + 0x1c7)),DAT_00807618)
                ;
                uVar8 = 0xffffffff;
                goto code_r0x00516013;
              }
              uVar8 = uVar8 + 1;
              piVar5 = (int *)((int)piVar5 + 0x11);
            } while (uVar8 < uStack_24);
          }
          goto LAB_0051607e;
        }
      }
LAB_005160da:
      piVar5 = (int *)((int)piStack_10 + 0x36);
      pcVar9 = (char *)((int)piStack_10 + 0x31);
      pcVar7 = (char *)((int)piStack_10 + 0x31);
      piStack_10 = piVar5;
    } while (*pcVar9 != '\0');
  }
  thunk_FUN_00511ab0(this_00,*param_1,10);
  iVar3 = (*param_1 / 10 + 1) * 10;
  *param_1 = iVar3;
  iVar3 = (*(ushort *)((int)this_00 + 0x1af) - 0x118) + iVar3;
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 / (int)(uint)*(ushort *)((int)this_00 + 0x1b1) + 1;
  }
  thunk_FUN_00512830(iVar3);
  FUN_006b5110(*(int *)((int)this_00 + 0x68),0,0x21,*(ushort *)((int)this_00 + 0x1af) + 0x16,
               *(int *)((int)this_00 + 0x218),0,0,0,0x19c,
               0x117 - (uint)*(ushort *)((int)this_00 + 0x1af),0xff);
  FUN_006b3640(DAT_008075a8,*(uint *)((int)this_00 + 0x60),0xffffffff,*(uint *)((int)this_00 + 0x3c)
               ,*(uint *)((int)this_00 + 0x44));
  DAT_00858df8 = (undefined4 *)uStack_88;
  return;
  while( true ) {
    uVar8 = uVar8 - 1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
    if (cVar1 == '\0') break;
code_r0x00516013:
    pcVar9 = pcVar7;
    if (uVar8 == 0) break;
  }
  uVar8 = ~uVar8;
  pcVar7 = pcVar9 + -uVar8;
  pcVar9 = (char *)&DAT_0080f33a;
  for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  for (puVar4 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar4 != (uint *)0x0;
      puVar4 = FUN_0072e560(puVar4,'\n')) {
    *(undefined1 *)puVar4 = 0x20;
  }
  FUN_007119c0(&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
LAB_0051607e:
  iStack_40 = *param_1;
  iStack_3c = iStack_18;
  uStack_34 = *(undefined1 *)((int)piStack_c + -1);
  uStack_38 = uStack_28;
  iStack_33 = *piStack_c;
  iStack_2f = piStack_c[1];
  uStack_44 = 0x50;
  FUN_006ae1c0(*(uint **)((int)this_00 + 0x1d7),&uStack_44);
  uStack_1c = uStack_1c + 1;
  piStack_c = (int *)((int)piStack_c + 9);
  *param_1 = *param_1 + 0xf;
  if (5 < uStack_1c) goto LAB_005160da;
  goto LAB_00515ee1;
}


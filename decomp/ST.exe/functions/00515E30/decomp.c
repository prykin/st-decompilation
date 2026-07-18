
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::AddLinks */

void __thiscall
HelpPanelTy::AddLinks(HelpPanelTy *this,int *param_1,char param_2,int param_3,int param_4)

{
  char cVar1;
  code *pcVar2;
  HelpPanelTy *this_00;
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
  undefined4 local_88;
  undefined4 local_84 [16];
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined1 local_34;
  int local_33;
  int local_2f;
  undefined4 local_28;
  uint local_24;
  HelpPanelTy *local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int *local_c;
  char local_5;
  
  local_28 = *(undefined4 *)(*(int *)(this + 0x24c) + 8);
  local_18 = *(int *)(*(int *)(this + 0x24c) + 4);
  local_14 = 1;
  local_88 = DAT_00858df8;
  DAT_00858df8 = &local_88;
  local_20 = this;
  iVar3 = __setjmp3(local_84,0,unaff_EDI,unaff_ESI);
  this_00 = local_20;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_88;
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
    local_10 = &DAT_007e68a5;
    do {
      if (((*pcVar7 == param_2) && (local_10[-1] == param_3)) && (*local_10 == param_4)) {
        local_c = (int *)((int)local_10 + 5);
        local_1c = 1;
LAB_00515ee1:
        if ((*(char *)((int)local_c + -1) != '\0') && (uVar8 = 0, *local_c != 0)) {
          if (local_14 != 0) {
            CheckBkView(this_00,*param_1,0xf);
            ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,*param_1,
                             0x19c,0xf);
            uVar11 = 3;
            iVar10 = -1;
            iVar3 = -1;
            puVar4 = (uint *)FUN_006b0140(0x55f6,DAT_00807618);
            ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar4,iVar3,iVar10,uVar11);
            local_14 = 0;
            *param_1 = *param_1 + 0xf;
          }
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0x50,*param_1 + 1,'\x01',
                             *(byte **)(this_00 + 0x24c));
          local_24 = *(uint *)sizeHelp_exref;
          if (local_24 != 0) {
            local_5 = *(char *)((int)local_c + -1);
            piVar5 = (int *)(*(int *)(this_00 + 0x1c7) + 9);
            do {
              if (((*(char *)((int)piVar5 + -1) == local_5) && (*piVar5 == *local_c)) &&
                 (piVar5[1] == local_c[1])) {
                ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,
                                 local_18 + 0x5f,*param_1,0x13d - local_18,0xf);
                pcVar7 = (char *)FUN_006b0140(*(UINT *)(uVar8 * 0x11 + *(int *)(this_00 + 0x1c7)),
                                              DAT_00807618);
                uVar8 = 0xffffffff;
                goto code_r0x00516013;
              }
              uVar8 = uVar8 + 1;
              piVar5 = (int *)((int)piVar5 + 0x11);
            } while (uVar8 < local_24);
          }
          goto LAB_0051607e;
        }
      }
LAB_005160da:
      piVar5 = (int *)((int)local_10 + 0x36);
      pcVar9 = (char *)((int)local_10 + 0x31);
      pcVar7 = (char *)((int)local_10 + 0x31);
      local_10 = piVar5;
    } while (*pcVar9 != '\0');
  }
  CheckBkView(this_00,*param_1,10);
  iVar3 = (*param_1 / 10 + 1) * 10;
  *param_1 = iVar3;
  iVar3 = (*(ushort *)(this_00 + 0x1af) - 0x118) + iVar3;
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 / (int)(uint)*(ushort *)(this_00 + 0x1b1) + 1;
  }
  CreateSlider(this_00,iVar3);
  FUN_006b5110(*(int *)(this_00 + 0x68),0,0x21,*(ushort *)(this_00 + 0x1af) + 0x16,
               *(int *)(this_00 + 0x218),0,0,0,0x19c,0x117 - (uint)*(ushort *)(this_00 + 0x1af),0xff
              );
  FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x60),0xffffffff,*(uint *)(this_00 + 0x3c),
               *(uint *)(this_00 + 0x44));
  DAT_00858df8 = (undefined4 *)local_88;
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
  ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5)
  ;
LAB_0051607e:
  local_40 = *param_1;
  local_3c = local_18;
  local_34 = *(undefined1 *)((int)local_c + -1);
  local_38 = local_28;
  local_33 = *local_c;
  local_2f = local_c[1];
  local_44 = 0x50;
  FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&local_44);
  local_1c = local_1c + 1;
  local_c = (int *)((int)local_c + 9);
  *param_1 = *param_1 + 0xf;
  if (5 < local_1c) goto LAB_005160da;
  goto LAB_00515ee1;
}


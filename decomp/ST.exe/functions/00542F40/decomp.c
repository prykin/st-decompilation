
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00542f40(int param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  LPSTR pCVar4;
  undefined4 uVar5;
  byte *pbVar6;
  BITMAPINFO *pBVar7;
  char *pcVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char cVar9;
  byte bVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 local_50;
  undefined4 local_4c [16];
  BITMAPINFO *local_c [2];
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_50;
    iVar13 = FUN_006ad4d0(s_E____titans_Andrey_tintersys_cpp_007c7be8,0x11f,0,iVar2,&DAT_007a4ccc);
    if (iVar13 != 0) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    FUN_006a5e40(iVar2,0,0x7c7be8,0x11f);
    return 0xffff;
  }
  FUN_006e5f00(param_1);
  uVar3 = *(uint *)(param_1 + 0x10);
  if (uVar3 < 0xb904) {
    if (uVar3 == 0xb903) {
      if (DAT_00802a30 != (void *)0x0) {
        thunk_FUN_0054b540(DAT_00802a30);
      }
      if (DAT_00801690 == (int *)0x0) {
        DAT_00858df8 = (undefined4 *)local_50;
        return 0;
      }
      (**(code **)(*DAT_00801690 + 0x18))(1);
      DAT_00858df8 = (undefined4 *)local_50;
      return 0;
    }
    if (uVar3 < 0xb901) {
      if (uVar3 != 0xb900) {
        if (uVar3 == 5) {
          if (DAT_00802a58 != 0) {
            DAT_00858df8 = (undefined4 *)local_50;
            return 0;
          }
          iVar13 = 1;
          uVar3 = _DAT_00807348 & 0xff;
          piVar11 = (int *)0x0;
          iVar2 = 1;
          pCVar4 = thunk_FUN_00571240(s_PANEL_BKGND_007c7cc8,0);
          pCVar4 = FUN_006f2c00(pCVar4,iVar2,uVar3);
          local_c[0] = (BITMAPINFO *)FUN_006f1ce0(1,pCVar4,piVar11,iVar13);
          thunk_FUN_005403c0(0,0,'\x01',local_c[0]);
          FUN_006f20e0((uint *)local_c);
          DAT_00858df8 = (undefined4 *)local_50;
          return 0;
        }
        if (uVar3 != 0xb8ff) {
          DAT_00858df8 = (undefined4 *)local_50;
          return 0;
        }
        if (DAT_00802a30 != (void *)0x0) {
          thunk_FUN_0054b540(DAT_00802a30);
        }
        if (DAT_008016dc == (void *)0x0) {
          DAT_00858df8 = (undefined4 *)local_50;
          return 0;
        }
        thunk_FUN_0052f2b0(DAT_008016dc,'\x01');
        DAT_00858df8 = (undefined4 *)local_50;
        return 0;
      }
    }
    else {
      if (uVar3 == 0xb901) {
        if (DAT_00802a30 != (void *)0x0) {
          thunk_FUN_0054b540(DAT_00802a30);
        }
        if (DAT_008016e4 == (void *)0x0) {
          DAT_00858df8 = (undefined4 *)local_50;
          return 0;
        }
        thunk_FUN_0053a820(DAT_008016e4,'\x01');
        DAT_00858df8 = (undefined4 *)local_50;
        return 0;
      }
      if (uVar3 != 0xb902) {
        DAT_00858df8 = (undefined4 *)local_50;
        return 0;
      }
    }
switchD_00543107_caseD_b904:
    if (DAT_00802a58 != 0) {
      DAT_00858df8 = (undefined4 *)local_50;
      return 0;
    }
    piVar11 = *(int **)(param_1 + 0x18);
    FUN_006b5f80(DAT_008075a8,*piVar11,piVar11[1],piVar11[2],piVar11[3]);
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 == 0xb900) {
      pcVar8 = s_BUT_FILEOPT_007c7c48;
    }
    else if (iVar2 == 0xb902) {
      pcVar8 = s_BUT_SETOPT_007c7c9c;
    }
    else if (iVar2 == 0xb904) {
      pcVar8 = s_BUT_HELPOPT_007c7cac;
    }
    else {
      pcVar8 = s_BUT_AIOPT_007c7cbc;
    }
    puVar14 = (undefined4 *)0x0;
    iVar12 = 0;
    iVar13 = 1;
    bVar10 = 0;
    uVar3 = 0xffffffff;
    uVar5 = thunk_FUN_00529f90(param_1);
    iVar2 = 1;
    pCVar4 = thunk_FUN_00571240(pcVar8,0);
    pbVar6 = (byte *)FUN_006f2c00(pCVar4,iVar2,uVar5);
    pBVar7 = (BITMAPINFO *)FUN_00709af0(DAT_00806794,1,pbVar6,uVar3,bVar10,iVar13,iVar12,puVar14);
    iVar2 = piVar11[1];
    iVar13 = *piVar11;
    cVar9 = '\x01';
LAB_00543291:
    thunk_FUN_005403c0(iVar13,iVar2,cVar9,pBVar7);
  }
  else {
    switch(uVar3) {
    case 0xb904:
    case 0xb906:
      goto switchD_00543107_caseD_b904;
    case 0xb905:
      if (DAT_00802a30 != (void *)0x0) {
        thunk_FUN_0054b540(DAT_00802a30);
      }
      if (DAT_008016dc != (void *)0x0) {
        thunk_FUN_0052f2b0(DAT_008016dc,'\x0e');
        DAT_00858df8 = (undefined4 *)local_50;
        return 0;
      }
      break;
    case 0xb907:
      if (DAT_00802a30 != (void *)0x0) {
        thunk_FUN_0054b540(DAT_00802a30);
        *(undefined1 *)((int)DAT_00802a30 + 0x4de) = 1;
        thunk_FUN_005252c0(0xae);
        DAT_00858df8 = (undefined4 *)local_50;
        return 0;
      }
      break;
    case 0xb908:
      if (DAT_00802a58 != 0) {
        DAT_00858df8 = (undefined4 *)local_50;
        return 0;
      }
      piVar11 = *(int **)(param_1 + 0x18);
      FUN_006b5f80(DAT_008075a8,*piVar11,piVar11[1],piVar11[2],piVar11[3]);
      puVar14 = (undefined4 *)0x0;
      iVar12 = 0;
      iVar13 = 1;
      bVar10 = 0;
      uVar3 = 0xffffffff;
      uVar5 = thunk_FUN_00529f90(param_1);
      iVar2 = 1;
      pCVar4 = thunk_FUN_00571240(s_BUT_OHELP_007c7c90,0);
      pbVar6 = (byte *)FUN_006f2c00(pCVar4,iVar2,uVar5);
      pBVar7 = (BITMAPINFO *)FUN_00709af0(DAT_00806794,6,pbVar6,uVar3,bVar10,iVar13,iVar12,puVar14);
      iVar13 = *piVar11;
      iVar2 = piVar11[1];
      cVar9 = '\x06';
      goto LAB_00543291;
    }
  }
  DAT_00858df8 = (undefined4 *)local_50;
  return 0;
}


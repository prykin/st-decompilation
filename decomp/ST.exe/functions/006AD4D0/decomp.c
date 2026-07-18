
int __cdecl FUN_006ad4d0(char *param_1,int param_2,int param_3,int param_4,byte *param_5)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint *puVar12;
  char *pcVar13;
  bool bVar14;
  uint local_74c;
  char local_748 [4];
  char local_744;
  uint uStack_743;
  char local_73f [3];
  uint auStack_73c [252];
  char local_34c [447];
  char acStack_18d [65];
  CHAR local_14c [260];
  char local_48 [4];
  char local_44 [4];
  char local_40 [4];
  char local_3c [52];
  undefined4 *local_8;
  
  local_8 = (undefined4 *)&stack0xfffffffc;
  if (DAT_007ed798 == 0) {
    DAT_00858dd0 = (char *)0x0;
    return 0;
  }
  local_34c[0] = '\0';
  local_74c = local_74c & 0xffffff00;
  if ((param_5 != (byte *)0x0) &&
     (iVar2 = FUN_007300e0(local_34c,0x200,param_5,(undefined4 *)&stack0x00000018), iVar2 < 0)) {
    uVar5 = 0xffffffff;
    pcVar8 = s_User_message_too_long_007ed7b4;
    do {
      pcVar9 = pcVar8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar9 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar2 = -1;
    pcVar8 = local_34c;
    do {
      pcVar13 = pcVar8;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar13 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar13;
    } while (cVar1 != '\0');
    pcVar8 = pcVar9 + -uVar5;
    pcVar9 = pcVar13 + -1;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  if ((DAT_007ed79c != 0) && (DAT_00854eb4 != (int *)0x0)) {
    FUN_00733f70(DAT_00854eb4,(byte *)s__d_______________________________007ed8ac);
    DAT_007ed79c = 0;
  }
  puVar7 = &local_74c;
  if (DAT_00854ebc != 0) {
    local_74c._0_1_ = s_Program__007ed8a0[0];
    local_74c._1_1_ = s_Program__007ed8a0[1];
    local_74c._2_1_ = s_Program__007ed8a0[2];
    local_74c._3_1_ = s_Program__007ed8a0[3];
    local_748[0] = s_Program__007ed8a0[4];
    local_748[1] = s_Program__007ed8a0[5];
    local_748[2] = s_Program__007ed8a0[6];
    local_748[3] = s_Program__007ed8a0[7];
    local_744 = (char)s_Program__007ed8a0._8_2_;
    uStack_743._0_1_ = SUB21(s_Program__007ed8a0._8_2_,1);
    pcVar8 = local_14c;
    DVar3 = GetModuleFileNameA((HMODULE)0x0,local_14c,0x104);
    if (DVar3 == 0) {
      uStack_743._0_1_ = s_unknown_007ed898[0];
      uStack_743._1_1_ = s_unknown_007ed898[1];
      uStack_743._2_1_ = s_unknown_007ed898[2];
      uStack_743._3_1_ = s_unknown_007ed898[3];
      local_73f[0] = s_unknown_007ed898[4];
      local_73f[1] = s_unknown_007ed898[5];
      local_73f[2] = s_unknown_007ed898[6];
      auStack_73c[0]._0_1_ = s_unknown_007ed898[7];
      puVar7 = auStack_73c;
    }
    else {
      uVar5 = 0xffffffff;
      pcVar9 = local_14c;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      iVar2 = ~uVar5 - 1;
      if (0x40 < iVar2) {
        pcVar8 = acStack_18d + ~uVar5;
        _strncpy(pcVar8,&DAT_007c7274,3);
        iVar2 = 0x40;
      }
      uVar5 = 0xffffffff;
      do {
        pcVar9 = pcVar8;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      puVar7 = (uint *)((int)&uStack_743 + iVar2);
      puVar11 = (uint *)(pcVar9 + -uVar5);
      puVar12 = &uStack_743;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)puVar12 = (char)*puVar11;
        puVar11 = (uint *)((int)puVar11 + 1);
        puVar12 = (uint *)((int)puVar12 + 1);
      }
    }
  }
  *(undefined1 *)puVar7 = 10;
  pcVar8 = (char *)((int)puVar7 + 1);
  if (param_1 != (char *)0x0) {
    pcVar9 = (char *)((int)puVar7 + 7);
    *(undefined4 *)pcVar8 = s_File__007ed890._0_4_;
    *(undefined2 *)((int)puVar7 + 5) = s_File__007ed890._4_2_;
    *(char *)((int)puVar7 + 7) = s_File__007ed890[6];
    uVar5 = 0xffffffff;
    pcVar8 = param_1;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    iVar2 = ~uVar5 - 1;
    if (iVar2 < 0x41) {
      uVar5 = 0xffffffff;
      do {
        pcVar8 = param_1;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar8 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar8;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar8 = pcVar8 + -uVar5;
      pcVar13 = pcVar9;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar13 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    else {
      uVar6 = 0xffffffff;
      pcVar8 = param_1 + (~uVar5 - 0x41);
      do {
        pcVar13 = pcVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar13 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar13;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar8 = pcVar13 + -uVar6;
      pcVar13 = pcVar9;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar13 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar13 = pcVar13 + 1;
      }
      _strncpy(pcVar9,&DAT_007c7274,3);
      iVar2 = 0x40;
    }
    pcVar9 = pcVar9 + iVar2;
    if (DAT_00854eb4 == (int *)0x0) {
      *pcVar9 = '\n';
    }
    else {
      *pcVar9 = ' ';
      pcVar9 = pcVar9 + 1;
      *pcVar9 = ' ';
    }
    pcVar9 = pcVar9 + 1;
    if (0 < param_2) {
      iVar2 = FUN_00730c40(pcVar9,0x7ed884);
      pcVar9 = pcVar9 + iVar2;
    }
    puVar10 = local_8;
    if ((DAT_00854eb4 != (int *)0x0) && (BVar4 = IsBadReadPtr(local_8,4), BVar4 == 0)) {
      puVar10 = (undefined4 *)*puVar10;
      BVar4 = IsBadReadPtr(puVar10,8);
      if (BVar4 == 0) {
        iVar2 = FUN_00730c40(pcVar9,0x7ed87c);
        pcVar9 = pcVar9 + iVar2;
        BVar4 = IsBadReadPtr((void *)*puVar10,8);
        if (BVar4 == 0) {
          iVar2 = FUN_00730c40(pcVar9,0x7ed874);
          pcVar9 = pcVar9 + iVar2;
        }
      }
    }
    *pcVar9 = '\n';
    pcVar8 = pcVar9 + 1;
  }
  if ((DAT_00858dd0 != (char *)0x0) && (DAT_00858dd4 == param_4)) {
    pcVar9 = pcVar8 + 10;
    *(undefined4 *)pcVar8 = s_ExcRaise__007ed868._0_4_;
    *(undefined4 *)(pcVar8 + 4) = s_ExcRaise__007ed868._4_4_;
    *(undefined2 *)(pcVar8 + 8) = s_ExcRaise__007ed868._8_2_;
    uVar5 = 0xffffffff;
    pcVar8[10] = s_ExcRaise__007ed868[10];
    pcVar8 = DAT_00858dd0;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    iVar2 = ~uVar5 - 1;
    if (iVar2 < 0x37) {
      uVar5 = 0xffffffff;
      pcVar8 = DAT_00858dd0;
      do {
        pcVar13 = pcVar8;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar13 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar13;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar8 = pcVar13 + -uVar5;
      pcVar13 = pcVar9;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar13 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    else {
      uVar6 = 0xffffffff;
      pcVar8 = DAT_00858dd0 + (~uVar5 - 0x37);
      do {
        pcVar13 = pcVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar13 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar13;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar8 = pcVar13 + -uVar6;
      pcVar13 = pcVar9;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar13 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar13 = pcVar13 + 1;
      }
      _strncpy(pcVar9,&DAT_007c7274,3);
      iVar2 = 0x36;
    }
    pcVar9 = pcVar9 + iVar2;
    iVar2 = FUN_00730c40(pcVar9,0x7ed864);
    pcVar9[iVar2] = '\n';
    pcVar8 = pcVar9 + iVar2 + 1;
  }
  DAT_00858dd0 = (char *)0x0;
  if (param_4 != 0) {
    iVar2 = FUN_00730c40(pcVar8,0x7ed848);
    pcVar8 = pcVar8 + iVar2;
  }
  *pcVar8 = '\n';
  pcVar9 = pcVar8 + 1;
  if (local_34c[0] != '\0') {
    if (DAT_00854eb4 == (int *)0x0) {
      *pcVar9 = '\n';
      pcVar9 = pcVar8 + 2;
    }
    uVar5 = 0xffffffff;
    pcVar8 = local_34c;
    do {
      pcVar13 = pcVar8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar13 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar13;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar13 + -uVar5;
    pcVar13 = pcVar9;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar13 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar13 = pcVar13 + 1;
    }
    uVar5 = 0xffffffff;
    pcVar8 = local_34c;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    pcVar9[~uVar5 - 1] = '\n';
    pcVar9 = pcVar9 + (~uVar5 - 1) + 1;
  }
  if (DAT_00854eb4 == (int *)0x0) {
    if (DAT_00854ebc != 0) {
      *pcVar9 = '\n';
      pcVar8 = s__Press_Retry_to_debug_the_applic_007ed818;
      pcVar9 = pcVar9 + 1;
      for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      *(undefined2 *)pcVar9 = *(undefined2 *)pcVar8;
      pcVar9[2] = pcVar8[2];
      if (param_3 == 0) {
        local_48[0] = s_Debug_Message_007ed7cc[0];
        local_48[1] = s_Debug_Message_007ed7cc[1];
        local_48[2] = s_Debug_Message_007ed7cc[2];
        local_48[3] = s_Debug_Message_007ed7cc[3];
        local_44[0] = s_Debug_Message_007ed7cc[4];
        local_44[1] = s_Debug_Message_007ed7cc[5];
        local_44[2] = s_Debug_Message_007ed7cc[6];
        local_44[3] = s_Debug_Message_007ed7cc[7];
        local_40[0] = s_Debug_Message_007ed7cc[8];
        local_40[1] = s_Debug_Message_007ed7cc[9];
        local_40[2] = s_Debug_Message_007ed7cc[10];
        local_40[3] = s_Debug_Message_007ed7cc[0xb];
        local_3c[0] = s_Debug_Message_007ed7cc[0xc];
        local_3c[1] = s_Debug_Message_007ed7cc[0xd];
      }
      else {
        pcVar8 = s_Debug_Error_Message_007ed804;
        pcVar9 = local_48;
        for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar9 = pcVar9 + 4;
        }
      }
      if ((DAT_00854eb8 == (undefined4 *)0x0) ||
         (puVar10 = (undefined4 *)DAT_00854eb8[0x11f], puVar10 == (undefined4 *)0x0)) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        FUN_006ce8c0((int)DAT_00854eb8,(HDC)*puVar10);
        uVar5 = 0xffffffff;
        pcVar8 = s__UNSAFE__007ed7f8;
        do {
          pcVar9 = pcVar8;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar9 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar9;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        iVar2 = -1;
        pcVar8 = local_48;
        do {
          pcVar13 = pcVar8;
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          pcVar13 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar13;
        } while (cVar1 != '\0');
        pcVar8 = pcVar9 + -uVar5;
        pcVar9 = pcVar13 + -1;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar9 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        }
      }
      if ((DAT_00854eb8 != (undefined4 *)0x0) && ((DAT_00854eb8[2] & 0x2000000) != 0)) {
        DAT_00854eb8[2] = DAT_00854eb8[2] & 0xfdfffffe;
        (**(code **)(*(int *)DAT_00854eb8[0xc] + 0x50))((int *)DAT_00854eb8[0xc],DAT_00854eb8[1],8);
        (**(code **)(*(int *)DAT_00854eb8[0xc] + 0x4c))((int *)DAT_00854eb8[0xc]);
      }
      iVar2 = FUN_006ad3a0((LPCSTR)&local_74c,local_48,2);
      if (iVar2 == 4) {
        iVar2 = 1;
        if ((DAT_00854eb8 != (undefined4 *)0x0) && ((DAT_00854eb8[2] & 1) != 0)) {
          DAT_00854eb8[2] = DAT_00854eb8[2] & 0xfdfffffe;
          (**(code **)(*(int *)DAT_00854eb8[0xc] + 0x50))
                    ((int *)DAT_00854eb8[0xc],DAT_00854eb8[1],8);
          FUN_006b08f0(DAT_00854eb8,0x854aa4,0,0x100);
        }
      }
      else if (iVar2 == 3) {
        iVar2 = -1;
      }
      else {
        iVar2 = 0;
        if ((DAT_00854eb8 != (undefined4 *)0x0) && (puVar10 != (undefined4 *)0x0)) {
          FUN_006ce770((uint)DAT_00854eb8,puVar10);
        }
      }
      goto LAB_006ad9d3;
    }
  }
  else {
    *pcVar9 = '\0';
    FUN_0072eb70((char *)&local_74c,DAT_00854eb4);
    uVar5 = 0;
    if (0 < DAT_00858ddc) {
      do {
        FUN_00733f70(DAT_00854eb4,(byte *)s__08X_007ed840);
        uVar5 = uVar5 + 1;
        uVar6 = uVar5 & 0x80000007;
        bVar14 = uVar6 == 0;
        if ((int)uVar6 < 0) {
          bVar14 = (uVar6 - 1 | 0xfffffff8) == 0xffffffff;
        }
        if (bVar14) {
          FUN_00733f70(DAT_00854eb4,&DAT_007c8ff4);
        }
      } while ((int)uVar5 < DAT_00858ddc);
    }
    uVar5 = uVar5 & 0x80000007;
    bVar14 = uVar5 == 0;
    if ((int)uVar5 < 0) {
      bVar14 = (uVar5 - 1 | 0xfffffff8) == 0xffffffff;
    }
    if (!bVar14) {
      FUN_00733f70(DAT_00854eb4,&DAT_007c8ff4);
    }
    FUN_00733d60(DAT_00854eb4);
  }
  iVar2 = -(uint)(param_3 != 0);
LAB_006ad9d3:
  DAT_00858ddc = 0;
  if (-1 < iVar2) {
    return iVar2;
  }
  FUN_006ad250();
  FUN_00733b40(0x16);
                    /* WARNING: Subroutine does not return */
  __exit(-1);
}


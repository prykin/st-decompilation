
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::SetControlObj */

void __thiscall CPanelTy::SetControlObj(CPanelTy *this,char param_1)

{
  char cVar1;
  code *pcVar2;
  CPanelTy *this_00;
  Global_sub_00525EF0_param_1Enum GVar3;
  int iVar4;
  char *pcVar5;
  LPSTR pCVar6;
  undefined4 *puVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  short sVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined2 uVar20;
  undefined2 uVar21;
  char *pcVar22;
  undefined4 local_b44 [68];
  undefined4 auStack_a34 [502];
  undefined4 local_25c [84];
  InternalExceptionFrame local_10c;
  undefined4 local_c8 [4];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 *local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_28;
  undefined4 *local_24;
  CPanelTy *local_20;
  Global_sub_00529590_param_1Enum *local_1c;
  undefined4 *local_18;
  int local_14;
  uint local_10;
  undefined1 *local_c;
  undefined4 *local_8;
  
  local_10c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_10c;
  local_20 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_10c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_10c.previous;
    iVar10 = ReportDebugMessage(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x53e,0,iVar4,
                                &DAT_007a4ccc,s_CPanelTy__SetControlObj_007c2898);
    if (iVar10 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_cpanel4_cpp_007c2700,0x53e);
    return;
  }
  if (param_1 != '\0') {
    thunk_FUN_0054a8d0(DAT_00802a30);
  }
  this_00 = local_20;
  if (*(uint *)&local_20->field_0x302 != 0) {
    FUN_006e56b0(*(void **)&local_20->field_0xc,*(uint *)&local_20->field_0x302);
  }
  *(undefined4 *)&this_00->field_0x302 = 0;
  if (*(uint *)&this_00->field_0x30c != 0) {
    FUN_006e56b0(*(void **)&this_00->field_0xc,*(uint *)&this_00->field_0x30c);
  }
  puVar13 = &this_00->field_0x314;
  *(undefined4 *)&this_00->field_0x30c = 0;
  local_18 = (undefined4 *)puVar13;
  if (*(uint *)&this_00->field_0x314 != 0) {
    FUN_006e56b0(*(void **)&this_00->field_0xc,*(uint *)&this_00->field_0x314);
  }
  *(undefined4 *)puVar13 = 0;
  if (*(uint *)&this_00->field_0x318 != 0) {
    FUN_006e56b0(*(void **)&this_00->field_0xc,*(uint *)&this_00->field_0x318);
  }
  *(undefined4 *)&this_00->field_0x318 = 0;
  if (*(uint *)&this_00->field_0x9d0 != 0) {
    FUN_006e56b0(*(void **)&this_00->field_0xc,*(uint *)&this_00->field_0x9d0);
  }
  *(undefined4 *)&this_00->field_0x9d0 = 0;
  puVar11 = (uint *)&this_00->field_0xa15;
  iVar4 = 6;
  do {
    if (*puVar11 != 0) {
      FUN_006e56b0(*(void **)&this_00->field_0xc,*puVar11);
      *puVar11 = 0;
    }
    puVar11 = puVar11 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  cVar1 = this_00->field_0xbfa;
  if (((cVar1 == '\0') || (cVar1 == '\x03')) || (cVar1 == '\x04')) {
    if (*(int *)&this_00->field_0x9c4 != 0) {
      this_00->field_0028 = 0x20;
      *(undefined4 *)&this_00->field_0x2c = 0;
      FUN_006e6080(this_00,2,*(int *)&this_00->field_0x9c4,(undefined4 *)&this_00->field_0x18);
    }
  }
  else {
    local_10 = local_10 & 0xffffff00;
    puVar7 = local_70;
    for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    local_c = &this_00->field_0x86a;
    local_1c = &this_00->field_0xbfe;
    iVar4 = -0xbff - (int)this_00;
    local_14 = iVar4;
    do {
      if (*local_1c == 0) goto LAB_00509a02;
      iVar12 = 0xe;
      iVar10 = 0xf;
      switch(local_1c + iVar4) {
      case (Global_sub_00529590_param_1Enum *)0x0:
        iVar12 = 0x4b;
        break;
      case (Global_sub_00529590_param_1Enum *)0x1:
        iVar12 = 0x88;
        break;
      case (Global_sub_00529590_param_1Enum *)0x2:
        goto switchD_00509942_caseD_2;
      case (Global_sub_00529590_param_1Enum *)0x3:
        iVar12 = 0x88;
        goto switchD_00509942_caseD_2;
      case (Global_sub_00529590_param_1Enum *)0x4:
        iVar12 = 0x4b;
switchD_00509942_caseD_2:
        iVar10 = 0x37;
      }
      thunk_FUN_004f17d0(this_00,0,(byte)local_10);
      if (this_00->field_0xbfc == '\0') {
        local_8 = (undefined4 *)0x0;
      }
      else {
        local_8 = (undefined4 *)(uint)local_1c[6];
      }
      pcVar22 = (char *)0x0;
      uVar21 = 0;
      uVar20 = 1;
      iVar4 = 0;
      puVar13 = local_c;
      pcVar5 = thunk_FUN_00529590(*local_1c,*(int *)&this_00->field_0xbf5);
      pCVar6 = thunk_FUN_00571240(pcVar5,iVar4);
      SetButStruct(this_00,local_b44 + local_28 * 0x5f,5,local_8,iVar12,iVar10,1,pCVar6,uVar20,
                   uVar21,puVar13,pcVar22);
      iVar4 = local_28 * 0x5f;
      local_28 = local_28 + 1;
      auStack_a34[iVar4] = 1;
      iVar4 = local_14;
LAB_00509a02:
      bVar9 = (char)local_10 + 1;
      local_c = local_c + 0x27;
      local_1c = local_1c + 1;
      local_10 = CONCAT31(local_10._1_3_,bVar9);
    } while (bVar9 < 6);
    local_60 = *(undefined4 *)&this_00->field_0x8;
    local_24 = local_b44;
    local_70[0] = 1;
    local_70[1] = 0xffffffff;
    local_5c = 2;
    local_58 = 0xb203;
    local_3c = 2;
    local_38 = 0xb204;
    local_40 = local_60;
    (**(code **)(**(int **)&this_00->field_0xc + 8))(9,&this_00->field_0x302,0,local_70,0);
    thunk_FUN_004f1610(this_00,'\0');
    if (*(int *)&this_00->field_0x9c4 != 0) {
      this_00->field_0028 = 0x20;
      if (this_00->field_0xbfc == '\0') {
        uVar8 = 0;
      }
      else {
        uVar8 = (uint)(byte)this_00->field_0xc0a;
      }
      *(uint *)&this_00->field_0x2c = uVar8;
      FUN_006e6080(this_00,2,*(int *)&this_00->field_0x9c4,(undefined4 *)&this_00->field_0x18);
    }
    if (this_00->field_0xbfb == '\x02') {
LAB_00509b60:
      uVar19 = 0;
      uVar18 = 0;
      iVar10 = 0;
      pcVar5 = (char *)0x0;
      iVar4 = 0;
      uVar20 = 0;
      sVar16 = 0;
      uVar15 = 0xb13f;
      uVar14 = 0xb12f;
      pCVar6 = thunk_FUN_00571240(s_BUT_SMALL_007c23b4,0);
      uVar14 = CreateBut(this_00,5,0,(uint)(this_00->field_0xbfc != '\0'),0x92,0x6e,1,(int)pCVar6,
                         uVar14,uVar15,sVar16,uVar20,iVar4,pcVar5,iVar10,uVar18,uVar19);
      *local_18 = uVar14;
      g_currentExceptionFrame = local_10c.previous;
      return;
    }
    switch(*(undefined4 *)&this_00->field_0xbf5) {
    case 0x32:
    case 0x40:
    case 0x44:
    case 0x49:
      if (*(int *)&this_00->field_0xc12 != 0) goto LAB_00509b60;
      break;
    case 0x33:
      iVar4 = 0xb12f;
      local_c = (undefined1 *)0x4c;
      local_8 = (undefined4 *)0x2;
      puVar7 = local_18;
      do {
        if (*(int *)((int)puVar7 + 0x8fe) != 0) {
          uVar18 = 0;
          uVar15 = 0;
          iVar17 = 0;
          pcVar5 = (char *)0x0;
          iVar12 = 0;
          uVar20 = 0;
          sVar16 = 0;
          uVar14 = 0xb13f;
          iVar10 = iVar4;
          pCVar6 = thunk_FUN_00571240(s_BUT_SMALL_007c23b4,0);
          uVar14 = CreateBut(this_00,5,0,(uint)(this_00->field_0xbfc != '\0'),0x92,(int)local_c,1,
                             (int)pCVar6,iVar10,uVar14,sVar16,uVar20,iVar12,pcVar5,iVar17,uVar15,
                             uVar18);
          *puVar7 = uVar14;
        }
        puVar7 = puVar7 + 1;
        iVar4 = iVar4 + 1;
        local_c = (undefined1 *)((int)local_c + 0x22);
        local_8 = (undefined4 *)((int)local_8 + -1);
      } while (local_8 != (undefined4 *)0x0);
      g_currentExceptionFrame = local_10c.previous;
      return;
    case 0x34:
      local_8 = (undefined4 *)0x2;
      puVar7 = local_c8;
      for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      puVar7 = local_25c;
      for (iVar4 = 0x54; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      local_14 = this_00->field_0138;
      puVar7 = local_25c + 1;
      iVar10 = *(int *)&this_00->field_0x50 + 99;
      iVar4 = 0;
      do {
        iVar12 = local_14;
        puVar7[-1] = iVar4 + 1;
        *puVar7 = 0;
        puVar7[2] = iVar10;
        puVar7[4] = 0x2e;
        iVar17 = DAT_00806734;
        if (iVar12 != 0) {
          iVar17 = *(int *)&this_00->field_0xa8;
        }
        puVar7[3] = iVar17 + 0x22;
        puVar7[5] = 0x10;
        puVar7[0x11] = 0;
        puVar7[0x15] = 0x101;
        puVar7[10] = 0x101;
        puVar7[0x16] = 3;
        puVar7[0xb] = 3;
        puVar7[0xc] = 0x4201;
        puVar7[0x17] = 0x4202;
        *(undefined2 *)(puVar7 + 0x18) = 0;
        *(undefined2 *)(puVar7 + 0xd) = 0;
        *(undefined2 *)((int)puVar7 + 0x62) = 2;
        *(undefined2 *)((int)puVar7 + 0x36) = 2;
        if (iVar4 == 0) {
          uVar14 = 0x3aa6;
LAB_00509ddd:
          puVar7[0x19] = uVar14;
          puVar7[0xe] = uVar14;
        }
        else if (iVar4 == 1) {
          uVar14 = 0x3aa7;
          goto LAB_00509ddd;
        }
        iVar10 = iVar10 + 0x31;
        puVar7 = puVar7 + 0x1c;
        local_8 = (undefined4 *)((int)local_8 + -1);
        iVar4 = iVar4 + 1;
        if (local_8 == (undefined4 *)0x0) {
          local_80 = local_25c;
          local_7c = (uint)(byte)this_00->field_09D4;
          local_b8 = *(undefined4 *)&this_00->field_0x8;
          local_c8[0] = 1;
          local_c8[1] = 1;
          local_78 = 1;
          local_74 = 1;
          local_b4 = 2;
          local_b0 = 0xb207;
          local_94 = 2;
          local_90 = 0xb206;
          local_98 = local_b8;
          (**(code **)(**(int **)&this_00->field_0xc + 8))(5,&this_00->field_0x9d0,0,local_c8,0);
          local_c = (undefined1 *)((uint)local_c & 0xffffff00);
          local_10 = 0x3b;
          iVar4 = *(int *)(this_00->field_0194 + 4);
          iVar10 = *(int *)(*(int *)&this_00->field_0x9f9 + 4);
          puVar13 = &this_00->field_0xa2d;
          puVar7 = (undefined4 *)puVar13;
          for (iVar12 = 0x3a; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          *(undefined2 *)puVar7 = 0;
          local_14 = (iVar4 - iVar10) / 2 + 8;
          local_8 = (undefined4 *)&this_00->field_0xa15;
          iVar4 = 0xb18f;
          do {
            *puVar13 = 2;
            if (DAT_0080874e == '\x01') {
              GVar3 = (this_00->field_09D4 != '\x01') + CASE_1;
            }
            else {
              GVar3 = CASE_2 - (this_00->field_09D4 != '\x01');
            }
            uVar14 = thunk_FUN_00525ef0(GVar3,(char)local_c);
            *(undefined4 *)(puVar13 + 1) = uVar14;
            uVar14 = CreateBut(this_00,5,0,(uint)(this_00->field_0xbfc != '\0'),local_14,local_10,0,
                               0,iVar4,iVar4 + 0x10,1,0,(int)puVar13,(char *)0x0,0x11,10,0);
            puVar13 = puVar13 + 0x27;
            local_10 = local_10 + 0xb;
            *local_8 = uVar14;
            bVar9 = (char)local_c + 1;
            iVar4 = iVar4 + 1;
            local_8 = local_8 + 1;
            local_c = (undefined1 *)CONCAT31(local_c._1_3_,bVar9);
          } while (bVar9 < 6);
          g_currentExceptionFrame = local_10c.previous;
          return;
        }
      } while( true );
    case 0x35:
      if (this_00->field_0xc31 != '\0') {
        uVar19 = 0;
        uVar18 = 0;
        iVar10 = 0;
        pcVar5 = (char *)0x0;
        iVar4 = 0;
        uVar20 = 0;
        sVar16 = 0;
        uVar15 = 0xb13f;
        uVar14 = 0xb12f;
        pCVar6 = thunk_FUN_00571240(s_BUT_SMALL_007c23b4,0);
        cVar1 = this_00->field_0xbfc;
LAB_00509c11:
        uVar14 = CreateBut(this_00,5,0,(uint)(cVar1 != '\0'),0x92,0x6e,1,(int)pCVar6,uVar14,uVar15,
                           sVar16,uVar20,iVar4,pcVar5,iVar10,uVar18,uVar19);
        *local_18 = uVar14;
        g_currentExceptionFrame = local_10c.previous;
        return;
      }
      break;
    case 0x3c:
      if (this_00->field_0xc3c == '\x01') {
        uVar19 = 0;
        uVar18 = 0;
        iVar10 = 0;
        pcVar5 = (char *)0x0;
        iVar4 = 0;
        uVar20 = 0;
        sVar16 = 0;
        uVar15 = 0xb13f;
        uVar14 = 0xb12f;
        pCVar6 = thunk_FUN_00571240(s_BUT_SMALL_007c23b4,0);
        cVar1 = this_00->field_0xbfc;
        goto LAB_00509c11;
      }
      break;
    case 0x43:
    case 0x4c:
      if (this_00->field_0xbfc == '\0') {
        iVar4 = 0;
      }
      else {
        iVar4 = (-(uint)(this_00->field_0xc11 != '\0') & 2) + 1;
      }
      uVar19 = 0;
      uVar18 = 0;
      iVar12 = 0;
      pcVar5 = (char *)0x0;
      iVar10 = 0;
      uVar20 = 0;
      sVar16 = 0;
      uVar15 = 0xb12e;
      uVar14 = 0xb12d;
      pCVar6 = thunk_FUN_00571240(s_BUT_AUTO_007c23c0,0);
      uVar14 = CreateBut(this_00,5,3,iVar4,-1,0x58,1,(int)pCVar6,uVar14,uVar15,sVar16,uVar20,iVar10,
                         pcVar5,iVar12,uVar18,uVar19);
      *(undefined4 *)&this_00->field_0x30c = uVar14;
      g_currentExceptionFrame = local_10c.previous;
      return;
    case 0x50:
      iVar10 = 0xb17f;
      local_c = (undefined1 *)0x6;
      iVar4 = 0x3b;
      local_14 = (*(int *)(this_00->field_0194 + 4) - *(int *)(*(int *)&this_00->field_0x9f9 + 4)) /
                 2 + 8;
      local_8 = (undefined4 *)&this_00->field_0xa15;
      do {
        uVar14 = CreateBut(this_00,5,0,(uint)(this_00->field_0xbfc != '\0'),local_14,iVar4,0,0,
                           iVar10 + -0x20,iVar10,2,0,0x4f20,(char *)0x0,0xaa,10,iVar10 + -0x10);
        iVar10 = iVar10 + 1;
        iVar4 = iVar4 + 0xb;
        *local_8 = uVar14;
        local_8 = local_8 + 1;
        local_c = (undefined1 *)((int)local_c + -1);
      } while (local_c != (undefined1 *)0x0);
      g_currentExceptionFrame = local_10c.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_10c.previous;
  return;
}


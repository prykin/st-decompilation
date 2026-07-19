
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::SetControlObjSI */

void __thiscall CPanelTy::SetControlObjSI(CPanelTy *this,char param_1)

{
  char cVar1;
  code *pcVar2;
  CPanelTy *this_00;
  Global_sub_00529590_param_1Enum *pGVar3;
  int iVar4;
  char *pcVar5;
  LPSTR pCVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined1 uVar10;
  undefined1 *puVar11;
  uint uVar12;
  byte bVar13;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  undefined4 uVar17;
  short sVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  undefined2 uVar22;
  undefined2 uVar23;
  char *pcVar24;
  undefined4 local_84c [68];
  undefined4 auStack_73c [5];
  undefined4 auStack_728 [307];
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
  undefined1 *local_1c;
  uint local_18;
  Global_sub_00529590_param_1Enum *local_14;
  undefined1 *local_10;
  uint local_c;
  Global_sub_00529590_param_1Enum *local_8;
  
  local_10c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_10c;
  local_20 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_10c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_10c.previous;
    iVar15 = ReportDebugMessage(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x94e,0,iVar4,
                                &DAT_007a4ccc,s_CPanelTy__SetControlObjSI_007c2920);
    if (iVar15 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_cpanel4_cpp_007c2700,0x94e);
    return;
  }
  if (param_1 != '\0') {
    thunk_FUN_0054a8d0(DAT_00802a30);
  }
  this_00 = local_20;
  if (local_20->field_0302 != 0) {
    FUN_006e56b0((void *)local_20->field_000C,local_20->field_0302);
  }
  this_00->field_0302 = 0;
  if (this_00->field_030C != 0) {
    FUN_006e56b0((void *)this_00->field_000C,this_00->field_030C);
  }
  this_00->field_030C = 0;
  if (this_00->field_0314 != 0) {
    FUN_006e56b0((void *)this_00->field_000C,this_00->field_0314);
  }
  this_00->field_0314 = 0;
  if (this_00->field_0318 != 0) {
    FUN_006e56b0((void *)this_00->field_000C,this_00->field_0318);
  }
  this_00->field_0318 = 0;
  if (this_00->field_09D0 != 0) {
    FUN_006e56b0((void *)this_00->field_000C,this_00->field_09D0);
  }
  this_00->field_09D0 = 0;
  puVar14 = &this_00->field_0A15;
  iVar4 = 6;
  do {
    if (*puVar14 != 0) {
      FUN_006e56b0((void *)this_00->field_000C,*puVar14);
      *puVar14 = 0;
    }
    puVar14 = puVar14 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar14 = &this_00->field_0B1F;
  iVar4 = 6;
  do {
    if (*puVar14 != 0) {
      FUN_006e56b0((void *)this_00->field_000C,*puVar14);
      *puVar14 = 0;
    }
    puVar14 = puVar14 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (this_00->field_0B37 != 0) {
    FUN_006e56b0((void *)this_00->field_000C,this_00->field_0B37);
  }
  cVar1 = this_00->field_0BFA;
  this_00->field_0B37 = 0;
  if (((cVar1 == '\0') || (cVar1 == '\x03')) || (cVar1 == '\x04')) {
    if (this_00->field_09C4 != 0) {
      *(undefined4 *)&this_00->field_0x2c = 0;
      this_00->field_0028 = 0x20;
      FUN_006e6080(this_00,2,this_00->field_09C4,(undefined4 *)&this_00->field_0x18);
      g_currentExceptionFrame = local_10c.previous;
      return;
    }
    g_currentExceptionFrame = local_10c.previous;
    return;
  }
  local_18 = local_18 & 0xffffff00;
  puVar8 = local_70;
  for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_1c = &this_00->field_0x86a;
  local_8 = &this_00->field_0BFE;
  puVar11 = (undefined1 *)(-0xbfe - (int)this_00);
  local_10 = puVar11;
  do {
    if (*local_8 != 0) {
      local_14 = local_8 + (int)puVar11;
      iVar15 = 0xc;
      iVar4 = 0xd;
      if (local_14 == (Global_sub_00529590_param_1Enum *)0x1) {
        iVar15 = 0x49;
      }
      else if (local_14 == (Global_sub_00529590_param_1Enum *)0x2) {
        iVar15 = 0xc;
        iVar4 = 0x27;
      }
      else if (local_14 == (Global_sub_00529590_param_1Enum *)0x3) {
        iVar15 = 0x49;
        iVar4 = 0x27;
      }
      thunk_FUN_004f17d0(this_00,0,(byte)local_18);
      if (this_00->field_0BFC == '\0') {
        local_c = 0;
      }
      else {
        local_c = (uint)local_8[6];
      }
      pcVar24 = (char *)0x0;
      uVar23 = 0;
      uVar22 = 1;
      iVar21 = 0;
      puVar11 = local_1c;
      pcVar5 = thunk_FUN_00529590(*local_8,this_00->field_0BF5);
      pCVar6 = thunk_FUN_00571240(pcVar5,iVar21);
      SetButStruct(this_00,local_84c + local_28 * 0x5f,5,local_c,iVar15,iVar4,6,pCVar6,uVar22,uVar23
                   ,puVar11,pcVar24);
      pGVar3 = local_14;
      iVar15 = local_28;
      iVar4 = this_00->field_02DE;
      auStack_73c[local_28 * 0x5f] = 1;
      uVar7 = FUN_0070b3a0(iVar4,(int)pGVar3);
      puVar11 = local_10;
      auStack_728[iVar15 * 0x5f] = uVar7;
      auStack_728[iVar15 * 0x5f + 1] = 0x3c;
      local_28 = local_28 + 1;
    }
    bVar13 = (char)local_18 + 1;
    local_1c = local_1c + 0x27;
    local_8 = local_8 + 1;
    local_18 = CONCAT31(local_18._1_3_,bVar13);
  } while (bVar13 < 4);
  local_60 = this_00->field_0008;
  local_24 = local_84c;
  local_70[0] = 1;
  local_70[1] = 0xffffffff;
  local_5c = 2;
  local_58 = 0xb20f;
  local_3c = 2;
  local_38 = 0xb210;
  local_40 = local_60;
  (**(code **)(*(int *)this_00->field_000C + 8))(9,&this_00->field_0302,0,local_70,0);
  thunk_FUN_004f1610(this_00,'\0');
  if (this_00->field_09C4 != 0) {
    this_00->field_0028 = 0x20;
    if (this_00->field_0BFC == '\0') {
      uVar12 = 0;
    }
    else {
      uVar12 = (uint)(byte)this_00->field_0C0A;
    }
    *(uint *)&this_00->field_0x2c = uVar12;
    FUN_006e6080(this_00,2,this_00->field_09C4,(undefined4 *)&this_00->field_0x18);
  }
  if (this_00->field_0BFB == '\x02') {
LAB_0050eb47:
    uVar20 = 0;
    uVar19 = 0;
    iVar15 = 0;
    pcVar5 = (char *)0x0;
    iVar4 = 0;
    uVar22 = 0;
    sVar18 = 0;
    uVar17 = 0xb13f;
    uVar7 = 0xb12f;
    pCVar6 = thunk_FUN_00571240(s_BUT_SMALL_007c23b4,0);
    uVar12 = (uint)(this_00->field_0BFC != '\0');
  }
  else {
    switch(this_00->field_0BF5) {
    case 0x53:
      if (this_00->field_0C3C != '\x01') {
        g_currentExceptionFrame = local_10c.previous;
        return;
      }
      uVar20 = 0;
      uVar19 = 0;
      iVar15 = 0;
      pcVar5 = (char *)0x0;
      iVar4 = 0;
      uVar22 = 0;
      sVar18 = 0;
      uVar17 = 0xb13f;
      uVar7 = 0xb12f;
      pCVar6 = thunk_FUN_00571240(s_BUT_SMALL_007c23b4,0);
      uVar12 = (uint)(this_00->field_0BFC != '\0');
      break;
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
      if (this_00->field_0C31 == '\0') {
        g_currentExceptionFrame = local_10c.previous;
        return;
      }
      goto LAB_0050eb47;
    case 0x5b:
      local_c = 2;
      puVar8 = local_c8;
      for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      puVar8 = local_25c;
      for (iVar4 = 0x54; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      local_10 = (undefined1 *)(this_00->field_0050 + 0x23);
      iVar15 = 0;
      local_14 = (Global_sub_00529590_param_1Enum *)this_00->field_0138;
      puVar8 = local_25c + 1;
      iVar4 = 0;
      do {
        puVar11 = local_10;
        puVar8[-1] = iVar4 + 1;
        *puVar8 = 0;
        puVar8[2] = puVar11;
        bVar16 = local_14 != (Global_sub_00529590_param_1Enum *)0x0;
        puVar8[4] = 0x1d;
        iVar21 = DAT_00806734;
        if (bVar16) {
          iVar21 = this_00->field_00A8;
        }
        puVar8[3] = iVar21 + 0x59 + iVar15;
        puVar8[5] = 0x11;
        puVar8[0x11] = 0;
        puVar8[0x15] = 0x101;
        puVar8[10] = 0x101;
        puVar8[0x16] = 3;
        puVar8[0xb] = 3;
        puVar8[0xc] = 0x4201;
        puVar8[0x17] = 0x4202;
        *(undefined2 *)(puVar8 + 0x18) = 0;
        *(undefined2 *)(puVar8 + 0xd) = 0;
        *(undefined2 *)((int)puVar8 + 0x62) = 2;
        *(undefined2 *)((int)puVar8 + 0x36) = 2;
        if (iVar4 == 0) {
          uVar7 = 0x3aa9;
LAB_0050edc5:
          puVar8[0x19] = uVar7;
          puVar8[0xe] = uVar7;
        }
        else if (iVar4 == 1) {
          uVar7 = 0x3aaa;
          goto LAB_0050edc5;
        }
        iVar15 = iVar15 + 0x12;
        puVar8 = puVar8 + 0x1c;
        local_c = local_c + -1;
        iVar4 = iVar4 + 1;
        if (local_c == 0) {
          local_7c = (uint)(byte)this_00->field_09D4;
          local_80 = local_25c;
          local_b8 = this_00->field_0008;
          local_c8[0] = 1;
          local_c8[1] = 1;
          local_78 = 1;
          local_74 = 1;
          local_b4 = 2;
          local_b0 = 0xb207;
          local_94 = 2;
          local_90 = 0xb206;
          local_98 = local_b8;
          (**(code **)(*(int *)this_00->field_000C + 8))(5,&this_00->field_09D0,0,local_c8,0);
          local_8 = (Global_sub_00529590_param_1Enum *)((uint)local_8 & 0xffffff00);
          puVar8 = (undefined4 *)&this_00->field_0xa2d;
          for (iVar4 = 0x3a; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
          *(undefined2 *)puVar8 = 0;
          do {
            if ((this_00->field_09D4 == '\x01') && ((char)local_8 == '\x03')) {
              uVar10 = 0;
            }
            else {
              uVar10 = 2;
            }
            uVar12 = (uint)local_8 & 0xff;
            local_10 = &this_00->field_0x0 + uVar12 * 0x27;
            puVar11 = local_10 + 0xa2d;
            *puVar11 = uVar10;
            uVar7 = thunk_FUN_00525ef0(this_00->field_09D4 + CASE_2,(char)local_8);
            *(undefined4 *)(local_10 + 0xa2e) = uVar7;
            if ((this_00->field_09D4 == '\x01') && ((char)local_8 == '\x03')) {
              uVar9 = 0;
            }
            else {
              uVar9 = (uint)(this_00->field_0BFC != '\0');
            }
            uVar7 = CreateBut(this_00,5,0,uVar9,0xba,uVar12 * 0xb + 0x55,0,0,uVar12 + 0xb18f,
                              uVar12 + 0xb19f,1,0,(int)puVar11,(char *)0x0,0x11,10,0);
            (&this_00->field_0A15)[uVar12] = uVar7;
            bVar13 = (char)local_8 + 1;
            local_8 = (Global_sub_00529590_param_1Enum *)CONCAT31(local_8._1_3_,bVar13);
          } while (bVar13 < 4);
          g_currentExceptionFrame = local_10c.previous;
          return;
        }
      } while( true );
    case 0x5c:
      if (*(int *)&this_00->field_0xc12 == 0) {
        g_currentExceptionFrame = local_10c.previous;
        return;
      }
      uVar20 = 0;
      uVar19 = 0;
      iVar15 = 0;
      pcVar5 = (char *)0x0;
      iVar4 = 0;
      uVar22 = 0;
      sVar18 = 0;
      uVar17 = 0xb13f;
      uVar7 = 0xb12f;
      pCVar6 = thunk_FUN_00571240(s_BUT_SMALL_007c23b4,0);
      uVar12 = (uint)(this_00->field_0BFC != '\0');
      break;
    default:
      g_currentExceptionFrame = local_10c.previous;
      return;
    case 0x67:
    case 0x68:
      if (this_00->field_0BFC == '\0') {
        uVar12 = 0;
      }
      else {
        uVar12 = (uint)(byte)this_00->field_0xc0b;
      }
      uVar7 = CreateBut(this_00,5,0,uVar12,0x1a,0x5d,1,0x7c2300,0xb211,0xb212,0,0,0,(char *)0x0,0,0,
                        0);
      this_00->field_0B1F = uVar7;
      if (this_00->field_0BFC == '\0') {
        uVar12 = 0;
      }
      else {
        uVar12 = (uint)(byte)this_00->field_0xc0c;
      }
      uVar7 = CreateBut(this_00,5,0,uVar12,0xba,0x5d,1,0x7c22e4,0xb213,0xb214,0,0,0,(char *)0x0,0,0,
                        0);
      *(undefined4 *)&this_00->field_0xb23 = uVar7;
      g_currentExceptionFrame = local_10c.previous;
      return;
    case 0x6d:
      uVar7 = CreateBut(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),0x2a,0x7b,1,0x7c2300,0xb211,
                        0xb212,0,0,0,(char *)0x0,0,0,0);
      this_00->field_0B1F = uVar7;
      uVar7 = CreateBut(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),0x45,0x7b,1,0x7c22e4,0xb213,
                        0xb214,0,0,0,(char *)0x0,0,0,0);
      *(undefined4 *)&this_00->field_0xb23 = uVar7;
      uVar7 = CreateBut(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),0x8f,0x7b,1,0x7c2300,0xb215,
                        0xb216,0,0,0,(char *)0x0,0,0,0);
      *(undefined4 *)&this_00->field_0xb27 = uVar7;
      uVar7 = CreateBut(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),0xaa,0x7b,1,0x7c22e4,0xb217,
                        0xb218,0,0,0,(char *)0x0,0,0,0);
      *(undefined4 *)&this_00->field_0xb2b = uVar7;
      uVar7 = CreateBut(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),0x17,100,0,0,0xb219,0xb21a,0
                        ,0,0,(char *)0x0,0x11,10,0);
      *(undefined4 *)&this_00->field_0xb2f = uVar7;
      uVar7 = CreateBut(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),0xc5,100,0,0,0xb21b,0xb21c,0
                        ,0,0,(char *)0x0,0x11,10,0);
      *(undefined4 *)&this_00->field_0xb33 = uVar7;
      g_currentExceptionFrame = local_10c.previous;
      return;
    }
  }
  uVar7 = CreateBut(this_00,5,0,uVar12,0x9a,0x59,1,(int)pCVar6,uVar7,uVar17,sVar18,uVar22,iVar4,
                    pcVar5,iVar15,uVar19,uVar20);
  this_00->field_0314 = uVar7;
  g_currentExceptionFrame = local_10c.previous;
  return;
}


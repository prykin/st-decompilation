
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STSprGameObjC::GetMessage */

undefined4 __thiscall STSprGameObjC::GetMessage(STSprGameObjC *this,int param_1)

{
  char cVar1;
  uint uVar2;
  code *pcVar3;
  STSprGameObjC *this_00;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  undefined4 *puVar8;
  int *unaff_EDI;
  bool bVar9;
  InternalExceptionFrame local_54;
  STSprGameObjC *local_10;
  byte local_c;
  undefined3 uStack_b;
  byte local_5;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar5 = ReportDebugMessage(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xa91,0,iVar4,&DAT_007a4ccc,
                               s_STSprGameObjC__GetMessage_007a4f2c);
    if (iVar5 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xa92);
      return 0xffff;
    }
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return uVar6;
  }
  STGameObjC::GetMessage((STGameObjC *)local_10,param_1);
  uVar2 = *(uint *)(param_1 + 0x10);
  if (0x113 < uVar2) {
    if (0x4403 < uVar2) {
      if (uVar2 == 0x4404) {
        thunk_FUN_0041f970((int)this_00);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (uVar2 != 0x440f) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (DAT_0080732c != 0) {
        if (*(int *)&this_00->field_0x21d != 1) {
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        puVar8 = &this_00->field_01D5;
        STT3DSprC::StopShow((STT3DSprC *)puVar8,0xf);
        STT3DSprC::StopShow((STT3DSprC *)puVar8,0);
        thunk_FUN_004abce0(puVar8,0,0,0x13,'\0');
        thunk_FUN_004abce0(puVar8,0xf,0x14,0x27,'\0');
        thunk_FUN_004acd60(puVar8,'\0',*(uint *)(DAT_00802a38 + 0xe4) & 1);
        thunk_FUN_004acd60(puVar8,'\x0f',*(uint *)(DAT_00802a38 + 0xe4) & 1);
        STT3DSprC::StartShow((STT3DSprC *)puVar8,0,*(undefined4 *)(DAT_00802a38 + 0xe4));
        STT3DSprC::StartShow((STT3DSprC *)puVar8,0xf,*(undefined4 *)(DAT_00802a38 + 0xe4));
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (*(int *)&this_00->field_0x21d != 1) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      puVar8 = &this_00->field_01D5;
      STT3DSprC::StopShow((STT3DSprC *)puVar8,0xf);
      STT3DSprC::StopShow((STT3DSprC *)puVar8,0);
      thunk_FUN_004abce0(puVar8,0,0,0,'\0');
      thunk_FUN_004abce0(puVar8,0xf,0x14,0x14,'\0');
      STT3DSprC::StartShow((STT3DSprC *)puVar8,0,*(undefined4 *)(DAT_00802a38 + 0xe4));
      STT3DSprC::StartShow((STT3DSprC *)puVar8,0xf,*(undefined4 *)(DAT_00802a38 + 0xe4));
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (uVar2 == 0x4403) {
      thunk_FUN_0041f630((int *)this_00);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (uVar2 == 0x11f) {
      if ((this_00->field_0020 != 0x14) && (this_00->field_0020 != 1000)) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      thunk_FUN_004ad4a0(&this_00->field_01D5,DAT_00806774,(byte *)s_simmsk_007a4f4c);
      thunk_FUN_004ad4f0((int)&this_00->field_01D5);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (uVar2 != 0x120) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if ((this_00->field_0020 != 0x14) && (this_00->field_0020 != 1000)) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    thunk_FUN_004ad510((int)&this_00->field_01D5);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (uVar2 == 0x113) {
    if ((this_00->field_0020 != 0x14) && (this_00->field_0020 != 1000)) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    (**(code **)this_00->field_01D5)();
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (0x109 < uVar2) {
    if (uVar2 == 0x110) {
      if (DAT_008033f0 == (void *)0x0) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      thunk_FUN_00566bd0(DAT_008033f0,(int)this_00);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (uVar2 != 0x112) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if ((this_00->field_0020 != 0x14) && (this_00->field_0020 != 1000)) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    thunk_FUN_004ad5e0((int)&this_00->field_01D5);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (uVar2 == 0x109) {
    if (*(int *)&this_00->field_0x21d == 1) {
      LoadActFrame(this_00,unaff_EDI);
    }
    LoadLifeFrame(this_00,unaff_EDI);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (uVar2 != 0) {
    if (uVar2 == 2) {
      *(undefined4 *)&this_00->field_0x219 = 10;
      *(undefined4 *)&this_00->field_0x215 = 10;
      *(undefined4 *)&this_00->field_0x21d = 0;
      *(undefined4 *)&this_00->field_0x221 = 0xffffffff;
      *(undefined4 *)&this_00->field_0x225 = 0;
      *(undefined4 *)&this_00->field_0x229 = 0;
      *(undefined4 *)&this_00->field_0x101 = 0xffffffff;
      *(undefined4 *)&this_00->field_0x105 = 0xffffffff;
      *(undefined4 *)&this_00->field_0x109 = 0xffffffff;
      *(undefined4 *)&this_00->field_0x22d = 0;
      if (*(int *)&this_00->field_0x2c != 0) {
        if (*(int *)&this_00->field_0x2c == 1) {
          iVar4 = STT3DSprC::Init((STT3DSprC *)&this_00->field_01D5,DAT_008073cc,0x78,0x56,
                                  (uint)this_00,0xf0,0xbe,0x11);
          if (iVar4 != 0) {
            RaiseInternalException(-1,DAT_007ed77c,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x9d2);
          }
          FUN_006e9210((void *)this_00->field_0211,this_00->field_01ED);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        RaiseInternalException(-1,DAT_007ed77c,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x9d4);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      iVar4 = STT3DSprC::Init((STT3DSprC *)&this_00->field_01D5,DAT_008073cc,0x5a,0x45,(uint)this_00
                              ,0xb4,0x8c,0x11);
      if (iVar4 == 0) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      RaiseInternalException(-1,DAT_007ed77c,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x9d1);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (uVar2 != 3) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    thunk_FUN_0041f970((int)this_00);
    FUN_006ab060((undefined4 *)&this_00->field_0x11d);
    FUN_006ab060((undefined4 *)&this_00->field_0x121);
    FUN_006ab060((undefined4 *)&this_00->field_0x125);
    FUN_006ab060((undefined4 *)&this_00->field_0x129);
    iVar4 = this_00->field_0020;
    if (iVar4 != 0x14) {
      if (iVar4 == 0x1ae) {
        FUN_006ab060((undefined4 *)&this_00->field_0x1ad);
        FUN_006ab060((undefined4 *)&this_00->field_0x1b1);
        FUN_006ab060((undefined4 *)&this_00->field_0x1c5);
        FUN_006ab060((undefined4 *)&this_00->field_0x1c9);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (iVar4 != 1000) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if ((byte *)this_00->field_0135 != (byte *)0x0) {
        FUN_006ae110((byte *)this_00->field_0135);
      }
      if ((byte *)this_00->field_0139 != (byte *)0x0) {
        FUN_006ae110((byte *)this_00->field_0139);
      }
      this_00->field_0135 = 0;
      this_00->field_0139 = 0;
      if ((byte *)this_00->field_012D != (byte *)0x0) {
        FUN_006ae110((byte *)this_00->field_012D);
      }
      if ((byte *)this_00->field_0131 != (byte *)0x0) {
        FUN_006ae110((byte *)this_00->field_0131);
      }
      this_00->field_012D = 0;
      this_00->field_0131 = 0;
      if ((byte *)this_00->field_014D != (byte *)0x0) {
        FUN_006ae110((byte *)this_00->field_014D);
      }
      if ((byte *)this_00->field_0151 != (byte *)0x0) {
        FUN_006ae110((byte *)this_00->field_0151);
      }
      if ((byte *)this_00->field_0155 != (byte *)0x0) {
        FUN_006ae110((byte *)this_00->field_0155);
      }
      if ((byte *)this_00->field_0159 != (byte *)0x0) {
        FUN_006ae110((byte *)this_00->field_0159);
      }
      this_00->field_014D = 0;
      this_00->field_0151 = 0;
      this_00->field_0155 = 0;
      this_00->field_0159 = 0;
      if ((byte *)this_00->field_013D != (byte *)0x0) {
        FUN_006ae110((byte *)this_00->field_013D);
      }
      if ((byte *)this_00->field_0141 != (byte *)0x0) {
        FUN_006ae110((byte *)this_00->field_0141);
      }
      if ((byte *)this_00->field_0145 != (byte *)0x0) {
        FUN_006ae110((byte *)this_00->field_0145);
      }
      if ((byte *)this_00->field_0149 != (byte *)0x0) {
        FUN_006ae110((byte *)this_00->field_0149);
      }
      this_00->field_013D = 0;
      this_00->field_0141 = 0;
      this_00->field_0145 = 0;
      this_00->field_0149 = 0;
      FUN_006ab060((undefined4 *)&this_00->field_0x185);
      FUN_006ab060((undefined4 *)&this_00->field_0x189);
      FUN_006ab060((undefined4 *)&this_00->field_0x18d);
      FUN_006ab060((undefined4 *)&this_00->field_0x191);
      if ((byte *)this_00->field_01A1 != (byte *)0x0) {
        FUN_006ae110((byte *)this_00->field_01A1);
        this_00->field_01A1 = 0;
      }
      if ((byte *)this_00->field_019D != (byte *)0x0) {
        FUN_006ae110((byte *)this_00->field_019D);
        this_00->field_019D = 0;
      }
      FUN_006ab060((undefined4 *)&this_00->field_0x1a5);
      FUN_006ab060((undefined4 *)&this_00->field_0x1a9);
      FUN_006ab060((undefined4 *)&this_00->field_0x1b5);
      FUN_006ab060((undefined4 *)&this_00->field_0x1b9);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (*(byte **)&this_00->field_0x171 != (byte *)0x0) {
      FUN_006ae110(*(byte **)&this_00->field_0x171);
    }
    if (*(byte **)&this_00->field_0x175 != (byte *)0x0) {
      FUN_006ae110(*(byte **)&this_00->field_0x175);
    }
    if (*(byte **)&this_00->field_0x179 != (byte *)0x0) {
      FUN_006ae110(*(byte **)&this_00->field_0x179);
    }
    if (*(byte **)&this_00->field_0x17d != (byte *)0x0) {
      FUN_006ae110(*(byte **)&this_00->field_0x17d);
    }
    if (*(byte **)&this_00->field_0x181 != (byte *)0x0) {
      FUN_006ae110(*(byte **)&this_00->field_0x181);
    }
    *(undefined4 *)&this_00->field_0x171 = 0;
    *(undefined4 *)&this_00->field_0x175 = 0;
    *(undefined4 *)&this_00->field_0x179 = 0;
    *(undefined4 *)&this_00->field_0x17d = 0;
    *(undefined4 *)&this_00->field_0x181 = 0;
    if (*(byte **)&this_00->field_0x15d != (byte *)0x0) {
      FUN_006ae110(*(byte **)&this_00->field_0x15d);
    }
    if (*(byte **)&this_00->field_0x161 != (byte *)0x0) {
      FUN_006ae110(*(byte **)&this_00->field_0x161);
    }
    if (*(byte **)&this_00->field_0x165 != (byte *)0x0) {
      FUN_006ae110(*(byte **)&this_00->field_0x165);
    }
    if (*(byte **)&this_00->field_0x169 != (byte *)0x0) {
      FUN_006ae110(*(byte **)&this_00->field_0x169);
    }
    if (*(byte **)&this_00->field_0x16d != (byte *)0x0) {
      FUN_006ae110(*(byte **)&this_00->field_0x16d);
    }
    *(undefined4 *)&this_00->field_0x15d = 0;
    *(undefined4 *)&this_00->field_0x161 = 0;
    *(undefined4 *)&this_00->field_0x165 = 0;
    *(undefined4 *)&this_00->field_0x169 = 0;
    *(undefined4 *)&this_00->field_0x16d = 0;
    FUN_006ab060((undefined4 *)&this_00->field_0x195);
    FUN_006ab060((undefined4 *)&this_00->field_0x199);
    FUN_006ab060((undefined4 *)&this_00->field_0x1ad);
    FUN_006ab060((undefined4 *)&this_00->field_0x1b1);
    FUN_006ab060((undefined4 *)&this_00->field_0x1bd);
    FUN_006ab060((undefined4 *)&this_00->field_0x1c1);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  iVar4 = this_00->field_0020;
  if ((((iVar4 == 0x14) || (iVar4 == 1000)) || (iVar4 == 0x3e9)) ||
     ((iVar4 == 0x172 || (iVar4 == 0x1a4)))) {
    if (*(int *)&this_00->field_0x21d == 1) {
      *(undefined4 *)&this_00->field_0x221 = 2;
    }
    thunk_FUN_0041f3b0((int *)this_00);
  }
  if (*(uint *)(DAT_00802a38 + 0xe4) % 0xc != 0) {
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (7 < *(uint *)&this_00->field_0024) {
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if ((DAT_00802a38 != 0) && (7 < (byte)(&DAT_008087e9)[*(uint *)&this_00->field_0024 * 0x51])) {
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (7 < DAT_0080874d) {
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if ((DAT_00802a38 != 0) && (7 < (byte)(&DAT_008087e9)[(uint)DAT_0080874d * 0x51])) {
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  local_5 = this_00->field_0024;
  if (DAT_00808a8f == '\0') {
    if (DAT_0080874d == local_5) {
LAB_0041ebc0:
      iVar4 = 0;
    }
    else {
      uVar7 = (uint)DAT_0080874d;
      uVar2 = (uint)local_5;
      cVar1 = *(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar2);
      if ((cVar1 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar2 * 8 + uVar7) == '\0')) {
        iVar4 = -2;
      }
      else if ((cVar1 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar2 * 8 + uVar7) == '\0')) {
        iVar4 = -1;
      }
      else if ((cVar1 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar2 * 8 + uVar7) == '\x01')) {
        iVar4 = 1;
      }
      else {
        if ((cVar1 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar2 * 8 + uVar7) != '\x01'))
        goto LAB_0041ebc0;
        iVar4 = 2;
      }
    }
    bVar9 = iVar4 < 0;
  }
  else {
    bVar9 = (&DAT_008087ea)[(uint)local_5 * 0x51] != (&DAT_008087ea)[(uint)DAT_0080874d * 0x51];
  }
  if (bVar9) goto LAB_0041eccc;
  _local_c = CONCAT31(uStack_b,local_5);
  if (DAT_00808a8f == '\0') {
    if (local_5 == DAT_0080874d) {
LAB_0041ec79:
      iVar4 = 0;
    }
    else {
      uVar2 = (uint)local_5;
      uVar7 = (uint)DAT_0080874d;
      cVar1 = *(char *)((int)&DAT_00808a4f + uVar2 * 8 + uVar7);
      if ((cVar1 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar2) == '\0')) {
        iVar4 = -2;
      }
      else if ((cVar1 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar2) == '\0')) {
        iVar4 = -1;
      }
      else if ((cVar1 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar2) == '\x01')) {
        iVar4 = 1;
      }
      else {
        if ((cVar1 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar2) != '\x01'))
        goto LAB_0041ec79;
        iVar4 = 2;
      }
    }
    bVar9 = iVar4 < 0;
  }
  else {
    bVar9 = (&DAT_008087ea)[(uint)DAT_0080874d * 0x51] != (&DAT_008087ea)[(uint)local_5 * 0x51];
  }
  if (!bVar9) {
    if (*(int *)&this_00->field_0x22d != 0) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    *(undefined4 *)&this_00->field_0x22d = 1;
    FUN_006e97c0((void *)this_00->field_0211,this_00->field_01ED,DAT_008032c0);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
LAB_0041eccc:
  _local_c = CONCAT31(uStack_b,local_5);
  if (*(int *)&this_00->field_0x22d == 0) {
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  *(undefined4 *)&this_00->field_0x22d = 0;
  FUN_006e97c0((void *)this_00->field_0211,this_00->field_01ED,0);
  g_currentExceptionFrame = local_54.previous;
  return 0;
}


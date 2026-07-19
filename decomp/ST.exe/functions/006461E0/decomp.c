
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_volc.cpp
   STVolcanoC::GetMessage */

undefined4 __thiscall STVolcanoC::GetMessage(STVolcanoC *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  STVolcanoC *this_00;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  undefined4 *puVar7;
  void *unaff_EDI;
  undefined4 *puVar8;
  InternalExceptionFrame local_54;
  byte *local_10;
  uint local_c;
  STVolcanoC *local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar5 = ReportDebugMessage(s_E____titans_nick_to_volc_cpp_007d26e4,0x121,0,iVar3,&DAT_007a4ccc,
                               s_STVolcanoC__GetMessage_007d2708);
    if (iVar5 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_nick_to_volc_cpp_007d26e4,0x123);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 4) {
    if (uVar1 == 3) {
      thunk_FUN_006479e0((int)local_8);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (uVar1 == 0) {
      switch(local_8->field_00A9) {
      case 1:
        if (*(uint *)&local_8->field_0xa4 < (uint)DAT_00802a38->field_00E4) {
          *(undefined4 *)&local_8->field_0x9c = DAT_00802a38->field_00E4;
          thunk_FUN_00647370((int)local_8);
          iVar3 = thunk_FUN_00646e00(this_00->field_0065,this_00->field_0069,this_00->field_006D);
          if (iVar3 != 0) {
            this_00->field_00A8 = 1;
          }
          this_00->field_0071 = 0x29;
          *(undefined4 *)&this_00->field_0x75 = 0x2e;
          this_00->field_008A = 10;
          *(undefined4 *)&this_00->field_0x8e = 0xf;
          if (this_00->field_00A8 != '\0') {
            LoadImagVolcano(this_00,0);
          }
          this_00->field_00A9 = 4;
          thunk_FUN_00647a60(this_00,0x4b5);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        break;
      case 2:
        if ((((*(uint *)&local_8->field_0x58 & 1) != 0) && ((uint)DAT_00802a38->field_00E4 % 3 == 0)
            ) && (iVar3 = local_8->field_0071 + 1, local_8->field_0071 = iVar3,
                 *(int *)&local_8->field_0x75 <= iVar3)) {
          local_8->field_0071 = 0;
          *(undefined4 *)&local_8->field_0x75 = 10;
          local_8->field_00A9 = 1;
          uVar1 = local_8->field_00B1 * 0x41c64e6d + 0x3039;
          local_8->field_00B1 = uVar1;
          *(uint *)&local_8->field_0xa4 =
               (uVar1 >> 0x10) % 0x2711 + 20000 + DAT_00802a38->field_00E4;
          if (local_8->field_0x5c == '\0') {
            if (local_8->field_0061 != 0) {
              FUN_006e9000(DAT_00807598,*(undefined4 *)(*(int *)(local_8->field_0061 + 0x21) + 0xa0)
                           ,0x5a,0x2f,(float)local_8->field_0065 * _DAT_007904f8 * _DAT_007904f0,
                           (float)local_8->field_0069 * _DAT_007904f8 * _DAT_007904f0,
                           (float)local_8->field_006D * _DAT_007904f8 * _DAT_007904f0 +
                           _DAT_007904fc,0);
              this_00->field_0x5c = 1;
              thunk_FUN_006479e0((int)this_00);
              g_currentExceptionFrame = local_54.previous;
              return 0;
            }
            puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                               (DAT_00806764,CASE_1D,(byte *)s_expl_vol_007d26b0,0xffffffff,0,1,0,
                                (undefined4 *)0x0);
            this_00->field_0061 = puVar4;
            if (puVar4 != (ushort *)0x0) {
              FUN_006e9000(DAT_00807598,*(undefined4 *)(*(int *)((int)puVar4 + 0x21) + 0xa0),0x5a,
                           0x2f,(float)this_00->field_0065 * _DAT_007904f8 * _DAT_007904f0,
                           (float)this_00->field_0069 * _DAT_007904f8 * _DAT_007904f0,
                           (float)this_00->field_006D * _DAT_007904f8 * _DAT_007904f0 +
                           _DAT_007904fc,0);
              this_00->field_0x5c = 1;
              this_00->field_0061 = 0;
            }
          }
          thunk_FUN_006479e0((int)this_00);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        if (((*(uint *)&local_8->field_0x58 & 2) != 0) && ((uint)DAT_00802a38->field_00E4 % 3 == 0))
        {
          iVar3 = local_8->field_007E + 1;
          local_8->field_007E = iVar3;
          if (*(int *)&local_8->field_0x82 <= iVar3) {
            local_8->field_007E = 0;
            FUN_006eab60(DAT_00807598,local_8->field_007A);
          }
          iVar3 = this_00->field_008A + 1;
          this_00->field_008A = iVar3;
          if (*(int *)&this_00->field_0x8e <= iVar3) {
            this_00->field_008A = 0;
            FUN_006eab60(DAT_00807598,this_00->field_0086);
          }
        }
        if ((((*(byte *)&DAT_00802a38->field_00E4 & 1) == 0) && (2 < (int)this_00->field_0071)) &&
           (((int)this_00->field_0071 < (*(int *)&this_00->field_0x75 << 1) / 3 &&
            (uVar1 = this_00->field_00B1 * 0x41c64e6d + 0x3039, this_00->field_00B1 = uVar1,
            (uVar1 & 0x70000) == 0x10000)))) {
          thunk_FUN_006473e0(this_00,0);
        }
        if (this_00->field_00A8 == '\0') {
          iVar3 = thunk_FUN_00646e00(this_00->field_0065,this_00->field_0069,this_00->field_006D);
          if (iVar3 != 0) {
            this_00->field_00A8 = 1;
            LoadImagVolcano(this_00,2);
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
        }
        else if (this_00->field_00A9 == 2) {
          thunk_FUN_00647960((int)this_00);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        break;
      case 3:
        if (((local_8->field_0x58 & 1) != 0) && ((uint)DAT_00802a38->field_00E4 % 3 == 0)) {
          iVar3 = local_8->field_0071 + 1;
          local_8->field_0071 = iVar3;
          if ((*(int *)&local_8->field_0x75 <= iVar3) &&
             (local_8->field_0071 = 0,
             *(uint *)&local_8->field_0xa4 < (uint)DAT_00802a38->field_00E4)) {
            local_8->field_00A9 = 2;
            thunk_FUN_00647a60(local_8,0x4b6);
            if (this_00->field_00A8 != '\0') {
              LoadImagVolcano(this_00,1);
            }
            this_00->field_0071 = 10;
            *(undefined4 *)&this_00->field_0x75 = 0x29;
            *(uint *)&this_00->field_0x58 = *(uint *)&this_00->field_0x58 | 3;
            this_00->field_007E = 0;
            *(undefined4 *)&this_00->field_0x82 = 0x1f;
          }
          iVar3 = this_00->field_008A + 1;
          this_00->field_008A = iVar3;
          if (*(int *)&this_00->field_0x8e <= iVar3) {
            this_00->field_008A = 0;
          }
        }
        uVar1 = this_00->field_00B1 * 0x41c64e6d + 0x3039;
        this_00->field_00B1 = uVar1;
        if ((uVar1 & 0xf0000) == 0x10000) {
          thunk_FUN_006473e0(this_00,1);
        }
        if (this_00->field_00A8 != '\0') {
          thunk_FUN_00647960((int)this_00);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        iVar3 = thunk_FUN_00646e00(this_00->field_0065,this_00->field_0069,this_00->field_006D);
        if (iVar3 != 0) {
          this_00->field_00A8 = 1;
          LoadImagVolcano(this_00,0);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        break;
      case 4:
        if ((uint)DAT_00802a38->field_00E4 % 5 == 0) {
          iVar3 = local_8->field_0071 + 1;
          local_8->field_0071 = iVar3;
          if (*(int *)&local_8->field_0x75 <= iVar3) {
            uVar1 = local_8->field_00B1 * 0x41c64e6d + 0x3039;
            local_8->field_00B1 = uVar1;
            iVar3 = DAT_00802a38->field_00E4;
            local_8->field_00A9 = 3;
            *(uint *)&local_8->field_0x58 = *(uint *)&local_8->field_0x58 | 1;
            local_8->field_0071 = 0;
            *(undefined4 *)&local_8->field_0x75 = 10;
            local_8->field_008A = 0;
            *(undefined4 *)&local_8->field_0x8e = 10;
            *(uint *)&local_8->field_0xa4 = (uVar1 >> 0x10) % 0x1f5 + 500 + iVar3;
          }
          iVar3 = local_8->field_008A + 1;
          local_8->field_008A = iVar3;
          if (*(int *)&local_8->field_0x8e <= iVar3) {
            local_8->field_008A = 0;
          }
          if (local_8->field_00A8 != '\0') {
            thunk_FUN_00647960((int)local_8);
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
          iVar3 = thunk_FUN_00646e00(local_8->field_0065,local_8->field_0069,local_8->field_006D);
          if (iVar3 != 0) {
            this_00->field_00A8 = 1;
            LoadImagVolcano(this_00,0);
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
        }
        break;
      case 5:
        thunk_FUN_00646d00(local_8);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      case 6:
        local_8->field_00A9 = 1;
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
    }
    else if (uVar1 == 2) {
      puVar7 = *(undefined4 **)(param_1 + 0x14);
      if (puVar7[3] == 2) {
        thunk_FUN_00646db0(local_8,puVar7);
        this_00->field_00B1 = this_00->field_00AD;
        this_00->field_00A8 = 0;
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      puVar8 = (undefined4 *)&local_8->field_0x1c;
      for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      local_8->field_00B1 = DAT_00808754;
      iVar3 = thunk_FUN_006472b0((int)local_8);
      if (iVar3 != 0) {
        uVar1 = this_00->field_00B1 * 0x41c64e6d + 0x3039;
        this_00->field_00B1 = uVar1;
        this_00->field_00A9 = 6;
        *(uint *)&this_00->field_0xa4 = (uVar1 >> 0x10) % 0x2711 + 20000;
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      thunk_FUN_00646d00(this_00);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
  }
  else if (uVar1 == 0x10f) {
    local_10 = (byte *)thunk_FUN_00646d40(local_8,&local_c);
    STPlaySystemC::SaveObjData(DAT_00802a38,this_00->field_0018,local_10,local_c);
    FUN_006ab060(&local_10);
  }
  g_currentExceptionFrame = local_54.previous;
  return 0;
}



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
  STVolcanoC *pSVar8;
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
      switch(*(undefined4 *)(local_8 + 0xa9)) {
      case 1:
        if (*(uint *)(local_8 + 0xa4) < *(uint *)(DAT_00802a38 + 0xe4)) {
          *(uint *)(local_8 + 0x9c) = *(uint *)(DAT_00802a38 + 0xe4);
          thunk_FUN_00647370((int)local_8);
          iVar3 = thunk_FUN_00646e00(*(int *)(this_00 + 0x65),*(int *)(this_00 + 0x69),
                                     *(int *)(this_00 + 0x6d));
          if (iVar3 != 0) {
            this_00[0xa8] = (STVolcanoC)0x1;
          }
          *(undefined4 *)(this_00 + 0x71) = 0x29;
          *(undefined4 *)(this_00 + 0x75) = 0x2e;
          *(undefined4 *)(this_00 + 0x8a) = 10;
          *(undefined4 *)(this_00 + 0x8e) = 0xf;
          if (this_00[0xa8] != (STVolcanoC)0x0) {
            LoadImagVolcano(this_00,0);
          }
          *(undefined4 *)(this_00 + 0xa9) = 4;
          thunk_FUN_00647a60(this_00,0x4b5);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        break;
      case 2:
        if ((((*(uint *)(local_8 + 0x58) & 1) != 0) && (*(uint *)(DAT_00802a38 + 0xe4) % 3 == 0)) &&
           (iVar3 = *(int *)(local_8 + 0x71), *(int *)(local_8 + 0x71) = iVar3 + 1,
           *(int *)(local_8 + 0x75) <= iVar3 + 1)) {
          *(undefined4 *)(local_8 + 0x71) = 0;
          *(undefined4 *)(local_8 + 0x75) = 10;
          *(undefined4 *)(local_8 + 0xa9) = 1;
          uVar1 = *(int *)(local_8 + 0xb1) * 0x41c64e6d + 0x3039;
          *(uint *)(local_8 + 0xb1) = uVar1;
          *(uint *)(local_8 + 0xa4) =
               (uVar1 >> 0x10) % 0x2711 + 20000 + *(int *)(DAT_00802a38 + 0xe4);
          if (local_8[0x5c] == (STVolcanoC)0x0) {
            if (*(int *)(local_8 + 0x61) != 0) {
              FUN_006e9000(DAT_00807598,
                           *(undefined4 *)(*(int *)(*(int *)(local_8 + 0x61) + 0x21) + 0xa0),0x5a,
                           0x2f,(float)*(int *)(local_8 + 0x65) * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)(local_8 + 0x69) * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)(local_8 + 0x6d) * _DAT_007904f8 * _DAT_007904f0 +
                           _DAT_007904fc,0);
              this_00[0x5c] = (STVolcanoC)0x1;
              thunk_FUN_006479e0((int)this_00);
              g_currentExceptionFrame = local_54.previous;
              return 0;
            }
            puVar4 = FUN_00709af0(DAT_00806764,0x1d,(byte *)s_expl_vol_007d26b0,0xffffffff,0,1,0,
                                  (undefined4 *)0x0);
            *(ushort **)(this_00 + 0x61) = puVar4;
            if (puVar4 != (ushort *)0x0) {
              FUN_006e9000(DAT_00807598,*(undefined4 *)(*(int *)((int)puVar4 + 0x21) + 0xa0),0x5a,
                           0x2f,(float)*(int *)(this_00 + 0x65) * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)(this_00 + 0x69) * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)(this_00 + 0x6d) * _DAT_007904f8 * _DAT_007904f0 +
                           _DAT_007904fc,0);
              this_00[0x5c] = (STVolcanoC)0x1;
              *(undefined4 *)(this_00 + 0x61) = 0;
            }
          }
          thunk_FUN_006479e0((int)this_00);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        if (((*(uint *)(local_8 + 0x58) & 2) != 0) && (*(uint *)(DAT_00802a38 + 0xe4) % 3 == 0)) {
          iVar3 = *(int *)(local_8 + 0x7e);
          *(int *)(local_8 + 0x7e) = iVar3 + 1;
          if (*(int *)(local_8 + 0x82) <= iVar3 + 1) {
            *(undefined4 *)(local_8 + 0x7e) = 0;
            FUN_006eab60(DAT_00807598,*(uint *)(local_8 + 0x7a));
          }
          iVar3 = *(int *)(this_00 + 0x8a);
          *(int *)(this_00 + 0x8a) = iVar3 + 1;
          if (*(int *)(this_00 + 0x8e) <= iVar3 + 1) {
            *(undefined4 *)(this_00 + 0x8a) = 0;
            FUN_006eab60(DAT_00807598,*(uint *)(this_00 + 0x86));
          }
        }
        if (((((byte)DAT_00802a38[0xe4] & 1) == 0) && (2 < *(int *)(this_00 + 0x71))) &&
           ((*(int *)(this_00 + 0x71) < (*(int *)(this_00 + 0x75) << 1) / 3 &&
            (uVar1 = *(int *)(this_00 + 0xb1) * 0x41c64e6d + 0x3039,
            *(uint *)(this_00 + 0xb1) = uVar1, (uVar1 & 0x70000) == 0x10000)))) {
          thunk_FUN_006473e0(this_00,0);
        }
        if (this_00[0xa8] == (STVolcanoC)0x0) {
          iVar3 = thunk_FUN_00646e00(*(int *)(this_00 + 0x65),*(int *)(this_00 + 0x69),
                                     *(int *)(this_00 + 0x6d));
          if (iVar3 != 0) {
            this_00[0xa8] = (STVolcanoC)0x1;
            LoadImagVolcano(this_00,2);
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
        }
        else if (*(int *)(this_00 + 0xa9) == 2) {
          thunk_FUN_00647960((int)this_00);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        break;
      case 3:
        if ((((byte)local_8[0x58] & 1) != 0) && (*(uint *)(DAT_00802a38 + 0xe4) % 3 == 0)) {
          iVar3 = *(int *)(local_8 + 0x71);
          *(int *)(local_8 + 0x71) = iVar3 + 1;
          if ((*(int *)(local_8 + 0x75) <= iVar3 + 1) &&
             (*(undefined4 *)(local_8 + 0x71) = 0,
             *(uint *)(local_8 + 0xa4) < *(uint *)(DAT_00802a38 + 0xe4))) {
            *(undefined4 *)(local_8 + 0xa9) = 2;
            thunk_FUN_00647a60(local_8,0x4b6);
            if (this_00[0xa8] != (STVolcanoC)0x0) {
              LoadImagVolcano(this_00,1);
            }
            *(undefined4 *)(this_00 + 0x71) = 10;
            *(undefined4 *)(this_00 + 0x75) = 0x29;
            *(uint *)(this_00 + 0x58) = *(uint *)(this_00 + 0x58) | 3;
            *(undefined4 *)(this_00 + 0x7e) = 0;
            *(undefined4 *)(this_00 + 0x82) = 0x1f;
          }
          iVar3 = *(int *)(this_00 + 0x8a);
          *(int *)(this_00 + 0x8a) = iVar3 + 1;
          if (*(int *)(this_00 + 0x8e) <= iVar3 + 1) {
            *(undefined4 *)(this_00 + 0x8a) = 0;
          }
        }
        uVar1 = *(int *)(this_00 + 0xb1) * 0x41c64e6d + 0x3039;
        *(uint *)(this_00 + 0xb1) = uVar1;
        if ((uVar1 & 0xf0000) == 0x10000) {
          thunk_FUN_006473e0(this_00,1);
        }
        if (this_00[0xa8] != (STVolcanoC)0x0) {
          thunk_FUN_00647960((int)this_00);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        iVar3 = thunk_FUN_00646e00(*(int *)(this_00 + 0x65),*(int *)(this_00 + 0x69),
                                   *(int *)(this_00 + 0x6d));
        if (iVar3 != 0) {
          this_00[0xa8] = (STVolcanoC)0x1;
          LoadImagVolcano(this_00,0);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        break;
      case 4:
        if (*(uint *)(DAT_00802a38 + 0xe4) % 5 == 0) {
          iVar3 = *(int *)(local_8 + 0x71);
          *(int *)(local_8 + 0x71) = iVar3 + 1;
          if (*(int *)(local_8 + 0x75) <= iVar3 + 1) {
            uVar1 = *(int *)(local_8 + 0xb1) * 0x41c64e6d + 0x3039;
            *(uint *)(local_8 + 0xb1) = uVar1;
            iVar3 = *(int *)(DAT_00802a38 + 0xe4);
            *(undefined4 *)(local_8 + 0xa9) = 3;
            *(uint *)(local_8 + 0x58) = *(uint *)(local_8 + 0x58) | 1;
            *(undefined4 *)(local_8 + 0x71) = 0;
            *(undefined4 *)(local_8 + 0x75) = 10;
            *(undefined4 *)(local_8 + 0x8a) = 0;
            *(undefined4 *)(local_8 + 0x8e) = 10;
            *(uint *)(local_8 + 0xa4) = (uVar1 >> 0x10) % 0x1f5 + 500 + iVar3;
          }
          iVar3 = *(int *)(local_8 + 0x8a);
          *(int *)(local_8 + 0x8a) = iVar3 + 1;
          if (*(int *)(local_8 + 0x8e) <= iVar3 + 1) {
            *(undefined4 *)(local_8 + 0x8a) = 0;
          }
          if (local_8[0xa8] != (STVolcanoC)0x0) {
            thunk_FUN_00647960((int)local_8);
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
          iVar3 = thunk_FUN_00646e00(*(int *)(local_8 + 0x65),*(int *)(local_8 + 0x69),
                                     *(int *)(local_8 + 0x6d));
          if (iVar3 != 0) {
            this_00[0xa8] = (STVolcanoC)0x1;
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
        *(undefined4 *)(local_8 + 0xa9) = 1;
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
    }
    else if (uVar1 == 2) {
      puVar7 = *(undefined4 **)(param_1 + 0x14);
      if (puVar7[3] == 2) {
        thunk_FUN_00646db0(local_8,puVar7);
        *(undefined4 *)(this_00 + 0xb1) = *(undefined4 *)(this_00 + 0xad);
        this_00[0xa8] = (STVolcanoC)0x0;
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      pSVar8 = local_8 + 0x1c;
      for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pSVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        pSVar8 = pSVar8 + 4;
      }
      *(undefined4 *)(local_8 + 0xb1) = DAT_00808754;
      iVar3 = thunk_FUN_006472b0((int)local_8);
      if (iVar3 != 0) {
        uVar1 = *(int *)(this_00 + 0xb1) * 0x41c64e6d + 0x3039;
        *(uint *)(this_00 + 0xb1) = uVar1;
        *(undefined4 *)(this_00 + 0xa9) = 6;
        *(uint *)(this_00 + 0xa4) = (uVar1 >> 0x10) % 0x2711 + 20000;
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
    STPlaySystemC::SaveObjData(DAT_00802a38,*(undefined4 *)(this_00 + 0x18),local_10,local_c);
    FUN_006ab060(&local_10);
  }
  g_currentExceptionFrame = local_54.previous;
  return 0;
}


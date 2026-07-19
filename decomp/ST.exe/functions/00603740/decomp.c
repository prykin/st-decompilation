
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Expl.cpp
   STExplosion::GetMessage */

undefined4 __thiscall STExplosion::GetMessage(STExplosion *this,int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  code *pcVar3;
  short sVar4;
  STExplosion *this_00;
  STExplosion *this_01;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 unaff_ESI;
  undefined4 *puVar9;
  void *unaff_EDI;
  undefined4 *puVar10;
  byte **ppbVar11;
  InternalExceptionFrame local_54;
  STExplosion *local_10;
  byte *local_c;
  uint local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar7 = ReportDebugMessage(s_E____titans_nick_to_Expl_cpp_007cf630,0x1bb,0,iVar5,&DAT_007a4ccc,
                               s_STExplosion__GetMessage_007cf654);
    if (iVar7 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_nick_to_Expl_cpp_007cf630,0x1bd);
      return 0xffff;
    }
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return uVar8;
  }
  iVar5 = STGameObjC::GetMessage((STGameObjC *)local_10,param_1);
  this_01 = local_10;
  if (iVar5 == 0xffff) {
    return 0xffff;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 < 0x110) {
    if (uVar2 != 0x10f) {
      if (uVar2 == 0) {
        if (0 < (int)this_00->field_02B7) {
          iVar5 = (DAT_00802a38->field_00E4 - this_00->field_026E) + this_00->field_02B7;
          if ((iVar5 == 0xf) && (this_00->field_026D != '\0')) {
            if (this_00->field_02BB == 0) {
              puVar6 = thunk_FUN_00636200();
              this_00->field_02BB = puVar6;
              if (puVar6 != (undefined4 *)0x0) {
                thunk_FUN_00636260(puVar6,*(uint *)&this_00->field_0x1f1,
                                   *(int *)&this_00->field_0x1f5,
                                   *(int *)&this_00->field_0x1f9 + -0x28,0x96,0x1e,5,0);
              }
            }
          }
          else if ((0xf < iVar5) &&
                  (((int *)this_00->field_02BB != (int *)0x0 &&
                   (iVar5 = thunk_FUN_006372e0((int *)this_00->field_02BB), iVar5 != 0)))) {
            thunk_FUN_006366d0(this_00->field_02BB);
            Library::MSVCRT::FUN_0072e2b0((undefined4 *)this_00->field_02BB);
            this_00->field_02B7 = 0xffffffff;
            this_00->field_02BB = 0;
          }
        }
        if (this_00->field_026D == '\0') {
          iVar5 = thunk_FUN_00604350((int)this_00);
          if (iVar5 != 0) {
            thunk_FUN_00604820((int)this_00);
            this_00->field_026D = 1;
          }
        }
        else {
          thunk_FUN_006057c0(this_00);
        }
        thunk_FUN_006048e0(this_00);
        iVar5 = thunk_FUN_006042d0(this_00,0);
        if (iVar5 != 0) {
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        thunk_FUN_00604160(this_00);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (uVar2 == 2) {
        uVar2 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
        *(uint *)&this_00->field_0x1c = uVar2;
        _DAT_00811790 = (uVar2 >> 0x10) % 0x33;
        puVar6 = *(undefined4 **)(param_1 + 0x14);
        if (puVar6[3] == 0) {
          puVar9 = puVar6;
          puVar10 = (undefined4 *)&this_00->field_0x1d5;
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          thunk_FUN_00605130((int)local_10);
          puVar1 = &this_01->field_0x272;
          iVar5 = thunk_FUN_00604350((int)this_01);
          if (iVar5 != 0) {
            this_01->field_026D = 1;
          }
          switch(puVar6[6]) {
          case 0:
            iVar5 = puVar6[7];
            sVar4 = (short)(iVar5 >> 0x1f);
            if (iVar5 < 0) {
              iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar4) -
                             (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar4) -
                                  (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
            }
            *(int *)puVar1 = iVar5 + -2;
            *(undefined4 *)&this_01->field_0x27a = 5;
            iVar5 = puVar6[8];
            if (iVar5 < 0) {
              iVar5 = (short)(iVar5 / 0xc9) + -1;
            }
            else {
              iVar5 = (int)(short)(iVar5 / 0xc9);
            }
            *(int *)&this_01->field_0x276 = iVar5 + -2;
            *(undefined4 *)&this_01->field_0x27e = 5;
            iVar5 = thunk_FUN_00606050(this_01,puVar6[7],puVar6[8],puVar6[9],puVar6[10],
                                       (uint *)puVar6[0xd],puVar6[0xe],puVar6[0xf],puVar6[0xc],
                                       this_01->field_026D);
            this_01->field_0269 = iVar5;
            g_currentExceptionFrame = local_54.previous;
            return 0;
          case 1:
            iVar5 = puVar6[7];
            sVar4 = (short)(iVar5 >> 0x1f);
            if (iVar5 < 0) {
              iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar4) -
                             (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar4) -
                                  (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
            }
            break;
          case 2:
            iVar5 = puVar6[7];
            sVar4 = (short)(iVar5 >> 0x1f);
            if (iVar5 < 0) {
              iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar4) -
                             (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar4) -
                                  (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
            }
            *(int *)puVar1 = iVar5 + -2;
            *(undefined4 *)&this_01->field_0x27a = 5;
            iVar5 = puVar6[8];
            if (iVar5 < 0) {
              iVar5 = (short)(iVar5 / 0xc9) + -1;
            }
            else {
              iVar5 = (int)(short)(iVar5 / 0xc9);
            }
            *(int *)&this_01->field_0x276 = iVar5 + -2;
            *(undefined4 *)&this_01->field_0x27e = 5;
            iVar5 = thunk_FUN_00607a60(this_01,puVar6[7],puVar6[8],puVar6[9]);
            this_01->field_0269 = iVar5;
            g_currentExceptionFrame = local_54.previous;
            return 0;
          case 3:
            iVar5 = puVar6[7];
            sVar4 = (short)(iVar5 >> 0x1f);
            if (iVar5 < 0) {
              iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar4) -
                             (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar4) -
                                  (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
            }
            *(int *)puVar1 = iVar5 + -2;
            *(undefined4 *)&this_01->field_0x27a = 5;
            iVar5 = puVar6[8];
            if (iVar5 < 0) {
              iVar5 = (short)(iVar5 / 0xc9) + -1;
            }
            else {
              iVar5 = (int)(short)(iVar5 / 0xc9);
            }
            *(int *)&this_01->field_0x276 = iVar5 + -2;
            *(undefined4 *)&this_01->field_0x27e = 5;
            iVar5 = thunk_FUN_00605b60(this_01,puVar6[7],puVar6[8],(int *)puVar6[9],puVar6[10]);
            this_01->field_0269 = iVar5;
            g_currentExceptionFrame = local_54.previous;
            return 0;
          case 4:
            iVar5 = puVar6[7];
            sVar4 = (short)(iVar5 >> 0x1f);
            if (iVar5 < 0) {
              iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar4) -
                             (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar4) -
                                  (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
            }
            *(int *)puVar1 = iVar5 + -2;
            *(undefined4 *)&this_01->field_0x27a = 5;
            iVar5 = puVar6[8];
            if (iVar5 < 0) {
              iVar5 = (short)(iVar5 / 0xc9) + -1;
            }
            else {
              iVar5 = (int)(short)(iVar5 / 0xc9);
            }
            *(int *)&this_01->field_0x276 = iVar5 + -2;
            *(undefined4 *)&this_01->field_0x27e = 5;
            iVar5 = thunk_FUN_00608b50(this_01,puVar6[7],(uint *)puVar6[8],puVar6[9],puVar6[10],
                                       puVar6[0xd],puVar6[0xe],puVar6[0xf],0,this_01->field_026D);
            this_01->field_0269 = iVar5;
            g_currentExceptionFrame = local_54.previous;
            return 0;
          default:
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
          *(int *)puVar1 = iVar5 + -2;
          *(undefined4 *)&this_01->field_0x27a = 5;
          iVar5 = puVar6[8];
          if (iVar5 < 0) {
            iVar5 = (short)(iVar5 / 0xc9) + -1;
          }
          else {
            iVar5 = (int)(short)(iVar5 / 0xc9);
          }
          *(int *)&this_01->field_0x276 = iVar5 + -2;
          *(undefined4 *)&this_01->field_0x27e = 5;
          iVar5 = thunk_FUN_00607200(this_01,puVar6[7],puVar6[8],puVar6[9],puVar6[10]);
          this_01->field_0269 = iVar5;
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        thunk_FUN_00604fc0(this_00,puVar6);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (uVar2 != 3) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      thunk_FUN_00604970(this_00);
      if (this_00->field_026D != '\0') {
        thunk_FUN_00605780((int)this_00);
      }
      if (this_00->field_02BB != 0) {
        thunk_FUN_006366d0(this_00->field_02BB);
        Library::MSVCRT::FUN_0072e2b0((undefined4 *)this_00->field_02BB);
        this_00->field_02BB = 0;
      }
      thunk_FUN_00604120((int)this_00);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    local_c = (byte *)STExplosionC::SaveObj((STExplosionC *)this_00,&local_8);
    if (local_c == (byte *)0x0) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    STPlaySystemC::SaveObjData(DAT_00802a38,*(undefined4 *)&this_00->field_0x18,local_c,local_8);
    ppbVar11 = &local_c;
  }
  else {
    if (uVar2 != 0x111) {
      if (uVar2 == 0x112) {
        thunk_FUN_006042d0(this_00,0x112);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (uVar2 != 0x113) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      thunk_FUN_006042d0(this_00,0x113);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    ppbVar11 = (byte **)&this_00->field_02B3;
    if ((int *)this_00->field_02B3 == (int *)0x0) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    thunk_FUN_00604ee0(this_00,(int *)this_00->field_02B3);
  }
  FUN_006ab060(ppbVar11);
  g_currentExceptionFrame = local_54.previous;
  return 0;
}


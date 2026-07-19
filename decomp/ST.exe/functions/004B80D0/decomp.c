
int FUN_004b80d0(int param_1,int param_2)

{
  STT3DSprC *this;
  short sVar1;
  code *pcVar2;
  bool bVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  int *local_c;
  int local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar5 = __setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar8 = ReportDebugMessage(s_E____titans_Artem_TLO_base_cpp_007ac820,0xe1,0,iVar5,
                               s_TLOBaseTy__SetState_error__state_007ac7f0,param_1);
    if (iVar8 != 0) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    RaiseInternalException(iVar5,0,s_E____titans_Artem_TLO_base_cpp_007ac820,0xe2);
    return iVar5;
  }
  if ((param_2 == 0) || (iVar5 = thunk_FUN_004b7f90(local_c,param_1), iVar5 != 0)) {
    *(undefined4 *)((int)local_c + 0x249) = 0xffffffff;
    *(undefined4 *)((int)local_c + 0x24d) = *(undefined4 *)((int)local_c + 0x245);
    *(int *)((int)local_c + 0x245) = param_1;
    if (((param_1 == 0) || (param_1 == 5)) || (param_1 == 6)) {
      thunk_FUN_004cc7f0((int)local_c);
    }
    else {
      thunk_FUN_004cc810((int)local_c);
    }
    thunk_FUN_004c9770(local_c);
    if (*(int *)(&DAT_00791a10 + *(int *)((int)local_c + 0x235) * 4) != 0) {
      thunk_FUN_004cbc10();
    }
    if (param_2 != 0) {
      iVar5 = *(int *)((int)local_c + 0x245);
      if (iVar5 == 1) {
        uVar6 = thunk_FUN_004406c0(*(char *)((int)local_c + 0x23d));
        if (*(int *)(&DAT_007955d0 + ((uVar6 & 0xff) + *(int *)((int)local_c + 0x235) * 3) * 4) != 0
           ) {
          iVar5 = *local_c;
          uVar6 = thunk_FUN_004406c0(*(char *)((int)local_c + 0x23d));
          (**(code **)(iVar5 + 0x90))
                    (3,*(undefined4 *)
                        (&DAT_007955d0 + ((uVar6 & 0xff) + *(int *)((int)local_c + 0x235) * 3) * 4))
          ;
        }
      }
      else if (iVar5 == 2) {
        (**(code **)(*local_c + 0x90))
                  (3,*(undefined4 *)(&DAT_007958ec + *(int *)((int)local_c + 0x235) * 4));
      }
      else if (iVar5 == 3) {
        (**(code **)(*local_c + 0x90))
                  (3,*(undefined4 *)(&DAT_007959f4 + *(int *)((int)local_c + 0x235) * 4));
      }
    }
    switch(*(undefined4 *)((int)local_c + 0x245)) {
    case 0:
      if (*(int *)(&DAT_00792778 + *(int *)((int)local_c + 0x235) * 4) != 0) {
        *(undefined4 *)((int)local_c + 0x275) = 1;
        *(undefined4 *)((int)local_c + 0x2b5) = *(undefined4 *)(DAT_00802a38 + 0xe4);
        if (*(int *)((int)local_c + 0x361) == 0) {
          *(undefined4 *)((int)local_c + 0x261) = 1;
        }
      }
      sVar4 = (short)local_c[0x16c];
      sVar1 = (short)local_c[0x16e];
      sVar9 = (short)local_c[0x16d];
      if (((((sVar4 < 0) || (DAT_007fb240 <= sVar4)) || (sVar9 < 0)) ||
          ((DAT_007fb242 <= sVar9 || (sVar1 < 0)))) || (DAT_007fb244 <= sVar1)) {
        sVar4 = -1;
      }
      else {
        sVar4 = *(short *)(DAT_007fb280 +
                          ((int)DAT_007fb278 * (int)sVar9 + (int)DAT_007fb27e * (int)sVar1 +
                          (int)sVar4) * 2);
      }
      if (sVar4 == 0) {
        local_8 = local_c[0x16d];
        iVar5 = 2 - (uint)(*(int *)(&DAT_00791e30 + *(int *)((int)local_c + 0x235) * 4) != 1);
        if (local_8 < local_8 + iVar5) {
          do {
            iVar8 = local_c[0x16c];
            if (iVar8 < iVar8 + iVar5) {
              do {
                iVar7 = thunk_FUN_004960d0((short)iVar8,(short)local_8,(short)local_c[0x16e]);
                if (iVar7 != 0) {
                  RaiseInternalException
                            (-5,DAT_007ed77c,s_E____titans_Artem_TLO_base_cpp_007ac820,0x6a);
                }
                iVar8 = iVar8 + 1;
              } while (iVar8 < iVar5 + local_c[0x16c]);
            }
            local_8 = local_8 + 1;
          } while (local_8 < local_c[0x16d] + iVar5);
        }
        *(undefined4 *)((int)local_c + 0x251) = 1;
      }
      break;
    case 1:
      iVar5 = (**(code **)(*local_c + 8))();
      if (iVar5 != 0) {
        (**(code **)(*local_c + 0xe8))(0);
      }
      sVar4 = (short)local_c[0x16c];
      sVar1 = (short)local_c[0x16e];
      sVar9 = (short)local_c[0x16d];
      if (((sVar4 < 0) || (DAT_007fb240 <= sVar4)) ||
         (((sVar9 < 0 || ((DAT_007fb242 <= sVar9 || (sVar1 < 0)))) || (DAT_007fb244 <= sVar1)))) {
        sVar4 = -1;
      }
      else {
        sVar4 = *(short *)(DAT_007fb280 +
                          ((int)DAT_007fb278 * (int)sVar9 + (int)DAT_007fb27e * (int)sVar1 +
                          (int)sVar4) * 2);
      }
      if (sVar4 != 0) {
        local_8 = local_c[0x16d];
        iVar5 = 2 - (uint)(*(int *)(&DAT_00791e30 + *(int *)((int)local_c + 0x235) * 4) != 1);
        if (local_8 < local_8 + iVar5) {
          do {
            iVar8 = local_c[0x16c];
            if (iVar8 < iVar8 + iVar5) {
              do {
                iVar7 = thunk_FUN_00496140((short)iVar8,(short)local_8,(short)local_c[0x16e]);
                if (iVar7 != 0) {
                  RaiseInternalException
                            (-5,DAT_007ed77c,s_E____titans_Artem_TLO_base_cpp_007ac820,0x87);
                }
                iVar8 = iVar8 + 1;
              } while (iVar8 < iVar5 + local_c[0x16c]);
            }
            local_8 = local_8 + 1;
          } while (local_8 < local_c[0x16d] + iVar5);
        }
        *(undefined4 *)((int)local_c + 0x251) = 0;
      }
      iVar5 = local_c[0x16b];
      if (iVar5 - 0x32U < 0x42) {
        switch(iVar5) {
        case 0x32:
        case 0x40:
        case 0x49:
        case 0x5c:
          thunk_FUN_004ce720((int)local_c);
          break;
        case 0x34:
        case 0x5b:
          thunk_FUN_004de000((int)local_c);
          break;
        case 0x37:
        case 0x6c:
          thunk_FUN_004e8f90((int)local_c);
          break;
        case 0x38:
        case 0x39:
        case 0x3b:
        case 0x4f:
        case 0x52:
        case 0x5e:
        case 0x5f:
        case 0x60:
        case 0x61:
          thunk_FUN_004e03e0((int)local_c);
          break;
        case 0x41:
          thunk_FUN_004e4070();
          break;
        case 0x48:
          thunk_FUN_004df8f0();
          break;
        case 0x4c:
          thunk_FUN_004dc700((int)local_c);
          break;
        case 0x50:
          thunk_FUN_004b6d70((int)local_c,(uint)*(byte *)((int)&PTR_caseD_50_004b88dc + iVar5 + 2));
          break;
        case 0x53:
          thunk_FUN_004cd6f0((int)local_c);
          break;
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5a:
          thunk_FUN_004ce670((int)local_c);
        case 0x35:
          thunk_FUN_004e2ab0((int)local_c);
          break;
        case 99:
          thunk_FUN_004b7a80();
          break;
        case 100:
          thunk_FUN_004e48d0();
          break;
        case 0x68:
          thunk_FUN_004dc220();
          break;
        case 0x69:
          thunk_FUN_004dcc80((int)local_c);
          break;
        case 0x6a:
          thunk_FUN_004c5e60((int)local_c);
          break;
        case 0x6d:
          thunk_FUN_004dba70((int)local_c);
          break;
        case 0x6e:
          thunk_FUN_004dd690((int)local_c);
          break;
        case 0x6f:
        case 0x73:
          thunk_FUN_004eccc0(local_c);
          break;
        case 0x70:
          thunk_FUN_004d8d40((int)local_c);
        }
      }
      if (*(int *)(&DAT_00794d94 + *(int *)((int)local_c + 0x235) * 4) != 0) {
        thunk_FUN_004c3000((int)local_c);
      }
      thunk_FUN_004e9c20(local_c);
      thunk_FUN_004dc150(local_c);
      this = (STT3DSprC *)((int)local_c + 0x1d5);
      STT3DSprC::StopShow(this,0xf);
      STT3DSprC::StopShow(this,0);
      STT3DSprC::StopShow(this,1);
    default:
      if (*(int *)(&DAT_00792778 + *(int *)((int)local_c + 0x235) * 4) != 0) {
        *(undefined4 *)((int)local_c + 0x275) = 0;
        *(undefined4 *)((int)local_c + 0x261) = 0;
      }
      break;
    case 4:
      sVar4 = (short)local_c[0x16c];
      sVar1 = (short)local_c[0x16e];
      sVar9 = (short)local_c[0x16d];
      if (((sVar4 < 0) || (DAT_007fb240 <= sVar4)) ||
         ((sVar9 < 0 || (((DAT_007fb242 <= sVar9 || (sVar1 < 0)) || (DAT_007fb244 <= sVar1)))))) {
        sVar9 = -1;
      }
      else {
        sVar9 = *(short *)(DAT_007fb280 +
                          ((int)DAT_007fb278 * (int)sVar9 + (int)DAT_007fb27e * (int)sVar1 +
                          (int)sVar4) * 2);
      }
      if (sVar9 != 0) {
        iVar5 = thunk_FUN_00496140(sVar4,(short)local_c[0x16d],sVar1);
        if (iVar5 != 0) {
          RaiseInternalException(-5,DAT_007ed77c,s_E____titans_Artem_TLO_base_cpp_007ac820,0x73);
        }
        *(undefined4 *)((int)local_c + 0x251) = 0;
      }
      if (*(int *)(&DAT_00792778 + *(int *)((int)local_c + 0x235) * 4) != 0) {
        *(undefined4 *)((int)local_c + 0x275) = 0;
        *(undefined4 *)((int)local_c + 0x261) = 0;
      }
      break;
    case 6:
      local_c[0x116] = 0xfe;
    }
    switch(local_c[0x16b]) {
    case 0x36:
    case 0x3d:
    case 0x5d:
      thunk_FUN_004e4b60(local_c);
      break;
    case 0x45:
      thunk_FUN_004ea7e0((int)local_c);
      break;
    case 0x4e:
      thunk_FUN_004d9bd0((int)local_c);
      break;
    case 0x68:
      thunk_FUN_004dc470((int)local_c);
      break;
    case 0x6a:
      thunk_FUN_004c6070(local_c);
      break;
    case 0x70:
      thunk_FUN_004d8db0((int)local_c);
      break;
    case 0x72:
      thunk_FUN_004ecdf0((int)local_c);
    }
    if (*(int *)(&DAT_00794d94 + *(int *)((int)local_c + 0x235) * 4) != 0) {
      thunk_FUN_004c2e60((int)local_c);
    }
    thunk_FUN_004ea6c0((int)local_c);
    thunk_FUN_004cabb0(1);
  }
  else {
    iVar5 = local_c[0x11b];
    if ((iVar5 == 0) || ((iVar5 == 1 || (iVar5 == 2)))) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      if (((*(int *)((int)local_c + 0x245) == 5) && (param_1 == 2)) &&
         (iVar5 = thunk_FUN_004b7f90(local_c,0), iVar5 != 0)) {
        thunk_FUN_004b80d0(0,1);
      }
      iVar5 = *(int *)((int)local_c + 0x245);
      if ((iVar5 == 4) && (param_1 == 3)) {
        *(undefined4 *)((int)local_c + 0x249) = 0xffffffff;
      }
      else {
        *(int *)((int)local_c + 0x249) = param_1;
      }
      if (((*(int *)((int)local_c + 0x255) != 0) && (iVar5 == 0)) &&
         ((*(int *)((int)local_c + 0x249) == 2 &&
          (*(int *)(&DAT_00792778 + *(int *)((int)local_c + 0x235) * 4) != 0)))) {
        *(undefined4 *)((int)local_c + 0x275) = 0;
      }
      if (((iVar5 == 4) && (local_c[0xf7] != 0)) &&
         (iVar5 = thunk_FUN_004ea620((int)local_c), iVar5 != 0)) {
        local_c[0xff] = 1;
        local_c[0x100] = 0;
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return 0;
}


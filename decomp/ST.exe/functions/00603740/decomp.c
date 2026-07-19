
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Expl.cpp
   STExplosion::GetMessage */

undefined4 __thiscall STExplosion::GetMessage(STExplosion *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  short sVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 unaff_ESI;
  undefined4 *puVar8;
  void *unaff_EDI;
  STGameObjC *pSVar9;
  STGameObjC *pSVar10;
  InternalExceptionFrame local_54;
  STGameObjC *local_10;
  byte *local_c;
  uint local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = (STGameObjC *)this;
  iVar4 = __setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar9 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar6 = ReportDebugMessage(s_E____titans_nick_to_Expl_cpp_007cf630,0x1bb,0,iVar4,&DAT_007a4ccc,
                               s_STExplosion__GetMessage_007cf654);
    if (iVar6 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_nick_to_Expl_cpp_007cf630,0x1bd);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return uVar7;
  }
  iVar4 = STGameObjC::GetMessage(local_10,param_1);
  pSVar10 = local_10;
  if (iVar4 == 0xffff) {
    return 0xffff;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 0x110) {
    if (uVar1 != 0x10f) {
      if (uVar1 == 0) {
        if (0 < *(int *)(pSVar9 + 0x2b7)) {
          iVar4 = (*(int *)(DAT_00802a38 + 0xe4) - *(int *)(pSVar9 + 0x26e)) +
                  *(int *)(pSVar9 + 0x2b7);
          if ((iVar4 == 0xf) && (pSVar9[0x26d] != (STGameObjC)0x0)) {
            if (*(int *)(pSVar9 + 699) == 0) {
              puVar5 = thunk_FUN_00636200();
              *(undefined4 **)(pSVar9 + 699) = puVar5;
              if (puVar5 != (undefined4 *)0x0) {
                thunk_FUN_00636260(puVar5,*(uint *)(pSVar9 + 0x1f1),*(int *)(pSVar9 + 0x1f5),
                                   *(int *)(pSVar9 + 0x1f9) + -0x28,0x96,0x1e,5,0);
              }
            }
          }
          else if ((0xf < iVar4) &&
                  ((*(int **)(pSVar9 + 699) != (int *)0x0 &&
                   (iVar4 = thunk_FUN_006372e0(*(int **)(pSVar9 + 699)), iVar4 != 0)))) {
            thunk_FUN_006366d0(*(int *)(pSVar9 + 699));
            FUN_0072e2b0(*(undefined4 **)(pSVar9 + 699));
            *(undefined4 *)(pSVar9 + 0x2b7) = 0xffffffff;
            *(undefined4 *)(pSVar9 + 699) = 0;
          }
        }
        if (pSVar9[0x26d] == (STGameObjC)0x0) {
          iVar4 = thunk_FUN_00604350((int)pSVar9);
          if (iVar4 != 0) {
            thunk_FUN_00604820((int)pSVar9);
            pSVar9[0x26d] = (STGameObjC)0x1;
          }
        }
        else {
          thunk_FUN_006057c0(pSVar9);
        }
        thunk_FUN_006048e0(pSVar9);
        iVar4 = thunk_FUN_006042d0(pSVar9,0);
        if (iVar4 != 0) {
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        thunk_FUN_00604160(pSVar9);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (uVar1 == 2) {
        uVar1 = *(int *)(pSVar9 + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)(pSVar9 + 0x1c) = uVar1;
        _DAT_00811790 = (uVar1 >> 0x10) % 0x33;
        puVar5 = *(undefined4 **)(param_1 + 0x14);
        if (puVar5[3] == 0) {
          puVar8 = puVar5;
          pSVar9 = pSVar9 + 0x1d5;
          for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *(undefined4 *)pSVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            pSVar9 = pSVar9 + 4;
          }
          thunk_FUN_00605130((int)local_10);
          pSVar9 = pSVar10 + 0x272;
          iVar4 = thunk_FUN_00604350((int)pSVar10);
          if (iVar4 != 0) {
            pSVar10[0x26d] = (STGameObjC)0x1;
          }
          switch(puVar5[6]) {
          case 0:
            iVar4 = puVar5[7];
            sVar3 = (short)(iVar4 >> 0x1f);
            if (iVar4 < 0) {
              iVar4 = (short)(((short)(iVar4 / 0xc9) + sVar3) -
                             (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar4 = (int)(short)(((short)(iVar4 / 0xc9) + sVar3) -
                                  (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
            }
            *(int *)pSVar9 = iVar4 + -2;
            *(undefined4 *)(pSVar10 + 0x27a) = 5;
            iVar4 = puVar5[8];
            if (iVar4 < 0) {
              iVar4 = (short)(iVar4 / 0xc9) + -1;
            }
            else {
              iVar4 = (int)(short)(iVar4 / 0xc9);
            }
            *(int *)(pSVar10 + 0x276) = iVar4 + -2;
            *(undefined4 *)(pSVar10 + 0x27e) = 5;
            iVar4 = thunk_FUN_00606050(pSVar10,puVar5[7],puVar5[8],puVar5[9],puVar5[10],
                                       (uint *)puVar5[0xd],puVar5[0xe],puVar5[0xf],puVar5[0xc],
                                       pSVar10[0x26d]);
            *(int *)(pSVar10 + 0x269) = iVar4;
            g_currentExceptionFrame = local_54.previous;
            return 0;
          case 1:
            iVar4 = puVar5[7];
            sVar3 = (short)(iVar4 >> 0x1f);
            if (iVar4 < 0) {
              iVar4 = (short)(((short)(iVar4 / 0xc9) + sVar3) -
                             (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar4 = (int)(short)(((short)(iVar4 / 0xc9) + sVar3) -
                                  (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
            }
            break;
          case 2:
            iVar4 = puVar5[7];
            sVar3 = (short)(iVar4 >> 0x1f);
            if (iVar4 < 0) {
              iVar4 = (short)(((short)(iVar4 / 0xc9) + sVar3) -
                             (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar4 = (int)(short)(((short)(iVar4 / 0xc9) + sVar3) -
                                  (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
            }
            *(int *)pSVar9 = iVar4 + -2;
            *(undefined4 *)(pSVar10 + 0x27a) = 5;
            iVar4 = puVar5[8];
            if (iVar4 < 0) {
              iVar4 = (short)(iVar4 / 0xc9) + -1;
            }
            else {
              iVar4 = (int)(short)(iVar4 / 0xc9);
            }
            *(int *)(pSVar10 + 0x276) = iVar4 + -2;
            *(undefined4 *)(pSVar10 + 0x27e) = 5;
            iVar4 = thunk_FUN_00607a60(pSVar10,puVar5[7],puVar5[8],puVar5[9]);
            *(int *)(pSVar10 + 0x269) = iVar4;
            g_currentExceptionFrame = local_54.previous;
            return 0;
          case 3:
            iVar4 = puVar5[7];
            sVar3 = (short)(iVar4 >> 0x1f);
            if (iVar4 < 0) {
              iVar4 = (short)(((short)(iVar4 / 0xc9) + sVar3) -
                             (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar4 = (int)(short)(((short)(iVar4 / 0xc9) + sVar3) -
                                  (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
            }
            *(int *)pSVar9 = iVar4 + -2;
            *(undefined4 *)(pSVar10 + 0x27a) = 5;
            iVar4 = puVar5[8];
            if (iVar4 < 0) {
              iVar4 = (short)(iVar4 / 0xc9) + -1;
            }
            else {
              iVar4 = (int)(short)(iVar4 / 0xc9);
            }
            *(int *)(pSVar10 + 0x276) = iVar4 + -2;
            *(undefined4 *)(pSVar10 + 0x27e) = 5;
            iVar4 = thunk_FUN_00605b60(pSVar10,puVar5[7],puVar5[8],(int *)puVar5[9],puVar5[10]);
            *(int *)(pSVar10 + 0x269) = iVar4;
            g_currentExceptionFrame = local_54.previous;
            return 0;
          case 4:
            iVar4 = puVar5[7];
            sVar3 = (short)(iVar4 >> 0x1f);
            if (iVar4 < 0) {
              iVar4 = (short)(((short)(iVar4 / 0xc9) + sVar3) -
                             (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar4 = (int)(short)(((short)(iVar4 / 0xc9) + sVar3) -
                                  (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
            }
            *(int *)pSVar9 = iVar4 + -2;
            *(undefined4 *)(pSVar10 + 0x27a) = 5;
            iVar4 = puVar5[8];
            if (iVar4 < 0) {
              iVar4 = (short)(iVar4 / 0xc9) + -1;
            }
            else {
              iVar4 = (int)(short)(iVar4 / 0xc9);
            }
            *(int *)(pSVar10 + 0x276) = iVar4 + -2;
            *(undefined4 *)(pSVar10 + 0x27e) = 5;
            iVar4 = thunk_FUN_00608b50(pSVar10,puVar5[7],(uint *)puVar5[8],puVar5[9],puVar5[10],
                                       puVar5[0xd],puVar5[0xe],puVar5[0xf],0,pSVar10[0x26d]);
            *(int *)(pSVar10 + 0x269) = iVar4;
            g_currentExceptionFrame = local_54.previous;
            return 0;
          default:
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
          *(int *)pSVar9 = iVar4 + -2;
          *(undefined4 *)(pSVar10 + 0x27a) = 5;
          iVar4 = puVar5[8];
          if (iVar4 < 0) {
            iVar4 = (short)(iVar4 / 0xc9) + -1;
          }
          else {
            iVar4 = (int)(short)(iVar4 / 0xc9);
          }
          *(int *)(pSVar10 + 0x276) = iVar4 + -2;
          *(undefined4 *)(pSVar10 + 0x27e) = 5;
          iVar4 = thunk_FUN_00607200(pSVar10,puVar5[7],puVar5[8],puVar5[9],puVar5[10]);
          *(int *)(pSVar10 + 0x269) = iVar4;
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        thunk_FUN_00604fc0(pSVar9,puVar5);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (uVar1 != 3) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      thunk_FUN_00604970(pSVar9);
      if (pSVar9[0x26d] != (STGameObjC)0x0) {
        thunk_FUN_00605780((int)pSVar9);
      }
      if (*(int *)(pSVar9 + 699) != 0) {
        thunk_FUN_006366d0(*(int *)(pSVar9 + 699));
        FUN_0072e2b0(*(undefined4 **)(pSVar9 + 699));
        *(undefined4 *)(pSVar9 + 699) = 0;
      }
      thunk_FUN_00604120((int)pSVar9);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    local_c = (byte *)thunk_FUN_00604a90(pSVar9,&local_8);
    if (local_c == (byte *)0x0) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    STPlaySystemC::SaveObjData(DAT_00802a38,*(undefined4 *)(pSVar9 + 0x18),local_c,local_8);
    pSVar10 = (STGameObjC *)&local_c;
  }
  else {
    if (uVar1 != 0x111) {
      if (uVar1 == 0x112) {
        thunk_FUN_006042d0(pSVar9,0x112);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (uVar1 != 0x113) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      thunk_FUN_006042d0(pSVar9,0x113);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    pSVar10 = pSVar9 + 0x2b3;
    if (*(int **)(pSVar9 + 0x2b3) == (int *)0x0) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    thunk_FUN_00604ee0(pSVar9,*(int **)(pSVar9 + 0x2b3));
  }
  FUN_006ab060((undefined4 *)pSVar10);
  g_currentExceptionFrame = local_54.previous;
  return 0;
}


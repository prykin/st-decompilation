
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00603740(int param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  short sVar4;
  void *this;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 unaff_ESI;
  undefined4 *puVar9;
  void *unaff_EDI;
  undefined4 *puVar10;
  byte **ppbVar11;
  undefined4 ***local_54;
  undefined4 local_50 [16];
  void *local_10;
  byte *local_c;
  uint local_8;
  
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar5 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  this = local_10;
  if (iVar5 != 0) {
    DAT_00858df8 = (undefined4 ****)local_54;
    iVar7 = FUN_006ad4d0(s_E____titans_nick_to_Expl_cpp_007cf630,0x1bb,0,iVar5,&DAT_007a4ccc);
    if (iVar7 == 0) {
      FUN_006a5e40(iVar5,0,0x7cf630,0x1bd);
      return 0xffff;
    }
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return uVar8;
  }
  iVar5 = thunk_FUN_0041af40(param_1);
  if (iVar5 == 0xffff) {
    return 0xffff;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 < 0x110) {
    if (uVar2 != 0x10f) {
      if (uVar2 == 0) {
        if (0 < *(int *)((int)this + 0x2b7)) {
          iVar5 = (*(int *)((int)DAT_00802a38 + 0xe4) - *(int *)((int)this + 0x26e)) +
                  *(int *)((int)this + 0x2b7);
          if ((iVar5 == 0xf) && (*(char *)((int)this + 0x26d) != '\0')) {
            if (*(int *)((int)this + 699) == 0) {
              puVar6 = thunk_FUN_00636200();
              *(undefined4 **)((int)this + 699) = puVar6;
              if (puVar6 != (undefined4 *)0x0) {
                thunk_FUN_00636260(puVar6,*(uint *)((int)this + 0x1f1),*(int *)((int)this + 0x1f5),
                                   *(int *)((int)this + 0x1f9) + -0x28,0x96,0x1e,5,0);
              }
            }
          }
          else if ((0xf < iVar5) &&
                  ((*(int **)((int)this + 699) != (int *)0x0 &&
                   (iVar5 = thunk_FUN_006372e0(*(int **)((int)this + 699)), iVar5 != 0)))) {
            thunk_FUN_006366d0(*(int *)((int)this + 699));
            FUN_0072e2b0(*(undefined4 **)((int)this + 699));
            *(undefined4 *)((int)this + 0x2b7) = 0xffffffff;
            *(undefined4 *)((int)this + 699) = 0;
          }
        }
        if (*(char *)((int)this + 0x26d) == '\0') {
          iVar5 = thunk_FUN_00604350((int)this);
          if (iVar5 != 0) {
            thunk_FUN_00604820((int)this);
            *(undefined1 *)((int)this + 0x26d) = 1;
          }
        }
        else {
          thunk_FUN_006057c0(this);
        }
        thunk_FUN_006048e0(this);
        iVar5 = thunk_FUN_006042d0(this,0);
        if (iVar5 != 0) {
          DAT_00858df8 = (undefined4 ****)local_54;
          return 0;
        }
        thunk_FUN_00604160(this);
        DAT_00858df8 = (undefined4 ****)local_54;
        return 0;
      }
      if (uVar2 == 2) {
        uVar2 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar2;
        _DAT_00811790 = (uVar2 >> 0x10) % 0x33;
        puVar6 = *(undefined4 **)(param_1 + 0x14);
        if (puVar6[3] == 0) {
          puVar9 = puVar6;
          puVar10 = (undefined4 *)((int)this + 0x1d5);
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          thunk_FUN_00605130((int)local_10);
          piVar1 = (int *)((int)local_10 + 0x272);
          iVar5 = thunk_FUN_00604350((int)local_10);
          if (iVar5 != 0) {
            *(undefined1 *)((int)local_10 + 0x26d) = 1;
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
            *piVar1 = iVar5 + -2;
            *(undefined4 *)((int)local_10 + 0x27a) = 5;
            iVar5 = puVar6[8];
            if (iVar5 < 0) {
              iVar5 = (short)(iVar5 / 0xc9) + -1;
            }
            else {
              iVar5 = (int)(short)(iVar5 / 0xc9);
            }
            *(int *)((int)local_10 + 0x276) = iVar5 + -2;
            *(undefined4 *)((int)local_10 + 0x27e) = 5;
            iVar5 = thunk_FUN_00606050(local_10,puVar6[7],puVar6[8],puVar6[9],puVar6[10],
                                       (uint *)puVar6[0xd],puVar6[0xe],puVar6[0xf],puVar6[0xc],
                                       *(undefined1 *)((int)local_10 + 0x26d));
            *(int *)((int)local_10 + 0x269) = iVar5;
            DAT_00858df8 = (undefined4 ****)local_54;
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
            *piVar1 = iVar5 + -2;
            *(undefined4 *)((int)local_10 + 0x27a) = 5;
            iVar5 = puVar6[8];
            if (iVar5 < 0) {
              iVar5 = (short)(iVar5 / 0xc9) + -1;
            }
            else {
              iVar5 = (int)(short)(iVar5 / 0xc9);
            }
            *(int *)((int)local_10 + 0x276) = iVar5 + -2;
            *(undefined4 *)((int)local_10 + 0x27e) = 5;
            iVar5 = thunk_FUN_00607a60(local_10,puVar6[7],puVar6[8],puVar6[9]);
            *(int *)((int)local_10 + 0x269) = iVar5;
            DAT_00858df8 = (undefined4 ****)local_54;
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
            *piVar1 = iVar5 + -2;
            *(undefined4 *)((int)local_10 + 0x27a) = 5;
            iVar5 = puVar6[8];
            if (iVar5 < 0) {
              iVar5 = (short)(iVar5 / 0xc9) + -1;
            }
            else {
              iVar5 = (int)(short)(iVar5 / 0xc9);
            }
            *(int *)((int)local_10 + 0x276) = iVar5 + -2;
            *(undefined4 *)((int)local_10 + 0x27e) = 5;
            iVar5 = thunk_FUN_00605b60(local_10,puVar6[7],puVar6[8],(int *)puVar6[9],puVar6[10]);
            *(int *)((int)local_10 + 0x269) = iVar5;
            DAT_00858df8 = (undefined4 ****)local_54;
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
            *piVar1 = iVar5 + -2;
            *(undefined4 *)((int)local_10 + 0x27a) = 5;
            iVar5 = puVar6[8];
            if (iVar5 < 0) {
              iVar5 = (short)(iVar5 / 0xc9) + -1;
            }
            else {
              iVar5 = (int)(short)(iVar5 / 0xc9);
            }
            *(int *)((int)local_10 + 0x276) = iVar5 + -2;
            *(undefined4 *)((int)local_10 + 0x27e) = 5;
            iVar5 = thunk_FUN_00608b50(local_10,puVar6[7],(uint *)puVar6[8],puVar6[9],puVar6[10],
                                       puVar6[0xd],puVar6[0xe],puVar6[0xf],0,
                                       *(undefined1 *)((int)local_10 + 0x26d));
            *(int *)((int)local_10 + 0x269) = iVar5;
            DAT_00858df8 = (undefined4 ****)local_54;
            return 0;
          default:
            DAT_00858df8 = (undefined4 ****)local_54;
            return 0;
          }
          *piVar1 = iVar5 + -2;
          *(undefined4 *)((int)local_10 + 0x27a) = 5;
          iVar5 = puVar6[8];
          if (iVar5 < 0) {
            iVar5 = (short)(iVar5 / 0xc9) + -1;
          }
          else {
            iVar5 = (int)(short)(iVar5 / 0xc9);
          }
          *(int *)((int)local_10 + 0x276) = iVar5 + -2;
          *(undefined4 *)((int)local_10 + 0x27e) = 5;
          iVar5 = thunk_FUN_00607200(local_10,puVar6[7],puVar6[8],puVar6[9],puVar6[10]);
          *(int *)((int)local_10 + 0x269) = iVar5;
          DAT_00858df8 = (undefined4 ****)local_54;
          return 0;
        }
        thunk_FUN_00604fc0(this,puVar6);
        DAT_00858df8 = (undefined4 ****)local_54;
        return 0;
      }
      if (uVar2 != 3) {
        DAT_00858df8 = (undefined4 ****)local_54;
        return 0;
      }
      thunk_FUN_00604970(this);
      if (*(char *)((int)this + 0x26d) != '\0') {
        thunk_FUN_00605780((int)this);
      }
      if (*(int *)((int)this + 699) != 0) {
        thunk_FUN_006366d0(*(int *)((int)this + 699));
        FUN_0072e2b0(*(undefined4 **)((int)this + 699));
        *(undefined4 *)((int)this + 699) = 0;
      }
      thunk_FUN_00604120((int)this);
      DAT_00858df8 = (undefined4 ****)local_54;
      return 0;
    }
    local_c = (byte *)thunk_FUN_00604a90(this,&local_8);
    if (local_c == (byte *)0x0) {
      DAT_00858df8 = (undefined4 ****)local_54;
      return 0;
    }
    thunk_FUN_0054d430(DAT_00802a38,*(undefined4 *)((int)this + 0x18),local_c,local_8);
    ppbVar11 = &local_c;
  }
  else {
    if (uVar2 != 0x111) {
      if (uVar2 == 0x112) {
        thunk_FUN_006042d0(this,0x112);
        DAT_00858df8 = (undefined4 ****)local_54;
        return 0;
      }
      if (uVar2 != 0x113) {
        DAT_00858df8 = (undefined4 ****)local_54;
        return 0;
      }
      thunk_FUN_006042d0(this,0x113);
      DAT_00858df8 = (undefined4 ****)local_54;
      return 0;
    }
    ppbVar11 = (byte **)((int)this + 0x2b3);
    if (*(int **)((int)this + 0x2b3) == (int *)0x0) {
      DAT_00858df8 = (undefined4 ****)local_54;
      return 0;
    }
    thunk_FUN_00604ee0(this,*(int **)((int)this + 0x2b3));
  }
  FUN_006ab060(ppbVar11);
  DAT_00858df8 = (undefined4 ****)local_54;
  return 0;
}


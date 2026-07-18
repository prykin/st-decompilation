
void FUN_005bf860(void)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_50;
  undefined4 local_4c [16];
  void *local_c;
  int local_8;
  
  iVar5 = 0;
  local_8 = 1;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar4 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_50;
    iVar5 = FUN_006ad4d0(s_E____titans_Start_rpt_obj_cpp_007ccec8,0x1f9,0,iVar4,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7ccec8,0x1f9);
    return;
  }
  cVar1 = *(char *)((int)local_c + 0x65);
  if (cVar1 == '\x01') {
    if (((*(char *)((int)local_c + 0x67) != '\0') && (*(char *)((int)local_c + 0x69) == '\0')) &&
       (*(char *)((int)local_c + 0x68) != '\0')) {
      bVar3 = false;
      FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
      if (DAT_0080c83e != 0xffffffff) {
        do {
          if (iVar5 == 0) {
            if (DAT_0080c963 <= *(int *)((int)local_c + 0x2c3)) {
              uVar6 = *(uint *)((int)local_c + 0x2a3);
              iVar7 = 0;
              iVar4 = DAT_0080c963;
              goto LAB_005bfb27;
            }
            uVar6 = *(uint *)((int)local_c + 0x2a3);
            if ((int)uVar6 < 0x29) {
              iVar4 = 5;
            }
            else {
              iVar4 = (int)uVar6 / 0x28;
            }
            iVar4 = *(int *)((int)local_c + 0x2c3) + iVar4;
            *(int *)((int)local_c + 0x2c3) = iVar4;
            if (DAT_0080c963 < iVar4) {
              *(int *)((int)local_c + 0x2c3) = DAT_0080c963;
            }
            thunk_FUN_005bfd30(*(int *)((int)local_c + 0x2c3),uVar6,0);
            bVar3 = true;
          }
          else if (*(int *)((int)local_c + iVar5 * 4 + 0x2a3) < (int)(&DAT_0080c943)[iVar5]) {
            if (*(int *)((int)local_c + 0x2a3) < 0x29) {
              iVar4 = 5;
            }
            else {
              iVar4 = *(int *)((int)local_c + 0x2a3) / 0x28;
            }
            iVar4 = *(int *)((int)local_c + iVar5 * 4 + 0x2a3) + iVar4;
            *(int *)((int)local_c + iVar5 * 4 + 0x2a3) = iVar4;
            if ((int)(&DAT_0080c943)[iVar5] < iVar4) {
              *(undefined4 *)((int)local_c + iVar5 * 4 + 0x2a3) = (&DAT_0080c943)[iVar5];
            }
            thunk_FUN_005bfd30(*(int *)((int)local_c + iVar5 * 4 + 0x2a3),
                               *(uint *)((int)local_c + 0x2a3),iVar5);
            bVar3 = true;
          }
          else {
            uVar6 = *(uint *)((int)local_c + 0x2a3);
            iVar4 = (&DAT_0080c943)[iVar5];
            iVar7 = iVar5;
LAB_005bfb27:
            thunk_FUN_005bfd30(iVar4,uVar6,iVar7);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)(DAT_0080c83e + 1));
      }
      if (bVar3) {
        thunk_FUN_005b6730(local_c,0x1e,'\x01',-1);
        FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
        thunk_FUN_00540620(0x1a,0x46,0x1a,0x46,*(uint *)(*(int *)((int)local_c + 0x73) + 4),
                           *(byte **)(*(int *)((int)local_c + 0x73) + 8),'\x01',
                           *(BITMAPINFO **)((int)local_c + 0x5d));
        iVar4 = *(int *)((int)local_c + 0x73);
        FUN_006b48e0(DAT_0080759c,0x1a,0x46,iVar4,0,0,0,*(uint *)(iVar4 + 4),*(int *)(iVar4 + 8),
                     (int)local_c + 0xa3,0x4c,0x10000ff);
        DAT_00858df8 = (undefined4 *)local_50;
        return;
      }
      *(undefined1 *)((int)local_c + 0x68) = 0;
    }
  }
  else if (cVar1 == '\x03') {
    if (*(int *)((int)local_c + 0x453) != 0) {
      iVar4 = thunk_FUN_005ab0a0();
      if (iVar4 != 0) {
        local_8 = 0;
      }
    }
    if (*(int *)((int)local_c + 0x457) != 0) {
      iVar4 = thunk_FUN_005ab0a0();
      if (iVar4 != 0) {
        local_8 = 0;
      }
    }
    if (local_8 != 0) {
      if (*(int *)((int)local_c + 0x453) != 0) {
        thunk_FUN_005aafb0();
        FUN_0072e2b0(*(undefined4 **)((int)local_c + 0x453));
        *(undefined4 *)((int)local_c + 0x453) = 0;
      }
      if (*(int *)((int)local_c + 0x457) != 0) {
        thunk_FUN_005aafb0();
        FUN_0072e2b0(*(undefined4 **)((int)local_c + 0x457));
        *(undefined4 *)((int)local_c + 0x457) = 0;
      }
      *(undefined1 *)((int)local_c + 0x65) = 1;
      thunk_FUN_005c0230(local_c);
      DAT_00858df8 = (undefined4 *)local_50;
      return;
    }
  }
  else if (cVar1 == '\x04') {
    if (*(int *)((int)local_c + 0x453) != 0) {
      iVar4 = thunk_FUN_005ab0a0();
      if (iVar4 == 0) {
        uVar6 = *(uint *)(*(int *)((int)local_c + 0x453) + 3);
        if (-1 < (int)uVar6) {
          FUN_006b3af0(DAT_008075a8,uVar6);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (*(int *)((int)local_c + 0x457) != 0) {
      iVar4 = thunk_FUN_005ab0a0();
      if (iVar4 == 0) {
        uVar6 = *(uint *)(*(int *)((int)local_c + 0x457) + 3);
        if (-1 < (int)uVar6) {
          FUN_006b3af0(DAT_008075a8,uVar6);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (local_8 != 0) {
      *(undefined1 *)((int)local_c + 0x65) = 2;
      thunk_FUN_005b66e0(local_c);
      DAT_00858df8 = (undefined4 *)local_50;
      return;
    }
  }
  DAT_00858df8 = (undefined4 *)local_50;
  return;
}


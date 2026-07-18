
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetActiveCenter */

undefined4 __thiscall
STAllPlayersC::GetActiveCenter
          (STAllPlayersC *this,undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  uint uVar6;
  undefined3 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  uVar6 = (uint)DAT_0080874d;
  iVar3 = uVar6 * 0xa62;
  uVar7 = (undefined3)(uVar6 * 0x29 >> 8);
  if (*(int *)((int)&DAT_007f5023 + iVar3) == 0) {
    iVar1 = *(int *)((int)&DAT_007f4f83 + iVar3);
    if (iVar1 == 0) {
      if (param_1 != (undefined2 *)0x0) {
        *param_1 = 0xffff;
      }
      if (param_2 != (undefined2 *)0x0) {
        *param_2 = 0xffff;
      }
      if (param_3 == (undefined2 *)0x0) {
        return 0xffffffff;
      }
      *param_3 = 0xffff;
      return 0xffffffff;
    }
    if (iVar1 == 0x3c) {
      iVar3 = *(int *)((int)&DAT_007f4f8d + iVar3);
      iVar9 = 0;
      iVar8 = 0;
      iVar1 = *(int *)(iVar3 + 0xc);
      iVar10 = 0;
      local_1c = 0;
      local_18 = 0;
      if (0 < iVar1) {
        do {
          FUN_006acc70(iVar3,local_18,&local_14);
          if ((short)local_14 != -1) {
            local_1c = local_1c + 1;
            pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)DAT_0080874d * 0x29 >> 8),
                                                         *(undefined1 *)
                                                          ((int)&DAT_007f4f87 +
                                                          (uint)DAT_0080874d * 0xa62)),local_14,1);
            thunk_FUN_004162b0(pvVar5,(undefined2 *)&local_8,(undefined2 *)&local_c,
                               (undefined2 *)&local_10);
            iVar9 = iVar9 + local_8;
            iVar10 = iVar10 + local_c;
            iVar8 = iVar8 + local_10;
          }
          local_18 = local_18 + 1;
        } while ((int)local_18 < iVar1);
        if (0 < local_1c) {
          if (param_1 != (undefined2 *)0x0) {
            *param_1 = (short)((int)(short)iVar9 / local_1c);
          }
          if (param_2 != (undefined2 *)0x0) {
            *param_2 = (short)((int)(short)iVar10 / local_1c);
          }
          if (param_3 == (undefined2 *)0x0) {
            return 0;
          }
          *param_3 = (short)((int)(short)iVar8 / local_1c);
          return 0;
        }
      }
      if (param_1 != (undefined2 *)0x0) {
        *param_1 = 0xffff;
      }
joined_r0x0042de37:
      if (param_2 != (undefined2 *)0x0) {
        *param_2 = 0xffff;
      }
      if (param_3 == (undefined2 *)0x0) {
        return 0;
      }
      *param_3 = 0xffff;
      return 0;
    }
    if (iVar1 == 0x1ae) {
      pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31(uVar7,*(undefined1 *)((int)&DAT_007f4f87 + iVar3)
                                                  ),(uint)(ushort)(&DAT_007f4f8b)[uVar6 * 0x531],3);
      thunk_FUN_004162b0(pvVar5,(undefined2 *)&local_8,(undefined2 *)&local_c,
                         (undefined2 *)&local_10);
      if (param_1 != (undefined2 *)0x0) {
        *param_1 = (undefined2)local_8;
      }
      if (param_2 != (undefined2 *)0x0) {
        *param_2 = (undefined2)local_c;
      }
      if (param_3 != (undefined2 *)0x0) {
        *param_3 = (undefined2)local_10;
      }
      return 0;
    }
    iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x4e5,0,0,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    if (param_1 != (undefined2 *)0x0) {
      *param_1 = 0xffff;
    }
    goto joined_r0x0042dcbd;
  }
  if (*(int *)((int)&DAT_007f5023 + iVar3) == 1) {
    iVar1 = *(int *)((int)&DAT_007f4fd3 + iVar3);
    if (0x19a < iVar1) {
      if (iVar1 == 0x1a4) {
        uVar4 = 5;
LAB_0042da27:
        pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31(uVar7,*(undefined1 *)
                                                            ((int)&DAT_007f4fd7 + iVar3)),
                                            (uint)(ushort)(&DAT_007f4fdb)[uVar6 * 0x531],uVar4);
        thunk_FUN_004162b0(pvVar5,(undefined2 *)&local_8,(undefined2 *)&local_c,
                           (undefined2 *)&local_10);
      }
      else {
        if (iVar1 != 0x1b8) {
LAB_0042dbdf:
          iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x537,0,0,&DAT_007a4ccc);
          if (iVar3 != 0) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return uVar4;
          }
          goto joined_r0x0042dc09;
        }
        pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31(uVar7,*(undefined1 *)
                                                            ((int)&DAT_007f4fd7 + iVar3)),
                                            (uint)(ushort)(&DAT_007f4fdb)[uVar6 * 0x531],6);
        thunk_FUN_004162b0(pvVar5,(undefined2 *)&local_8,(undefined2 *)&local_c,
                           (undefined2 *)&local_10);
      }
      if (param_1 != (undefined2 *)0x0) {
        *param_1 = (undefined2)local_8;
      }
joined_r0x0042dc56:
      if (param_2 != (undefined2 *)0x0) {
        *param_2 = (undefined2)local_c;
      }
      if (param_3 == (undefined2 *)0x0) {
        return 0;
      }
      *param_3 = (undefined2)local_10;
      return 0;
    }
    if (iVar1 == 0x19a) {
      iVar3 = *(int *)((int)&DAT_007f4fdd + iVar3);
      iVar9 = 0;
      iVar8 = 0;
      iVar1 = *(int *)(iVar3 + 0xc);
      iVar10 = 0;
      local_1c = 0;
      local_18 = 0;
      if (0 < iVar1) {
        do {
          FUN_006acc70(iVar3,local_18,&local_14);
          if ((short)local_14 != -1) {
            local_1c = local_1c + 1;
            pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)DAT_0080874d * 0x29 >> 8),
                                                         *(undefined1 *)
                                                          ((int)&DAT_007f4fd7 +
                                                          (uint)DAT_0080874d * 0xa62)),local_14,1);
            thunk_FUN_004162b0(pvVar5,(undefined2 *)&local_8,(undefined2 *)&local_c,
                               (undefined2 *)&local_10);
            iVar9 = iVar9 + local_8;
            iVar10 = iVar10 + local_c;
            iVar8 = iVar8 + local_10;
          }
          local_18 = local_18 + 1;
        } while ((int)local_18 < iVar1);
        if (0 < local_1c) {
          if (param_1 != (undefined2 *)0x0) {
            *param_1 = (short)((int)(short)iVar9 / local_1c);
          }
          if (param_2 != (undefined2 *)0x0) {
            *param_2 = (short)((int)(short)iVar10 / local_1c);
          }
          if (param_3 == (undefined2 *)0x0) {
            return 0;
          }
          *param_3 = (short)((int)(short)iVar8 / local_1c);
          return 0;
        }
      }
      if (param_1 != (undefined2 *)0x0) {
        *param_1 = 0xffff;
      }
      goto joined_r0x0042de37;
    }
    if (iVar1 != 0) {
      if (iVar1 == 0x5a) {
        pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31(uVar7,*(undefined1 *)
                                                            ((int)&DAT_007f4fd7 + iVar3)),
                                            (uint)(ushort)(&DAT_007f4fdb)[uVar6 * 0x531],4);
        thunk_FUN_004162b0(pvVar5,(undefined2 *)&local_8,(undefined2 *)&local_c,
                           (undefined2 *)&local_10);
        if (param_1 != (undefined2 *)0x0) {
          *param_1 = (undefined2)local_8;
        }
        goto joined_r0x0042dc56;
      }
      if (iVar1 != 0x172) goto LAB_0042dbdf;
      uVar4 = 2;
      goto LAB_0042da27;
    }
  }
  else {
    iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x53e,0,0,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
joined_r0x0042dc09:
  if (param_1 != (undefined2 *)0x0) {
    *param_1 = 0xffff;
  }
joined_r0x0042dcbd:
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = 0xffff;
  }
  if (param_3 == (undefined2 *)0x0) {
    return 0xffffffff;
  }
  *param_3 = 0xffff;
  return 0xffffffff;
}


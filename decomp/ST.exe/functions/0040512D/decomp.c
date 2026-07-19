
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
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
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
      iStack_1c = 0;
      uStack_18 = 0;
      if (0 < iVar1) {
        do {
          FUN_006acc70(iVar3,uStack_18,&uStack_14);
          if ((short)uStack_14 != -1) {
            iStack_1c = iStack_1c + 1;
            pvVar5 = (void *)GetObjPtr(DAT_007fa174,
                                       CONCAT31((int3)((uint)DAT_0080874d * 0x29 >> 8),
                                                *(undefined1 *)
                                                 ((int)&DAT_007f4f87 + (uint)DAT_0080874d * 0xa62)),
                                       uStack_14,1);
            thunk_FUN_004162b0(pvVar5,(undefined2 *)&iStack_8,(undefined2 *)&iStack_c,
                               (undefined2 *)&iStack_10);
            iVar9 = iVar9 + iStack_8;
            iVar10 = iVar10 + iStack_c;
            iVar8 = iVar8 + iStack_10;
          }
          uStack_18 = uStack_18 + 1;
        } while ((int)uStack_18 < iVar1);
        if (0 < iStack_1c) {
          if (param_1 != (undefined2 *)0x0) {
            *param_1 = (short)((int)(short)iVar9 / iStack_1c);
          }
          if (param_2 != (undefined2 *)0x0) {
            *param_2 = (short)((int)(short)iVar10 / iStack_1c);
          }
          if (param_3 == (undefined2 *)0x0) {
            return 0;
          }
          *param_3 = (short)((int)(short)iVar8 / iStack_1c);
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
      pvVar5 = (void *)GetObjPtr(DAT_007fa174,
                                 CONCAT31(uVar7,*(undefined1 *)((int)&DAT_007f4f87 + iVar3)),
                                 (uint)(ushort)(&DAT_007f4f8b)[uVar6 * 0x531],3);
      thunk_FUN_004162b0(pvVar5,(undefined2 *)&iStack_8,(undefined2 *)&iStack_c,
                         (undefined2 *)&iStack_10);
      if (param_1 != (undefined2 *)0x0) {
        *param_1 = (undefined2)iStack_8;
      }
      if (param_2 != (undefined2 *)0x0) {
        *param_2 = (undefined2)iStack_c;
      }
      if (param_3 != (undefined2 *)0x0) {
        *param_3 = (undefined2)iStack_10;
      }
      return 0;
    }
    iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x4e5,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__GetActiveCenter_A_007a6498);
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
        pvVar5 = (void *)GetObjPtr(DAT_007fa174,
                                   CONCAT31(uVar7,*(undefined1 *)((int)&DAT_007f4fd7 + iVar3)),
                                   (uint)(ushort)(&DAT_007f4fdb)[uVar6 * 0x531],uVar4);
        thunk_FUN_004162b0(pvVar5,(undefined2 *)&iStack_8,(undefined2 *)&iStack_c,
                           (undefined2 *)&iStack_10);
      }
      else {
        if (iVar1 != 0x1b8) {
LAB_0042dbdf:
          iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x537,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__GetActiveCenter_A_007a64e0);
          if (iVar3 != 0) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return uVar4;
          }
          goto joined_r0x0042dc09;
        }
        pvVar5 = (void *)GetObjPtr(DAT_007fa174,
                                   CONCAT31(uVar7,*(undefined1 *)((int)&DAT_007f4fd7 + iVar3)),
                                   (uint)(ushort)(&DAT_007f4fdb)[uVar6 * 0x531],6);
        thunk_FUN_004162b0(pvVar5,(undefined2 *)&iStack_8,(undefined2 *)&iStack_c,
                           (undefined2 *)&iStack_10);
      }
      if (param_1 != (undefined2 *)0x0) {
        *param_1 = (undefined2)iStack_8;
      }
joined_r0x0042dc56:
      if (param_2 != (undefined2 *)0x0) {
        *param_2 = (undefined2)iStack_c;
      }
      if (param_3 == (undefined2 *)0x0) {
        return 0;
      }
      *param_3 = (undefined2)iStack_10;
      return 0;
    }
    if (iVar1 == 0x19a) {
      iVar3 = *(int *)((int)&DAT_007f4fdd + iVar3);
      iVar9 = 0;
      iVar8 = 0;
      iVar1 = *(int *)(iVar3 + 0xc);
      iVar10 = 0;
      iStack_1c = 0;
      uStack_18 = 0;
      if (0 < iVar1) {
        do {
          FUN_006acc70(iVar3,uStack_18,&uStack_14);
          if ((short)uStack_14 != -1) {
            iStack_1c = iStack_1c + 1;
            pvVar5 = (void *)GetObjPtr(DAT_007fa174,
                                       CONCAT31((int3)((uint)DAT_0080874d * 0x29 >> 8),
                                                *(undefined1 *)
                                                 ((int)&DAT_007f4fd7 + (uint)DAT_0080874d * 0xa62)),
                                       uStack_14,1);
            thunk_FUN_004162b0(pvVar5,(undefined2 *)&iStack_8,(undefined2 *)&iStack_c,
                               (undefined2 *)&iStack_10);
            iVar9 = iVar9 + iStack_8;
            iVar10 = iVar10 + iStack_c;
            iVar8 = iVar8 + iStack_10;
          }
          uStack_18 = uStack_18 + 1;
        } while ((int)uStack_18 < iVar1);
        if (0 < iStack_1c) {
          if (param_1 != (undefined2 *)0x0) {
            *param_1 = (short)((int)(short)iVar9 / iStack_1c);
          }
          if (param_2 != (undefined2 *)0x0) {
            *param_2 = (short)((int)(short)iVar10 / iStack_1c);
          }
          if (param_3 == (undefined2 *)0x0) {
            return 0;
          }
          *param_3 = (short)((int)(short)iVar8 / iStack_1c);
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
        pvVar5 = (void *)GetObjPtr(DAT_007fa174,
                                   CONCAT31(uVar7,*(undefined1 *)((int)&DAT_007f4fd7 + iVar3)),
                                   (uint)(ushort)(&DAT_007f4fdb)[uVar6 * 0x531],4);
        thunk_FUN_004162b0(pvVar5,(undefined2 *)&iStack_8,(undefined2 *)&iStack_c,
                           (undefined2 *)&iStack_10);
        if (param_1 != (undefined2 *)0x0) {
          *param_1 = (undefined2)iStack_8;
        }
        goto joined_r0x0042dc56;
      }
      if (iVar1 != 0x172) goto LAB_0042dbdf;
      uVar4 = 2;
      goto LAB_0042da27;
    }
  }
  else {
    iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x53e,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__GetActiveCenter_007a6528);
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


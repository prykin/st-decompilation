
undefined4 FUN_00601f80(int param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined2 extraout_var;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar7;
  undefined4 local_54;
  undefined4 local_50 [16];
  byte *local_10;
  uint local_c;
  int *local_8;
  
  iVar3 = thunk_FUN_0041e530(param_1);
  if (iVar3 != 0xffff) {
    local_54 = DAT_00858df8;
    DAT_00858df8 = &local_54;
    iVar3 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
    if (iVar3 == 0) {
      uVar1 = *(uint *)(param_1 + 0x10);
      if (uVar1 < 0x110) {
        if (uVar1 == 0x10f) {
          local_10 = (byte *)thunk_FUN_006025d0(local_8,&local_c);
          thunk_FUN_0054d430(DAT_00802a38,local_8[6],local_10,local_c);
          FUN_006ab060(&local_10);
          DAT_00858df8 = (undefined4 *)local_54;
          return 0;
        }
        if (uVar1 == 0) {
          if ((*(int *)((int)local_8 + 0x36e) != 0) && (*(int *)((int)local_8 + 0x36e) != 4)) {
            thunk_FUN_00602be0(local_8);
          }
          if ((*(byte *)((int)DAT_00802a38 + 0xe4) & 0xf) == 0) {
            thunk_FUN_00603120((int)local_8);
            DAT_00858df8 = (undefined4 *)local_54;
            return 0;
          }
        }
        else if (uVar1 == 2) {
          puVar4 = *(undefined4 **)(param_1 + 0x14);
          if (puVar4[3] != 2) {
            puVar7 = (undefined4 *)((int)local_8 + 0x231);
            for (iVar3 = 0x4f; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar7 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar7 = puVar7 + 1;
            }
            *(undefined1 *)puVar7 = *(undefined1 *)puVar4;
            iVar3 = thunk_FUN_006024b0((int)local_8);
            if (iVar3 != 0) {
              if ((*(int *)((int)local_8 + 0x3a7) != 0) &&
                 (iVar3 = thunk_FUN_006029c0(), iVar3 == 0)) {
                thunk_FUN_00602440(local_8);
                DAT_00858df8 = (undefined4 *)local_54;
                return 0;
              }
              if (DAT_007fa174 == 0) {
                DAT_00858df8 = (undefined4 *)local_54;
                return 0;
              }
              iVar3 = thunk_FUN_0044a8a0(0xffff,local_8);
              if (iVar3 == 0) {
                *(undefined1 *)((int)local_8 + 0x3a5) = 1;
                DAT_00858df8 = (undefined4 *)local_54;
                return 0;
              }
            }
            thunk_FUN_00602440(local_8);
            DAT_00858df8 = (undefined4 *)local_54;
            return 0;
          }
          iVar3 = thunk_FUN_00602660(local_8,puVar4);
          if (-1 < iVar3) {
            if (*(int *)((int)local_8 + 0x36e) == 4) {
              puVar4 = thunk_FUN_00602e90();
              *(undefined4 **)((int)local_8 + 0x3ab) = puVar4;
              if (puVar4 == (undefined4 *)0x0) {
                thunk_FUN_00602440(local_8);
              }
            }
            else if ((*(int *)((int)local_8 + 0x3a7) != 0) && (*(int *)((int)local_8 + 0x36e) != 0))
            {
              thunk_FUN_00602be0(local_8);
            }
            if (((DAT_007fa174 != 0) && (*(char *)((int)local_8 + 0x3a5) != '\0')) &&
               (iVar3 = thunk_FUN_0044a8a0(*(ushort *)((int)local_8 + 0x32),local_8), iVar3 != 0)) {
              thunk_FUN_00602440(local_8);
              DAT_00858df8 = (undefined4 *)local_54;
              return 0;
            }
          }
        }
        else if (((uVar1 == 3) &&
                 (thunk_FUN_004ad310((int)local_8 + 0x1d5), *(char *)((int)local_8 + 0x3a5) != '\0')
                 ) && (DAT_007fa174 != 0)) {
          thunk_FUN_0044aa20(CONCAT22(extraout_var,*(undefined2 *)((int)local_8 + 0x32)),
                             (uint)local_8);
          DAT_00858df8 = (undefined4 *)local_54;
          return 0;
        }
      }
      else if (uVar1 == 0x112) {
        if (-1 < *(int *)((int)local_8 + 0x39b)) {
          thunk_FUN_004ad5e0((int)local_8 + 0x1d5);
        }
      }
      else if (uVar1 == 0x113) {
        if (-1 < *(int *)((int)local_8 + 0x39b)) {
          (*(code *)**(undefined4 **)((int)local_8 + 0x1d5))();
          DAT_00858df8 = (undefined4 *)local_54;
          return 0;
        }
      }
      else if (uVar1 == 0x128) {
        thunk_FUN_004ad430((int)local_8 + 0x1d5);
        thunk_FUN_00602440(local_8);
        DAT_00858df8 = (undefined4 *)local_54;
        return 0;
      }
      DAT_00858df8 = (undefined4 *)local_54;
      return 0;
    }
    DAT_00858df8 = (undefined4 *)local_54;
    iVar5 = FUN_006ad4d0(s_E____titans_nick_to_dest_cpp_007ced34,0x95,0,iVar3,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
    FUN_006a5e40(iVar3,0,0x7ced34,0x97);
  }
  return 0xffff;
}


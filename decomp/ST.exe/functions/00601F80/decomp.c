
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_dest.cpp
   STDestC::GetMessage */

undefined4 __thiscall STDestC::GetMessage(STDestC *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  STDestC *pSVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined2 extraout_var;
  undefined4 unaff_ESI;
  STDestC *pSVar8;
  void *unaff_EDI;
  STDestC *pSVar9;
  undefined4 local_54;
  undefined4 local_50 [16];
  byte *local_10;
  uint local_c;
  STDestC *local_8;
  
  local_8 = this;
  iVar4 = STSprGameObjC::GetMessage((STSprGameObjC *)this,param_1);
  if (iVar4 != 0xffff) {
    local_54 = DAT_00858df8;
    DAT_00858df8 = &local_54;
    iVar4 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
    pSVar3 = local_8;
    if (iVar4 == 0) {
      uVar1 = *(uint *)(param_1 + 0x10);
      if (uVar1 < 0x110) {
        if (uVar1 == 0x10f) {
          local_10 = (byte *)thunk_FUN_006025d0(local_8,&local_c);
          STPlaySystemC::SaveObjData(DAT_00802a38,*(undefined4 *)(pSVar3 + 0x18),local_10,local_c);
          FUN_006ab060(&local_10);
          DAT_00858df8 = (undefined4 *)local_54;
          return 0;
        }
        if (uVar1 == 0) {
          if ((*(int *)(local_8 + 0x36e) != 0) && (*(int *)(local_8 + 0x36e) != 4)) {
            thunk_FUN_00602be0((int *)local_8);
          }
          if (((byte)DAT_00802a38[0xe4] & 0xf) == 0) {
            thunk_FUN_00603120((int)pSVar3);
            DAT_00858df8 = (undefined4 *)local_54;
            return 0;
          }
        }
        else if (uVar1 == 2) {
          pSVar8 = *(STDestC **)(param_1 + 0x14);
          if (*(int *)(pSVar8 + 0xc) != 2) {
            pSVar9 = local_8 + 0x231;
            for (iVar4 = 0x4f; iVar4 != 0; iVar4 = iVar4 + -1) {
              *(undefined4 *)pSVar9 = *(undefined4 *)pSVar8;
              pSVar8 = pSVar8 + 4;
              pSVar9 = pSVar9 + 4;
            }
            *pSVar9 = *pSVar8;
            iVar4 = thunk_FUN_006024b0((int)local_8);
            if (iVar4 != 0) {
              if ((*(int *)(pSVar3 + 0x3a7) != 0) && (iVar4 = thunk_FUN_006029c0(), iVar4 == 0)) {
                thunk_FUN_00602440(pSVar3);
                DAT_00858df8 = (undefined4 *)local_54;
                return 0;
              }
              if (DAT_007fa174 == (STAllPlayersC *)0x0) {
                DAT_00858df8 = (undefined4 *)local_54;
                return 0;
              }
              iVar4 = STAllPlayersC::RegisterBlot(DAT_007fa174,0xffff,pSVar3);
              if (iVar4 == 0) {
                pSVar3[0x3a5] = (STDestC)0x1;
                DAT_00858df8 = (undefined4 *)local_54;
                return 0;
              }
            }
            thunk_FUN_00602440(pSVar3);
            DAT_00858df8 = (undefined4 *)local_54;
            return 0;
          }
          iVar4 = thunk_FUN_00602660(local_8,(undefined4 *)pSVar8);
          if (-1 < iVar4) {
            if (*(int *)(pSVar3 + 0x36e) == 4) {
              puVar5 = thunk_FUN_00602e90();
              *(undefined4 **)(pSVar3 + 0x3ab) = puVar5;
              if (puVar5 == (undefined4 *)0x0) {
                thunk_FUN_00602440(pSVar3);
              }
            }
            else if ((*(int *)(pSVar3 + 0x3a7) != 0) && (*(int *)(pSVar3 + 0x36e) != 0)) {
              thunk_FUN_00602be0((int *)pSVar3);
            }
            if (((DAT_007fa174 != (STAllPlayersC *)0x0) && (pSVar3[0x3a5] != (STDestC)0x0)) &&
               (iVar4 = STAllPlayersC::RegisterBlot(DAT_007fa174,*(ushort *)(pSVar3 + 0x32),pSVar3),
               iVar4 != 0)) {
              thunk_FUN_00602440(pSVar3);
              DAT_00858df8 = (undefined4 *)local_54;
              return 0;
            }
          }
        }
        else if (((uVar1 == 3) &&
                 (thunk_FUN_004ad310((int)(local_8 + 0x1d5)), pSVar3[0x3a5] != (STDestC)0x0)) &&
                (DAT_007fa174 != (STAllPlayersC *)0x0)) {
          STAllPlayersC::UnRegisterBlot
                    (DAT_007fa174,CONCAT22(extraout_var,*(undefined2 *)(pSVar3 + 0x32)),(uint)pSVar3
                    );
          DAT_00858df8 = (undefined4 *)local_54;
          return 0;
        }
      }
      else if (uVar1 == 0x112) {
        if (-1 < *(int *)(local_8 + 0x39b)) {
          thunk_FUN_004ad5e0((int)(local_8 + 0x1d5));
        }
      }
      else if (uVar1 == 0x113) {
        if (-1 < *(int *)(local_8 + 0x39b)) {
          (*(code *)**(undefined4 **)(local_8 + 0x1d5))();
          DAT_00858df8 = (undefined4 *)local_54;
          return 0;
        }
      }
      else if (uVar1 == 0x128) {
        thunk_FUN_004ad430((int)(local_8 + 0x1d5));
        thunk_FUN_00602440(pSVar3);
        DAT_00858df8 = (undefined4 *)local_54;
        return 0;
      }
      DAT_00858df8 = (undefined4 *)local_54;
      return 0;
    }
    DAT_00858df8 = (undefined4 *)local_54;
    iVar6 = FUN_006ad4d0(s_E____titans_nick_to_dest_cpp_007ced34,0x95,0,iVar4,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return uVar7;
    }
    FUN_006a5e40(iVar4,0,0x7ced34,0x97);
  }
  return 0xffff;
}


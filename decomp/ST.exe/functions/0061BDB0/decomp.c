
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_0061BDB0_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

undefined4 __thiscall
FUN_0061bdb0(void *this,Global_sub_0061BDB0_param_1Enum param_1,int param_2,int param_3,uint param_4
            )

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined4 local_8;
  
  uVar3 = param_4;
  iVar4 = param_3;
  iVar5 = param_2;
  local_8 = 0;
  switch(param_1) {
  case CASE_0:
    iVar5 = FUN_006acf0d(*(int *)((int)this + 0x9f),*(int *)((int)this + 0xa3),
                         *(int *)((int)this + 0xa7),param_2,param_3,param_4);
    *(undefined4 *)((int)this + 0x10f) = 3;
    if (iVar5 < 1) {
      return 2;
    }
    *(int *)((int)this + 0xf7) = iVar5;
    *(int *)((int)this + 0x103) = ((param_2 - *(int *)((int)this + 0x9f)) * 10000) / iVar5;
    *(int *)((int)this + 0xd7) = *(int *)((int)this + 0xa7);
    *(int *)((int)this + 0x107) = ((iVar4 - *(int *)((int)this + 0xa3)) * 10000) / iVar5;
    *(int *)((int)this + 0x10b) = (int)((uVar3 - *(int *)((int)this + 0xa7)) * 10000) / iVar5;
    *(undefined4 *)((int)this + 0xcf) = *(undefined4 *)((int)this + 0x9f);
    *(undefined4 *)((int)this + 0xd3) = *(undefined4 *)((int)this + 0xa3);
    *(undefined4 *)((int)this + 0x11b) = *(undefined4 *)(DAT_00802a38 + 0xe4);
    return 1;
  case CASE_1:
    if ((*(char *)((int)this + 0x14b) != '\0') && (*(void **)((int)this + 0x7d) != (void *)0x0)) {
      thunk_FUN_00618900(*(void **)((int)this + 0x7d),*(int *)((int)this + 0x145),0);
      *(undefined1 *)((int)this + 0x14b) = 0;
    }
    iVar5 = *(int *)((int)this + 0xa7);
    *(undefined4 *)((int)this + 0x10b) = 10000;
    *(undefined4 *)((int)this + 0x107) = 0;
    *(undefined4 *)((int)this + 0x103) = 0;
    *(undefined4 *)((int)this + 0x113) = 0;
    *(undefined4 *)((int)this + 0x117) = 0xfffff18c;
    *(int *)((int)this + 0xcf) = *(int *)((int)this + 0x9f);
    *(int *)((int)this + 0xd3) = *(int *)((int)this + 0xa3);
    sVar1 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      iVar5 = (short)(((short)(iVar5 / 200) + sVar1) - (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)
                     ) + -1;
    }
    else {
      iVar5 = (int)(short)(((short)(iVar5 / 200) + sVar1) -
                          (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
    }
    FUN_006e3310(DAT_00807598,
                 (*(int *)((int)this + 0x9f) * *(int *)((int)DAT_00807598 + 0x380)) / 0xc9,
                 (int *)((*(int *)((int)this + 0xa3) * *(int *)((int)DAT_00807598 + 0x380)) / 0xc9),
                 iVar5,(int *)&param_1);
    lVar6 = Library::MSVCRT::__ftol();
    if (*(int *)((int)this + 0xd7) < (int)(short)lVar6) {
      *(int *)((int)this + 0xd7) = (int)(short)lVar6;
    }
    if ((((-1 < *(int *)((int)this + 0x9f)) && (-1 < *(int *)((int)this + 0xa3))) &&
        (*(int *)((int)this + 0x9f) < DAT_007fb240 * 0xc9)) &&
       (*(int *)((int)this + 0xa3) < DAT_007fb242 * 0xc9)) {
      *(undefined4 *)((int)this + 0xd7) = *(undefined4 *)((int)this + 0xa7);
      goto LAB_0061c0e4;
    }
    break;
  case CASE_2:
    iVar5 = FUN_006acf0d(*(int *)((int)this + 0x9f),*(int *)((int)this + 0xa3),
                         *(int *)((int)this + 0xa7),param_2,param_3,param_4);
    *(undefined4 *)((int)this + 0x10f) = 0;
    *(undefined4 *)((int)this + 0x117) = 0xffffea52;
    *(undefined4 *)((int)this + 0x113) = 0;
    *(undefined4 *)((int)this + 0xf3) = 0;
    if (iVar5 < 1) {
      return 2;
    }
    *(int *)((int)this + 0xf7) = iVar5;
    *(int *)((int)this + 0x103) = ((param_2 - *(int *)((int)this + 0x9f)) * 10000) / iVar5;
    *(int *)((int)this + 0xd7) = *(int *)((int)this + 0xa7);
    *(int *)((int)this + 0x107) = ((iVar4 - *(int *)((int)this + 0xa3)) * 10000) / iVar5;
    *(int *)((int)this + 0x10b) = (int)((uVar3 - *(int *)((int)this + 0xa7)) * 10000) / iVar5;
    *(undefined4 *)((int)this + 0xcf) = *(undefined4 *)((int)this + 0x9f);
    *(undefined4 *)((int)this + 0xd3) = *(undefined4 *)((int)this + 0xa3);
LAB_0061c0e4:
    *(undefined4 *)((int)this + 0x11b) = *(undefined4 *)(DAT_00802a38 + 0xe4);
    return 1;
  case CASE_3:
    param_3 = FUN_006acf0d(*(int *)((int)this + 0x9f),*(int *)((int)this + 0xa3),
                           *(int *)((int)this + 0xa7),param_2,param_3,param_4);
    param_2 = FUN_006aced8(*(int *)((int)this + 0x9f),*(int *)((int)this + 0xa3),iVar5,iVar4);
    *(int *)((int)this + 0x103) = ((iVar5 - *(int *)((int)this + 0x9f)) * 10000) / param_3;
    iVar5 = param_4 - *(int *)((int)this + 0xa7);
    *(int *)((int)this + 0x107) = ((iVar4 - *(int *)((int)this + 0xa3)) * 10000) / param_3;
    *(int *)((int)this + 0x10b) = (iVar5 * 10000) / param_3;
    if (param_3 != 0) {
      if (param_2 == 0) {
        param_2 = 1;
      }
      iVar4 = param_2;
      if (iVar5 < 1) {
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        iVar4 = (uVar3 >> 0x10 & 7) + 0x11;
        param_3 = *(int *)((int)this + 0x117) / 100;
        *(int *)((int)this + 0x113) = iVar4;
        uVar3 = (param_3 * iVar5 + iVar4 * iVar4 * 0x32) * 2;
        if ((int)uVar3 < 1) {
          param_4 = 0;
        }
        else {
          param_4 = FUN_006c8334(uVar3);
        }
        iVar5 = *(int *)((int)this + 0x113);
        iVar4 = (int)(param_4 + iVar5 * -1000) / param_3;
        if (0 < iVar4) {
          *(int *)((int)this + 0x113) = iVar5 * 10000;
          *(int *)((int)this + 0x10f) = (param_2 * 1000) / iVar4;
          return 1;
        }
        iVar2 = -((int)(iVar5 * 1000 + param_4) / param_3);
        if (0 < iVar2) {
          *(int *)((int)this + 0x113) = iVar5 * 10000;
          goto LAB_0061c3e9;
        }
      }
      else {
        if (iVar5 < 0x321) {
          if (iVar5 < 0x191) {
            if (iVar5 < 0xc9) {
              uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
              *(uint *)((int)this + 0x1c) = uVar3;
              iVar2 = (uVar3 >> 0x10 & 7) + 7;
            }
            else {
              uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
              *(uint *)((int)this + 0x1c) = uVar3;
              iVar2 = (uVar3 >> 0x10 & 7) + 0x19;
            }
          }
          else {
            uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
            *(uint *)((int)this + 0x1c) = uVar3;
            iVar2 = (uVar3 >> 0x10 & 7) + 0x23;
          }
        }
        else {
          uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)this + 0x1c) = uVar3;
          iVar2 = (uVar3 >> 0x10 & 7) + 0x2d;
        }
        *(int *)((int)this + 0x113) = iVar2;
        iVar2 = *(int *)((int)this + 0x117) / 100;
        uVar3 = (iVar2 * iVar5 + *(int *)((int)this + 0x113) * *(int *)((int)this + 0x113) * 0x32) *
                2;
        if ((int)uVar3 < 1) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_006c8334(uVar3);
        }
        iVar2 = (int)(uVar3 + *(int *)((int)this + 0x113) * -1000) / iVar2;
        if (0 < iVar2) {
          *(int *)((int)this + 0x113) = *(int *)((int)this + 0x113) * 10000;
          param_2 = iVar4;
LAB_0061c3e9:
          *(int *)((int)this + 0x10f) = (param_2 * 1000) / iVar2;
          return 1;
        }
      }
      *(undefined4 *)((int)this + 0x10f) = 100;
    }
    local_8 = 1;
  }
  return local_8;
}


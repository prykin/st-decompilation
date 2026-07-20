
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004603B0 parameter used as this of STTorpC::ClearDangerous @ 004604BD | 004603B0
   parameter used as this of STTorpC::ClearDangerous @ 00460546 | 004603B0 parameter used as this of
   STTorpC::SetDangerous @ 004604AB */

int __thiscall FUN_004603b0(void *this,STTorpC *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 extraout_var;
  int iVar7;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined4 *puVar8;
  uint uVar9;
  bool bVar10;
  undefined4 uVar11;
  uint local_8;
  
  if ((param_1 == (STTorpC *)0x0) || (param_1 == (STTorpC *)0x1)) {
    puVar8 = (undefined4 *)((int)this + 0x2cc);
    for (iVar6 = 0x17; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(undefined4 *)((int)this + 0x2c4) = 0;
    *(undefined4 *)((int)this + 0x82e) = 0xffffffff;
    *(undefined4 *)((int)this + 0x836) = 3;
  }
  if ((*(int *)((int)this + 0x82e) == -1) &&
     (iVar6 = *(int *)((int)this + 0x836) + -1, *(int *)((int)this + 0x836) = iVar6, iVar6 == 0)) {
    *(undefined4 *)((int)this + 0x82e) = 0;
  }
  if (*(int *)((int)this + 0x82e) == 0) {
    uVar2 = *(uint *)((int)this + 0x836) & 0x80000001;
    bVar10 = uVar2 == 0;
    if ((int)uVar2 < 0) {
      bVar10 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if ((((bVar10) && (DAT_007fa134 != 0)) && (uVar2 = *(uint *)(DAT_007fa130 + 0xc), uVar2 != 0))
       && (uVar9 = 0, iVar6 = DAT_007fa134, uVar2 != 0)) {
      do {
        FUN_006acc70(DAT_007fa130,uVar9,&param_1);
        if (param_1 != (STTorpC *)0x0) {
          iVar6 = iVar6 + -1;
          iVar3 = STTorpC::IsDangerous(param_1,*(int *)((int)this + 0x18),&local_8);
          if (iVar3 != 2) {
            if (iVar3 == 0) {
              iVar3 = thunk_FUN_004838e0(this,(int)param_1);
              if (iVar3 == 1) {
                STTorpC::SetDangerous(param_1,*(undefined4 *)((int)this + 0x18),&local_8);
LAB_004604c9:
                iVar3 = thunk_FUN_00483e30(this,(int)param_1);
                if (iVar3 == 1) {
                  STTorpC::ClearDangerous(param_1,*(int *)((int)this + 0x18),local_8);
                  *(STTorpC **)((int)this + 0x46b) = param_1;
                  *(undefined2 *)((int)this + 0x46f) = param_1->field_026E;
                  uVar4 = *(undefined4 *)&param_1->field_0x18;
                  *(undefined4 *)((int)this + 0x471) = uVar4;
                  sVar1 = *(short *)((int)this + 0x4b);
                  uVar4 = CONCAT22((short)((uint)uVar4 >> 0x10),sVar1);
                  if (sVar1 == 0) {
                    iVar3 = *(int *)this;
                    *(undefined2 *)((int)this + 0x469) = 1;
                    uVar5 = extraout_var;
                    uVar11 = 1;
LAB_00460581:
                    iVar6 = (**(code **)(iVar3 + 0x18))
                                      (CONCAT22(uVar5,*(undefined2 *)((int)this + 0x47)),
                                       CONCAT22((short)((uint)uVar4 >> 0x10),
                                                *(undefined2 *)((int)this + 0x49)),uVar11);
                    if (iVar6 != 1) break;
                    iVar7 = (int)*(short *)((int)this + 0x49);
                    *(undefined4 *)((int)this + 0x82e) = 1;
                    iVar6 = (int)*(short *)((int)this + 0x469) + (int)*(short *)((int)this + 0x4b);
                    iVar3 = (int)*(short *)((int)this + 0x47);
                  }
                  else if (sVar1 == 4) {
                    *(undefined2 *)((int)this + 0x469) = 0xffff;
                    iVar6 = (**(code **)(*(int *)this + 0x18))
                                      (CONCAT22(extraout_var_02,*(undefined2 *)((int)this + 0x47)),
                                       CONCAT22(extraout_var,*(undefined2 *)((int)this + 0x49)),3);
                    if (iVar6 != 1) break;
                    iVar7 = (int)*(short *)((int)this + 0x49);
                    *(undefined4 *)((int)this + 0x82e) = 1;
                    iVar6 = (int)*(short *)((int)this + 0x469) + (int)*(short *)((int)this + 0x4b);
                    iVar3 = (int)*(short *)((int)this + 0x47);
                  }
                  else {
                    iVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d;
                    uVar2 = iVar3 + 0x3039;
                    *(uint *)((int)this + 0x1c) = uVar2;
                    *(ushort *)((int)this + 0x469) = (ushort)(uVar2 >> 0x10) & 1;
                    iVar6 = (-(uint)((uVar2 & 0x10000) != 0) & 2) - 1;
                    sVar1 = (short)iVar6;
                    *(short *)((int)this + 0x469) = sVar1;
                    uVar5 = (undefined2)((uint)iVar6 >> 0x10);
                    iVar6 = (**(code **)(*(int *)this + 0x18))
                                      (CONCAT22(uVar5,*(undefined2 *)((int)this + 0x47)),
                                       CONCAT22((short)((uint)iVar3 >> 0x10),
                                                *(undefined2 *)((int)this + 0x49)),
                                       CONCAT22(uVar5,sVar1 + *(short *)((int)this + 0x4b)));
                    if (iVar6 != 1) {
                      sVar1 = *(short *)((int)this + 0x469);
                      iVar3 = *(int *)this;
                      *(short *)((int)this + 0x469) = -sVar1;
                      uVar4 = CONCAT22((short)((uint)iVar6 >> 0x10),
                                       -sVar1 + *(short *)((int)this + 0x4b));
                      uVar5 = extraout_var_00;
                      uVar11 = uVar4;
                      goto LAB_00460581;
                    }
                    iVar6 = (int)*(short *)((int)this + 0x469) + (int)*(short *)((int)this + 0x4b);
                    *(undefined4 *)((int)this + 0x82e) = 1;
                    iVar7 = (int)*(short *)((int)this + 0x49);
                    iVar3 = (int)*(short *)((int)this + 0x47);
                  }
                  STBoatC::sub_00481520(this,iVar3,iVar7,iVar6);
                  iVar6 = STBoatC::sub_0045FF50(this,0);
                  if (iVar6 == -1) {
                    return -1;
                  }
                  break;
                }
              }
              else {
                STTorpC::ClearDangerous(param_1,*(int *)((int)this + 0x18),local_8);
              }
            }
            else if (iVar3 == 1) goto LAB_004604c9;
          }
          if (iVar6 == 0) break;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar2);
    }
    *(int *)((int)this + 0x836) = *(int *)((int)this + 0x836) + 1;
  }
  if (*(int *)((int)this + 0x82e) == 1) {
    *(int *)((int)this + 0x836) = *(int *)((int)this + 0x836) + 1;
    iVar6 = STBoatC::sub_0045FF50(this,2);
    if (iVar6 == -1) {
      return -1;
    }
    if (iVar6 == 0) {
      *(undefined4 *)((int)this + 0x82e) = 2;
    }
    else if (iVar6 == 3) {
      *(undefined4 *)((int)this + 0x82e) = 0;
    }
  }
  if ((*(int *)((int)this + 0x82e) == 2) && (iVar6 = thunk_FUN_00483f10((int)this), iVar6 == 1)) {
    sVar1 = *(short *)((int)this + 0x469);
    *(short *)((int)this + 0x469) = -sVar1;
    iVar6 = (**(code **)(*(int *)this + 0x18))
                      (CONCAT22(extraout_var_01,*(undefined2 *)((int)this + 0x47)),
                       *(undefined2 *)((int)this + 0x49),-sVar1 + *(short *)((int)this + 0x4b));
    if (iVar6 == 1) {
      *(undefined4 *)((int)this + 0x82e) = 3;
      STBoatC::sub_00481520
                (this,(int)*(short *)((int)this + 0x47),(int)*(short *)((int)this + 0x49),
                 (int)*(short *)((int)this + 0x469) + (int)*(short *)((int)this + 0x4b));
      iVar6 = STBoatC::sub_0045FF50(this,0);
      if (iVar6 == -1) {
        return -1;
      }
    }
    else {
      *(short *)((int)this + 0x469) = -*(short *)((int)this + 0x469);
    }
  }
  if (*(int *)((int)this + 0x82e) == 3) {
    *(int *)((int)this + 0x836) = *(int *)((int)this + 0x836) + 1;
    iVar6 = STBoatC::sub_0045FF50(this,2);
    if (iVar6 == -1) {
      return -1;
    }
    if ((iVar6 == 0) || (iVar6 == 3)) {
      *(undefined4 *)((int)this + 0x82e) = 0;
    }
  }
  iVar6 = (**(code **)(*(int *)this + 0xd8))();
  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
}


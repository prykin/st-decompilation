
undefined4 __fastcall FUN_004b8c80(int *param_1)

{
  STT3DSprC *pSVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  void *unaff_EDI;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 local_2c [2];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  AnonShape_0060D340_D77FEBE7 *local_c;
  int local_8;
  
  iVar2 = *(int *)((int)param_1 + 0x245);
  local_8 = 0;
  if (iVar2 == 1) {
    if (*(int *)((int)param_1 + 0x5df) == 5) {
      if (param_1[0x133] + 2U <= (uint)PTR_00802a38->field_00E4) {
        param_1[0x133] = PTR_00802a38->field_00E4;
        iVar2 = param_1[0x132] + 1;
        param_1[0x132] = iVar2;
        if (*(short *)(DAT_00806724 + 0x23) + -1 <= iVar2) {
          local_18 = param_1[2];
          local_24 = *(undefined4 *)(param_1[3] + 0x14);
          local_20 = 0;
          local_1c = 10;
          STJellyGunC::sub_006E60A0((STJellyGunC *)param_1,local_2c);
          return 0;
        }
        thunk_FUN_004ace30((void *)((int)param_1 + 0x1d5),*(uint *)(DAT_00806724 + 0x30 + iVar2 * 4)
                           ,(int)*(short *)(DAT_00806724 + 0x2c));
        return 0;
      }
    }
    else {
      pSVar1 = (STT3DSprC *)((int)param_1 + 0x1d5);
      iVar2 = thunk_FUN_004ac910(pSVar1,'\x04');
      if ((*(int *)(*(int *)((int)param_1 + 0x1f5) + 0xa4) <= iVar2) &&
         (iVar2 = thunk_FUN_004ac910(pSVar1,'\x05'),
         *(int *)(*(int *)((int)param_1 + 0x1f5) + 200) <= iVar2)) {
        local_18 = param_1[2];
        local_24 = *(undefined4 *)(param_1[3] + 0x14);
        local_20 = 0;
        local_1c = 10;
        STJellyGunC::sub_006E60A0((STJellyGunC *)param_1,local_2c);
        return 0;
      }
      (**(code **)(*param_1 + 0xd8))();
      iVar2 = thunk_FUN_004ac910(pSVar1,'\x04');
      if (iVar2 == *(int *)(&DAT_007cdf52 +
                           *(int *)(&DAT_0079125c + *(int *)((int)param_1 + 0x235) * 4) * 0x32)) {
        STT3DSprC::StopShow(pSVar1,0xe);
        STT3DSprC::StopShow(pSVar1,0xd);
        STT3DSprC::StopShow(pSVar1,0xc);
        STT3DSprC::StopShow(pSVar1,9);
        STT3DSprC::StopShow(pSVar1,8);
        STT3DSprC::StopShow(pSVar1,7);
        STT3DSprC::StopShow(pSVar1,0x10);
        if (*(int *)(&DAT_00791a10 + *(int *)((int)param_1 + 0x235) * 4) != 0) {
          thunk_FUN_004cbf70((int)param_1);
        }
        uVar5 = (uint)(*(int *)((int)param_1 + 0x24d) == 4);
        uVar3 = thunk_FUN_004406c0((char)param_1[9]);
        thunk_FUN_0062b830((int)*(short *)((int)param_1 + 0x41),(int)*(short *)((int)param_1 + 0x43)
                           ,(int)*(short *)((int)param_1 + 0x45),param_1[0x16b],param_1,0xffffffff,
                           0xffffffff,uVar3 & 0xff,uVar5);
        return 0;
      }
      iVar2 = *(int *)(&DAT_0079125c + *(int *)((int)param_1 + 0x235) * 4);
      iVar4 = thunk_FUN_004ac910(pSVar1,'\x04');
      if (iVar4 == *(int *)(&DAT_007cdf5a + iVar2 * 0x32)) {
        iVar2 = STT3DSprC::LoadSequence
                          (pSVar1,5,DAT_00806764,s_expl_bbt0_007cdf3a + iVar2 * 0x32,0x1d);
        if (iVar2 != 0) {
          return 0xffff;
        }
        STT3DSprC::StartShow(pSVar1,5,PTR_00802a38->field_00E4);
      }
    }
    return 0;
  }
  if (iVar2 == 5) {
    if (((*(int *)((int)param_1 + 0x299) != 0) &&
        (iVar2 = thunk_FUN_004ac910((void *)((int)param_1 + 0x1d5),'\x0e'),
        *(int *)(*(int *)((int)param_1 + 0x1f5) + 0x208) + *(int *)((int)param_1 + 0x2a1) <= iVar2))
       && (*(int *)((int)param_1 + 0x29d) == 0)) {
      thunk_FUN_004c4550(param_1,(int *)0x0);
    }
  }
  else if (iVar2 == 6) {
    if (param_1[0x12f] != 4) {
      iVar2 = thunk_FUN_004406c0(*(char *)((int)param_1 + 0x23d));
      if ((char)iVar2 == '\x03') {
        uVar3 = thunk_FUN_004406c0(*(char *)((int)param_1 + 0x23d));
        if ((uint)PTR_00802a38->field_00E4 <
            (uint)(*(int *)(&DAT_007e3dc0 +
                           ((uVar3 & 0xff) + *(int *)((int)param_1 + 0x235) * 3) * 4) / 3 +
                  param_1[0x12e])) goto cf_common_exit_004B9130;
      }
      else {
        iVar2 = thunk_FUN_004ac910((void *)((int)param_1 + 0x1d5),'\x05');
        if (iVar2 != *(int *)(*(int *)((int)param_1 + 0x1f5) + 200)) goto cf_common_exit_004B9130;
        iVar2 = param_1[0x12f];
        if (iVar2 == 1) {
          param_1[0x12f] = 2;
          TLOBaseTy::LoadImages((TLOBaseTy *)param_1,unaff_EDI);
          (**(code **)(*param_1 + 0xd8))();
          return 0;
        }
        if (iVar2 == 2) {
          uVar3 = thunk_FUN_004406c0(*(char *)((int)param_1 + 0x23d));
          if ((uint)(*(int *)(&DAT_007e3dc0 +
                             ((uVar3 & 0xff) + *(int *)((int)param_1 + 0x235) * 3) * 4) / 3 +
                    param_1[0x12e]) <= (uint)PTR_00802a38->field_00E4) {
            pvVar6 = (void *)0x3;
            (**(code **)(*param_1 + 0x90))(3,0x361);
            param_1[0x12f] = 3;
            TLOBaseTy::LoadImages((TLOBaseTy *)param_1,pvVar6);
            (**(code **)(*param_1 + 0x90))(3,0x361);
            (**(code **)(*param_1 + 0xd8))();
            return 0;
          }
          goto cf_common_exit_004B9130;
        }
        if (iVar2 != 3) goto cf_common_exit_004B9130;
      }
      param_1[0x12f] = 4;
      TLOBaseTy::LoadImages((TLOBaseTy *)param_1,unaff_EDI);
      (**(code **)(*param_1 + 0x90))(3,0x362);
cf_common_exit_004B9130:
      (**(code **)(*param_1 + 0xd8))();
      return 0;
    }
    pSVar1 = (STT3DSprC *)((int)param_1 + 0x1d5);
    iVar2 = thunk_FUN_004ac910(pSVar1,'\x04');
    if (iVar2 == 0x15) {
      STT3DSprC::StopShow(pSVar1,0xe);
      STT3DSprC::StopShow(pSVar1,0xd);
      STT3DSprC::StopShow(pSVar1,0xc);
      STT3DSprC::StopShow(pSVar1,9);
      STT3DSprC::StopShow(pSVar1,8);
      STT3DSprC::StopShow(pSVar1,7);
      STT3DSprC::StopShow(pSVar1,0x10);
      if (*(int *)(&DAT_00791a10 + *(int *)((int)param_1 + 0x235) * 4) != 0) {
        thunk_FUN_004cbf70((int)param_1);
      }
      thunk_FUN_004cc900((AnonShape_004CC900_31EE9CAA *)param_1);
      STT3DSprC::StopShow(pSVar1,5);
      iVar2 = (**(code **)(*param_1 + 8))();
      if (iVar2 != 0) {
        (**(code **)(*param_1 + 0xe8))(0);
        (**(code **)(*param_1 + 0xd8))();
        return 0;
      }
      goto cf_common_exit_004B9130;
    }
    iVar2 = thunk_FUN_004ac910(pSVar1,'\x04');
    if (iVar2 != *(int *)(*(int *)((int)param_1 + 0x1f5) + 0xa4)) goto cf_common_exit_004B9130;
    if (*(int *)(&DAT_007e1c50 +
                (*(int *)((int)param_1 + 0x235) * 3 + *(int *)((int)param_1 + 0x239)) * 4) != 0) {
      thunk_FUN_004d88f0((char)param_1[9],
                         (*(int *)((int)param_1 + 0x5d7) *
                          *(int *)(&DAT_007e1c50 +
                                  (*(int *)((int)param_1 + 0x235) * 3 +
                                  *(int *)((int)param_1 + 0x239)) * 4) * 0x3c) / 10000);
    }
    if (*(int *)(&DAT_007e24fc +
                (*(int *)((int)param_1 + 0x235) * 3 + *(int *)((int)param_1 + 0x239)) * 4) != 0) {
      thunk_FUN_004d8a30((char)param_1[9],
                         (*(int *)((int)param_1 + 0x5d7) *
                          *(int *)(&DAT_007e24fc +
                                  (*(int *)((int)param_1 + 0x235) * 3 +
                                  *(int *)((int)param_1 + 0x239)) * 4) * 0x3c) / 10000);
    }
    if (*(int *)(&DAT_008545ac +
                (*(int *)((int)param_1 + 0x235) * 3 + *(int *)((int)param_1 + 0x239)) * 4) != 0) {
      thunk_FUN_004d87b0((char)param_1[9],
                         (*(int *)((int)param_1 + 0x5d7) *
                          *(int *)(&DAT_008545ac +
                                  (*(int *)((int)param_1 + 0x235) * 3 +
                                  *(int *)((int)param_1 + 0x239)) * 4) * 0x3c) / 10000);
    }
    if (*(int *)(&DAT_007e3160 +
                (*(int *)((int)param_1 + 0x235) * 3 + *(int *)((int)param_1 + 0x239)) * 4) != 0) {
      thunk_FUN_004e4380(param_1[9],
                         (*(int *)((int)param_1 + 0x5d7) *
                          *(int *)(&DAT_007e3160 +
                                  (*(int *)((int)param_1 + 0x235) * 3 +
                                  *(int *)((int)param_1 + 0x239)) * 4) * 0x3c) / 10000);
    }
    thunk_FUN_004d78e0((char)param_1[9]);
    if (param_1[9] == (uint)*(byte *)(param_1[4] + 0x112d)) {
      thunk_FUN_004d8b70((char)param_1[9]);
    }
    if (param_1[9] != (uint)*(byte *)(param_1[4] + 0x112d)) goto cf_common_exit_004B8F5A;
    thunk_FUN_0052af50(0,*(float *)((int)param_1 + 0x1f9),*(float *)((int)param_1 + 0x1fd));
    uVar3 = thunk_FUN_004406c0((char)param_1[9]);
    uVar3 = uVar3 & 0xff;
    if (uVar3 == 1) {
      iVar2 = *param_1;
      uVar7 = 0x68;
    }
    else {
      if (uVar3 == 2) {
        (**(code **)(*param_1 + 0x90))(6,0x69);
        goto cf_common_exit_004B8F5A;
      }
      if (uVar3 != 3) goto cf_common_exit_004B8F5A;
      iVar2 = *param_1;
      uVar7 = 0x6a;
    }
    (**(code **)(iVar2 + 0x90))(6,uVar7);
cf_common_exit_004B8F5A:
    *(undefined4 *)((int)param_1 + 0x241) = 0;
    *(undefined4 *)((int)param_1 + 0x5d7) = 0;
    *(undefined4 *)((int)param_1 + 0x5df) = 1;
    TLOBaseTy::SetState((TLOBaseTy *)param_1,1,0);
    local_18 = param_1[2];
    local_24 = *(undefined4 *)(param_1[3] + 0x14);
    local_20 = 0;
    local_1c = 10;
    STJellyGunC::sub_006E60A0((STJellyGunC *)param_1,local_2c);
    (**(code **)(*param_1 + 0xd8))();
    return 0;
  }
  if (((*(int *)((int)param_1 + 0x255) == 0) || (*(int *)((int)param_1 + 0x245) != 0)) ||
     (*(int *)((int)param_1 + 0x249) != 2)) {
    if (*(int *)((int)param_1 + 0x245) != 4) {
      iVar2 = thunk_FUN_004ac910((void *)((int)param_1 + 0x1d5),'\x0e');
      if (((iVar2 == *(int *)(*(int *)((int)param_1 + 0x1f5) + 0x20c)) &&
          (local_8 = 1, param_1[0x16b] == 0x65)) &&
         ((param_1[0x102] != 0 &&
          ((param_1[0x103] != 0 &&
           (iVar2 = FUN_006e62d0(PTR_00802a38,param_1[0x103],(int *)&local_c), iVar2 == 0)))))) {
        thunk_FUN_0060d340(local_c);
        (**(code **)(*param_1 + 0x90))(3,0x3d9);
      }
      if (*(int *)(&DAT_00791a10 + *(int *)((int)param_1 + 0x235) * 4) != 0) {
        local_8 = thunk_FUN_004cc130((int)param_1);
      }
      goto cf_common_join_004B92EE;
    }
    if (param_1[0xf7] != 0) goto cf_common_join_004B92EE;
  }
  else {
    if ((uint)PTR_00802a38->field_00E4 <
        (uint)(*(int *)(&DAT_00792040 + *(int *)((int)param_1 + 0x235) * 4) +
              *(int *)((int)param_1 + 0x285))) goto cf_common_join_004B92EE;
    *(undefined4 *)((int)param_1 + 0x285) = PTR_00802a38->field_00E4;
    iVar2 = *(int *)((int)param_1 + 0x259) / 0xf;
    if (*(int *)(&DAT_007be8c8 + iVar2 * 0x60) != 0) {
      iVar2 = (((*(int *)(&DAT_007be8c8 + iVar2 * 0x60) < 1) - 1 & 2) - 1) + iVar2;
      if (iVar2 < 0x18) {
        if (iVar2 < 0) {
          iVar2 = 0x17;
        }
        thunk_FUN_004b98e0(param_1,iVar2 * 0xf);
      }
      else {
        thunk_FUN_004b98e0(param_1,0);
      }
      goto cf_common_join_004B92EE;
    }
  }
  local_8 = 1;
cf_common_join_004B92EE:
  pvVar6 = (void *)((int)param_1 + 0x1d5);
  iVar2 = thunk_FUN_004acd30(pvVar6,'\x0e');
  iVar4 = thunk_FUN_004acd30(pvVar6,'\r');
  if (((iVar4 < iVar2) && (iVar2 = thunk_FUN_004acd30(pvVar6,'\r'), 1 < iVar2)) &&
     (iVar2 = thunk_FUN_004cba10(), iVar2 == 2)) {
    iVar2 = *(int *)((int)param_1 + 0x1f5);
    iVar4 = *(int *)(iVar2 + 0x208);
    if (iVar4 < *(int *)(iVar2 + 0x20c)) {
      iVar4 = *(int *)(iVar2 + 0x210) - iVar4;
    }
    else {
      iVar4 = iVar4 - *(int *)(iVar2 + 0x210);
    }
    local_c = (AnonShape_0060D340_D77FEBE7 *)thunk_FUN_004acd30(pvVar6,'\x0e');
    iVar2 = thunk_FUN_004acd30(pvVar6,'\r');
    if (((int)local_c + (-1 - iVar2) <= iVar4) && ((*(uint *)((int)param_1 + 0x1f1) & 0x2000) == 0))
    {
      thunk_FUN_004ca7b0(param_1,0xd,0);
    }
  }
  if ((local_8 != 0) &&
     (iVar2 = thunk_FUN_004b8c00((AnonShape_004B8C00_93076312 *)param_1),
     iVar2 != *(int *)((int)param_1 + 0x245))) {
    TLOBaseTy::SetState((TLOBaseTy *)param_1,iVar2,1);
  }
  if ((*(int *)((int)param_1 + 0x5df) != 0) &&
     (param_1[0x133] + 2U <= (uint)PTR_00802a38->field_00E4)) {
    param_1[0x133] = PTR_00802a38->field_00E4;
    iVar2 = param_1[0x132] + -1;
    param_1[0x132] = iVar2;
    if (iVar2 == 0) {
      iVar4 = 0;
      *(undefined4 *)((int)param_1 + 0x5df) = 0;
      uVar3 = 0;
    }
    else {
      iVar4 = (int)*(short *)(DAT_00806724 + 0x2c);
      uVar3 = *(uint *)(DAT_00806724 + 0x30 + iVar2 * 4);
    }
    thunk_FUN_004ace30((void *)((int)param_1 + 0x1d5),uVar3,iVar4);
  }
  (**(code **)(*param_1 + 0xd8))();
  return 0;
}


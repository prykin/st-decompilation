
void __fastcall FUN_005f6f60(int *param_1)

{
  STT3DSprC *this;
  short sVar1;
  undefined1 uVar2;
  bool bVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_00;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined2 uVar12;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  uint local_20;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  short local_a;
  short local_8;
  short local_6;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)((int)param_1 + 0x2dd)) {
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 1:
    if ((*(uint *)((int)param_1 + 0x2e1) <= PTR_00802a38->field_00E4) &&
       (*(int *)((int)param_1 + 0x2ea) == 0)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)((int)param_1 + 0x2b7) < 0) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar5 = thunk_FUN_005f8650(param_1,*(int *)((int)param_1 + 0x245),
                                   *(int *)((int)param_1 + 0x249),*(int *)((int)param_1 + 0x24d));
        if (iVar5 != 0) {
          uVar6 = thunk_FUN_005f6ad0();
          *(char *)((int)param_1 + 0x2b6) = (char)uVar6;
          if ((char)uVar6 != '\0') {
            STColl3C::LoadImagSpr((STColl3C *)param_1,1);
          }
          *(undefined1 *)((int)param_1 + 699) = 1;
          *(undefined1 *)((int)param_1 + 0x29d) = 1;
          *(undefined4 *)((int)param_1 + 0x2dd) = 2;
          *(undefined1 *)((int)param_1 + 0x2e5) = 0;
          return;
        }
      }
      else {
        iVar5 = thunk_FUN_005fa8b0(param_1,(int *)((int)param_1 + 0x27d),
                                   (int *)((int)param_1 + 0x281),(int *)((int)param_1 + 0x285));
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (((iVar5 != 0) && (iVar5 = thunk_FUN_005f89f0(param_1,2), iVar5 != 0)) &&
           (iVar5 = thunk_FUN_00417a20(param_1,*(short *)((int)param_1 + 0x291),
                                       *(short *)((int)param_1 + 0x295),
                                       *(short *)((int)param_1 + 0x299),1), iVar5 == 0)) {
          *(undefined4 *)((int)param_1 + 0x2dd) = 3;
          thunk_FUN_004ad5e0((int)param_1 + 0x1d5);
          *(undefined1 *)((int)param_1 + 699) = 2;
          iVar5 = *(short *)(DAT_00806724 + 0x23) + -1;
          *(int *)((int)param_1 + 0x2d1) = iVar5;
          thunk_FUN_004ace30((void *)((int)param_1 + 0x1d5),
                             *(uint *)(DAT_00806724 + 0x30 + iVar5 * 4),
                             (int)*(short *)(DAT_00806724 + 0x2c));
          thunk_FUN_005fada0(param_1,0,0,2);
          if (param_1[0xa8] == 0) {
            *(undefined1 *)((int)param_1 + 0x29f) = 0;
            return;
          }
        }
      }
    }
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 2:
    if (*(char *)((int)param_1 + 0x2e5) != '\0') {
      *(undefined4 *)((int)param_1 + 0x2dd) = 1;
      return;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)((int)param_1 + 0x2ea) != 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(char *)((int)param_1 + 0x29e) != '\0') {
        thunk_FUN_005f9450((AnonShape_005F9450_64149E40 *)param_1);
      }
      if (param_1[0xa8] < 1) goto cf_common_exit_005F7A68;
      *(undefined1 *)((int)param_1 + 0x29f) = 1;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + 0x29f) == '\0') {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(char *)((int)param_1 + 0x29e) == '\0') {
        if ((PTR_00802a38->field_00E4 + param_1[6] & 3) != 0) {
          return;
        }
        uVar2 = thunk_FUN_005f9310(param_1,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if (CONCAT31(extraout_var,uVar2) != 0) {
          *(undefined4 *)((int)param_1 + 0x28d) = 0;
          return;
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar5 = *(int *)((int)param_1 + 0x28d) + 1;
        *(int *)((int)param_1 + 0x28d) = iVar5;
        if (iVar5 < 6) {
          if (iVar5 < 0xb) {
            return;
          }
          goto LAB_005f744e;
        }
        iVar5 = thunk_FUN_005f89f0(param_1,2);
        if (iVar5 == 0) {
          return;
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar5 = thunk_FUN_00417a20(param_1,*(short *)((int)param_1 + 0x291),
                                   *(short *)((int)param_1 + 0x295),*(short *)((int)param_1 + 0x299)
                                   ,1);
        if (iVar5 != 0) {
          return;
        }
        *(undefined4 *)((int)param_1 + 0x2dd) = 3;
        thunk_FUN_004ad5e0((int)param_1 + 0x1d5);
        *(undefined1 *)((int)param_1 + 699) = 2;
        sVar1 = *(short *)(DAT_00806724 + 0x23);
        goto LAB_005f7400;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar5 = thunk_FUN_005f88d0(param_1,*(int *)((int)param_1 + 0x289),0,(int *)0x0,
                                 (undefined4 *)0x0,(undefined4 *)0x0);
      if (iVar5 == 0) {
        thunk_FUN_005f9450((AnonShape_005F9450_64149E40 *)param_1);
        return;
      }
      iVar5 = thunk_FUN_005f89f0(param_1,2);
      if (iVar5 == 0) {
        return;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar5 = thunk_FUN_00417a20(param_1,*(short *)((int)param_1 + 0x291),
                                 *(short *)((int)param_1 + 0x295),*(short *)((int)param_1 + 0x299),1
                                );
      if (iVar5 != 0) {
        return;
      }
      *(undefined4 *)((int)param_1 + 0x2dd) = 3;
      thunk_FUN_004ad5e0((int)param_1 + 0x1d5);
      *(undefined1 *)((int)param_1 + 699) = 2;
      iVar5 = *(short *)(DAT_00806724 + 0x23) + -1;
      *(int *)((int)param_1 + 0x2d1) = iVar5;
      thunk_FUN_004ace30((void *)((int)param_1 + 0x1d5),*(uint *)(DAT_00806724 + 0x30 + iVar5 * 4),
                         (int)*(short *)(DAT_00806724 + 0x2c));
      thunk_FUN_005fada0(param_1,0,0,2);
      *(undefined1 *)((int)param_1 + 699) = 1;
      *(undefined1 *)((int)param_1 + 0x29d) = 0;
    }
    else {
      iVar5 = thunk_FUN_005fa8b0(param_1,(int *)((int)param_1 + 0x27d),(int *)((int)param_1 + 0x281)
                                 ,(int *)((int)param_1 + 0x285));
      if (iVar5 == 0) {
LAB_005f744e:
        thunk_FUN_005faff0(param_1,200);
        return;
      }
      iVar5 = thunk_FUN_005f89f0(param_1,2);
      if (iVar5 == 0) {
        return;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar5 = thunk_FUN_00417a20(param_1,*(short *)((int)param_1 + 0x291),
                                 *(short *)((int)param_1 + 0x295),*(short *)((int)param_1 + 0x299),1
                                );
      if (iVar5 != 0) {
        return;
      }
      *(undefined4 *)((int)param_1 + 0x2dd) = 3;
      thunk_FUN_004ad5e0((int)param_1 + 0x1d5);
      *(undefined1 *)((int)param_1 + 699) = 2;
      sVar1 = *(short *)(DAT_00806724 + 0x23);
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_005f7400:
      *(int *)((int)param_1 + 0x2d1) = sVar1 + -1;
      thunk_FUN_004ace30((void *)((int)param_1 + 0x1d5),
                         *(uint *)(DAT_00806724 + 0x30 + (sVar1 + -1) * 4),
                         (int)*(short *)(DAT_00806724 + 0x2c));
      thunk_FUN_005fada0(param_1,0,0,2);
      if (param_1[0xa8] == 0) {
        *(undefined1 *)((int)param_1 + 0x29f) = 0;
      }
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar5 = thunk_FUN_005f8650(param_1,(int)(short)(*(short *)((int)param_1 + 0x291) * 0xc9 + 100),
                               (int)(short)(*(short *)((int)param_1 + 0x295) * 0xc9 + 100),
                               (int)(short)(*(short *)((int)param_1 + 0x299) * 200 + 100));
    if (iVar5 != 0) {
      thunk_FUN_005f6df0(param_1);
      thunk_FUN_004ad460((void *)((int)param_1 + 0x1d5),0);
      thunk_FUN_0041c3f0(param_1,(undefined *)0x2);
      *(undefined1 *)((int)param_1 + 699) = 2;
      iVar5 = *(short *)(DAT_00806724 + 0x23) + -1;
      *(int *)((int)param_1 + 0x2d1) = iVar5;
      thunk_FUN_004ace30((void *)((int)param_1 + 0x1d5),*(uint *)(DAT_00806724 + 0x30 + iVar5 * 4),
                         (int)*(short *)(DAT_00806724 + 0x2c));
      return;
    }
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 3:
    *(int *)(*(int *)((int)param_1 + 0x2e6) + 0x20) =
         *(int *)(*(int *)((int)param_1 + 0x2e6) + 0x20) + 1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(*(int *)((int)param_1 + 0x2e6) + 0x20) < 0x23) {
      thunk_FUN_005f9e40((AnonShape_005F9E40_7E333F34 *)param_1);
    }
    else {
      *(undefined4 *)((int)param_1 + 0x2dd) = 4;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar4 = *(uint *)(*(int *)((int)param_1 + 0x2e6) + 4);
      if (-1 < (int)uVar4) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006EA050::FUN_006ea050
                  (*(AnonReceiver_006EA050 **)((int)param_1 + 0x211),uVar4,1,0xffffffff,0);
        *(undefined4 *)(*(int *)((int)param_1 + 0x2e6) + 4) = 0xffffffff;
        thunk_FUN_005fa030((AnonShape_005F9F70_43CA4DAC *)param_1);
      }
    }
  case 4:
    iVar5 = thunk_FUN_005fa180((AnonShape_005FA180_2D8671A3 *)param_1);
    if (iVar5 < 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)((int)param_1 + 0x2ea) != 0) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(char *)((int)param_1 + 0x29e) != '\0') {
          thunk_FUN_005f9450((AnonShape_005F9450_64149E40 *)param_1);
        }
        if (param_1[0xa8] < 1) {
cf_common_exit_005F7A68:
          thunk_FUN_005fb100((AnonShape_005FB100_42251CC8 *)param_1);
          return;
        }
        *(undefined1 *)((int)param_1 + 0x29f) = 1;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(char *)((int)param_1 + 0x29e) == '\0') {
        *(undefined4 *)((int)param_1 + 0x2dd) = 0xc;
        *(undefined4 *)((int)param_1 + 0x2ef) = 0;
        *(undefined4 *)((int)param_1 + 0x76) = 1;
        *(uint *)((int)param_1 + 0x2d5) = PTR_00802a38->field_00E4;
        *(uint *)((int)param_1 + 0x2d9) = PTR_00802a38->field_00E4 + 0x32;
        return;
      }
      iVar5 = thunk_FUN_005f8cc0(param_1);
      if (-1 < iVar5) {
        if (iVar5 == 2) {
          *(uint *)((int)param_1 + 0x2dd) =
               /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
               (-(uint)(*(char *)((int)param_1 + 0x29f) != '\0') & 2) + 8;
          return;
        }
        *(undefined4 *)((int)param_1 + 0x2dd) = 5;
        *(undefined1 *)((int)param_1 + 0x29d) = 0;
        return;
      }
      *(undefined4 *)((int)param_1 + 0x2dd) = 0xc;
      *(undefined4 *)((int)param_1 + 0x2ef) = 0;
      *(undefined4 *)((int)param_1 + 0x76) = 1;
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_005f79aa:
      *(uint *)((int)param_1 + 0x2d5) = PTR_00802a38->field_00E4;
      *(uint *)((int)param_1 + 0x2d9) = PTR_00802a38->field_00E4 + 0x32;
      return;
    }
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 5:
    if (*(int *)((int)param_1 + 0x2ea) != 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*param_1 + 0x20))();
    }
    uVar6 = thunk_FUN_005f8d10(param_1);
    *(undefined4 *)((int)param_1 + 0x2dd) = uVar6;
    return;
  case 6:
    iVar5 = thunk_FUN_005fa180((AnonShape_005FA180_2D8671A3 *)param_1);
    if (*(short *)(DAT_00806724 + 0x23) <= iVar5) {
      *(undefined4 *)((int)param_1 + 0x2dd) = 2;
      return;
    }
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 7:
    if (*(uint *)((int)param_1 + 0x2e1) <= PTR_00802a38->field_00E4) {
      *(undefined1 *)((int)param_1 + 0x2ee) = 0;
      *(undefined4 *)((int)param_1 + 0x2dd) = 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      thunk_FUN_00495ff0(*(short *)((int)param_1 + 0x5b),*(short *)((int)param_1 + 0x5d),
                         *(short *)((int)param_1 + 0x5f),0,(AnonShape_00495FF0_59081BDD *)param_1);
      thunk_FUN_004ad430((int)param_1 + 0x1d5);
      *(undefined1 *)((int)param_1 + 699) = 0;
      thunk_FUN_0041c5a0((AnonShape_0041C5A0_167218F4 *)param_1);
      return;
    }
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 8:
    if (*(int *)((int)param_1 + 0x2ea) == 0) {
      STFishC::sub_004162B0((STFishC *)param_1,&local_8,&local_6,&local_a);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((int)local_8 != *(int *)((int)param_1 + 0x291)) {
        return;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((int)local_6 != *(int *)((int)param_1 + 0x295)) {
        return;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar5 = thunk_FUN_005f88d0(param_1,*(int *)((int)param_1 + 0x289),1,(int *)&local_24,&local_2c
                                 ,&local_28);
      if (iVar5 != 0) {
        iVar5 = STColl3C::CreateAddSpr((STColl3C *)param_1);
        if (iVar5 < 1) {
          return;
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        puVar8 = (undefined4 *)(*(int *)((int)param_1 + 0x2e6) + 8);
        for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar8 = *local_24;
          local_24 = local_24 + 1;
          puVar8 = puVar8 + 1;
        }
        *(undefined2 *)puVar8 = *(undefined2 *)local_24;
        *(undefined1 *)((int)param_1 + param_1[0xa8] * 6 + 0x2a4) = 1;
        *(undefined4 *)((int)param_1 + (param_1[0xa8] + 0x71) * 6) = local_28;
        *(char *)((int)param_1 + param_1[0xa8] * 6 + 0x2a5) = (char)param_1[9];
        if (iVar5 == 2) {
          **(undefined4 **)((int)param_1 + 0x2e6) = local_2c;
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (**(int **)((int)param_1 + 0x2e6) != 0) {
          uVar12 = 30000;
          uVar10 = 0;
          iVar7 = 0;
          iVar5 = 1;
          uVar9 = 0xe;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          uVar4 = thunk_FUN_004ad650(**(int **)((int)param_1 + 0x2e6));
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          FUN_006e9ef0(*(void **)((int)param_1 + 0x211),uVar4,uVar9,iVar5,iVar7,uVar10,uVar12);
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        thunk_FUN_005f8810(param_1,*(int *)((int)param_1 + 0x289));
        iVar5 = thunk_FUN_005f95b0((AnonShape_005F95B0_F363C582 *)param_1);
        if (iVar5 == 0) {
          return;
        }
        *(uint *)(*(int *)((int)param_1 + 0x2e6) + 0x68) = PTR_00802a38->field_00E4;
        *(undefined4 *)((int)param_1 + 0x2dd) = 9;
        *(undefined4 *)(*(int *)((int)param_1 + 0x2e6) + 100) = 1;
        *(undefined2 *)(*(int *)((int)param_1 + 0x2e6) + 0x32) = 0xffff;
        *(int *)(*(int *)((int)param_1 + 0x2e6) + 0x60) =
             *(int *)(*(int *)((int)param_1 + 0x2e6) + 0x5c) + -1;
        return;
      }
    }
    thunk_FUN_005f9450((AnonShape_005F9450_64149E40 *)param_1);
    *(undefined4 *)((int)param_1 + 0x2dd) = 0xc;
    *(uint *)((int)param_1 + 0x2d5) = PTR_00802a38->field_00E4;
    uVar4 = PTR_00802a38->field_00E4;
    *(undefined1 *)((int)param_1 + 699) = 1;
    *(undefined4 *)((int)param_1 + 0x2ef) = 0;
    *(uint *)((int)param_1 + 0x2d9) = uVar4 + 0x32;
    *(undefined4 *)((int)param_1 + 0x76) = 1;
    if (0 < param_1[0xa8]) {
      *(undefined1 *)((int)param_1 + 0x29f) = 1;
      return;
    }
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_005f7efc:
    *(undefined1 *)((int)param_1 + 0x29f) = 0;
    return;
  case 9:
    iVar5 = thunk_FUN_005f9cb0(param_1,PTR_00802a38->field_00E4,&local_14,&local_18,&local_10);
    if (iVar5 == 1) {
      *(int *)(*(int *)((int)param_1 + 0x2e6) + 0x14) = local_14;
      *(int *)(*(int *)((int)param_1 + 0x2e6) + 0x18) = local_18;
      *(int *)(*(int *)((int)param_1 + 0x2e6) + 0x1c) = local_10;
      *(int *)(*(int *)((int)param_1 + 0x2e6) + 0x20) =
           *(int *)(*(int *)((int)param_1 + 0x2e6) + 0x20) + 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar5 = *(int *)((int)param_1 + 0x2e6);
      if (*(int *)(iVar5 + 0x24) <= *(int *)(iVar5 + 0x20)) {
        *(undefined4 *)(iVar5 + 0x20) = 0;
      }
      thunk_FUN_005f9e40((AnonShape_005F9E40_7E333F34 *)param_1);
      return;
    }
    if (iVar5 == 3) {
      thunk_FUN_005fa030((AnonShape_005F9F70_43CA4DAC *)param_1);
      iVar5 = thunk_FUN_005fa8b0(param_1,(int *)((int)param_1 + 0x27d),(int *)((int)param_1 + 0x281)
                                 ,(int *)((int)param_1 + 0x285));
      if (iVar5 == 0) {
        *(int *)((int)param_1 + 0x281) = *(int *)((int)param_1 + 0x261);
        *(undefined4 *)((int)param_1 + 0x27d) = *(undefined4 *)((int)param_1 + 0x25d);
        *(int *)((int)param_1 + 0x285) = *(int *)((int)param_1 + 0x265);
        thunk_FUN_005f9450((AnonShape_005F9450_64149E40 *)param_1);
      }
      else {
        *(undefined1 *)((int)param_1 + 0x29e) = 1;
      }
      STFishC::sub_004162B0((STFishC *)param_1,&local_8,&local_6,&local_a);
      iVar5 = thunk_FUN_005fa360(param_1,(undefined4 *)local_1c,(int)local_8,(int)local_6,
                                 (int)local_a,&local_14,&local_18,&local_10);
      if (iVar5 != 0) {
        param_1[0xa8] = param_1[0xa8] + 1;
        iVar5 = thunk_FUN_005fb600(param_1);
        if (iVar5 == 0) {
          iVar5 = thunk_FUN_005fa7f0(param_1,local_14,local_18,local_10);
          if (iVar5 == 0) {
            return;
          }
          *(undefined4 *)((int)param_1 + 0x2dd) = 5;
          *(undefined1 *)((int)param_1 + 699) = 1;
          *(undefined1 *)((int)param_1 + 0x29d) = local_1c[0];
          *(undefined1 *)((int)param_1 + 0x29f) = 1;
          return;
        }
        *(undefined4 *)((int)param_1 + 0x2dd) = 0xc;
        *(uint *)((int)param_1 + 0x2d5) = PTR_00802a38->field_00E4;
        uVar4 = PTR_00802a38->field_00E4;
        *(undefined4 *)((int)param_1 + 0x2ef) = 0;
        *(undefined1 *)((int)param_1 + 699) = 1;
        *(uint *)((int)param_1 + 0x2d9) = uVar4 + 0x32;
        *(undefined4 *)((int)param_1 + 0x76) = 1;
        goto LAB_005f7efc;
      }
    }
    break;
  case 10:
    iVar5 = thunk_FUN_005f9050(param_1,&local_10,&local_20);
    if (iVar5 != 0) {
      *(undefined4 *)((int)param_1 + 0x2dd) = 0xb;
      thunk_FUN_005fada0(param_1,local_10,local_20,1);
      return;
    }
    *(undefined4 *)((int)param_1 + 0x2dd) = 0xc;
    *(undefined4 *)((int)param_1 + 0x76) = 1;
    *(undefined4 *)((int)param_1 + 0x2ef) = 0;
    goto LAB_005f79aa;
  case 0xb:
    bVar3 = thunk_FUN_005faee0((AnonShape_005FAEE0_B5D482C5 *)param_1);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    if (CONCAT31(extraout_var_00,bVar3) != 0) {
      iVar5 = param_1[0xa8];
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(char *)((int)param_1 + iVar5 * 6 + 0x29e) != '\0') {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        thunk_FUN_005f91e0(param_1,*(int *)((int)param_1 + (iVar5 * 3 + 0x150) * 2),iVar5 + -1);
        *(undefined1 *)((int)param_1 + param_1[0xa8] * 6 + 0x29e) = 0;
        iVar5 = param_1[0xa8];
        param_1[0xa8] = iVar5 + -1;
        if (0 < iVar5 + -1) {
          thunk_FUN_005fac40(param_1,1,1,0,0,0,0);
          return;
        }
      }
      thunk_FUN_005fa030((AnonShape_005F9F70_43CA4DAC *)param_1);
      *(undefined1 *)((int)param_1 + 0x29f) = 0;
      param_1[0xa8] = 0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)((int)param_1 + 0x2ea) != 0) goto cf_common_exit_005F7A68;
      thunk_FUN_005f9310(param_1,0);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(char *)((int)param_1 + 0x29e) == '\0') {
        iVar5 = thunk_FUN_005f89f0(param_1,2);
        if (iVar5 != 0) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          local_20 = thunk_FUN_005fa7f0(param_1,*(undefined4 *)((int)param_1 + 0x291),
                                        *(undefined4 *)((int)param_1 + 0x295),
                                        *(undefined4 *)((int)param_1 + 0x299));
          if (-1 < (int)local_20) {
            *(undefined4 *)((int)param_1 + 0x2dd) = 5;
            *(undefined1 *)((int)param_1 + 0x29d) = 3;
            thunk_FUN_005f9e40((AnonShape_005F9E40_7E333F34 *)param_1);
            return;
          }
          *(undefined4 *)((int)param_1 + 0x2dd) = 0xc;
          *(undefined4 *)((int)param_1 + 0x2ef) = 0;
          *(undefined4 *)((int)param_1 + 0x76) = 1;
          *(uint *)((int)param_1 + 0x2d5) = PTR_00802a38->field_00E4;
          *(uint *)((int)param_1 + 0x2d9) = PTR_00802a38->field_00E4 + 0x32;
          thunk_FUN_005f9e40((AnonShape_005F9E40_7E333F34 *)param_1);
          return;
        }
        *(undefined4 *)((int)param_1 + 0x2dd) = 0xc;
        *(undefined4 *)((int)param_1 + 0x2ef) = 0;
        *(undefined4 *)((int)param_1 + 0x76) = 1;
        *(uint *)((int)param_1 + 0x2d5) = PTR_00802a38->field_00E4;
        *(uint *)((int)param_1 + 0x2d9) = PTR_00802a38->field_00E4 + 0x32;
      }
      else {
        iVar5 = thunk_FUN_005f89f0(param_1,2);
        if (iVar5 != 0) {
          STFishC::sub_004162B0((STFishC *)param_1,&local_8,&local_6,&local_a);
          iVar5 = thunk_FUN_005fa360(param_1,(undefined4 *)local_1c,(int)local_8,(int)local_6,
                                     (int)local_a,&local_14,&local_18,&local_10);
          if ((iVar5 != 0) &&
             (iVar5 = thunk_FUN_005fa7f0(param_1,local_14,local_18,local_10), iVar5 != 0)) {
            *(undefined4 *)((int)param_1 + 0x2dd) = 5;
            *(undefined1 *)((int)param_1 + 699) = 1;
            *(undefined1 *)((int)param_1 + 0x29d) = local_1c[0];
            *(undefined1 *)((int)param_1 + 0x29f) = 0;
            *(undefined4 *)((int)param_1 + 0x76) = 0;
            thunk_FUN_005f9e40((AnonShape_005F9E40_7E333F34 *)param_1);
            return;
          }
        }
      }
    }
    thunk_FUN_005f9e40((AnonShape_005F9E40_7E333F34 *)param_1);
    return;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 0xc:
    if ((*(int *)((int)param_1 + 0x76) == 1) ||
       ((*(int *)((int)param_1 + 0x76) == 0 && (*(short *)((int)param_1 + 0x6e) != 0x2f)))) {
      thunk_FUN_00416390((AnonShape_00416390_86C8F938 *)param_1);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)((int)param_1 + 0x2ea) != 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(char *)((int)param_1 + 0x29e) != '\0') {
        thunk_FUN_005f9450((AnonShape_005F9450_64149E40 *)param_1);
      }
      if (param_1[0xa8] < 1) goto cf_common_exit_005F7A68;
      *(undefined1 *)((int)param_1 + 0x29f) = 1;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + 0x29f) == '\0') {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(char *)((int)param_1 + 0x29e) == '\0') {
        if ((param_1[6] + PTR_00802a38->field_00E4 & 3) == 0) {
          thunk_FUN_005f9310(param_1,0);
          return;
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((*(uint *)((int)param_1 + 0x2d9) < PTR_00802a38->field_00E4) &&
           (iVar5 = FUN_006acfd0(*(int *)((int)param_1 + 0x25d),*(int *)((int)param_1 + 0x261),
                                 (int)*(short *)((int)param_1 + 0x5b),
                                 (int)*(short *)((int)param_1 + 0x5d)), 3 < iVar5)) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar5 = *(int *)((int)param_1 + 0x2ef);
          if (iVar5 != 0) goto LAB_005f7927;
          iVar5 = thunk_FUN_005fa8b0(param_1,(int *)((int)param_1 + 0x27d),
                                     (int *)((int)param_1 + 0x281),(int *)((int)param_1 + 0x285));
          if (iVar5 == 0) goto cf_common_exit_005F76D2;
          STFishC::sub_004162B0((STFishC *)param_1,&local_8,&local_6,&local_a);
          iVar5 = thunk_FUN_005fa360(param_1,(undefined4 *)local_1c,(int)local_8,(int)local_6,
                                     (int)local_a,&local_14,&local_18,&local_10);
          if ((iVar5 != 0) &&
             (iVar5 = thunk_FUN_005fa7f0(param_1,local_14,local_18,local_10), iVar5 != 0)) {
            *(undefined4 *)((int)param_1 + 0x2dd) = 5;
            *(undefined1 *)((int)param_1 + 699) = 1;
            *(undefined4 *)((int)param_1 + 0x76) = 0;
            *(undefined1 *)((int)param_1 + 0x29d) = local_1c[0];
            *(undefined1 *)((int)param_1 + 0x29f) = 0;
            return;
          }
        }
      }
      else {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar5 = thunk_FUN_005f88d0(param_1,*(int *)((int)param_1 + 0x289),0,(int *)0x0,
                                   (undefined4 *)0x0,(undefined4 *)0x0);
        if ((iVar5 != 0) && (iVar5 = thunk_FUN_005f89f0(param_1,2), iVar5 != 0)) {
          STFishC::sub_004162B0((STFishC *)param_1,&local_8,&local_6,&local_a);
          iVar5 = thunk_FUN_005fa360(param_1,(undefined4 *)local_1c,(int)local_8,(int)local_6,
                                     (int)local_a,&local_14,&local_18,&local_10);
          if ((iVar5 != 0) &&
             (iVar5 = thunk_FUN_005fa7f0(param_1,local_14,local_18,local_10), iVar5 != 0)) {
            *(undefined4 *)((int)param_1 + 0x2dd) = 5;
            *(undefined1 *)((int)param_1 + 699) = 1;
            *(undefined4 *)((int)param_1 + 0x76) = 0;
            *(undefined1 *)((int)param_1 + 0x29d) = local_1c[0];
            *(undefined1 *)((int)param_1 + 0x29f) = 0;
            return;
          }
        }
      }
    }
    else if (param_1[0xa8] != 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar5 = *(int *)((int)param_1 + 0x2ef);
      if (iVar5 != 0) {
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_005f7927:
        *(int *)((int)param_1 + 0x2ef) = iVar5 + -1;
        return;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar5 = FUN_006acfd0(*(int *)((int)param_1 + 0x25d),*(int *)((int)param_1 + 0x261),
                           (int)*(short *)((int)param_1 + 0x5b),(int)*(short *)((int)param_1 + 0x5d)
                          );
      if (iVar5 < 4) {
        iVar5 = thunk_FUN_005fa8b0(param_1,(int *)((int)param_1 + 0x27d),
                                   (int *)((int)param_1 + 0x281),(int *)((int)param_1 + 0x285));
        if (iVar5 == 0) goto cf_common_exit_005F76D2;
        iVar5 = thunk_FUN_005f8cc0(param_1);
        if (-1 < iVar5) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if ((iVar5 == 2) && (*(char *)((int)param_1 + 0x29f) != '\0')) {
            *(undefined4 *)((int)param_1 + 0x76) = 0;
            *(undefined4 *)((int)param_1 + 0x2dd) = 10;
            return;
          }
          *(undefined1 *)((int)param_1 + 699) = 1;
          *(undefined4 *)((int)param_1 + 0x76) = 0;
          *(undefined1 *)((int)param_1 + 0x29d) = 0;
          *(undefined4 *)((int)param_1 + 0x2dd) = 5;
          return;
        }
      }
      else {
        iVar5 = thunk_FUN_005fa8b0(param_1,(int *)((int)param_1 + 0x27d),
                                   (int *)((int)param_1 + 0x281),(int *)((int)param_1 + 0x285));
        if (iVar5 != 0) {
          STFishC::sub_004162B0((STFishC *)param_1,&local_8,&local_6,&local_a);
          iVar5 = thunk_FUN_005fa360(param_1,(undefined4 *)local_1c,(int)local_8,(int)local_6,
                                     (int)local_a,&local_14,&local_18,&local_10);
          if ((iVar5 != 0) &&
             (iVar5 = thunk_FUN_005fa7f0(param_1,local_14,local_18,local_10), iVar5 != 0)) {
            *(undefined4 *)((int)param_1 + 0x2dd) = 5;
            *(undefined1 *)((int)param_1 + 699) = 1;
            *(undefined1 *)((int)param_1 + 0x29d) = local_1c[0];
            *(undefined4 *)((int)param_1 + 0x76) = 0;
          }
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(int *)((int)param_1 + 0x2dd) != 5) {
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
cf_common_exit_005F76D2:
          *(undefined4 *)((int)param_1 + 0x2ef) = 0x10;
          return;
        }
      }
    }
    break;
  case 0xd:
    this = (STT3DSprC *)((int)param_1 + 0x1d5);
    iVar5 = thunk_FUN_004ac910(this,'\b');
    if (iVar5 == 1) {
      if (*(char *)((int)param_1 + 699) != '\0') {
        thunk_FUN_0041c5a0((AnonShape_0041C5A0_167218F4 *)param_1);
        thunk_FUN_0041d590((AnonShape_0041D590_1DB01C7A *)param_1);
      }
      STT3DSprC::StopShow(this,0xf);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (iVar5 == *(int *)(&DAT_007ce73d + *(int *)((int)param_1 + 0x2cd) * 0x39)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      thunk_FUN_00495ff0(*(short *)((int)param_1 + 0x5b),*(short *)((int)param_1 + 0x5d),
                         *(short *)((int)param_1 + 0x5f),0,(AnonShape_00495FF0_59081BDD *)param_1);
      STT3DSprC::StopShow(this,0xe);
      STT3DSprC::StopShow(this,0xc);
      uVar11 = 0xffffffff;
      uVar6 = thunk_FUN_004ad650((int)this);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      thunk_FUN_0062b770((int)*(short *)((int)param_1 + 0x41),(int)*(short *)((int)param_1 + 0x43),
                         (int)*(short *)((int)param_1 + 0x45),0x2b,(int)param_1,
                         (int)(short)param_1[0x1b],uVar6,uVar11);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (iVar5 == *(int *)(&DAT_007ce741 + *(int *)((int)param_1 + 0x2cd) * 0x39)) {
      thunk_FUN_004ad5e0((int)this);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (iVar5 == *(int *)(&DAT_007ce745 + *(int *)((int)param_1 + 0x2cd) * 0x39)) {
      STT3DSprC::StartShow(this,9,PTR_00802a38->field_00E4);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (iVar5 == *(int *)(&DAT_007ce739 + *(int *)((int)param_1 + 0x2cd) * 0x39) + -1) {
      STT3DSprC::StopShow(this,8);
    }
    iVar5 = thunk_FUN_004ac910(this,'\t');
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (iVar5 == *(int *)(&DAT_007ce749 + *(int *)((int)param_1 + 0x2cd) * 0x39)) {
      thunk_FUN_005f66b0(param_1);
    }
  }
  return;
}


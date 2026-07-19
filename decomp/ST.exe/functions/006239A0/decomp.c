
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_006239a0(int *param_1)

{
  void *this;
  uint uVar1;
  undefined4 *this_00;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 extraout_var;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  switch(*(undefined4 *)((int)param_1 + 0x2ae)) {
  case 0:
    return 1;
  case 1:
    iVar2 = thunk_FUN_00624920(param_1,*(undefined4 *)((int)param_1 + 0x2ee),&local_c,&local_10,
                               &local_14);
    if (0 < iVar2) {
      *(undefined2 *)(param_1 + 0x15) = *(undefined2 *)((int)param_1 + 0x2c2);
      *(undefined2 *)((int)param_1 + 0x56) = *(undefined2 *)((int)param_1 + 0x2c6);
      *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)((int)param_1 + 0x2ca);
      *(int *)((int)param_1 + 0x2c2) = local_c;
      *(int *)((int)param_1 + 0x2c6) = local_10;
      *(int *)((int)param_1 + 0x2ca) = local_14;
      return 1;
    }
    return local_8;
  case 2:
    if (*(uint *)(DAT_00802a38 + 0xe4) < *(uint *)((int)param_1 + 0x30f)) {
      return 0;
    }
    if (*(char *)((int)param_1 + 0x353) == '\0') {
      uVar1 = thunk_FUN_006226c0(param_1,(int)*(short *)((int)param_1 + 0x47),
                                 (int)*(short *)((int)param_1 + 0x49));
      *(char *)((int)param_1 + 0x353) = (char)uVar1;
    }
    thunk_FUN_00624000((int)param_1);
    if (*(char *)((int)param_1 + 0x353) != '\0') {
      iVar2 = STMineSetC::LoadImagMineSet((STMineSetC *)param_1,1);
      if (iVar2 == 0) {
        thunk_FUN_00622670(param_1);
      }
      if (*(int *)((int)param_1 + 0x363) == 0) {
        this_00 = thunk_FUN_00636200();
        *(undefined4 **)((int)param_1 + 0x363) = this_00;
        if (this_00 != (undefined4 *)0x0) {
          thunk_FUN_00636260(this_00,*(uint *)((int)param_1 + 0x2c2),*(int *)((int)param_1 + 0x2c6),
                             *(int *)((int)param_1 + 0x2ca) + -0x28,0x82,0x14,5,1);
        }
      }
    }
    *(undefined4 *)((int)param_1 + 0x2ae) = 3;
    *(int *)((int)param_1 + 0x30f) = *(int *)(DAT_00802a38 + 0xe4) + 7;
    return local_8;
  case 3:
    if (*(uint *)(DAT_00802a38 + 0xe4) < *(uint *)((int)param_1 + 0x30f))
    goto switchD_006239c1_caseD_4;
    thunk_FUN_00625730(param_1);
    thunk_FUN_00627790((int)param_1);
    *(undefined4 *)((int)param_1 + 0x2ae) = 4;
    iVar2 = thunk_FUN_00627d90(1);
    uVar3 = thunk_FUN_00627db0(param_1,*(int *)((int)param_1 + 0x2c2),*(int *)((int)param_1 + 0x2c6)
                               ,iVar2);
    STAllPlayersC::UnRegisterMine
              (DAT_007fa174,CONCAT31((int3)((uint)uVar3 >> 8),*(undefined1 *)((int)param_1 + 0x262))
               ,CONCAT22(extraout_var,*(undefined2 *)((int)param_1 + 0x32)),(uint)param_1);
    thunk_FUN_0041d2b0(param_1);
    iVar2 = thunk_FUN_00495ff0(*(short *)((int)param_1 + 0x47),*(short *)((int)param_1 + 0x49),
                               *(short *)((int)param_1 + 0x4b),(uint)*(byte *)((int)param_1 + 0x8e),
                               (int)param_1);
    if (iVar2 == 0) {
      *(char *)(param_1 + 0xc5) = (char)param_1[0xc5] + -1;
    }
    if (*(int *)((int)param_1 + 0x2ba) < 0) {
      thunk_FUN_00622670(param_1);
      return local_8;
    }
    break;
  case 4:
switchD_006239c1_caseD_4:
    if (*(int *)((int)param_1 + 0x2ba) < 0) {
      if (*(int *)((int)param_1 + 0x2ae) != 4) {
        return 0;
      }
      thunk_FUN_00622670(param_1);
      return local_8;
    }
    break;
  default:
    goto switchD_006239c1_default;
  }
  if (*(int *)(&DAT_007d04c0 + (uint)*(byte *)((int)param_1 + 0x2ad) * 4) <=
      *(int *)((int)param_1 + 0x2ce)) {
    if (*(char *)((int)param_1 + 0x2df) != '\0') {
      if (*(int *)((int)param_1 + 0x2ce) ==
          *(int *)(&DAT_007d04c0 + (uint)*(byte *)((int)param_1 + 0x2ad) * 4)) {
        thunk_FUN_004ad0e0((void *)((int)param_1 + 0x1d5),9);
      }
      STT3DSprC::SetCurFase
                ((STT3DSprC *)((int)param_1 + 0x1d5),'\t',*(undefined4 *)((int)param_1 + 0x2db));
      STT3DSprC::ShowCurFase((STT3DSprC *)((int)param_1 + 0x1d5),'\t');
    }
    if (*(int *)((int)param_1 + 0x2db) < *(int *)((int)param_1 + 0x2d7)) {
      *(int *)((int)param_1 + 0x2db) = *(int *)((int)param_1 + 0x2db) + 1;
    }
  }
  if ((char)param_1[0xb8] != '\0') {
    if (*(int *)((int)param_1 + 0x2e1) == *(int *)((int)param_1 + 0x2e5)) {
      *(undefined1 *)(param_1 + 0xb8) = 0;
      thunk_FUN_004ad070((void *)((int)param_1 + 0x1d5),10);
    }
    else {
      STT3DSprC::SetCurFase((STT3DSprC *)((int)param_1 + 0x1d5),'\n',*(int *)((int)param_1 + 0x2e1))
      ;
      STT3DSprC::ShowCurFase((STT3DSprC *)((int)param_1 + 0x1d5),'\n');
      *(int *)((int)param_1 + 0x2e1) = *(int *)((int)param_1 + 0x2e1) + 1;
    }
  }
  iVar2 = *(int *)((int)param_1 + 0x2ce);
  if (iVar2 < *(int *)((int)param_1 + 0x2d2)) {
    STT3DSprC::SetCurFase((STT3DSprC *)((int)param_1 + 0x1d5),'\x0e',iVar2);
    STT3DSprC::ShowCurFase((STT3DSprC *)((int)param_1 + 0x1d5),'\x0e');
LAB_00623d08:
    *(int *)((int)param_1 + 0x2ce) = *(int *)((int)param_1 + 0x2ce) + 1;
  }
  else if (iVar2 == *(int *)((int)param_1 + 0x2d2)) {
    if (-1 < *(int *)((int)param_1 + 0x2ba)) {
      thunk_FUN_004ad070((void *)((int)param_1 + 0x1d5),0xe);
    }
    goto LAB_00623d08;
  }
  thunk_FUN_004ad3c0((void *)((int)param_1 + 0x1d5),
                     (float)*(int *)((int)param_1 + 0x2c2) * _DAT_007904f8 * _DAT_007904f0,
                     (float)*(int *)((int)param_1 + 0x2c6) * _DAT_007904f8 * _DAT_007904f0,
                     (float)*(int *)((int)param_1 + 0x2ca) * _DAT_007904f8 * _DAT_007904f0 +
                     _DAT_007904fc);
  this = DAT_00802a88;
  if (*(int *)((int)param_1 + 0x2db) == *(int *)((int)param_1 + 0x2d7)) {
    thunk_FUN_00622670(param_1);
    return local_8;
  }
  if (DAT_00802a88 != (void *)0x0) {
    lVar5 = Library::MSVCRT::__ftol();
    iVar2 = (int)lVar5;
    if ((DAT_0080874d != -1) && (*(int *)((int)this + 0xf8) != 0)) {
      piVar7 = &local_1c;
      piVar6 = &local_18;
      lVar5 = Library::MSVCRT::__ftol();
      iVar4 = (int)lVar5;
      lVar5 = Library::MSVCRT::__ftol();
      thunk_FUN_00558c00(this,*(undefined4 *)((int)this + 0x10c),(int)lVar5,iVar4,piVar6,piVar7);
      if ((((-1 < iVar2) &&
           (((iVar2 < 5 && (-1 < local_18)) && (local_18 < *(int *)((int)this + 0x30))))) &&
          (((local_1c = (&DAT_0079aed0)[iVar2] + local_1c, -1 < local_1c &&
            (local_1c < *(int *)((int)this + 0x34))) && (*(int *)((int)this + 0x4c) != 0)))) &&
         (*(char *)(local_1c * *(int *)((int)this + 0x30) + *(int *)((int)this + 0x4c) + local_18)
          == '\0')) {
        if (*(char *)((int)param_1 + 0x2e9) == '\0') {
          return local_8;
        }
        thunk_FUN_004ad430((int)param_1 + 0x1d5);
        *(undefined1 *)((int)param_1 + 0x2e9) = 0;
        return local_8;
      }
    }
    if (*(char *)((int)param_1 + 0x2e9) == '\0') {
      thunk_FUN_004ad460((void *)((int)param_1 + 0x1d5),0);
      *(undefined1 *)((int)param_1 + 0x2e9) = 1;
      return local_8;
    }
  }
switchD_006239c1_default:
  return local_8;
}


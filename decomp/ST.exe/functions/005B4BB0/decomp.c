
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005b4bb0(void *this,int param_1)

{
  code *pcVar1;
  int *this_00;
  undefined4 uVar2;
  int iVar3;
  undefined3 uVar6;
  uint uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  void *this_01;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar7;
  char cVar8;
  undefined4 local_8c;
  undefined4 local_88 [16];
  int local_48 [8];
  int local_28 [8];
  int *local_8;
  
  local_8 = this;
  uVar2 = FUN_006e51b0(*(int *)((int)this + 0x10));
  *(undefined4 *)((int)this + 0x61) = uVar2;
  local_8c = DAT_00858df8;
  DAT_00858df8 = &local_8c;
  iVar3 = __setjmp3(local_88,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_8c;
    iVar5 = FUN_006ad4d0(s_E____titans_Start_main_obj_cpp_007cc8e8,0x241,0,iVar3,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return uVar2;
    }
    FUN_006a5e40(iVar3,0,0x7cc8e8,0x241);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_8,param_1);
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 < 0x697f) || (0x69fe < uVar4)) goto switchD_005b4c27_default;
  uVar6 = (undefined3)(uVar4 - 0x697f >> 8);
  switch(uVar4 - 0x697f) {
  case 0:
    iVar3 = -2;
    iVar5 = 1;
    uVar4 = CONCAT31(uVar6,*(char *)(param_1 + 0x10) + -0x7f);
    break;
  case 1:
    iVar3 = -2;
    goto LAB_005b4c5f;
  case 2:
    iVar3 = -2;
    iVar5 = 2;
    uVar4 = CONCAT31((int3)((uint)extraout_EDX >> 8),*(char *)(param_1 + 0x10) + -0x7f);
    break;
  case 3:
    iVar3 = -2;
    iVar5 = 0;
    uVar4 = CONCAT31(uVar6,*(char *)(param_1 + 0x10) + -0x7f);
    break;
  case 4:
    iVar3 = -3;
LAB_005b4c5f:
    iVar5 = 0;
    uVar4 = CONCAT31((int3)((uint)extraout_ECX >> 8),*(char *)(param_1 + 0x10) + -0x7f);
    break;
  default:
    goto switchD_005b4c27_default;
  }
  thunk_FUN_005b5690(param_1,uVar4,1,iVar5,iVar3);
switchD_005b4c27_default:
  uVar4 = *(uint *)(param_1 + 0x10);
  if (uVar4 < 0x6903) {
    if (uVar4 == 0x6902) {
      if (*(char *)((int)this_00 + 0x1ee3) == '\0') {
        thunk_FUN_005b4860((int)this_00);
        (**(code **)(*(int *)this_00[3] + 0x10))(0x309,0);
        goto switchD_005b4db9_caseD_6904;
      }
      if (*(char *)((int)this_00 + 0x1ee3) != '\x01') goto switchD_005b4db9_caseD_6904;
      *(undefined1 *)((int)this_00 + 0x1a5a) = 3;
    }
    else {
      if (uVar4 < 6) {
        if (uVar4 == 5) {
          thunk_FUN_005b3160();
        }
        else if (uVar4 == 0) {
          thunk_FUN_005b3430(this_00);
        }
        else if (uVar4 == 2) {
          thunk_FUN_005b2970(*(char *)(param_1 + 0x14));
        }
        else if (uVar4 == 3) {
          thunk_FUN_005b2f90();
        }
        goto switchD_005b4db9_caseD_6904;
      }
      if (uVar4 == 0x68ff) {
        if (*(char *)((int)this_00 + 0x1ee3) != '\0') {
          if (*(char *)((int)this_00 + 0x1ee3) != '\x01') goto switchD_005b4db9_caseD_6904;
          _DAT_0080f32e = 1;
        }
        *(undefined1 *)((int)this_00 + 0x1a5a) = 0;
      }
      else if (uVar4 == 0x6900) {
        if ((*(char *)((int)this_00 + 0x1ee3) == '\0') &&
           ((DAT_0081176c == 0 || (*(int *)(DAT_0081176c + 0x68a) == 0))))
        goto switchD_005b4db9_caseD_6904;
        *(undefined1 *)((int)this_00 + 0x1a5a) = 1;
      }
      else {
        if (uVar4 != 0x6901) goto switchD_005b4db9_caseD_6904;
        if (*(char *)((int)this_00 + 0x1ee3) == '\0') {
          *(undefined1 *)((int)this_00 + 0x1a5a) = 2;
        }
        else {
          if (*(char *)((int)this_00 + 0x1ee3) != '\x01') goto switchD_005b4db9_caseD_6904;
          *(char *)((int)this_00 + 0x1a5a) = *(char *)(param_1 + 0x10) + '\x01';
        }
      }
    }
LAB_005b4de5:
    (**(code **)(*this_00 + 8))();
    this_01 = *(void **)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6);
LAB_005b4df8:
    if (this_01 != (void *)0x0) {
      thunk_FUN_005b8c70(this_01,1,0,1);
    }
    goto switchD_005b4db9_caseD_6904;
  }
  switch(uVar4) {
  case 0x6903:
    if (*(char *)((int)this_00 + 0x1ee3) != '\0') {
      if (*(char *)((int)this_00 + 0x1ee3) != '\x01') break;
      _DAT_0080f32e = 1;
      *(undefined1 *)((int)this_00 + 0x1a5a) = 4;
      goto LAB_005b4de5;
    }
    iVar3 = *(int *)((int)this_00 + 0x1a5b);
    if (*(int *)(iVar3 + 0x2e6) == 0) break;
    piVar7 = local_48;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar7 = 0;
      piVar7 = piVar7 + 1;
    }
    piVar7 = local_28;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar7 = 0;
      piVar7 = piVar7 + 1;
    }
    local_48[2] = this_00[2];
    local_48[3] = 2;
    local_28[3] = 2;
    local_48[4] = 0x6941;
    local_28[4] = 0x693f;
    local_28[2] = local_48[2];
    iVar3 = thunk_FUN_005b7ef0(*(void **)(iVar3 + 0x2e6),0x251d,'\x01',local_48,local_28,
                               (undefined4 *)0x0,0,0);
    if (iVar3 == 0) break;
  case 0x6940:
    thunk_FUN_005b4860((int)this_00);
    break;
  case 0x693f:
    thunk_FUN_005b47e0((int)this_00);
    break;
  case 0x6941:
    if (*(char *)((int)this_00 + 0x1ee3) == '\0') {
      thunk_FUN_005b47e0((int)this_00);
      *(undefined1 *)((int)this_00 + 0x1a5a) = 4;
      (**(code **)(*this_00 + 8))();
    }
    break;
  case 0x6942:
    cVar8 = '\0';
    goto LAB_005b4ee5;
  case 0x6943:
    thunk_FUN_005b6350(this_00,0x6942,0,0);
    (**(code **)(*this_00 + 8))();
    this_01 = *(void **)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6);
    goto LAB_005b4df8;
  case 0x6944:
    cVar8 = '\x01';
LAB_005b4ee5:
    thunk_FUN_005b3d60(this_00,cVar8,0);
  }
switchD_005b4db9_caseD_6904:
  DAT_00858df8 = (undefined4 *)local_8c;
  uVar2 = thunk_FUN_005b6430();
  return uVar2;
}


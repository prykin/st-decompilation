
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Scout */

int __thiscall STBoatC::Scout(STBoatC *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  code *pcVar4;
  int iVar5;
  void *pvVar6;
  undefined4 extraout_ECX;
  undefined2 extraout_var;
  undefined4 extraout_EDX;
  void *unaff_EDI;
  undefined4 *puVar7;
  
  if ((param_1 == 0) || (param_1 == 1)) {
    puVar7 = &this->field_02CC;
    for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(short *)&this->field_0x6cf = *(short *)&this->field_0x43f;
    *(short *)&this->field_0x6cd = *(short *)&this->field_0x43d;
    *(undefined2 *)&this->field_0x6d1 = *(undefined2 *)&this->field_0x441;
    *(undefined2 *)&this->field_0x6d3 = *(undefined2 *)&this->field_0x443;
    this->field_02C4 = 0;
    *(undefined4 *)&this->field_0x6e3 = 0;
    *(short *)&this->field_0x6cb = *(short *)&this->field_0x43b;
    *(undefined2 *)&this->field_0x6d5 = *(undefined2 *)&this->field_0x445;
    this->field_06E7 = 0;
    thunk_FUN_00481520(this,(int)*(short *)&this->field_0x43b,(int)*(short *)&this->field_0x43d,
                       (int)*(short *)&this->field_0x43f);
    iVar5 = thunk_FUN_0045ff50(this,0);
    return (-(uint)(iVar5 != -1) & 3) - 1;
  }
  iVar5 = this->field_06E7;
  if (iVar5 != 0) {
    if (iVar5 == 1) {
      iVar5 = (*this->vtable->StopMove)(this,unaff_EDI);
      if (iVar5 == -1) {
        return -1;
      }
      if (iVar5 == 1) {
        this->field_06E7 = 2;
        *(undefined4 *)&this->field_0x6e3 = 0;
        thunk_FUN_00481520(this,(int)*(short *)&this->field_0x6d1,(int)*(short *)&this->field_0x6d3,
                           (int)*(short *)&this->field_0x6d5);
        iVar5 = thunk_FUN_0045ff50(this,0);
        if (iVar5 == -1) {
          return -1;
        }
      }
      iVar5 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
    }
    if (iVar5 != 2) {
      iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3bbf,0,0,&DAT_007a4ccc,
                                 s_STBoatC__Scout_incorrect_entry_007ab85c);
      if (iVar5 == 0) {
        return -1;
      }
      pcVar4 = (code *)swi(3);
      iVar5 = (*pcVar4)();
      return iVar5;
    }
    iVar5 = thunk_FUN_0045ff50(this,2);
    if (iVar5 == -1) {
      return -1;
    }
    if (iVar5 == 0) {
      return 0;
    }
    if (iVar5 != 3) {
      return 2;
    }
    pvVar6 = (void *)thunk_FUN_0042b760(CONCAT31((int3)((uint)extraout_EDX >> 8),this->field_0x24),
                                        CONCAT22(extraout_var,this->field_0030));
    if (pvVar6 == (void *)0x0) {
      iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3b9b,0,0,&DAT_007a4ccc,
                                 s_STBoatC__Scout_ptr__NULL_007ab8d8);
      if (iVar5 == 0) {
        return -1;
      }
      pcVar4 = (code *)swi(3);
      iVar5 = (*pcVar4)();
      return iVar5;
    }
    iVar5 = thunk_FUN_0040bc90(pvVar6,(uint)(ushort)this->field_0032,
                               (short *)(int)*(short *)&this->field_0x6d1,
                               (short *)(int)*(short *)&this->field_0x6d3,
                               (short *)(int)*(short *)&this->field_0x6d5,'\0');
    switch(*(undefined4 *)&this->field_0x6e3) {
    case 0:
      break;
    case 1:
      if (*(int *)&this->field_0x6d7 <= iVar5) {
        *(int *)&this->field_0x6db = iVar5;
        *(undefined4 *)&this->field_0x6e3 = 2;
        goto LAB_004800ec;
      }
      break;
    case 2:
      if (*(int *)&this->field_0x6db <= iVar5) {
        *(int *)&this->field_0x6df = iVar5;
        *(undefined4 *)&this->field_0x6e3 = 3;
        goto LAB_004800ec;
      }
      break;
    case 3:
      if (*(int *)&this->field_0x6df <= iVar5) {
        return 0;
      }
      break;
    default:
      iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3bb7,0,0,&DAT_007a4ccc,
                                 s_STBoatC__Scout_incorrect_ssi_num_007ab884);
      if (iVar5 == 0) {
        return 2;
      }
      pcVar4 = (code *)swi(3);
      iVar5 = (*pcVar4)();
      return iVar5;
    }
    *(int *)&this->field_0x6d7 = iVar5;
    *(undefined4 *)&this->field_0x6e3 = 1;
LAB_004800ec:
    thunk_FUN_00481520(this,(int)*(short *)&this->field_0x6d1,(int)*(short *)&this->field_0x6d3,
                       (int)*(short *)&this->field_0x6d5);
    iVar5 = thunk_FUN_0045ff50(this,0);
    if (iVar5 != -1) {
      return 2;
    }
    return -1;
  }
  iVar5 = thunk_FUN_0045ff50(this,2);
  if (iVar5 == -1) {
    return -1;
  }
  if (iVar5 == 0) {
LAB_0047ff46:
    sVar1 = *(short *)&this->field_0x6d5;
    sVar2 = *(short *)&this->field_0x6d3;
    sVar3 = *(short *)&this->field_0x6d1;
    this->field_06E7 = 2;
    goto LAB_0047ff67;
  }
  if (iVar5 != 3) {
    return 2;
  }
  pvVar6 = (void *)thunk_FUN_0042b760(CONCAT31((int3)((uint)extraout_ECX >> 8),this->field_0x24),
                                      (uint)(ushort)this->field_0030);
  if (pvVar6 == (void *)0x0) {
    iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3b57,0,0,&DAT_007a4ccc,
                               s_STBoatC__Scout_ptr__NULL_007ab8d8);
    if (iVar5 == 0) {
      return -1;
    }
    pcVar4 = (code *)swi(3);
    iVar5 = (*pcVar4)();
    return iVar5;
  }
  iVar5 = thunk_FUN_0040bc90(pvVar6,(uint)(ushort)this->field_0032,
                             (short *)(int)*(short *)&this->field_0x6cb,
                             (short *)(int)*(short *)&this->field_0x6cd,
                             (short *)(int)*(short *)&this->field_0x6cf,'\0');
  switch(*(undefined4 *)&this->field_0x6e3) {
  case 0:
    break;
  case 1:
    if (iVar5 < *(int *)&this->field_0x6d7) break;
    *(int *)&this->field_0x6db = iVar5;
    *(undefined4 *)&this->field_0x6e3 = 2;
    goto LAB_0047feeb;
  case 2:
    if (*(int *)&this->field_0x6db <= iVar5) {
      *(int *)&this->field_0x6df = iVar5;
      *(undefined4 *)&this->field_0x6e3 = 3;
      goto LAB_0047feeb;
    }
    break;
  case 3:
    if (*(int *)&this->field_0x6df <= iVar5) {
      *(undefined4 *)&this->field_0x6e3 = 0;
      goto LAB_0047ff46;
    }
    break;
  default:
    iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3b76,0,0,&DAT_007a4ccc,
                               s_STBoatC__Scout_incorrect_ssi_num_007ab8b0);
    if (iVar5 == 0) {
      return 2;
    }
    pcVar4 = (code *)swi(3);
    iVar5 = (*pcVar4)();
    return iVar5;
  }
  *(int *)&this->field_0x6d7 = iVar5;
  *(undefined4 *)&this->field_0x6e3 = 1;
LAB_0047feeb:
  sVar1 = *(short *)&this->field_0x6cf;
  sVar2 = *(short *)&this->field_0x6cd;
  sVar3 = *(short *)&this->field_0x6cb;
LAB_0047ff67:
  thunk_FUN_00481520(this,(int)sVar3,(int)sVar2,(int)sVar1);
  iVar5 = thunk_FUN_0045ff50(this,0);
  if (iVar5 != -1) {
    return 2;
  }
  return -1;
}



/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackWaitLoad */

int __thiscall STBoatC::BackWaitLoad(STBoatC *this,int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  int iVar17;
  short sVar18;
  byte bVar19;
  undefined4 local_2c [2];
  undefined4 local_24;
  short local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  iVar4 = this->field_05C0;
  if (iVar4 == 0) {
LAB_00475545:
    iVar4 = (*this->vtable->vfunc_D8)();
    return -(uint)(iVar4 != 0);
  }
  if ((iVar4 == 1) || (iVar4 == 2)) {
    iVar17 = this->field_05C4;
    if (iVar17 == 0) {
      iVar4 = thunk_FUN_00460360((int *)this);
      return iVar4;
    }
    if (((((iVar17 == 1) || (iVar17 == 2)) || (iVar17 == 3)) || ((iVar17 == 5 || (iVar17 == 6)))) ||
       (iVar17 == 7)) {
      this->field_0076 = 1;
      iVar4 = (*this->vtable->vfunc_D8)();
      return -(uint)(iVar4 != 0);
    }
    if (iVar17 == 4) {
      local_1c = thunk_FUN_00415ed0(this,&local_18,&local_14);
      uVar5 = *(int *)&this->field_0x1c * 0x41c64e6d + 0x3039;
      *(uint *)&this->field_0x1c = uVar5;
      iVar4 = (uVar5 >> 0x10) % 7 - 3;
      uVar5 = *(int *)&this->field_0x1c * 0x41c64e6d + 0x3039;
      *(uint *)&this->field_0x1c = uVar5;
      uVar1 = *(int *)&this->field_0x1c * 0x41c64e6d + 0x3039;
      *(uint *)&this->field_0x1c = uVar1;
      local_c = (uVar1 >> 0x10) % 7 - 3;
      if (((int)this->field_074A <= (int)*(short *)(DAT_00806724 + 0x23) / 2) &&
         (local_10 = 0, this->field_0x2bf != '\0')) {
        local_8 = (undefined4 *)&this->field_0x2b3;
        do {
          puVar6 = (undefined4 *)
                   thunk_FUN_0041dc40(local_2c,*local_8,*(undefined2 *)(local_8 + 1),
                                      *(short *)&this->field_0x6c);
          uVar2 = *puVar6;
          bVar19 = 0;
          sVar18 = 0;
          iVar17 = -1;
          local_20 = *(short *)(puVar6 + 1);
          sVar16 = 0;
          sVar15 = 0;
          sVar14 = 0;
          sVar13 = 0;
          sVar12 = 0;
          sVar11 = 0;
          local_24 = uVar2;
          if (DAT_0080732c == 1) {
            sVar11 = 0;
            sVar12 = 0;
            sVar13 = 0;
            sVar14 = 0;
            sVar15 = 0;
            sVar16 = 0;
            sVar18 = 0;
            bVar19 = 0;
            lVar10 = Library::MSVCRT::__ftol();
            iVar7 = (int)local_20 + (short)this->field_0045 + local_c + (int)(short)lVar10;
            iVar8 = (int)(short)this->field_0043 - (int)local_24._2_2_;
            iVar9 = (int)(short)local_24 + iVar4 + (short)this->field_0041;
          }
          else {
            iVar7 = (int)local_20 + local_c + (short)this->field_0045;
            local_24._2_2_ = (short)((uint)uVar2 >> 0x10);
            iVar8 = (int)(short)this->field_0043 - (int)local_24._2_2_;
            local_24._0_2_ = (short)uVar2;
            iVar9 = (int)(short)local_24 + iVar4 + (short)this->field_0041;
          }
          TraksClassTy::TraksCreate
                    (DAT_00802a7c,1,2,7,iVar9,iVar8 + ((uVar5 >> 0x10) % 7 - 3),iVar7,sVar11,sVar12,
                     sVar13,sVar14,sVar15,sVar16,iVar17,sVar18,bVar19);
          local_8 = (undefined4 *)((int)local_8 + 6);
          local_10 = local_10 + 1;
        } while (local_10 < (int)(uint)(byte)this->field_0x2bf);
      }
      if (local_1c == -1) {
        iVar4 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x303e,0,0,&DAT_007a4ccc,
                                   s_STBoatC__BackWaitLoad_swli_regim_007ab030);
        if (iVar4 != 0) {
          pcVar3 = (code *)swi(3);
          iVar4 = (*pcVar3)();
          return iVar4;
        }
        return -1;
      }
      if (local_1c != 0) {
        iVar4 = (*this->vtable->vfunc_D8)();
        return (-(uint)(iVar4 != 0) & 0xfffffffd) + 2;
      }
      goto LAB_00475545;
    }
  }
  if (iVar4 == 3) {
    iVar4 = WaitLoad(this,(void *)0x2);
    return iVar4;
  }
  iVar4 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3052,0,0,&DAT_007a4ccc,
                             s_STBoatC__BackWaitLoad_swli_regim_007aaff0);
  if (iVar4 != 0) {
    pcVar3 = (code *)swi(3);
    iVar4 = (*pcVar3)();
    return iVar4;
  }
  return -1;
}


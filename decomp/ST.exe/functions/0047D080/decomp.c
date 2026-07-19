
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Annih */

int __thiscall STBoatC::Annih(STBoatC *this,undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  int iVar19;
  short sVar20;
  byte bVar21;
  STMessage local_64;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [2];
  undefined4 local_20;
  short local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  if ((param_1 == (undefined4 *)0x0) || (param_1 == (undefined4 *)0x1)) {
    puVar8 = &this->field_02CC;
    for (iVar9 = 0x17; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    sVar13 = this->field_0423;
    sVar14 = this->field_0425;
    sVar15 = this->field_0427;
    this->field_02C4 = 0;
    this->field_068B = sVar13;
    this->field_068D = sVar14;
    this->field_068F = sVar15;
    if (((((sVar13 < 0) || (DAT_007fb240 <= sVar13)) || (sVar14 < 0)) ||
        ((DAT_007fb242 <= sVar14 || (sVar15 < 0)))) ||
       ((DAT_007fb244 <= sVar15 ||
        (piVar2 = *(int **)(DAT_007fb248 +
                           ((int)sVar15 * (int)DAT_007fb246 + (int)sVar14 * (int)DAT_007fb240 +
                           (int)sVar13) * 8), piVar2 == (int *)0x0)))) {
LAB_0047d831:
      thunk_FUN_004952e0((int)this);
      return 0;
    }
    iVar9 = (**(code **)(*piVar2 + 0x2c))();
    if (iVar9 != 99) goto LAB_0047d831;
    this->field_0691 = this->field_005B;
    this->field_0693 = this->field_005D;
    this->field_0695 = this->field_005F;
    iVar9 = piVar2[6];
    this->field_06A1 = 0;
    this->field_0697 = iVar9;
    this->field_06A5 = 0;
  }
  iVar9 = this->field_06A1;
  if (iVar9 == 0) {
    if (this->field_06A5 == 0) {
      iVar6 = (ushort)(this->field_068F * 200) + 0xfa;
      iVar19 = CONCAT22((short)((uint)iVar6 >> 0x10),this->field_068D + 1) * 0xc9;
      iVar10 = CONCAT22((short)((uint)iVar19 >> 0x10),this->field_068B + 1);
      iVar9 = iVar10 * 0xc9;
      uVar5 = (undefined2)((uint)(iVar10 * 0x19) >> 0x10);
      uVar5 = (*this->vtable->vfunc_10)
                        (CONCAT22(uVar5,this->field_0041),
                         CONCAT22((short)((uint)iVar9 >> 0x10),this->field_0043),
                         CONCAT22(uVar5,this->field_0045),iVar9,iVar19,iVar6);
      this->field_069B = uVar5;
      this->field_06A5 = 1;
    }
    if (this->field_06A5 == 1) {
      uVar7 = thunk_FUN_004176c0(this,this->field_069B);
      uVar7 = thunk_FUN_00417910(this,(short)uVar7);
      if (uVar7 == 0xffffffff) {
        iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3896,0,0,&DAT_007a4ccc,
                                   s_STBoatC__Annih_ANNIH_MOVE_1_007ab67c);
        if (iVar9 != 0) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return iVar9;
        }
        return -1;
      }
      if (uVar7 == 0) {
        this->field_06A5 = 2;
      }
    }
    else {
      if (this->field_06A5 == 2) {
        thunk_FUN_00415b30(this,this->field_0041,this->field_0043,this->field_0045,
                           (this->field_068B + 1) * 0xc9,(this->field_068D + 1) * 0xc9,
                           this->field_068F * 200 + 0xfa,this->field_0x61);
        this->field_06A5 = 3;
      }
      if (this->field_06A5 == 3) {
        local_18 = thunk_FUN_00415ed0(this,&local_14,&local_10);
        uVar7 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar7;
        iVar9 = (uVar7 >> 0x10) % 7 - 3;
        uVar7 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar7;
        uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar1;
        local_8 = (uVar1 >> 0x10) % 7 - 3;
        if (((int)this->field_074A <= (int)*(short *)(DAT_00806724 + 0x23) / 2) &&
           (local_c = 0, this->field_0x2bf != '\0')) {
          param_1 = (undefined4 *)&this->field_0x2b3;
          do {
            puVar8 = (undefined4 *)
                     thunk_FUN_0041dc40(local_28,*param_1,*(undefined2 *)(param_1 + 1),
                                        this->field_006C);
            uVar3 = *puVar8;
            bVar21 = 0;
            sVar20 = 0;
            iVar19 = -1;
            local_1c = *(short *)(puVar8 + 1);
            sVar18 = 0;
            sVar17 = 0;
            sVar16 = 0;
            sVar15 = 0;
            sVar14 = 0;
            sVar13 = 0;
            local_20 = uVar3;
            if (DAT_0080732c == 1) {
              sVar13 = 0;
              sVar14 = 0;
              sVar15 = 0;
              sVar16 = 0;
              sVar17 = 0;
              sVar18 = 0;
              sVar20 = 0;
              bVar21 = 0;
              lVar12 = Library::MSVCRT::__ftol();
              iVar10 = (int)local_1c + (short)this->field_0045 + local_8 + (int)(short)lVar12;
              iVar6 = (int)(short)this->field_0043 - (int)local_20._2_2_;
              iVar11 = (int)(short)local_20 + iVar9 + (short)this->field_0041;
            }
            else {
              iVar10 = (int)local_1c + local_8 + (short)this->field_0045;
              local_20._2_2_ = (short)((uint)uVar3 >> 0x10);
              iVar6 = (int)(short)this->field_0043 - (int)local_20._2_2_;
              local_20._0_2_ = (short)uVar3;
              iVar11 = (int)(short)local_20 + iVar9 + (short)this->field_0041;
            }
            TraksClassTy::TraksCreate
                      (DAT_00802a7c,1,2,7,iVar11,iVar6 + ((uVar7 >> 0x10) % 7 - 3),iVar10,sVar13,
                       sVar14,sVar15,sVar16,sVar17,sVar18,iVar19,sVar20,bVar21);
            param_1 = (undefined4 *)((int)param_1 + 6);
            local_c = local_c + 1;
          } while (local_c < (int)(uint)(byte)this->field_0x2bf);
        }
        if (local_18 == -1) {
          iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x38bd,0,0,
                                     &DAT_007a4ccc,s_STBoatC__Annih_ANNIH_MOVE_2_007ab658);
          if (iVar9 != 0) {
            pcVar4 = (code *)swi(3);
            iVar9 = (*pcVar4)();
            return iVar9;
          }
          return -1;
        }
        if (local_18 == 0) {
          sVar13 = this->field_068B;
          sVar14 = this->field_068F;
          sVar15 = this->field_068D;
          if (((((-1 < sVar13) && (sVar13 < DAT_007fb240)) && (-1 < sVar15)) &&
              ((sVar15 < DAT_007fb242 && (-1 < sVar14)))) &&
             ((sVar14 < DAT_007fb244 &&
              ((piVar2 = *(int **)(DAT_007fb248 +
                                  ((int)sVar14 * (int)DAT_007fb246 + (int)sVar15 * (int)DAT_007fb240
                                  + (int)sVar13) * 8), piVar2 != (int *)0x0 &&
               (piVar2[6] == this->field_0697)))))) {
            iVar9 = (**(code **)(*piVar2 + 0xf8))();
            if (iVar9 == 1) {
              this->field_06A5 = 0;
              this->field_06A1 = 1;
              *(undefined4 *)&this->field_0x69d = 0;
              thunk_FUN_004b7d90(piVar2);
              goto LAB_0047d241;
            }
          }
          thunk_FUN_004952e0((int)this);
          param_1 = *(undefined4 **)(DAT_00802a38 + 0xe4);
          CmdToObj(this,CASE_3,&param_1);
        }
      }
    }
LAB_0047d241:
    iVar9 = (*this->vtable->vfunc_D8)();
    return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
  }
  if (iVar9 == 1) {
    if (*(int *)&this->field_0x69d % 5 == 0) {
      sVar13 = this->field_068B;
      sVar14 = this->field_068F;
      sVar15 = this->field_068D;
      if ((((-1 < sVar13) && (sVar13 < DAT_007fb240)) &&
          ((-1 < sVar15 && (((sVar15 < DAT_007fb242 && (-1 < sVar14)) && (sVar14 < DAT_007fb244)))))
          ) && ((piVar2 = *(int **)(DAT_007fb248 +
                                   ((int)sVar14 * (int)DAT_007fb246 +
                                    (int)sVar15 * (int)DAT_007fb240 + (int)sVar13) * 8),
                piVar2 != (int *)0x0 && (piVar2[6] == this->field_0697)))) {
        iVar9 = (**(code **)(*piVar2 + 0xf8))();
        if (iVar9 == 1) {
          if (piVar2[0x134] == 2) {
            this->field_06A1 = 2;
            *(undefined4 *)&this->field_0x69d = 0;
            thunk_FUN_006377b0(this->field_01ED,0,(int)(short)this->field_0041,
                               (int)(short)this->field_0043,(int)(short)this->field_0045,0);
          }
          goto LAB_0047d7e6;
        }
      }
      param_1 = *(undefined4 **)(DAT_00802a38 + 0xe4);
      CmdToObj(this,CASE_3,&param_1);
    }
  }
  else {
    if (iVar9 != 2) {
      iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3902,0,0,&DAT_007a4ccc,
                                 s_STBoatC__Annih_incorrect_entry_007ab630);
      if (iVar9 != 0) {
        pcVar4 = (code *)swi(3);
        iVar9 = (*pcVar4)();
        return iVar9;
      }
      return -1;
    }
    iVar9 = *(int *)&this->field_0x69d + 1;
    *(int *)&this->field_0x69d = iVar9;
    if (iVar9 == 0x16) {
      sVar13 = this->field_068B;
      sVar14 = this->field_068F;
      sVar15 = this->field_068D;
      if ((((-1 < sVar13) && (sVar13 < DAT_007fb240)) &&
          ((-1 < sVar15 && (((sVar15 < DAT_007fb242 && (-1 < sVar14)) && (sVar14 < DAT_007fb244)))))
          ) && ((piVar2 = *(int **)(DAT_007fb248 +
                                   ((int)sVar14 * (int)DAT_007fb246 +
                                    (int)sVar15 * (int)DAT_007fb240 + (int)sVar13) * 8),
                piVar2 != (int *)0x0 && (piVar2[6] == this->field_0697)))) {
        iVar9 = (**(code **)(*piVar2 + 0xf8))();
        if (iVar9 == 1) {
          thunk_FUN_004b7e30(piVar2,this->field_06F7,0,0);
          thunk_FUN_004b7de0(piVar2);
          thunk_FUN_004b7d50(piVar2,(int)this);
        }
      }
      local_30 = 1;
      local_2c = 1;
      local_64.data = &local_44;
      local_44 = 10000;
      local_40 = 0;
      local_3c = 0xfe;
      local_64.id = MESS_HITKILL;
      (*this->vtable->GetMessage)(this,&local_64);
    }
  }
LAB_0047d7e6:
  iVar9 = (*this->vtable->vfunc_D8)();
  return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
}


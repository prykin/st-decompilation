
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::UnLoadObj */

int __thiscall STBoatC::UnLoadObj(STBoatC *this,undefined4 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  code *pcVar4;
  short sVar5;
  int iVar6;
  undefined2 uVar11;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int iVar12;
  uint uVar13;
  undefined2 extraout_var_01;
  int *piVar14;
  int *piVar15;
  longlong lVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  byte bVar23;
  undefined4 local_30 [2];
  undefined4 local_28;
  short local_24;
  int local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int *local_c;
  undefined1 local_5;
  
  if ((param_1 == (undefined4 *)0x0) || (param_1 == (undefined4 *)0x1)) {
    puVar9 = &this->field_02CC;
    for (iVar6 = 0x17; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    this->field_02C4 = 0;
    if (this->field_07CA != 0) {
      sVar5 = *(short *)&this->field_0x3ce;
      uVar3 = *(ushort *)&this->field_0x3d0;
      *(short *)&this->field_0x5ca = sVar5;
      this->field_05CC = uVar3;
      *(short *)&this->field_0x5ce = *(short *)&this->field_0x3d2;
      if (((sVar5 == -1) && (uVar3 == 0xffff)) && (*(short *)&this->field_0x3d2 == -1)) {
        this->field_05D6 = 0;
        return 2;
      }
      uVar11 = (undefined2)((uint)&this->field_05D0 >> 0x10);
      iVar6 = thunk_FUN_0048dfd0(CONCAT22((short)((uint)this->field_07CA >> 0x10),sVar5),(uint)uVar3
                                 ,CONCAT22(uVar11,*(undefined2 *)&this->field_0x3d2),
                                 CONCAT22(uVar11,this->field_005B),CONCAT22(uVar11,this->field_005D)
                                 ,(int *)CONCAT22(uVar11,this->field_005F),0,&this->field_05D0,
                                 (short *)&this->field_0x5d2,&this->field_05D4);
      if (iVar6 != 0) {
        this->field_05D6 = 5;
        thunk_FUN_00481520(this,(int)this->field_05D0,(int)*(short *)&this->field_0x5d2,
                           (int)this->field_05D4);
        thunk_FUN_0045ff50(this,0);
        return 2;
      }
    }
    return 0;
  }
  iVar6 = this->field_05D6;
  if (iVar6 == 5) {
    iVar6 = thunk_FUN_0045ff50(this,2);
    if (iVar6 == -1) {
      iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3079,0,0,&DAT_007a4ccc,
                                 s_STBoatC__UnLoadObj__5_007ab0a8);
      if (iVar6 != 0) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      return -1;
    }
    if (iVar6 == 0) {
      this->field_05D6 = 0;
    }
    else if (iVar6 == 3) {
      uVar11 = (undefined2)((uint)&this->field_05D0 >> 0x10);
      iVar6 = thunk_FUN_0048dfd0(CONCAT22(extraout_var_01,*(undefined2 *)&this->field_0x5ca),
                                 CONCAT22(extraout_var,this->field_05CC),
                                 CONCAT22(uVar11,*(undefined2 *)&this->field_0x5ce),
                                 CONCAT22(extraout_var_01,this->field_005B),
                                 CONCAT22(extraout_var,this->field_005D),
                                 (int *)CONCAT22(uVar11,this->field_005F),0,&this->field_05D0,
                                 (short *)&this->field_0x5d2,&this->field_05D4);
      if (iVar6 == 0) {
        return 0;
      }
      thunk_FUN_00481520(this,(int)this->field_05D0,(int)*(short *)&this->field_0x5d2,
                         (int)this->field_05D4);
      thunk_FUN_0045ff50(this,0);
      return 2;
    }
    return 2;
  }
  if (iVar6 == 0) {
    iVar6 = thunk_FUN_00492550(this,this->field_005B,this->field_005D,this->field_005F,
                               &this->field_05D0,(undefined2 *)&this->field_0x5d2,&this->field_05D4)
    ;
    if (iVar6 == 0) {
      iVar6 = (*this->vtable->vfunc_D8)();
      return -(uint)(iVar6 != 0);
    }
    iVar6 = CONCAT22((short)((uint)iVar6 >> 0x10),this->field_05D4 * 200) + 100;
    iVar12 = CONCAT22(extraout_var_00,*(short *)&this->field_0x5d2 * 0xc9) + 100;
    iVar7 = CONCAT22((short)((uint)iVar6 >> 0x10),this->field_05D0 * 0xc9) + 100;
    uVar11 = (undefined2)((uint)iVar12 >> 0x10);
    sVar5 = (*this->vtable->vfunc_10)
                      (CONCAT22(uVar11,this->field_0041),
                       CONCAT22((short)((uint)iVar7 >> 0x10),this->field_0043),
                       CONCAT22(uVar11,this->field_0045),iVar7,iVar12,iVar6);
    this->field_05DA = sVar5;
    uVar8 = thunk_FUN_004176c0(this,sVar5);
    uVar8 = thunk_FUN_00417910(this,(short)uVar8);
    if (uVar8 != 0xffffffff) {
      if (uVar8 == 0) {
        this->field_05D6 = 1;
        FUN_006e62d0(DAT_00802a38,this->field_07CA,(int *)&local_c);
        uVar1 = *(undefined1 *)((int)local_c + 0x62);
        uVar2 = *(undefined1 *)((int)local_c + 0x61);
        local_5 = *(undefined1 *)((int)local_c + 99);
        piVar14 = (int *)&this->field_0x34;
        piVar15 = local_c + 0xd;
        for (iVar6 = 0x17; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar15 = *piVar14;
          piVar14 = piVar14 + 1;
          piVar15 = piVar15 + 1;
        }
        *(short *)piVar15 = (short)*piVar14;
        *(undefined1 *)((int)piVar15 + 2) = *(undefined1 *)((int)piVar14 + 2);
        *(undefined1 *)((int)local_c + 0x61) = uVar2;
        *(undefined1 *)((int)local_c + 0x62) = uVar1;
        *(undefined1 *)((int)local_c + 99) = local_5;
        thunk_FUN_0041c5a0((int *)this);
        thunk_FUN_00495ff0(this->field_005B,this->field_005D,this->field_005F,0,(int)this);
        (**(code **)(*local_c + 0xb8))();
        DumpClassC::WritePtr
                  (this->field_05D0,*(short *)&this->field_0x5d2,this->field_05D4,0,(int)this);
        thunk_FUN_0041c3f0(this,(undefined *)this->field_070A);
        this->field_07CA = 0;
        *(undefined4 *)&this->field_0x7c6 = 0;
      }
      iVar6 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
    }
    iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x309b,0,0,&DAT_007a4ccc,
                               s_STBoatC__UnLoadObj_RotateCheat_007ab080);
    if (iVar6 != 0) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    return -1;
  }
  if (iVar6 == 1) {
    thunk_FUN_00415b30(this,this->field_0041,this->field_0043,this->field_0045,
                       this->field_05D0 * 0xc9 + 100,*(short *)&this->field_0x5d2 * 0xc9 + 100,
                       this->field_05D4 * 200 + 100,this->field_0x61);
    this->field_05D6 = 2;
  }
  if (this->field_05D6 == 2) {
    local_20 = thunk_FUN_00415ed0(this,&local_18,&local_14);
    local_10 = 0;
    if (this->field_0x2bf != '\0') {
      param_1 = (undefined4 *)&this->field_0x2b3;
      do {
        puVar9 = (undefined4 *)
                 thunk_FUN_0041dc40(local_30,*param_1,*(undefined2 *)(param_1 + 1),this->field_006C)
        ;
        local_28 = *puVar9;
        local_24 = *(short *)(puVar9 + 1);
        if (DAT_0080732c == 1) {
          bVar23 = 0;
          sVar22 = 0;
          iVar12 = -1;
          uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
          sVar21 = 0;
          this->field_001C = uVar8;
          sVar20 = 0;
          sVar19 = 0;
          uVar10 = uVar8 * 0x41c64e6d + 0x3039;
          sVar18 = 0;
          this->field_001C = uVar10;
          local_1c = uVar10 * 0x41c64e6d + 0x3039;
          sVar17 = 0;
          this->field_001C = local_1c;
          sVar5 = 0;
          lVar16 = Library::MSVCRT::__ftol();
          iVar6 = (int)(short)lVar16 + (uVar8 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                  (int)local_24;
          iVar7 = ((uVar10 >> 0x10) % 7 + (int)this->field_0043) - (int)local_28._2_2_;
          uVar8 = local_1c;
        }
        else {
          uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
          bVar23 = 0;
          this->field_001C = uVar10;
          uVar13 = uVar10 * 0x41c64e6d + 0x3039;
          sVar22 = 0;
          this->field_001C = uVar13;
          uVar8 = uVar13 * 0x41c64e6d + 0x3039;
          this->field_001C = uVar8;
          iVar12 = -1;
          sVar21 = 0;
          sVar20 = 0;
          sVar19 = 0;
          sVar18 = 0;
          sVar17 = 0;
          sVar5 = 0;
          iVar6 = (uVar10 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_24;
          local_28._2_2_ = (short)((uint)local_28 >> 0x10);
          iVar7 = ((uVar13 >> 0x10) % 7 + (int)this->field_0043) - (int)local_28._2_2_;
        }
        TraksClassTy::TraksCreate
                  (DAT_00802a7c,1,2,7,
                   (uVar8 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_28,
                   iVar7 + -3,iVar6,sVar5,sVar17,sVar18,sVar19,sVar20,sVar21,iVar12,sVar22,bVar23);
        local_10 = local_10 + 1;
        param_1 = (undefined4 *)((int)param_1 + 6);
      } while (local_10 < (int)(uint)(byte)this->field_0x2bf);
    }
    if (local_20 == -1) {
      iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x30d2,0,0,&DAT_007a4ccc,
                                 s_STBoatC__UnLoadObj_LLMoveStep_007ab05c);
      if (iVar6 != 0) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      return -1;
    }
    if (local_20 == 0) {
      FUN_006ea2f0((void *)this->field_0211,this->field_01ED);
      iVar6 = (*this->vtable->vfunc_D8)();
      return -(uint)(iVar6 != 0);
    }
  }
  iVar6 = (*this->vtable->vfunc_D8)();
  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
}



/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::CreateGame */

uint __thiscall STBoatC::CreateGame(STBoatC *this,int *param_1,undefined4 param_2)

{
  code *pcVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  uint uVar6;
  STGroupBoatC *this_00;
  int iVar7;
  int iVar8;
  undefined2 extraout_var;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 in_EDX;
  int iVar9;
  undefined2 extraout_var_00;
  uint extraout_EDX;
  uint uVar10;
  undefined8 uVar11;
  short local_18;
  short local_16;
  short local_14 [2];
  undefined4 local_10;
  int local_c;
  void *local_8;
  
  uVar10 = 2;
  if (this->field_0528 == 0) {
    iVar7 = CONCAT22((short)((uint)this >> 0x10),this->field_0514 * 200) + 100;
    iVar9 = CONCAT22((short)((uint)in_EDX >> 0x10),this->field_0512 * 0xc9) + 100;
    iVar8 = CONCAT22((short)((uint)iVar7 >> 0x10),this->field_0510 * 0xc9) + 100;
    uVar5 = (undefined2)((uint)iVar9 >> 0x10);
    uVar5 = (*this->vtable->vfunc_10)
                      (CONCAT22(uVar5,this->field_0041),
                       CONCAT22((short)((uint)iVar8 >> 0x10),this->field_0043),
                       CONCAT22(uVar5,this->field_0045),iVar8,iVar9,iVar7);
    this->field_0522 = uVar5;
    this->field_0528 = 1;
  }
  if (this->field_0528 == 1) {
    uVar10 = sub_004176C0(this,this->field_0522);
    uVar10 = sub_00417910(this,(short)uVar10);
    if (uVar10 != 0xffffffff) {
      if (uVar10 == 0) {
        this->field_0528 = 2;
      }
      iVar7 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
    }
    iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x25a8,0,0,&DAT_007a4ccc,
                               s_STBoatC__CreateGame__CREATEGAME__007aa82c);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      uVar10 = (*pcVar1)();
      return uVar10;
    }
    iVar7 = 0x25a9;
LAB_0046d1e2:
    RaiseInternalException
              (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar7);
    return 0xffff;
  }
  if (this->field_0528 == 2) {
    STJellyGunC::sub_00415B30
              ((STJellyGunC *)this,this->field_0041,this->field_0043,this->field_0045,
               this->field_0510 * 0xc9 + 100,this->field_0512 * 0xc9 + 100,
               this->field_0514 * 200 + 100,this->field_0062);
    this->field_0528 = 3;
  }
  if (this->field_0528 == 3) {
    iVar7 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_10,&local_c);
    if (iVar7 == -1) {
      iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x25c7,0,0,&DAT_007a4ccc,
                                 s_STBoatC__CreateGame__CREATEGAME__007aa7fc);
      if (iVar7 != 0) {
        pcVar1 = (code *)swi(3);
        uVar10 = (*pcVar1)();
        return uVar10;
      }
      iVar7 = 0x25c8;
      goto LAB_0046d1e2;
    }
    if (iVar7 == 0) {
      uVar10 = 0;
      if ((this->field_0524 != 0) &&
         (iVar7 = FUN_006e62d0(DAT_00802a38,this->field_0524,(int *)&local_8), iVar7 != -4)) {
        thunk_FUN_004cf3e0(local_8,this->field_0018);
        FUN_006ea2f0((void *)this->field_0211,this->field_01ED);
      }
      iVar7 = thunk_FUN_0048fa80((int)this);
      if (iVar7 == 1) {
        if (((((short)this->field_051C < 0) || ((short)this->field_051E < 0)) ||
            (sVar2 = this->field_051C, sVar3 = this->field_051E, sVar4 = this->field_0520,
            (short)this->field_0520 < 0)) &&
           (iVar7 = CONCAT22(extraout_var,this->field_0512),
           iVar8 = CONCAT22(extraout_var_00,this->field_0510),
           iVar7 = thunk_FUN_0048dfd0(iVar8,iVar7,(uint)(ushort)this->field_0514,iVar8,iVar7,
                                      (int *)(uint)(ushort)this->field_0514,2,&local_18,&local_16,
                                      local_14), sVar2 = local_18, sVar3 = local_16,
           sVar4 = local_14[0], iVar7 == 0)) {
          sVar2 = this->field_0510;
          sVar3 = this->field_0512;
          sVar4 = this->field_0514;
        }
        local_14[0] = sVar4;
        local_16 = sVar3;
        local_18 = sVar2;
        sub_00481520(this,(int)local_18,(int)local_16,(int)local_14[0]);
        iVar7 = sub_0045FF50(this,0);
        if (iVar7 == -1) {
          return 0xffffffff;
        }
        this->field_0528 = 4;
        iVar7 = (*this->vtable->vfunc_D8)();
        return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
      }
    }
  }
  if (this->field_0528 == 4) {
    uVar10 = sub_0045FF50(this,2);
    if (uVar10 == 0xffffffff) {
      return 0xffffffff;
    }
    if (uVar10 == 3) {
      iVar7 = extraout_ECX;
      uVar10 = extraout_EDX;
      if (*(int *)&this->field_0xb3 == 0) {
        iVar7 = (int)this->field_005B;
        uVar6 = this->field_00BB - iVar7;
        uVar10 = (int)uVar6 >> 0x1f;
        if (((int)((uVar6 ^ uVar10) - uVar10) < 2) &&
           (uVar6 = this->field_00BF - (int)this->field_005D, uVar10 = (int)uVar6 >> 0x1f,
           (int)((uVar6 ^ uVar10) - uVar10) < 2)) {
          iVar7 = (int)this->field_005F;
          uVar6 = this->field_00C3 - iVar7;
          uVar10 = (int)uVar6 >> 0x1f;
          iVar8 = (uVar6 ^ uVar10) - uVar10;
          if (iVar8 < 2) {
            uVar5 = (undefined2)((uint)iVar8 >> 0x10);
            uVar11 = (*this->vtable->vfunc_18)
                               (CONCAT22(uVar5,*(undefined2 *)&this->field_00BB),
                                CONCAT22(this->field_005F >> 0xf,*(undefined2 *)&this->field_00BF),
                                CONCAT22(uVar5,*(undefined2 *)&this->field_00C3));
            uVar10 = (uint)((ulonglong)uVar11 >> 0x20);
            iVar7 = extraout_ECX_00;
            if ((int)uVar11 == 0) {
              uVar10 = 0;
              goto LAB_0046d2d1;
            }
          }
        }
      }
      this_00 = thunk_FUN_0042b760(CONCAT31((int3)(uVar10 >> 8),this->field_0x24),
                                   CONCAT22((short)((uint)iVar7 >> 0x10),this->field_0030));
      iVar7 = thunk_FUN_0040ae40(this_00,(uint)(ushort)this->field_0032,'\0');
      uVar10 = -(uint)(iVar7 != -4) & 2;
    }
  }
LAB_0046d2d1:
  iVar7 = (*this->vtable->vfunc_D8)();
  if (iVar7 != 0) {
    return 0xffffffff;
  }
  return uVar10;
}


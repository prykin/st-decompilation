
int __thiscall FUN_004e1930(void *this,int *param_1,int param_2)

{
  int iVar1;
  STResourceC *this_00;
  STGroupBoatC *pSVar2;
  uint uVar3;
  int iVar4;
  undefined1 local_24 [16];
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined4 local_c;

  if (*(int *)((int)this + 0x4d4) == 0) {
    param_2 = 0;
    *param_1 = 0;
  }
  else {
    *param_1 = *(int *)((int)this + 0x4dc);
    iVar1 = *(int *)((int)this + 0x4e0);
    if (iVar1 < param_2) {
      param_2 = iVar1;
    }
    *(int *)((int)this + 0x4e0) = iVar1 - param_2;
    this_00 = thunk_FUN_004d85e0(*(int *)((int)this + 0x5b0),*(int *)((int)this + 0x5b4),
                                 *(int *)((int)this + 0x5b8));
    if (this_00 != (STResourceC *)0x0) {
      STResourceC::SetResource(this_00,*(int *)((int)this + 0x4e0),1);
    }
    if ((*(int *)((int)this + 0x4e0) == 0) && (param_2 != 0)) {
      *(undefined4 *)((int)this + 0x4d4) = 0;
      pSVar2 = thunk_FUN_0042b760(*(char *)((int)this + 0x24),(uint)*(ushort *)((int)this + 0x30));
      if ((pSVar2 != (STGroupBoatC *)0x0) && ((undefined4 *)pSVar2->field_001C != (undefined4 *)0x0)
         ) {
        local_c = *(undefined4 *)((int)this + 0x18);
        local_e = *(undefined2 *)((int)this + 0x32);
        local_14 = 0x5d99;
        local_10 = 1;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)**(undefined4 **)pSVar2->field_001C)(local_24);
      }
      if (*(uint *)((int)this + 0x24) == (uint)*(byte *)(*(int *)((int)this + 0x10) + 0x112d)) {
        iVar1 = *(int *)((int)this + 0x5ac);
        if ((iVar1 == 0x39) || (iVar1 == 0x5e)) {
          uVar3 = GetPlayerRaceId(*(char *)((int)this + 0x23d));
          uVar3 = uVar3 & 0xff;
          if (uVar3 == 1) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*(int *)this + 0x90))(4,0x21e);
            return param_2;
          }
          if (uVar3 == 2) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*(int *)this + 0x90))(4,0x2e4);
            return param_2;
          }
          if (uVar3 == 3) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*(int *)this + 0x90))(4,0x3a5);
            return param_2;
          }
        }
        else if (iVar1 == 0x4f) {
          uVar3 = GetPlayerRaceId(*(char *)((int)this + 0x23d));
          if ((uVar3 & 0xff) == 1) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*(int *)this + 0x90))(4,0x27c);
            return param_2;
          }
          if ((uVar3 & 0xff) == 2) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*(int *)this + 0x90))(4,0x34b);
            return param_2;
          }
        }
      }
    }
    else {
      switch(*(undefined4 *)((int)this + 0x5ac)) {
      case 0x39:
        iVar1 = *(int *)this;
        iVar4 = GetPlayerRaceId(*(char *)((int)this + 0x23d));
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(iVar1 + 0x90))(3,(-(uint)((char)iVar4 != '\x02') & 0xffffff3a) + 0x2ea);
        return param_2;
      case 0x3b:
        iVar1 = *(int *)this;
        iVar4 = GetPlayerRaceId(*(char *)((int)this + 0x23d));
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(iVar1 + 0x90))(3,(-(uint)((char)iVar4 != '\x02') & 0xffffff3a) + 0x2f7);
        return param_2;
      case 0x4f:
        iVar1 = *(int *)this;
        iVar4 = GetPlayerRaceId(*(char *)((int)this + 0x23d));
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(iVar1 + 0x90))(3,(-(uint)((char)iVar4 != '\x02') & 0xffffff32) + 0x350);
        return param_2;
      case 0x52:
        iVar1 = *(int *)this;
        iVar4 = GetPlayerRaceId(*(char *)((int)this + 0x23d));
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(iVar1 + 0x90))(3,(-(uint)((char)iVar4 != '\x02') & 0xffffff3b) + 0x35d);
        return param_2;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      case 0x5e:
        (**(code **)(*(int *)this + 0x90))(3,0x3ab);
        return param_2;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      case 0x60:
        (**(code **)(*(int *)this + 0x90))(3,0x3ba);
        return param_2;
      }
    }
  }
  return param_2;
}


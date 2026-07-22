
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00498D20_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106

   [ST_RECOVERY:group_boat_set_order_data_v1]
   Source: E:\__titans\wlad\to_grpb.cpp
   Copies discriminator-specific group-order payloads into STGroupBoatC state, deep-copying
   DArray-backed variants and marking the corresponding order data dirty. Name is descriptive;
   original spelling is not confirmed. */

void __thiscall
STGroupBoatC::SetOrderData(STGroupBoatC *this,STGroupBoatOrderType orderType,void *data)

{
  DArrayTy *pDVar1;
  undefined4 *puVar2;
  DArrayTy *pDVar3;
  int iVar4;
  DArrayTy **ppDVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_10;
  undefined2 local_c;
  undefined4 local_8;

  switch(orderType) {
  case GROUP_BOAT_ORDER_01:
    this->field_0065 = 1;
    this->field_0089 = 1;
    puVar2 = (undefined4 *)&this->field_0xdd;
    goto LAB_00499129;
  case GROUP_BOAT_ORDER_02:
    this->field_0065 = 1;
    this->field_008D = 1;
    puVar2 = &this->field_00E7;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *(undefined4 *)data;
      data = (undefined4 *)((int)data + 4);
      puVar2 = puVar2 + 1;
    }
    if (this->field_00E7 == 0) {
      data = this->field_00EF;
      uVar6 = ((DArrayTy *)data)->count;
      pDVar3 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,uVar6,4,1);
      uVar7 = 0;
      this->field_00EF = pDVar3;
      if (0 < (int)uVar6) {
        do {
          DArrayGetElement(data,uVar7,&local_8);
          Library::DKW::TBL::FUN_006ae140(&this->field_00EF->flags,uVar7,&local_8);
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)uVar6);
        return;
      }
    }
    break;
  case GROUP_BOAT_ORDER_03:
    this->field_0065 = 1;
    this->field_0091 = 1;
    return;
  case GROUP_BOAT_ORDER_04:
    this->field_0065 = 1;
    this->field_0095 = 1;
    this->field_015C = *(undefined4 *)data;
    this->field_0160 = *(DArrayTy **)((int)data + 4);
    if (this->field_015C == 0) {
      data = this->field_0160;
      uVar6 = ((DArrayTy *)data)->count;
      pDVar3 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,uVar6,2,1);
      uVar7 = 0;
      this->field_0160 = pDVar3;
      if (0 < (int)uVar6) {
        do {
          DArrayGetElement(data,uVar7,(byte *)((int)&orderType + 2));
          Library::DKW::TBL::FUN_006ae140
                    (&this->field_0160->flags,uVar7,(undefined4 *)((int)&orderType + 2));
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)uVar6);
        return;
      }
    }
    break;
  case GROUP_BOAT_ORDER_05:
    this->field_0065 = 1;
    this->field_0099 = 1;
    puVar2 = &this->field_0164;
    for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *(undefined4 *)data;
      data = (undefined4 *)((int)data + 4);
      puVar2 = puVar2 + 1;
    }
    if (this->field_0164 == 0) {
      data = this->field_0168;
      uVar6 = ((DArrayTy *)data)->count;
      pDVar3 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,uVar6,2,1);
      uVar7 = 0;
      this->field_0168 = pDVar3;
      if (0 < (int)uVar6) {
        do {
          DArrayGetElement(data,uVar7,(byte *)((int)&orderType + 2));
          Library::DKW::TBL::FUN_006ae140
                    (&this->field_0168->flags,uVar7,(undefined4 *)((int)&orderType + 2));
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)uVar6);
        return;
      }
    }
    break;
  case GROUP_BOAT_ORDER_06:
    this->field_0065 = 1;
    this->field_009D = 1;
    ppDVar5 = &this->field_0103;
    *ppDVar5 = *(DArrayTy **)data;
    this->field_0107 = *(undefined4 *)((int)data + 4);
    pDVar3 = *ppDVar5;
    data = (void *)pDVar3->count;
    pDVar1 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,6,1);
    *ppDVar5 = pDVar1;
    uVar6 = 0;
    if (0 < (int)data) {
      do {
        if (uVar6 < pDVar3->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar3, uVar6) (runtime stride) */
          puVar2 = (undefined4 *)(pDVar3->elementSize * uVar6 + (int)pDVar3->data);
        }
        else {
          puVar2 = (undefined4 *)0x0;
        }
        local_10 = *puVar2;
        local_c = *(undefined2 *)(puVar2 + 1);
        Library::DKW::TBL::FUN_006ae140(&(*ppDVar5)->flags,uVar6,&local_10);
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)data);
      return;
    }
    break;
  case GROUP_BOAT_ORDER_07:
    this->field_0065 = 1;
    this->field_00A1 = 1;
    this->field_00FF = *(undefined4 *)data;
    return;
  case GROUP_BOAT_ORDER_08:
    this->field_0065 = 1;
    this->field_00A5 = 1;
    puVar2 = &this->field_010B;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *(undefined4 *)data;
      data = (undefined4 *)((int)data + 4);
      puVar2 = puVar2 + 1;
    }
    if (this->field_010B == 0) {
      data = this->field_010F;
      uVar6 = ((DArrayTy *)data)->count;
      pDVar3 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,uVar6,2,1);
      uVar7 = 0;
      this->field_010F = pDVar3;
      if (0 < (int)uVar6) {
        do {
          DArrayGetElement(data,uVar7,(byte *)((int)&orderType + 2));
          Library::DKW::TBL::FUN_006ae140
                    (&this->field_010F->flags,uVar7,(undefined4 *)((int)&orderType + 2));
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)uVar6);
      }
    }
    if (this->field_0123 == 0) {
      data = this->field_0127;
      uVar6 = ((DArrayTy *)data)->count;
      pDVar3 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,uVar6,2,1);
      uVar7 = 0;
      this->field_0127 = pDVar3;
      if (0 < (int)uVar6) {
        do {
          DArrayGetElement(data,uVar7,(byte *)((int)&orderType + 2));
          Library::DKW::TBL::FUN_006ae140
                    (&this->field_0127->flags,uVar7,(undefined4 *)((int)&orderType + 2));
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)uVar6);
        return;
      }
    }
    break;
  case GROUP_BOAT_ORDER_09:
    this->field_0065 = 1;
    this->field_00A9 = 1;
    puVar2 = (undefined4 *)&this->field_0137;
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *(undefined4 *)data;
      data = (undefined4 *)((int)data + 4);
      puVar2 = puVar2 + 1;
    }
    *(undefined2 *)puVar2 = *(undefined2 *)data;
    *(undefined1 *)((int)puVar2 + 2) = *(undefined1 *)((int)data + 2);
    return;
  case GROUP_BOAT_ORDER_0A:
    this->field_0065 = 1;
    this->field_00AD = 1;
    *(undefined4 *)&this->field_0x156 = *(undefined4 *)data;
    this->field_015A = *(undefined2 *)((int)data + 4);
    return;
  case GROUP_BOAT_ORDER_0B:
    this->field_0065 = 1;
    this->field_00B1 = 1;
    this->field_0178 = *(undefined4 *)data;
    return;
  case GROUP_BOAT_ORDER_0C:
    this->field_0065 = 1;
    this->field_00B5 = 1;
    *(undefined4 *)&this->field_0x17c = *(undefined4 *)data;
    this->field_0180 = *(undefined2 *)((int)data + 4);
    return;
  case GROUP_BOAT_ORDER_0D:
    this->field_0065 = 1;
    this->field_00B9 = 1;
    puVar2 = &this->field_0182;
LAB_00499129:
    *puVar2 = *(undefined4 *)data;
    puVar2[1] = *(undefined4 *)((int)data + 4);
    *(undefined2 *)(puVar2 + 2) = *(undefined2 *)((int)data + 8);
    return;
  case GROUP_BOAT_ORDER_0E:
    this->field_0065 = 1;
    this->field_00BD = 1;
    this->field_018C = *(undefined4 *)data;
    this->field_0190 = *(undefined2 *)((int)data + 4);
    return;
  case GROUP_BOAT_ORDER_0F:
    this->field_0065 = 1;
    this->field_00C1 = 1;
    *(undefined4 *)&this->field_0x192 = *(undefined4 *)data;
    this->field_0196 = *(undefined2 *)((int)data + 4);
    this->field_0198 = *(undefined1 *)((int)data + 6);
    return;
  case GROUP_BOAT_ORDER_10:
    this->field_0065 = 1;
    this->field_00C5 = 1;
    this->field_01A3 = *(undefined4 *)data;
    this->field_01A7 = *(undefined4 *)((int)data + 4);
    this->field_01AB = *(undefined4 *)((int)data + 8);
    this->field_01AF = *(undefined4 *)((int)data + 0xc);
    return;
  case GROUP_BOAT_ORDER_11:
    this->field_0065 = 1;
    this->field_00C9 = 1;
    this->field_0199 = *(undefined4 *)data;
    this->field_019D = *(undefined4 *)((int)data + 4);
    this->field_01A1 = *(undefined2 *)((int)data + 8);
    return;
  case GROUP_BOAT_ORDER_12:
    this->field_0065 = 1;
    this->field_00CD = 1;
    this->field_01B3 = *(undefined4 *)data;
    this->field_01B7 = *(undefined2 *)((int)data + 4);
    return;
  case GROUP_BOAT_ORDER_13:
    this->field_0065 = 1;
    this->field_00D1 = 1;
    *(undefined4 *)&this->field_0x1b9 = *(undefined4 *)data;
    this->field_01BD = *(undefined2 *)((int)data + 4);
    return;
  case GROUP_BOAT_ORDER_14:
    this->field_0065 = 1;
    this->field_00D5 = 1;
    *(undefined4 *)&this->field_0x1bf = *(undefined4 *)data;
    this->field_01C3 = *(undefined2 *)((int)data + 4);
    return;
  case GROUP_BOAT_ORDER_15:
    this->field_0065 = 1;
    this->field_00D9 = 1;
    this->field_01C5 = *(undefined4 *)data;
    return;
  case GROUP_BOAT_ORDER_65:
    this->field_0061 = 1;
    this->field_006D = 1;
    this->field_01C9 = *(undefined1 *)data;
    return;
  case GROUP_BOAT_ORDER_66:
    this->field_0061 = 1;
    this->field_0071 = 1;
    if (this->field_01CA == (DArrayTy *)0x0) {
      pDVar3 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
      this->field_01CA = pDVar3;
    }
    Library::DKW::TBL::FUN_006ae1c0(&this->field_01CA->flags,data);
    return;
  case GROUP_BOAT_ORDER_67:
    this->field_0061 = 1;
    this->field_0075 = 1;
    if (this->field_01CE == (DArrayTy *)0x0) {
      pDVar3 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,4,1);
      this->field_01CE = pDVar3;
    }
    Library::DKW::TBL::FUN_006ae1c0(&this->field_01CE->flags,data);
    return;
  case GROUP_BOAT_ORDER_68:
    this->field_0061 = 1;
    this->field_0079 = 1;
    if (*(int *)&this->field_0x1d2 == 0) {
      pDVar3 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
      *(DArrayTy **)&this->field_0x1d2 = pDVar3;
    }
    Library::DKW::TBL::FUN_006ae1c0(*(uint **)&this->field_0x1d2,data);
    return;
  case GROUP_BOAT_ORDER_69:
    this->field_0061 = 1;
    this->field_007D = 1;
    if (this->field_01D6 == (DArrayTy *)0x0) {
      pDVar3 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
      this->field_01D6 = pDVar3;
    }
    Library::DKW::TBL::FUN_006ae1c0(&this->field_01D6->flags,data);
    return;
  case GROUP_BOAT_ORDER_6A:
    this->field_0061 = 1;
    this->field_0081 = 1;
    if (this->field_01DA == (DArrayTy *)0x0) {
      pDVar3 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
      this->field_01DA = pDVar3;
    }
    Library::DKW::TBL::FUN_006ae1c0(&this->field_01DA->flags,data);
  }
  return;
}

